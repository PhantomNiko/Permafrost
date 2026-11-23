#!/usr/bin/env python3
"""Compare ARM allocation extent plans, chain markers and rollback writes.

Pooka's Free Software License. Allocation I/O is an isolated callback fixture.
"""
import argparse,json,struct,random
from pathlib import Path
from kernel_scalars import Kernel
from dll import DLL
from native import inspect
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_PC,UC_ARM64_REG_LR
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3,UC_ARM_REG_PC,UC_ARM_REG_LR
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();metadata,_=inspect(a.reference.read_bytes());wide=metadata['cpu']==0x100000c;assert metadata['cpu']in [12,0x100000c];entry=0x82429cf0 if wide else 0x4044a188;mapping=json.loads(a.map.read_text());cases=[];end=(1<<64)-1
for occupied in [set(),{1},{2,4,6,8,10,12,14},set(range(1,8)),set(range(1,16))]:
 for requested in [0,1,2,3,7,15,16]:
  for capacity in [0,1,4,16]:cases.append((0,occupied,requested,capacity,None,None))
for failure in range(1,5):
 cases.append((0,{2,4,6},5,16,failure,None));cases.append((0,{2,4,6},5,16,None,failure))
for base in [0xffffffff,0x100000000]:
 for requested in [1,3,7]:cases.append((base,{2,4,6},requested,16,None,None))
results=[]
for native in [True,False]:
 target=entry if native else mapping['_recovered_%x'%entry];lib=Kernel((a.reference if native else a.source).read_bytes(),{'entry':target,'_ws_errorf':0x4fe0000});c=lib.cpu;reader,writer,context,plan,outputs=0x3100000,0x3100010,0x3101000,0x3102000,0x3103000
 c.mem_write(reader,bytes.fromhex('c0035fd6'if wide else'1eff2fe1'));c.mem_write(writer,bytes.fromhex('c0035fd6'if wide else'1eff2fe1'));state={};events=[];counts=[0,0];failures=[None,None];output=[]
 def leave(value):c.reg_write(UC_ARM64_REG_X0 if wide else UC_ARM_REG_R0,value);c.reg_write(UC_ARM64_REG_PC if wide else UC_ARM_REG_PC,c.reg_read(UC_ARM64_REG_LR if wide else UC_ARM_REG_LR))
 def io(cpu,pc,size,write):
  if wide:opaque,index,pointer=[c.reg_read(r)for r in [UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2]]
  else:
   opaque,low,high,pointer=[c.reg_read(r)for r in [UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]];index=low|(high<<32)
  assert opaque==context;counts[write]+=1;failed=failures[write]==counts[write]
  if write:
   entry=struct.unpack('<QQ',c.mem_read(pointer,16));events.append(('write',index,entry,failed))
   if not failed:state[index]=entry
  else:
   entry=state.get(index,(0,0));events.append(('read',index,failed))
   if not failed:c.mem_write(pointer,struct.pack('<QQ',*entry))
  leave(9 if failed else 0)
 c.hook_add(UC_HOOK_CODE,io,0,begin=reader,end=reader);c.hook_add(UC_HOOK_CODE,io,1,begin=writer,end=writer)
 for case in cases:
  base,occupied,requested,capacity,read_failure,write_failure=case;state.clear();state.update({base+index:(0,end)for index in occupied});events.clear();counts[:]=[0,0];failures[:]=[read_failure,write_failure];c.mem_write(plan,b'\xa5'*(16*24+32));c.mem_write(outputs,b'\xa5'*48);total=base+16;start=base+1
  arguments=(reader,writer,context,total,start,requested,plan,capacity,outputs,outputs+16)if wide else(reader,writer,context,total&0xffffffff,total>>32,start&0xffffffff,start>>32,requested,0,plan,capacity,outputs,outputs+16)
  status=DLL.call(lib,'entry',*arguments,result_bits=32,stack_format='<QQ')if wide else lib.call('entry',*arguments,result_bits=32)
  assert bytes(c.mem_read(plan+16*24,32))==b'\xa5'*32 and bytes(c.mem_read(outputs+24,24))==b'\xa5'*24
  output.append((status,tuple(events),bytes(c.mem_read(plan,16*24)),bytes(c.mem_read(outputs,48))))
 results.append(output)
assert results[0]==results[1],[(i,cases[i],e[:2],s[:2])for i,(e,s)in enumerate(zip(*results))if e!=s][:2]
print('ARM extent allocation: %d native/source plans, end/continuation markers, fragmented runs, 64-bit indices, failure rollbacks and canaries match.'%len(cases))
