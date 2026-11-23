#!/usr/bin/env python3
"""Compare TerrorUI theme variable packets and aggregate window defaults.

Pooka's Free Software License. Variable lookup is an isolated WMAP callback.
"""
import argparse,struct
from pathlib import Path
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_EAX,UC_X86_REG_RAX
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_R1
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X8
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--api-base',type=lambda x:int(x,0));a=p.parse_args()
def exercise(path):
 lib=DLL(path,poison_stack=True,api_base=a.api_base);c=lib.cpu;events=[];seed=[1];out=0x3000000;title=0x3010000;c.mem_write(title,b'Theme fixture\0');callback=0x10500
 def lookup(cpu,pc,size,user):
  if lib.cpu_type==7:key,value=struct.unpack('<II',c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,8))
  else:
   regs=[UC_ARM_REG_R0,UC_ARM_REG_R1]if lib.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1]if lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI];key,value=[c.reg_read(r)for r in regs]
  name=bytes(c.mem_read(key,128)).split(b'\0')[0];assert 0x3000000<value<0x5000000 and value!=title,('variable output',path,name,hex(value));color=(sum(name)*seed[0]*53)&0xffffff;events.append((name,color));c.mem_write(value,struct.pack('<II',1,color));c.reg_write(lib.result,1)
 c.mem_write(callback,bytes.fromhex('1eff2fe1')if lib.cpu_type==12 else bytes.fromhex('c0035fd6')if lib.cpu_type==0x100000c else b'\xc3');c.hook_add(UC_HOOK_CODE,lookup,begin=callback,end=callback)
 for table in lib.api_tables:
  c.mem_write(table+4,struct.pack('<II',1100000,0x260));c.mem_write(table+0x204,struct.pack('<I',callback))
 result=[]
 for phase,value in enumerate([1,7]):
  seed[0]=value;events.clear()
  if phase:lib.call('_terror_ui_reload_colours')
  c.mem_write(out,b'\xa5'*96)
  if lib.cpu_type==0x100000c:c.reg_write(UC_ARM64_REG_X8,out);lib.call('_terror_ui_window_spec',title,321,123)
  else:lib.call('_terror_ui_window_spec',out,title,321,123)
  size=72 if lib.wide else 52;assert bytes(c.mem_read(out+size,96-size))==b'\xa5'*(96-size);result.append((tuple(events),bytes(c.mem_read(out,size))))
 return result
assert exercise(a.reference)==exercise(a.source)
print('TerrorUI theme reloads preserve variable output arguments, colors, window defaults and aggregate guards.')
