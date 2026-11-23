#!/usr/bin/env python3
"""Compare ARM64 native-storage enumeration counts and bounded records.

Pooka's Free Software License. Controllers are synthetic guest state.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import UC_ARM64_REG_PC,UC_ARM64_REG_LR
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path)
a=p.parse_args();mapping=json.loads(a.map.read_text());metadata,_=inspect(a.reference.read_bytes());assert metadata['cpu']==0x100000c
libs=[Kernel(a.reference.read_bytes(),{'entry':0x8240ea2c,'_ws_errorf':0x4fe0000}),Kernel(a.source.read_bytes(),{'entry':mapping['_recovered_8240ea2c'],'_ws_errorf':0x4fe0000})]
for i,lib in enumerate(libs):
 pc=0x82408b34 if i==0 else mapping['_recovered_82408b34']
 lib.cpu.hook_add(UC_HOOK_CODE,lambda c,pc,n,u:c.reg_write(UC_ARM64_REG_PC,c.reg_read(UC_ARM64_REG_LR)),begin=pc,end=pc)
cases=0
for enabled in [0,1,0x842,0xfff]:
 for disabled in [0,1,2,4]:
  for capacity in [0,1,5,12,16]:
   for null in [False,True]:
    results=[]
    for lib in libs:
     c=lib.cpu;c.mem_write(0x824b1000,bytes(0x180000));c.mem_write(0x826f5126,b'\1');c.mem_write(0x824a9738,struct.pack('<I',1));c.mem_write(0x826f5188,struct.pack('<III',1,2,0x12345606));c.mem_write(0x3000000,b'\xa5'*384)
     for controller in range(3):
      origin=0x824b1000+controller*0x80000;c.mem_write(origin,b'\1');c.mem_write(origin+3,bytes([bool(disabled&(1<<controller))]))
      for port in range(4):
       index=controller*4+port;address=origin+0x3200+port*0x3000;c.mem_write(address,struct.pack('<I',0x12345600+index));c.mem_write(address+8,bytes([bool(enabled&(1<<index)),1]));c.mem_write(address+0x3c,struct.pack('<I',1234+index))
     result=lib.call('entry',0 if null else 0x3000000,capacity,result_bits=32);results.append((result,bytes(c.mem_read(0x3000000,384))))
    assert results[0]==results[1],(enabled,disabled,capacity,null,results)
    expected=sum(bool(enabled&(1<<i))and not(disabled&(1<<(i//4)))for i in range(12));assert results[1][0]==expected,(enabled,disabled,results[1][0],expected)
    cases+=1
print('ARM64 storage enumeration: %d native/source counts, records and output canaries match.'%cases)
