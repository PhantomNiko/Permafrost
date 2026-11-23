#!/usr/bin/env python3
"""Compare ARM32 allocation runtime callbacks and their full status returns.

Pooka's Free Software License. Underlying allocation I/O is a test boundary.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3,UC_ARM_REG_SP,UC_ARM_REG_PC,UC_ARM_REG_LR
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();mapping=json.loads(a.map.read_text());results=[]
for native in [True,False]:
 address=lambda x:x if native else mapping['_recovered_%x'%x]
 lib=Kernel((a.reference if native else a.source).read_bytes(),{'read':address(0x40462c7c),'write':address(0x40462cac),'_ws_errorf':0x4fe0000});c=lib.cpu;events=[];status=[0];output=[]
 c.mem_write(0x3000000,struct.pack('<II',0x3010000,0x3020000));c.mem_write(0x3020000,struct.pack('<I',0x3030000));c.mem_write(0x3040000,b'\xa5'*48)
 def underlying(cpu,pc,size,user):
  args=[c.reg_read(r)for r in [UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]];args.append(int.from_bytes(c.mem_read(c.reg_read(UC_ARM_REG_SP),4),'little'));events.append((user,args));c.reg_write(UC_ARM_REG_R0,status[0]);c.reg_write(UC_ARM_REG_PC,c.reg_read(UC_ARM_REG_LR))
 for original,name in [(0x4044da14,'read'),(0x4044f1d8,'write')]:
  pc=address(original);c.hook_add(UC_HOOK_CODE,underlying,name,begin=pc,end=pc)
 for operation in ['read','write']:
  for low,high in [(0,0),(17,0),(0xffffffff,1)]:
   for value in [0,1,3,9,10,17,0xffffffff]:
    status[0]=value;events.clear();result=lib.call(operation,0x3000000,low,high,0x3040010,result_bits=32)
    expected=[0x301002c,low,high,0x3030000,0x3040010]if operation=='read'else[0x301005c,low,high,0x3040010,0x3030000]
    assert events==[(operation,expected)],(native,operation,events)
    assert bytes(c.mem_read(0x3040000,48))==b'\xa5'*48
    output.append(result)
 results.append(output)
assert results[0]==results[1],[(i,e,s)for i,(e,s)in enumerate(zip(*results))if e!=s][:4]
print('ARM32 allocation callbacks: %d native/source receiver, index, scratch/output pointer, full status and canary comparisons passed.'%len(results[0]))
