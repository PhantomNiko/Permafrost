#!/usr/bin/env python3
"""Compare WinterScript callback registration with native provider forwarding.

Pooka's Free Software License. No callback function or hardware is executed.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm_const import *
from unicorn.arm64_const import *

CONFIG={
 'i386':(0x2083570,0x2464ae8,0x2c),
 'x86_64':(0x20945c0,0x25ebb40,0x50),
 'armv7':(0x4048a730,0x4065cc70,0x2c),
 'arm64':(0x8244a000,0x827382b8,0x50),
}

def exercise(path,mapping,arch):
 address,global_pointer,slot=CONFIG[arch];wide=arch in ('x86_64','arm64');word=8 if wide else 4
 target=address if mapping is None else mapping.get('recovered_%x'%address,mapping.get('_recovered_%x'%address))
 lib=Kernel(path.read_bytes(),{'register':target,'_ws_errorf':0x4fe0000},mapping is None);cpu=lib.cpu;events=[];state={'status':0}
 # This public IA32 entry uses cdecl, unlike the private lexer helpers.
 if arch=='i386':lib.native=False
 def provider(cpu,pc,size,user):
  if arch=='i386':
   sp=cpu.reg_read(UC_X86_REG_ESP);args=struct.unpack('<2I',cpu.mem_read(sp+4,8))
  else:
   regs=(UC_X86_REG_RDI,UC_X86_REG_RSI)if arch=='x86_64'else(UC_ARM_REG_R0,UC_ARM_REG_R1)if arch=='armv7'else(UC_ARM64_REG_X0,UC_ARM64_REG_X1)
   args=tuple(cpu.reg_read(reg)for reg in regs)
  events.append(args);cpu.reg_write(lib.result,state['status'])
  if arch in ('i386','x86_64'):
   reg=UC_X86_REG_RSP if wide else UC_X86_REG_ESP;sp=cpu.reg_read(reg);dest=int.from_bytes(cpu.mem_read(sp,word),'little');cpu.reg_write(reg,sp+word)
  else:dest=cpu.reg_read(UC_ARM_REG_LR if arch=='armv7'else UC_ARM64_REG_X30)
  cpu.reg_write(lib.pc,dest)
 cpu.hook_add(UC_HOOK_CODE,provider,begin=0x18000,end=0x18000)
 cpu.mem_write(0x3008000+slot,(0x18000).to_bytes(word,'little'));cpu.mem_write(0x3000000,b'desktop.windowTitle\0');results=[]
 for installed in [False,True]:
  cpu.mem_write(global_pointer,(0x3008000 if installed else 0).to_bytes(word,'little'))
  for name in [0,0x3000000]:
   for callback in [0,0x12345678,0x3002000]:
    for status in [0,1,255]:
     events.clear();state['status']=status;result=lib.call('register',name,callback,result_bits=8);results.append((result,list(events)))
 return results

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--arch',choices=CONFIG,required=True);p.add_argument('--map',type=Path,required=True);args=p.parse_args()
 n=exercise(args.reference,None,args.arch);s=exercise(args.source,json.loads(args.map.read_text()),args.arch)
 assert n==s,[(i,x,y)for i,(x,y)in enumerate(zip(n,s))if x!=y][:4]
 print(args.arch,'WinterScript registration:',len(n),'native provider argument and return records match.')
