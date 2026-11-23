#!/usr/bin/env python3
"""Compare IA32 OpenBIOS disk seek, partial transfers and interrupt guards.

Pooka's Free Software License. Firmware I/O uses synthetic byte patterns.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_EAX,UC_X86_REG_EFLAGS
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args()
meta,_=inspect(a.reference.read_bytes());assert meta['cpu']==7;m=json.loads(a.map.read_text());libraries=[Kernel(a.reference.read_bytes(),{'entry':0x2042ab0,'_ws_errorf':0x4fe0000},True),Kernel(a.source.read_bytes(),{'entry':m['recovered_2042ab0'],'_ws_errorf':0x4fe0000})];events=[[],[]];mode=['full']
for index,lib in enumerate(libraries):
 c=lib.cpu;c.mem_write(0x211e004,bytes(4));c.mem_write(0x211e00c,struct.pack('<I',0x3008000));c.mem_write(0x3008000,b'\xc3')
 def callback(c,pc,size,index):
  assert not(c.reg_read(UC_X86_REG_EFLAGS)&0x200),('firmware interrupt guard',index)
  sp=c.reg_read(UC_X86_REG_ESP);q=struct.unpack('<I',bytes(c.mem_read(sp+4,4)))[0];service,count,returns,handle,arg0,arg1=struct.unpack('<6I',bytes(c.mem_read(q,24)));service=bytes(c.mem_read(service,32)).split(b'\0')[0];assert count==3 and returns==1
  events[index].append((service,handle,arg0,arg1));status=0
  if service==b'seek':result=0 if mode[0]!='seek-fail'else 0xffffffff
  else:
   assert service in[b'read',b'write'];result=min(arg1,257)if mode[0]=='short'else arg1
   if mode[0]=='zero':result=0
   if mode[0]=='oversize':result=arg1+1
   if mode[0]=='error':status=7;result=0
   if service==b'read'and result<=arg1:c.mem_write(arg0,bytes([0x69])*result)
  c.mem_write(q+24,struct.pack('<I',result));c.reg_write(UC_X86_REG_EAX,status)
 c.hook_add(UC_HOOK_CODE,callback,index,begin=0x3008000,end=0x3008000)
cases=0
for style in ['full','short','zero','oversize','error','seek-fail']:
 mode[0]=style
 for write in [0,1]:
  for flags in [2,0x202]:
   for lba,size in [(0,0),(257,512),(0x800001,1),(0x12345678,0x8001),(7,0x10000)]:
    outputs=[]
    for index,lib in enumerate(libraries):
     c=lib.cpu;events[index].clear();c.mem_write(0x300fff0,b'\xa5'*0x10020);c.reg_write(UC_X86_REG_EFLAGS,flags);result=lib.call('entry',13,lba,0x3010000,size,write,result_bits=8);outputs.append((result,list(events[index]),bytes(c.mem_read(0x300fff0,0x10020)),c.reg_read(UC_X86_REG_EFLAGS)&0x200))
    assert outputs[0]==outputs[1],(style,write,flags,lba,size,[o[:2]for o in outputs]);cases+=1
print('IA32 preload disk: %d native/source seek, transfer, partial I/O, error and interrupt-state cases match.'%cases)
