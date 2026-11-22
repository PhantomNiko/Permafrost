#!/usr/bin/env python3
"""Compare Tayga ls option parsing with bytes after the string terminator.

Pooka's Free Software License. Filesystem binding is intercepted.
"""
import argparse,json
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.arm64_const import *
from unicorn.x86_const import *

def run(binary,addresses,native):
 lib=Kernel(binary,addresses,native)
 def stop(c,a,z,u):
  c.reg_write(lib.result,0)
  if lib.cpu_type in [12,0x100000c]:c.reg_write(lib.pc,c.reg_read(UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_X30))
  else:
   reg=UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP;word=8 if lib.wide else 4;sp=c.reg_read(reg);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,word),'little'));c.reg_write(reg,sp+word)
 for name in ['_scheduler_preempt_checkpoint','_tayga_bind_user_device']:
  address=addresses[name];lib.cpu.hook_add(UC_HOOK_CODE,stop,begin=address,end=address)
 results=[]
 for value in [b'',b'/root',b'-l /root',b'-a',b'-la /root',b'"two words"',b'/root\t',b'-z',b'\t/root\r\n',b'/root\x01']:
  for suffix in [b'',b'\0\0--bad\0',b'next --bad\0']:
   lib.cpu.mem_write(0x3000000,value+b'\0'+suffix+bytes(128));lib.cpu.mem_write(0x3001000,bytes(4096))
   try:result=lib.call('_tayga_execute_ls',0x3000000,0x3001000,4096,result_bits=32)
   except Exception as exc:raise AssertionError((native,value,suffix,hex(lib.cpu.reg_read(lib.pc))))from exc
   text=bytes(lib.cpu.mem_read(0x3001000,4096)).split(b'\0')[0];results.append((result,text))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};expected=run(a.reference.read_bytes(),native,True);actual=run(a.source.read_bytes(),source,False);assert expected==actual,[(i,e,s)for i,(e,s)in enumerate(zip(expected,actual))if e!=s];print('Tayga ls: 30 native path, quote, option, control-byte, and terminator-boundary comparisons passed.')
