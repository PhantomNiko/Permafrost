#!/usr/bin/env python3
"""Compare IA32 firmware console acquisition and framebuffer discovery.

Pooka's Free Software License. Open Firmware requests use a synthetic device tree.
"""
import sys,json,struct,argparse
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from kernel_scalars import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();m=json.loads(a.map.read_text());results=[]
for native in [True,False]:
 k=Kernel((a.reference if native else a.source).read_bytes(),{'entry':0x2005370 if native else m['recovered_2005370'],'_ws_errorf':0x4fe0000});c=k.cpu;events=[]
 def ret(v):
  sp=c.reg_read(UC_X86_REG_ESP);c.reg_write(UC_X86_REG_EAX,v);c.reg_write(UC_X86_REG_EIP,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
 def string(p):return bytes(c.mem_read(p,128)).split(b'\0')[0].decode()
 def service(cpu,pc,size,user):
  sp=c.reg_read(UC_X86_REG_ESP);p=int.from_bytes(c.mem_read(sp+4,4),'little');words=list(struct.unpack('<19I',c.mem_read(p,76)));name=string(words[0]);args=words[3:3+words[1]];out=3+words[1];v=0
  if name=='finddevice':v=4
  elif name=='open':v=0
  elif name=='close':v=0
  elif name=='peer':v={0:1,1:0,2:0}.get(args[0],0)
  elif name=='child':v=2 if args[0]==1 else 0
  elif name=='instance-to-package':v=2
  elif name=='getprop':
   node,prop,buf,length=args;prop=string(prop);payload={b'width':struct.pack('>I',800),b'height':struct.pack('>I',600),b'depth':struct.pack('>I',32),b'linebytes':struct.pack('>I',3200),b'device_type':b'display\0',b'address':struct.pack('>I',0xe0000000)}.get(prop.encode())if node==2 else None
   if node==4 and prop in ['stdout','stdin']:payload=struct.pack('>I',33 if prop=='stdout'else 44)
   if payload is None:v=0xffffffff
   else:c.mem_write(buf,payload[:length]);v=len(payload)
   args=[node,prop,length]
  else:raise AssertionError((name,args))
  events.append((name,args,v));c.mem_write(p+out*4,struct.pack('<I',v));ret(0)
 c.mem_write(0x211e00c,struct.pack('<I',0x3100000));c.mem_write(0x211e004,b'\0');c.mem_write(0x212297c,bytes(4));c.hook_add(UC_HOOK_CODE,service,begin=0x3100000,end=0x3100000)

 def skip(cpu,pc,size,user):ret(0)
 target=0x2023510 if native else m['recovered_2023510'];c.hook_add(UC_HOOK_CODE,skip,begin=target,end=target)
 k.call('entry',0,0x3100000);results.append((events,bytes(c.mem_read(0x2122298,24))))
assert results[0]==results[1]
assert int.from_bytes(results[1][1][:4],'little')==1
print('Native/source firmware chosen-node, console handles, display requests and framebuffer descriptor match.')
