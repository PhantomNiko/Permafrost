#!/usr/bin/env python3
"""Compare ARM32 explicit-volume path parsing and lookup-name preservation.

Pooka's Free Software License. Reference kernels are external test inputs.
"""
from pathlib import Path
import sys,json,struct,argparse
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from kernel_scalars import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_PC,UC_ARM_REG_LR
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();mapping=json.loads(a.map.read_text())
paths=[b'',b'no-prefix',b'[',b'[]',b'[one]',b'[drive\\one]\\hello',b'[Firmware\\1\\1]\\Fonts\\system.png',b'[[drive\\one]]hello',b'[drive\\one',b'[drive/one]x',b'[drive\\]x',b'[\\drive]x',b'[drive\\\\one]x',b'[drive\\one\\two\\three\\four\\five]x',b'[drive\\one\\two\\three\\four\\five\\six]x']
paths += [b'['+character+b'\\volume]rest'for character in [b'a',b'Z',b'0',b'_',b'-',b' ',b'.',b':',b'@',b'\x80']]
paths += [b'['+b'a'*n+b'\\b]tail'for n in [1,120,123,124,125,126,127,128,255]]
results=[]
for native in [True,False]:
 address=lambda x:x if native else mapping['_recovered_%x'%x]
 lib=Kernel((a.reference if native else a.source).read_bytes(),{'entry':address(0x4049e624),'_ws_errorf':0x4fe0000});c=lib.cpu;events=[];output=[]
 def lookup(cpu,pc,size,user):
  pointer=c.reg_read(UC_ARM_REG_R1);events.append(bytes(c.mem_read(pointer,128)).split(b'\0')[0]);c.reg_write(UC_ARM_REG_R0,7);c.reg_write(UC_ARM_REG_PC,c.reg_read(UC_ARM_REG_LR))
 target=address(0x404e01c8);c.hook_add(UC_HOOK_CODE,lookup,begin=target,end=target)
 for path in paths:
  for mask in range(4):
   events.clear();c.mem_write(0x3000000,path+b'\0');c.mem_write(0x3002000,b'\xa5'*24)
   status=lib.call('entry',0x3000000,0x3002000 if mask&1 else 0,0x3002004 if mask&2 else 0,result_bits=32)
   data=bytes(c.mem_read(0x3002000,24));assert data[8:]==b'\xa5'*16
   output.append((status,data,tuple(events)))
 results.append(output)
assert results[0]==results[1],[(i,e,s)for i,(e,s)in enumerate(zip(*results))if e!=s][:4]
assert any(b'Firmware\\1\\1'in event for _,_,event in results[0])
print('ARM32 volume prefixes: %d native/source validation, lookup-name, output, null-pointer and canary comparisons passed.'%len(results[0]))
