#!/usr/bin/env python3
"""Compare IA32 preload discovery requests to an unavailable OpenBIOS fixture.

Pooka's Free Software License. No firmware binary is included.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_EAX
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args()
meta,_=inspect(a.reference.read_bytes());assert meta['cpu']==7;names={n:x for x,n in meta['symbols']};m=json.loads(a.map.read_text());events=[[],[]]
libraries=[Kernel(a.reference.read_bytes(),{'entry':names['_wm_platform_set_preload_handoff'],'_ws_errorf':0x4fe0000}),Kernel(a.source.read_bytes(),{'entry':m['recovered_%x'%names['_wm_platform_set_preload_handoff']],'_ws_errorf':0x4fe0000})]
for index,lib in enumerate(libraries):
 c=lib.cpu;c.mem_write(0x3008000,b'\xc3')
 def callback(c,pc,size,index):
  sp=c.reg_read(UC_X86_REG_ESP);request=struct.unpack('<I',bytes(c.mem_read(sp+4,4)))[0];assert 0x4fd0000<=request<0x4fe0000,(index,hex(request))
  service,count,returns=struct.unpack('<III',bytes(c.mem_read(request,12)));assert count<=12 and returns<=4
  service=bytes(c.mem_read(service,128)).split(b'\0')[0];args=list(struct.unpack('<'+'I'*count,bytes(c.mem_read(request+12,count*4))))
  args=['stack'if 0x4fd0000<=x<0x4fe0000 else x for x in args];events[index].append((service,count,returns,args))
  c.mem_write(request+12+count*4,b'\xff'*(returns*4));c.reg_write(UC_X86_REG_EAX,0xffffffff)
 c.hook_add(UC_HOOK_CODE,callback,index,begin=0x3008000,end=0x3008000)
 lib.call('entry',0,0x3008000,result_bits=32)
assert events[0]==events[1],events
assert events[0]
print('IA32 preload discovery: %d native/source OpenBIOS service requests and callback arguments match.'%len(events[0]))
