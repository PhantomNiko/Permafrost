#!/usr/bin/env python3
"""Compare ARM32 WFE11 block and buffered sector I/O with native execution.

Pooka's Free Software License. Firmware commands are isolated test callbacks.
"""
import argparse,json,struct,hashlib
from pathlib import Path
from kernel_scalars import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_R0
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();mapping=json.loads(a.map.read_text());results=[]
for native in [True,False]:
 address=lambda x:x if native else mapping['_recovered_%x'%x]
 lib=Kernel((a.reference if native else a.source).read_bytes(),{'read':address(0x4041ab84),'write':address(0x4041c088),'block':address(0x4041bca0),'_ws_errorf':0x4fe0000});lib.instruction_limit=20000000;c=lib.cpu
 context,request,bridge,bounce,data=0x3100000,0x3200000,0x3300000,0x3400000,0x3500010;ctx=bytearray(0x2560);struct.pack_into('<III',ctx,0,0x33454657,11,len(ctx));struct.pack_into('<I',ctx,0x28,0x10000);struct.pack_into('<II',ctx,0x114,bridge,request);struct.pack_into('<II',ctx,0x234,bounce,65536);struct.pack_into('<I',ctx,0x1530,2)
 for index in range(2):
  struct.pack_into('<I',ctx,0x1b38+index*4,7+index);struct.pack_into('<I',ctx,0x1d38+index*4,0x10000);struct.pack_into('<I',ctx,0x1f38+index*4,index*13)
 c.mem_write(context,bytes(ctx));c.mem_write(0x405db9d4,bytes(ctx));c.mem_write(0x40535000,struct.pack('<I',context));c.mem_write(0x40535004,b'\0');c.mem_write(bridge,bytes.fromhex('1eff2fe1'));events=[];failure=[False];output=[]
 def callback(cpu,pc,size,user):
  pointer=c.reg_read(UC_ARM_REG_R0);assert pointer==request
  fields=struct.unpack('<7I',c.mem_read(pointer,28));code,_,low,high,buffer,count,device=fields;assert code in [2,3,5] and device in [0,1]
  events.append((fields,hashlib.sha256(c.mem_read(buffer,count)).digest()if code==3 else None))
  if code==2 and not failure[0]:c.mem_write(buffer,bytes(((low*512+i)*37+13)&255 for i in range(count)))
  result=int(not failure[0]);c.mem_write(pointer+4,struct.pack('<I',result));c.reg_write(UC_ARM_REG_R0,result)
 c.hook_add(UC_HOOK_CODE,callback,begin=bridge,end=bridge)
 for name in ['block','read','write']:
  for drive in [0x7f,0x80,0x81,0x82]:
   for lba,count in [(0,0),(0,512),(257,4096),(511,65536),(1023,131072),(65535,1024),(0xffffffff,512),(2,511)]:
    for failed in [False,True]:
     failure[0]=failed;events.clear();c.mem_write(data-16,b'\xa5'*(131072+32));status=lib.call(name,drive,lba,data,count,result_bits=8);payload=bytes(c.mem_read(data-16,131072+32));assert payload[:16]==payload[-16:]==b'\xa5'*16
     assert payload[16+count:]==b'\xa5'*(131072+16-count)
     output.append((status,tuple(events),hashlib.sha256(payload).digest()))
 results.append(output)
assert results[0]==results[1],[(i,e[:2],s[:2])for i,(e,s)in enumerate(zip(*results))if e!=s][:4]
print('ARM32 WFE11 storage: %d native/source packet, device-index, chunking, payload, failure, bounds and canary comparisons passed.'%len(results[0]))
