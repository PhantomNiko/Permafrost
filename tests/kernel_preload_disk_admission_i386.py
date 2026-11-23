#!/usr/bin/env python3
"""Compare IA32 boot-disk admission with a sector buffer overlapping firmware data.

Pooka's Free Software License. Reference disks remain external inputs.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_EIP,UC_X86_REG_EAX,UC_X86_REG_ECX,UC_X86_REG_EDX
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('disk',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();m=json.loads(a.map.read_text());meta,_=inspect(a.reference.read_bytes());assert meta['cpu']==7
sector=a.disk.read_bytes()[:512];libraries=[Kernel(a.reference.read_bytes(),{'entry':0x202f800,'_ws_errorf':0x4fe0000},True),Kernel(a.source.read_bytes(),{'entry':m['recovered_202f800'],'_ws_errorf':0x4fe0000})];events=[[],[]];outputs=[]
for index,lib in enumerate(libraries):
 c=lib.cpu;c.mem_write(0x211e00c,struct.pack('<I',0x3008000));c.mem_write(0x211e004,bytes(4));c.mem_write(0x3008000,b'\xc3');c.mem_write(0x3003000,b'hd\0');c.mem_write(0x3000000,b'\xa5'*0x6c8)
 def leave(c,value):
  sp=c.reg_read(UC_X86_REG_ESP);target=struct.unpack('<I',bytes(c.mem_read(sp,4)))[0];c.reg_write(UC_X86_REG_ESP,sp+4);c.reg_write(UC_X86_REG_EIP,target);c.reg_write(UC_X86_REG_EAX,value)
 def callback(c,pc,size,index):
  sp=c.reg_read(UC_X86_REG_ESP);q=struct.unpack('<I',bytes(c.mem_read(sp+4,4)))[0];service,count,returns=struct.unpack('<III',bytes(c.mem_read(q,12)));service=bytes(c.mem_read(service,32)).split(b'\0')[0];values=list(struct.unpack('<'+'I'*count,bytes(c.mem_read(q+12,count*4))));status=0
  if service==b'open':result=13
  elif service==b'seek':assert values[0]==13 and values[1:]==[0,0];result=0
  elif service==b'read':assert values[0]==13 and values[2]==512;c.mem_write(values[1],sector);result=512
  elif service==b'instance-to-package':assert values==[13];result=0x44
  elif service==b'close':assert values==[13];result=0
  else:raise AssertionError((index,service,values))
  events[index].append((service,values[0]if service!=b'open'else 0,count,returns))
  if returns:c.mem_write(q+12+count*4,struct.pack('<I',result))
  c.reg_write(UC_X86_REG_EAX,status)
 c.hook_add(UC_HOOK_CODE,callback,index,begin=0x3008000,end=0x3008000)
 def capacity(c,pc,size,index):
  if index==0:node,out=c.reg_read(UC_X86_REG_ECX),c.reg_read(UC_X86_REG_EDX)
  else:node,out=struct.unpack('<II',bytes(c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,8)))
  assert node==0x44;c.mem_write(out,struct.pack('<I',0x100000));leave(c,1)
 pc=0x2030470 if index==0 else m['recovered_2030470'];c.hook_add(UC_HOOK_CODE,capacity,index,begin=pc,end=pc)
 status=lib.call('entry',0x3003000,0x3000000,result_bits=8);outputs.append((status,bytes(c.mem_read(0x3000000,0x6c8)),bytes(c.mem_read(0x2176f10,0x20)),bytes(c.mem_read(0x2177518,4)),events[index]))
assert outputs[0]==outputs[1],[(o[0],o[2].hex(),o[3].hex(),o[4])for o in outputs]
assert outputs[0][0]==1
print('IA32 disk admission: native/source partition metadata, persistent handle, capacity and firmware requests match.')
