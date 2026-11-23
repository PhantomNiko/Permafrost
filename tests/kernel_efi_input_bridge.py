#!/usr/bin/env python3
"""Compare ARM32 retained-firmware input packets and callback arguments.

Pooka's Free Software License. The firmware callback is a synthetic fixture.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_PC,UC_ARM_REG_LR
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args()
meta,_=inspect(a.reference.read_bytes());assert meta['cpu']==12;names={n:x for x,n in meta['symbols']};m=json.loads(a.map.read_text());cases=0
for name,operation in [('_platform_efi_poll_key_ax',1),('_platform_efi_pointer_state',7)]:
 libraries=[Kernel(a.reference.read_bytes(),{'entry':names[name],'_ws_errorf':0x4fe0000}),Kernel(a.source.read_bytes(),{'entry':m['_recovered_%x'%names[name]],'_ws_errorf':0x4fe0000})]
 requests=[[],[]];result=[0]
 for index,lib in enumerate(libraries):
  c=lib.cpu;c.mem_write(0x40535000,struct.pack('<I',0x405db9d4)+bytes(4));c.mem_write(0x405db9d4,struct.pack('<III',0x33454657,11,0x2548));c.mem_write(0x405dbae8,struct.pack('<II',0x3008000,0x3001000))
  def callback(cpu,pc,size,index):
   pointer=cpu.reg_read(UC_ARM_REG_R0);assert pointer==0x3001000,('firmware request pointer',name,index,hex(pointer));packet=bytes(cpu.mem_read(pointer,64));requests[index].append(packet)
   if operation==7:
    destination,capacity=struct.unpack_from('<II',packet,16);assert destination==0x3002000 and capacity==32
    cpu.mem_write(destination,struct.pack('<8I',3,5,101,203,7,11,800,600))
   cpu.reg_write(UC_ARM_REG_R0,result[0]);cpu.reg_write(UC_ARM_REG_PC,cpu.reg_read(UC_ARM_REG_LR))
  c.hook_add(UC_HOOK_CODE,callback,index,begin=0x3008000,end=0x3008000)
 for value in [0,1,7,0x1c0d,0x6100,0x7fff,0xffffffff]:
  result[0]=value;outputs=[]
  for index,lib in enumerate(libraries):
   c=lib.cpu;requests[index].clear();c.mem_write(0x3001000,b'\xa5'*64);c.mem_write(0x3001ff0,b'\xa5'*64)
   status=lib.call('entry',*([0x3002000]if operation==7 else[]),result_bits=32)
   outputs.append((status,list(requests[index]),bytes(c.mem_read(0x3001ff0,64))))
  assert outputs[0]==outputs[1],(name,value,outputs)
  assert struct.unpack_from('<II',outputs[1][1][0])==(operation,0)
  assert outputs[1][2][:16]==b'\xa5'*16 and outputs[1][2][-16:]==b'\xa5'*16
  cases+=1
print('ARM32 EFI input bridge: %d native/source callback arguments, packets, results and canaries match.'%cases)
