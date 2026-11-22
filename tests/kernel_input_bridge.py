#!/usr/bin/env python3
"""Compare x64 firmware keyboard and wait request transport with native code.

Pooka's Free Software License. Firmware calls and legacy input are intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE,UC_HOOK_INSN
from unicorn.x86_const import *

def exercise(path,addresses,native):
 results=[]
 cases=[('_wm_platform_poll_key_ax',0,v,False,False)for v in [0x1e61,0x0332,0x1c0d,0x0e08,0x4800]]+[('_wm_platform_wait_microseconds',v,r,False,False)for v in [0,1,100,55000]for r in [0,1]]
 cases += [('_wm_platform_poll_key_ax',0,v,True,public)for v in [0x1e61,0x0332,0x1c0d,0x0e08,0x4800]for public in [False,True]]
 for symbol,value,reply,owned,public in cases:
  l=Kernel(path.read_bytes(),addresses,native);c=l.cpu;context=0x3000000;bridge=0x3010000;request=0x3020000;events=[];data=bytearray(0x2150 if owned else 0x2138);struct.pack_into('<III',data,0,0x33454657,5,len(data));struct.pack_into('<II',data,0x114,bridge,request);
  if owned:struct.pack_into('<IIQII',data,0x2138,0x34424650,1,bridge,1,0)
  c.mem_write(context,bytes(data));c.mem_write(0x2109008,struct.pack('<Q',context))
  def finish(value):
   sp=c.reg_read(UC_X86_REG_RSP);c.reg_write(l.result,value);c.reg_write(l.pc,int.from_bytes(c.mem_read(sp,8),'little'));c.reg_write(UC_X86_REG_RSP,sp+8)
  def firmware(c,a,z,u):
   pointer=c.reg_read(UC_X86_REG_RDI);assert pointer==request,(native,symbol,'request pointer',hex(pointer));words=struct.unpack('<8I',bytes(c.mem_read(pointer,32)));assert words[0]==(1 if symbol.endswith('_ax')else 4),words
   if words[0]==4:assert words[7]==value,words
   events.append((words[0],words[7]));finish(reply)
  c.hook_add(UC_HOOK_INSN,lambda c,p,z,u:0,None,1,0,UC_X86_INS_IN);c.mem_write(bridge,b'\xc3');c.hook_add(UC_HOOK_CODE,firmware,begin=bridge,end=bridge)
  if '_platform_x86_tsc_ticks_per_microsecond'in addresses:
   a=addresses['_platform_x86_tsc_ticks_per_microsecond'];c.hook_add(UC_HOOK_CODE,lambda c,a,z,u:finish(0),begin=a,end=a)
  if public and not native:
   c.mem_write(0x227aa00,struct.pack('<I',1));c.mem_write(0x227aa10,struct.pack('<I',0x3030000));c.mem_write(0x3030000,b'\xc3')
   def raw_provider(c,a,z,u):raise AssertionError('Firmware-owned keyboard reached a raw provider')
   c.hook_add(UC_HOOK_CODE,raw_provider,begin=0x3030000,end=0x3030000)
   for name in ['_scheduler_preempt_checkpoint','_wm_platform_smp_current_cpu_index']:
    address=addresses[name];c.hook_add(UC_HOOK_CODE,lambda c,a,z,u:finish(0),begin=address,end=address)
  args=[]if symbol.endswith('_ax')else[value];target='_wm_kernel_program_poll_key_ax'if public and not native else symbol;status=l.call(target,*args,result_bits=32 if symbol.endswith('_ax')else 8);results.append((status,events))
 return results

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',required=True,type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference,native,True);s=exercise(a.source,source,False);assert e==s,(e,s);print('Input bridge:',len(e),'native keyboard values and wait request, duration and failure comparisons passed.')
