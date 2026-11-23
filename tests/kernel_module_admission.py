#!/usr/bin/env python3
"""Compare ARM32 module metadata admission with a synthetic file-cache record.

Pooka's Free Software License. Modules and reference binaries are external inputs.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_PC,UC_ARM_REG_LR

p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);p.add_argument('--module',required=True,nargs='+',type=Path);a=p.parse_args()
meta,_=inspect(a.reference.read_bytes());assert meta['cpu']==12;names={n:x for x,n in meta['symbols']};mapping=json.loads(a.map.read_text());cases=0
for module_path in a.module:
 module=module_path.read_bytes();assert len(module)<0x200000;results=[]
 for native in [True,False]:
  address=lambda name:names[name]if native else mapping['_recovered_%x'%names[name]]
  lib=Kernel(a.reference.read_bytes()if native else a.source.read_bytes(),{'entry':address('_kernel_module_probe'),'_ws_errorf':0x4fe0000});lib.instruction_limit=500000000;c=lib.cpu;c.mem_map(0x41000000,0x2000000);arena=[0x41000000];allocations={}
  def leave(value=0):c.reg_write(UC_ARM_REG_R0,value);c.reg_write(UC_ARM_REG_PC,c.reg_read(UC_ARM_REG_LR))
  def verify():
   for pointer,length in allocations.items():assert bytes(c.mem_read(pointer+length,32))==b'\xa5'*32
  def allocate(cpu,pc,size,user):
   verify();length=c.reg_read(UC_ARM_REG_R0);pointer=arena[0];arena[0]=(pointer+max(length,1)+47)&-16;assert arena[0]<0x43000000
   c.mem_write(pointer,bytes(length)+b'\xa5'*32);allocations[pointer]=length;leave(pointer)
  def release(cpu,pc,size,user):
   verify();pointer=c.reg_read(UC_ARM_REG_R0)
   if pointer:assert pointer in allocations;del allocations[pointer]
   leave()
  for name,hook in [('_malloc',allocate),('_free',release)]:
   pc=address(name);c.hook_add(UC_HOOK_CODE,hook,begin=pc,end=pc)
  # Scope gates and lookup are fixture boundaries; the complete format loader,
  # decompressor, command parser and module descriptor validator remain real.
  for original,value in [(0x404a6814,1),(0x404a6b18,0),(0x404c5064,0)]:
   pc=original if native else mapping['_recovered_%x'%original]
   c.hook_add(UC_HOOK_CODE,lambda cpu,pc,size,value:leave(value),value,begin=pc,end=pc)
  c.mem_write(0x3000000,module);c.mem_write(0x3200000,b'Kernel\\Modules\\fixture.kmod\0');c.mem_write(0x3300000,b'\xa5'*128)
  record=bytearray(0x303c);struct.pack_into('<II',record,0x3004,0x3000000,len(module));record[0x303b]=1;c.mem_write(0x3400000,bytes(record));c.mem_write(0x4065cdc8,struct.pack('<II',0x3400000,1));c.mem_write(0x4065ce80,b'\1')
  status=lib.call('entry',0x3200000,0x3300000,result_bits=32);verify();results.append((status,bytes(c.mem_read(0x3300000,128))))
 assert results[0]==results[1] and results[0][0]==1,('module admission',cases,results)
 assert results[1][1][80:]==b'\xa5'*48
 cases+=1
print('ARM32 module admission: %d complete native/source metadata records and output canaries match.'%cases)
