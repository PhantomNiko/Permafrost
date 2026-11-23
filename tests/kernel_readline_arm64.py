#!/usr/bin/env python3
"""Compare ARM64 console input and formatted copies with the reference.

Pooka's Free Software License. Keyboard, output and history are isolated callbacks.
"""
import sys,json,struct,argparse
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from kernel_scalars import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import *
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();m=json.loads(a.map.read_text());results=[]
for native in [True,False]:
 addr=lambda x:x if native else m['_recovered_%x'%x]
 k=Kernel((a.reference if native else a.source).read_bytes(),{'entry':addr(0x824664fc),'_ws_errorf':0x4fe0000});c=k.cpu;events=[];queue=[]
 def ret(v=0):c.reg_write(UC_ARM64_REG_X0,v);c.reg_write(UC_ARM64_REG_PC,c.reg_read(UC_ARM64_REG_LR))
 def string(p):return bytes(c.mem_read(p,1024)).split(b'\0')[0]
 def hook(cpu,pc,size,original):
  x=[c.reg_read(UC_ARM64_REG_X0+i)for i in range(4)]
  if original==0x8244b67c:
   assert queue,'readline exhausted input';c.mem_write(x[0],bytes([queue.pop(0)]));ret(1)
  elif original==0x824026e8:
   src=int.from_bytes(c.mem_read(c.reg_read(UC_ARM64_REG_SP),8),'little');data=string(src);fmt=string(x[2]);assert fmt==b'%s',(fmt,hex(src));events.append(('copy',data,x[1]));c.mem_write(x[0],data[:x[1]-1]+b'\0');ret(len(data))
  elif original==0x824145b4:events.append(('text',string(x[0])));ret()
  elif original==0x82488b08:events.append(('char',x[0]));ret()
  elif original==0x8242da90:events.append(('history',string(x[0])));ret()
  else:ret()
 for original in [0x8244a448,0x8244ba60,0x82488230,0x824145b4,0x82488ac0,0x82488b08,0x82488b20,0x82456964,0x82456a58,0x8244b67c,0x8242da90,0x824026e8]:
  target=addr(original);c.hook_add(UC_HOOK_CODE,hook,original,begin=target,end=target)
 cases=[]
 for text,capacity in [(b'1+1\r',32),(b'hello\b!\r',32),(b'\x1babc\r',32),(b'ab\x7fZ\n',32),(b'\t1+1\r',32),(b'abcdef\r',4),(b'abc\r',1),(b'\r',32)]:
  events.clear();queue[:]=text;c.mem_write(0x3100000,b'\xa5'*64);c.mem_write(0x82738101,b'\0');status=k.call('entry',0x3100000,capacity);assert not queue;assert bytes(c.mem_read(0x3100000+capacity,64-capacity))==b'\xa5'*(64-capacity);cases.append((status,tuple(events),bytes(c.mem_read(0x3100000,64))))
 results.append(cases)
assert results[0]==results[1]
print('8 native/source console line cases preserve text, editing, escape, truncation, history and buffer guards.')
