#!/usr/bin/env python3
"""Compare x64 script-variable capture and provider results with the native kernel.

Pooka's Free Software License. Services and task records are synthetic.
"""
from pathlib import Path
import sys,json,struct
sys.path[:0]=[str(Path(__file__).resolve().parent),str(Path(__file__).resolve().parents[1]/'tools')];from kernel_scalars import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
import argparse
parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path);parser.add_argument('--map',type=Path,required=True);args=parser.parse_args();native=args.reference;source=args.source;mapping=json.loads(args.map.read_text())

def exercise(path,isnative):
 address=lambda a:a if isnative else mapping['recovered_%x'%a]
 lib=Kernel(path.read_bytes(),{'get':address(0x20945e0),'_ws_errorf':0x4fe0000},isnative);cpu=lib.cpu;events=[]
 def leave(value):
  sp=cpu.reg_read(UC_X86_REG_RSP);target=int.from_bytes(cpu.mem_read(sp,8),'little');cpu.reg_write(UC_X86_REG_RSP,sp+8);cpu.reg_write(UC_X86_REG_RAX,value);cpu.reg_write(UC_X86_REG_RIP,target)
 def index(cpu,a,n,u):leave(state['cpu'])
 def provider(cpu,a,n,u):
  name=cpu.reg_read(UC_X86_REG_RDI);out=cpu.reg_read(UC_X86_REG_RSI);events.append((name,out));
  if out:cpu.mem_write(out,struct.pack('<II f 4x QQ I4x',4,23,1.25,0x3005000,0,0))
  leave(1)
 cpu.hook_add(UC_HOOK_CODE,index,begin=address(0x200ab60),end=address(0x200ab60));cpu.hook_add(UC_HOOK_CODE,provider,begin=0x18000,end=0x18000)
 cpu.mem_write(0x3008000+0x58,struct.pack('<Q',0x18000));cpu.mem_write(0x3009000+0x110,struct.pack('<Q',0x300a000));results=[]
 for capture in [0,1]:
  for sameowner in [False,True]:
   for cpuid in [0,3,31,32]:
    state={'cpu':cpuid};cpu.mem_write(0x2612bf8,bytes([capture]));cpu.mem_write(0x2612b60,struct.pack('<Q',0x300a000 if sameowner else 0x300b000));
    for i in range(32):cpu.mem_write(0x25feb10+i*0xb8,struct.pack('<Q',0x3009000))
    cpu.mem_write(0x2612e30,bytes(4));cpu.mem_write(0x2612b70,b'captured prompt\0');cpu.mem_write(0x2612e40,b'captured text\0')
    for name in [b'picofrost.input',b'picofrost.inputText',b'picofrost.inputPrompt',b'desktop.title',b'']:
     for installed in [False,True]:
      cpu.mem_write(0x25ebb40,struct.pack('<Q',0x3008000 if installed else 0));cpu.mem_write(0x3000000,name+b'\0');cpu.mem_write(0x3001000,b'\xa5'*64);events.clear()
      result=lib.call('get',0x3000000,0x3001000,result_bits=32);results.append((result,bytes(cpu.mem_read(0x3001000,64)),list(events),bytes(cpu.mem_read(0x2612e30,4))))
 return results
n=exercise(native,True);s=exercise(source,False)
for i,(x,y)in enumerate(zip(n,s)):assert x==y,(i,x,y)
print('Kernel script-variable bridge:',len(n),'native/source capture ownership, CPU, provider, result and guard cases match.')
