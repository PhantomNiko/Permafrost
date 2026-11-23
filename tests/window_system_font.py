#!/usr/bin/env python3
"""Compare system-font variable conversion, path bounds and floating arguments.

Pooka's Free Software License. WinterScript and font services are fixtures.
"""
import argparse,struct
from pathlib import Path
from dll import DLL
from ttf_library import floating
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_XMM0
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_R1
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_S0
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--api-base',type=lambda x:int(x,0));a=p.parse_args()
def exercise(path):
 lib=DLL(path,api_base=a.api_base,poison_stack=True);c=lib.cpu;kind=[0];number=[0];text=[None];found=[1];events=[];lookup=0x10500;load=0x10520
 def args():
  if lib.cpu_type==7:return struct.unpack('<II',c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,8))
  regs=(UC_ARM_REG_R0,UC_ARM_REG_R1)if lib.cpu_type==12 else(UC_ARM64_REG_X0,UC_ARM64_REG_X1)if lib.cpu_type==0x100000c else(UC_X86_REG_RDI,UC_X86_REG_RSI)
  return [c.reg_read(r)for r in regs]
 def variable(cpu,pc,size,user):
  key,out=args();assert bytes(c.mem_read(key,64)).split(b'\0')[0]==b'TundraFont';assert 0x3000000<out<0x5000000
  value=bytearray(40 if lib.wide else 24);struct.pack_into('<II',value,0,kind[0],number[0]&0xffffffff)
  if text[0]is not None:
   c.mem_write(0x3001000,text[0]+b'\0');struct.pack_into('<Q'if lib.wide else'<I',value,16 if lib.wide else 12,0x3001000)
  c.mem_write(out,bytes(value));c.reg_write(lib.result,found[0])
 def font(cpu,pc,size,user):
  pointer,bits=args()
  if lib.cpu_type==0x1000007:bits=c.reg_read(UC_X86_REG_XMM0)&0xffffffff
  if lib.cpu_type==0x100000c:bits=c.reg_read(UC_ARM64_REG_S0)
  events.append((bytes(c.mem_read(pointer,1024)).split(b'\0')[0],bits));c.reg_write(lib.result,0x1234567)
 for address,hook in [(lookup,variable),(load,font)]:
  c.mem_write(address,bytes.fromhex('1eff2fe1')if lib.cpu_type==12 else bytes.fromhex('c0035fd6')if lib.cpu_type==0x100000c else b'\xc3');c.hook_add(UC_HOOK_CODE,hook,begin=address,end=address)
 for table in lib.api_tables:
  c.mem_write(table,struct.pack('<III',0x50414d57,1100000,0x260));c.mem_write(table+0x204,struct.pack('<I',lookup));c.mem_write(table+0x68,struct.pack('<I',load))
 results=[]
 cases=[(0,0,None,0),(0,0,None,1),(1,0,None,1),(1,42,None,1),(1,-23,None,1),(1,-2147483648,None,1),(1,2147483647,None,1),(5,0,None,1),(5,1,None,1),(3,0,None,1),(3,0,b'',1),(3,0,b'\\Fonts\\Fixture.ttf',1),(3,0,b'a'*1100,1),(2,0,None,1)]
 for k,n,t,f in cases:
  kind[0]=k;number[0]=n;text[0]=t;found[0]=f
  for size in [0.0,12.5,-3.25,40.0]:
   events.clear();bits=floating(lib,size);result=lib.call('_tundra_font_load_system',*((bits,)if not lib.wide else()),result_bits=64 if lib.wide else 32);results.append((result,tuple(events)))
 return results
expected,actual=exercise(a.reference),exercise(a.source);assert expected==actual,next((i,x,y)for i,(x,y)in enumerate(zip(expected,actual))if x!=y)
print('System font: %d native/source variable conversions, path bounds and floating-argument comparisons passed.'%len(expected))
