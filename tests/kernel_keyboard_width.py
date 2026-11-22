#!/usr/bin/env python3
"""Compare complete native keyboard results, including modifiers and transitions.

Pooka's Free Software License. The backend and scheduler are intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE,UC_HOOK_INSN
from unicorn.x86_const import *
from unicorn.arm_const import UC_ARM_REG_LR
from unicorn.arm64_const import UC_ARM64_REG_LR

def exercise(path,addresses,native):
 results=[]
 for reply in [0,0x1e61,0x41f13,0x10332,0x24800,0x80010000,0x80040000,0x72e03]:
  lib=Kernel(path.read_bytes(),addresses,native);c=lib.cpu
  def finish(value):
   c.reg_write(lib.result,value)
   if lib.cpu_type in [7,0x1000007]:
    reg=UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP;w=8 if lib.wide else 4;sp=c.reg_read(reg);target=int.from_bytes(c.mem_read(sp,w),'little');c.reg_write(reg,sp+w)
   else:target=c.reg_read(UC_ARM64_REG_LR if lib.wide else UC_ARM_REG_LR)
   c.reg_write(lib.pc,target)
  for name in ['_scheduler_preempt_checkpoint','_wm_platform_smp_current_cpu_index']:
   a=addresses[name];c.hook_add(UC_HOOK_CODE,lambda c,a,z,u:finish(0),begin=a,end=a)
  if '_kernel_app_window_current_task_accepts_global_input'in addresses:
   a=addresses['_kernel_app_window_current_task_accepts_global_input'];c.hook_add(UC_HOOK_CODE,lambda c,a,z,u:finish(1),begin=a,end=a)
  name='_kernel_driver_poll_key_ax'if '_kernel_driver_poll_key_ax'in addresses else'_wm_platform_poll_key_ax';a=addresses[name];c.hook_add(UC_HOOK_CODE,lambda c,a,z,u:finish(reply),begin=a,end=a)
  results.append(lib.call('_wm_kernel_program_poll_key_ax',result_bits=32))
 return results

def firmware_values(path,addresses):
 lib=Kernel(path.read_bytes(),addresses);c=lib.cpu
 context,request,bridge=0x18000,0x1a000,0x1b000
 slot={7:0x20e0004,0x1000007:0x2109008,12:0x40500004,0x100000c:0x825420b8}[lib.cpu_type]
 c.mem_write(slot,context.to_bytes(8 if lib.wide else 4,'little'))
 c.mem_write(context,struct.pack('<3I',0x33454657,5,0x2150));c.mem_write(context+0x114,struct.pack('<2I',bridge,request))
 if lib.cpu_type in [7,0x1000007]:
  c.hook_add(UC_HOOK_INSN,lambda c,p,z,u:0xff,None,1,0,UC_X86_INS_IN)
 result=[];reply=0
 def callback(c,a,z,u):
  command=int.from_bytes(c.mem_read(request,4),'little');value=reply if command==1 else 1
  c.reg_write(lib.result,value)
  if lib.cpu_type in [7,0x1000007]:
   reg=UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP;w=8 if lib.wide else 4;sp=c.reg_read(reg);target=int.from_bytes(c.mem_read(sp,w),'little');c.reg_write(reg,sp+w)
  else:target=c.reg_read(UC_ARM64_REG_LR if lib.wide else UC_ARM_REG_LR)
  c.reg_write(lib.pc,target)
 c.hook_add(UC_HOOK_CODE,callback,begin=bridge,end=bridge)
 for reply in [0x1e61,0x41f73,0x10332,0x24800,0x80010000,0x80040000]:
  value=lib.call('_wm_platform_poll_key_ax',result_bits=32);assert value==reply,(hex(value),hex(reply));result.append(value)
 return result

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',required=True,type=Path);p.add_argument('--map',required=True,type=Path);p.add_argument('--firmware-values',action='store_true');a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};abi=json.loads(a.abi.read_text());mapping=json.loads(a.map.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference,native,True);s=exercise(a.source,source,False);assert e==s,([hex(v)for v in e],[hex(v)for v in s]);assert e==[0,0x1e61,0x41f13,0x10332,0x24800,0x80010000,0x80040000,0x72e03],e;print('Keyboard results:',len(e),'native ASCII, scan, shift/control/command and modifier-only transition cases passed.')

 if a.firmware_values:print('Firmware keyboard:',len(firmware_values(a.source,source)),'complete scan/modifier values passed.')
