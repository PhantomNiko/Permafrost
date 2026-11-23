#!/usr/bin/env python3
"""Compare ARM PFS flush callback status, drive forwarding and lock release.

Pooka's Free Software License. Storage is an isolated callback fixture.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_PC,UC_ARM_REG_LR
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_PC,UC_ARM64_REG_LR
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path)
a=p.parse_args();metadata,_=inspect(a.reference.read_bytes());mapping=json.loads(a.map.read_text());arm64=metadata['cpu']==0x100000c;assert arm64 or metadata['cpu']==12
entry,storage,lock=(0x82473d34,0x8246dff8,0x827381c8)if arm64 else(0x404d9568,0x404cde08,0x40682b70)
reg,pc,lr=(UC_ARM64_REG_X0,UC_ARM64_REG_PC,UC_ARM64_REG_LR)if arm64 else(UC_ARM_REG_R0,UC_ARM_REG_PC,UC_ARM_REG_LR)
libs=[Kernel(a.reference.read_bytes(),{'entry':entry,'_ws_errorf':0x4fe0000},True),Kernel(a.source.read_bytes(),{'entry':mapping[('_'if arm64 else'_')+'recovered_%x'%entry],'_ws_errorf':0x4fe0000})]
status=[0];requests=[[],[]]
for i,lib in enumerate(libs):
 address=storage if i==0 else mapping['_recovered_%x'%storage]
 def flush(cpu,address,size,i):
  requests[i].append(cpu.reg_read(reg));cpu.reg_write(reg,status[0]);cpu.reg_write(pc,cpu.reg_read(lr))
 lib.cpu.hook_add(UC_HOOK_CODE,flush,i,begin=address,end=address)
cases=0
for drive in range(256):
 for result in [0,1]:
  status[0]=result;outputs=[]
  for i,lib in enumerate(libs):
   requests[i].clear();lib.cpu.mem_write(lock,bytes(4));lib.cpu.mem_write(0x3000000,bytes([drive]));value=lib.call('entry',0x3000000,result_bits=32);outputs.append((value,list(requests[i]),bytes(lib.cpu.mem_read(lock,4))))
  assert outputs[0]==outputs[1]==(result,[drive],bytes(4)),(drive,result,outputs)
  cases+=1
for i,lib in enumerate(libs):
 requests[i].clear();assert lib.call('entry',0,result_bits=32)==0 and not requests[i]
print('PFS flush: %d native/source drive/status cases preserve lock release and null-context behavior.'%cases)
