#!/usr/bin/env python3
"""Compare ARM32 allocation-entry writer sentinels and block callback effects.

Pooka's Free Software License. Block I/O is an isolated guest callback fixture.
"""
import argparse,json,random,struct
from pathlib import Path
from kernel_scalars import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3,UC_ARM_REG_SP,UC_ARM_REG_PC,UC_ARM_REG_LR
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);a=p.parse_args();mapping=json.loads(a.map.read_text());libs=[Kernel(a.reference.read_bytes(),{'entry':0x4044f1d8,'_ws_errorf':0x4fe0000},True),Kernel(a.source.read_bytes(),{'entry':mapping['_recovered_4044f1d8'],'_ws_errorf':0x4fe0000})]
requests=[[],[]];status=[0]
for index,lib in enumerate(libs):
 c=lib.cpu
 def leave(cpu,value):cpu.reg_write(UC_ARM_REG_R0,value);cpu.reg_write(UC_ARM_REG_PC,cpu.reg_read(UC_ARM_REG_LR))
 def location(cpu,pc,size,user):
  sp=cpu.reg_read(UC_ARM_REG_SP);out=int.from_bytes(cpu.mem_read(sp,4),'little');cpu.mem_write(out,struct.pack('<Q',42));leave(cpu,0)
 def read(cpu,pc,size,index):
  context,lo,hi,buffer=[cpu.reg_read(r)for r in [UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]];requests[index].append(('read',context,lo,hi,buffer));cpu.mem_write(buffer,bytes(0x20000));leave(cpu,0)
 def write(cpu,pc,size,index):
  context,lo,hi,buffer=[cpu.reg_read(r)for r in [UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]];requests[index].append(('write',context,lo,hi,buffer));leave(cpu,status[0])
 target=0x4044dc7c if index==0 else mapping['_recovered_4044dc7c'];c.hook_add(UC_HOOK_CODE,location,begin=target,end=target)
 c.mem_write(0x3011000,bytes.fromhex('1eff2fe1'));c.mem_write(0x3012000,bytes.fromhex('1eff2fe1'));c.hook_add(UC_HOOK_CODE,read,index,begin=0x3011000,end=0x3011000);c.hook_add(UC_HOOK_CODE,write,index,begin=0x3012000,end=0x3012000)
mask=(1<<64)-1;magic=0x4b4e494c54414650;cases=[]
for current,total in [(0,2134),(1,2134),(2133,2134),(2134,2134),(0xffffffff,0x100000001),(0x100000000,0x100000001)]:
 for next in [0,1,current,total-1,total,*range(mask-10,mask+1)]:
  for first in [0,1,current,magic]:cases.append((current,total,first,next))
for result in [0,3,9]:
 status[0]=result
 for case in cases:
  current,total,first,next=case;outputs=[]
  for i,lib in enumerate(libs):
   reader=[0]*14;reader[0]=0x3004000;reader[1]=0x3011000;reader[2]=total&0xffffffff;reader[3]=total>>32;reader[12]=0x3005000;reader[13]=0x3012000
   lib.cpu.mem_write(0x3000000,struct.pack('<14I',*reader));lib.cpu.mem_write(0x3001000,struct.pack('<QQ',first,next));lib.cpu.mem_write(0x3020000,b'\xa5'*0x20000);requests[i].clear()
   value=lib.call('entry',0x3000000,current&0xffffffff,current>>32,0x3001000,0x3020000,result_bits=32)
   outputs.append((value,list(requests[i]),bytes(lib.cpu.mem_read(0x3020000,0x20000))))
  assert outputs[0]==outputs[1],(result,case,outputs[0][:2],outputs[1][:2])
print('PFS allocation writer: %d native/source sentinel, bounds, block-data and status comparisons match.'%(len(cases)*3))
