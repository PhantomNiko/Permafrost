#!/usr/bin/env python3
"""Compare x64 pointer packets and firmware request transport with native code.

Pooka's Free Software License. Controller probing and firmware calls are intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *

def exercise(path,addresses,native):
 results=[]
 for owned,ready in [(owned,ready)for owned in [False,True]for ready in [False,True]]:
  for packet in [(1,0,200,100,0,0,1000,600),(1,1,0,0,0,0,32767,32767),(2,2,0,0,5,0xfffffffd,0,0),(0,0,0,0,0,0,0,0)]:
   l=Kernel(path.read_bytes(),addresses,native);assert l.cpu_type==0x1000007;c=l.cpu;context=0x3000000;bridge=0x3010000;request=0x3020000;out=0x3030000;events=[];data=bytearray(0x2150);struct.pack_into('<III',data,0,0x33454657,5,0x2138);struct.pack_into('<II',data,0x114,bridge,request);
   if owned:struct.pack_into('<I',data,8,0x2150);struct.pack_into('<IIQI',data,0x2138,0x34424650,1,bridge,1);c.mem_write(0x226ad50,struct.pack('<Q',1))
   c.mem_write(context,bytes(data));c.mem_write(0x2109008,struct.pack('<Q',context));c.mem_write(out,b'\xa5'*48)
   def finish(value):
    sp=c.reg_read(UC_X86_REG_RSP);c.reg_write(l.result,value);c.reg_write(l.pc,int.from_bytes(c.mem_read(sp,8),'little'));c.reg_write(UC_X86_REG_RSP,sp+8)
   def probe(c,a,z,u):finish(0)
   def firmware(c,a,z,u):
    pointer=c.reg_read(UC_X86_REG_RDI);assert pointer==request,('firmware request argument',native,hex(pointer),hex(request));words=struct.unpack('<8I',bytes(c.mem_read(pointer,32)));assert words[0]==7 and words[4]==out and words[5]==32,words;events.append((words[0],words[4],words[5]));
    if ready:c.mem_write(out,struct.pack('<8I',*packet))
    finish(ready)
   a=addresses['_platform_qemu_pointer_probe'];c.hook_add(UC_HOOK_CODE,probe,begin=a,end=a);c.mem_write(bridge,b'\xc3');c.hook_add(UC_HOOK_CODE,firmware,begin=bridge,end=bridge);status=l.call('_kernel_driver_pointer_state'if owned and not native else'_wm_platform_pointer_state',out,result_bits=32);results.append((status,bytes(c.mem_read(out,48)),events))
 return results

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',required=True,type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference,native,True);s=exercise(a.source,source,False);assert e==s,[(i,x,y)for i,(x,y)in enumerate(zip(e,s))if x!=y];print('Pointer bridge:',len(e),'native x64 request, packet, absent-event and output-guard comparisons passed.')
