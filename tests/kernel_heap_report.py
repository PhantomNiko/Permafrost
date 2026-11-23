#!/usr/bin/env python3
"""Compare ARM32 heap free-byte reports, including carries past four GiB.

Pooka's Free Software License. Guest headers are synthetic linked records.
"""
import argparse,json,random,struct
from pathlib import Path
from kernel_scalars import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_PC,UC_ARM_REG_LR
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path)
a=p.parse_args();mapping=json.loads(a.map.read_text());libs=[Kernel(a.reference.read_bytes(),{'entry':0x404243b8,'_ws_errorf':0x4fe0000},True),Kernel(a.source.read_bytes(),{'entry':mapping['_recovered_404243b8'],'_ws_errorf':0x4fe0000})]
for i,lib in enumerate(libs):
 pc=0x40400574 if i==0 else mapping['_recovered_40400574'];lib.cpu.hook_add(UC_HOOK_CODE,lambda c,p,n,u:c.reg_write(UC_ARM_REG_PC,c.reg_read(UC_ARM_REG_LR)),begin=pc,end=pc)
rng=random.Random(110344);cases=[[],[(0xffffffff,1),(0xffffffff,1),(7,1)],[(17,0),(19,1),(23,2)]]
for i in range(250):cases.append([(rng.getrandbits(32),rng.randrange(3))for j in range(rng.randrange(40))])
for nodes in cases:
 outputs=[]
 for lib in libs:
  lib.cpu.mem_write(0x40534004,struct.pack('<II',0x3000000 if nodes else 0,0))
  for i,(length,free)in enumerate(nodes):lib.cpu.mem_write(0x3000000+i*16,struct.pack('<4I',length,0x3000000+(i+1)*16 if i+1<len(nodes)else 0,0,free))
  outputs.append(lib.call('entry',result_bits=64))
 assert outputs[0]==outputs[1]==sum(n for n,free in nodes if free==1),(nodes,outputs)
print('ARM32 heap reports: %d native/source linked-list totals preserve 64-bit carries.'%len(cases))
