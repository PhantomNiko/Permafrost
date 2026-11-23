#!/usr/bin/env python3
"""Compare IA32 OpenBIOS available-memory cell decoding and delayed returns.

Pooka's Free Software License. Firmware memory records are synthetic.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_EAX
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args()
meta,_=inspect(a.reference.read_bytes());assert meta['cpu']==7;m=json.loads(a.map.read_text());libraries=[Kernel(a.reference.read_bytes(),{'entry':0x202f5f0,'_ws_errorf':0x4fe0000},True),Kernel(a.source.read_bytes(),{'entry':m['recovered_202f5f0'],'_ws_errorf':0x4fe0000})];payload=[b''];events=[[],[]]
for index,lib in enumerate(libraries):
 c=lib.cpu;c.mem_write(0x211e004,bytes(4));c.mem_write(0x211e00c,struct.pack('<I',0x3008000));c.mem_write(0x3008000,b'\xc3')
 def callback(c,pc,size,index):
  sp=c.reg_read(UC_X86_REG_ESP);q=struct.unpack('<I',bytes(c.mem_read(sp+4,4)))[0];service,count,returns,node,name,buffer,capacity=struct.unpack('<7I',bytes(c.mem_read(q,28)))
  assert bytes(c.mem_read(service,8))==b'getprop\0' and bytes(c.mem_read(name,10))==b'available\0';assert node==7 and count==4 and returns==1
  events[index].append((node,capacity));data=payload[0][:capacity];c.mem_write(buffer,data);c.mem_write(q+28,struct.pack('<I',len(data)));c.reg_write(UC_X86_REG_EAX,0)
 c.hook_add(UC_HOOK_CODE,callback,index,begin=0x3008000,end=0x3008000)
cases=0
for ac in [1,2]:
 for sc in [1,2]:
  for records in [[],[(0x10000000,0x02000000)],[(0,0),(0x100000000 if ac==2 else 0x80000000,0x123456789 if sc==2 else 0x1000)]]:
   for offset in [0,1,62,63]:
    payload[0]=b''.join(base.to_bytes(ac*4,'big')+size.to_bytes(sc*4,'big')for base,size in records);outputs=[]
    for index,lib in enumerate(libraries):
     events[index].clear();lib.cpu.mem_write(0x3002000,b'\xa5'*1056);status=lib.call('entry',7,ac,sc,0x3002010,offset,result_bits=32);outputs.append((status,bytes(lib.cpu.mem_read(0x3002000,1056)),list(events[index])))
    assert outputs[0]==outputs[1],(ac,sc,records,offset,outputs);cases+=1
print('IA32 preload memory: %d native/source cell widths, record bounds, return values and canaries match.'%cases)
