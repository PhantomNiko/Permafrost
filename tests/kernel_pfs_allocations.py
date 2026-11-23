#!/usr/bin/env python3
"""Compare ARM32 PFS initialization's ten allocation failure paths.

Pooka's Free Software License. Native binaries are external test inputs.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_PC,UC_ARM_REG_LR
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path)
a=p.parse_args();mapping=json.loads(a.map.read_text());metadata,_=inspect(a.reference.read_bytes());assert metadata['cpu']==12
names={n:address for address,n in metadata['symbols']};all_results=[]
for native in [True,False]:
 address=lambda name:names[name]if native else mapping['_recovered_%x'%names[name]]
 lib=Kernel((a.reference if native else a.source).read_bytes(),{'entry':address('_fs_load_polynyafs_volume'),'_ws_errorf':0x4fe0000},native)
 state={}
 def allocation(cpu,pc,size,user):
  i=len(state['sizes']);state['sizes'].append(cpu.reg_read(UC_ARM_REG_R0));cpu.reg_write(UC_ARM_REG_R0,0 if state['mask']&(1<<i)else 0x3000000+i*0x200000);cpu.reg_write(UC_ARM_REG_PC,cpu.reg_read(UC_ARM_REG_LR))
 def branch(cpu,pc,size,accepted):
  assert len(state['sizes'])==10,state
  state['accepted']=accepted;cpu.reg_write(UC_ARM_REG_PC,lib.stop)
 for name,hook,user in [('_malloc',allocation,None),('_memset',branch,True),('_free',branch,False)]:
  pc=address(name);lib.cpu.hook_add(UC_HOOK_CODE,hook,user,begin=pc,end=pc)
 results=[]
 for mask in range(1024):
  state.clear();state.update(mask=mask,sizes=[]);lib.cpu.mem_write(0x4066f698,b'\0');lib.cpu.mem_write(0x40682b70,bytes(4));lib.call('entry',0x80,257,2134,0)
  assert state['accepted']==(mask==0),(native,mask,state)
  results.append((state['sizes'],state['accepted']))
 all_results.append(results)
assert all_results[0]==all_results[1]
print('ARM32 PFS initialization: all 1,024 allocation combinations match native sizes and admission.')
