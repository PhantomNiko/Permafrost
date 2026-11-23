#!/usr/bin/env python3
"""Compare ARM32 capability selection, delayed return status and shell routing.

Pooka's Free Software License. Provider callbacks use synthetic guest modules.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3,UC_ARM_REG_PC,UC_ARM_REG_LR
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args()
meta,_=inspect(a.reference.read_bytes());assert meta['cpu']==12;names={n:x for x,n in meta['symbols']};m=json.loads(a.map.read_text());selected=['_kernel_module_dispatch_capability_first','_kernel_module_route_line_for_prompt'];libraries=[Kernel(a.reference.read_bytes(),{n:names[n]for n in selected}|{'_ws_errorf':0x4fe0000}),Kernel(a.source.read_bytes(),{n:m['_recovered_%x'%names[n]]for n in selected}|{'_ws_errorf':0x4fe0000})]
events=[[],[]];statuses=[0,0,0]
for index,lib in enumerate(libraries):
 address=0x404f0388 if index==0 else m['_recovered_404f0388']
 def callback(c,pc,size,index):
  args=[c.reg_read(r)for r in [UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]];slot=(args[0]-0x3010000)//0x200;assert 0<=slot<3
  events[index].append((args[0],args[1],args[2]));c.reg_write(UC_ARM_REG_R0,statuses[slot]);c.reg_write(UC_ARM_REG_PC,c.reg_read(UC_ARM_REG_LR))
 lib.cpu.hook_add(UC_HOOK_CODE,callback,index,begin=address,end=address)
cases=0
for capability in [0,0x40000,0x80000,0xc0000,0xffffffff]:
 for count in range(4):
  for enabled in range(8):
   for pattern in [(0,0,0),(0,1,0),(2,0,7),(0,0,3),(1,2,3)]:
    statuses[:]=pattern;outputs=[]
    for index,lib in enumerate(libraries):
     c=lib.cpu;events[index].clear();c.mem_write(0x40682728,bytes(4));c.mem_write(0x40688af8,struct.pack('<II',count,0x3000000));c.mem_write(0x3000000,struct.pack('<III',0x3010000,0x3010200,0x3010400))
     for slot in range(3):
      module=bytearray(0x100);module[0]=bool(enabled&(1<<slot));struct.pack_into('<I',module,4,1);struct.pack_into('<I',module,0x4c,capability if slot==0 else 0x40000);c.mem_write(0x3010000+slot*0x200,bytes(module))
     status=lib.call(selected[0],0x40000,0x50001,0x3007000,result_bits=32);outputs.append((status,list(events[index]),bytes(c.mem_read(0x40682728,4))))
    assert outputs[0]==outputs[1],(capability,count,enabled,pattern,outputs);cases+=1
# The shell wrapper uses the dispatch result after a branch and optional output.
for status in [0,1,2,7,0xffffffff]:
 statuses[:]=[status,0,0];outputs=[]
 for index,lib in enumerate(libraries):
  c=lib.cpu;events[index].clear();c.mem_write(0x40688af8,struct.pack('<II',1,0x3000000));c.mem_write(0x3010000,b'\1');c.mem_write(0x301004c,struct.pack('<I',0x40000));c.mem_write(0x3006000,b'1+1\0');c.mem_write(0x3007000,b'\xa5'*256)
  value=lib.call(selected[1],0x3006000,0x3007000,256,0,result_bits=32);outputs.append((value,list(events[index]),bytes(c.mem_read(0x3007000,256))))
 assert outputs[0]==outputs[1] and outputs[0][0]==status,(status,outputs);cases+=1
print('ARM32 module dispatch: %d native/source capability, callback, lock and delayed shell-status cases match.'%cases)
