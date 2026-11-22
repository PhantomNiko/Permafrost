#!/usr/bin/env python3
"""Compare i386 volume detection using real filesystem headers and media failures.

Pooka's Free Software License. Block reads are intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from wmfs import make_image,make_wmfs64,BASE
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *

def exercise(path,addresses,native):
 data=make_image(bytes(510)+b'\x55\xaa',bytes(32768),{'Folder/file.txt':b'hello'},4096+BASE)[BASE*512:];headers=[data[:512],make_wmfs64({'hello.txt':b'hello'},4096)[:512],bytes(512),b'WSWP'+bytes(508)]
 for field,value in [(8,0),(12,1024),(16,0),(20,0),(24,0),(44,257),(48,8192)]:
  h=bytearray(headers[0]);struct.pack_into('<I',h,field,value);headers.append(bytes(h))
 results=[]
 for header in headers:
  for size in [0,4096,1]:
   for fail in [False,True]:
    lib=Kernel(path.read_bytes(),addresses,native);c=lib.cpu;events=[]
    def read(c,a,z,u):
     sp=c.reg_read(UC_X86_REG_ESP)
     if native:drive,sector=c.reg_read(UC_X86_REG_ECX),c.reg_read(UC_X86_REG_EDX);dest,count=struct.unpack('<2I',bytes(c.mem_read(sp+4,8)))
     else:drive,sector,dest,count=struct.unpack('<4I',bytes(c.mem_read(sp+4,16)))
     assert drive==0x80 and count==512,(drive,sector,count);events.append((drive,sector,count));c.mem_write(dest,header if sector==2048 else bytes(count));c.reg_write(lib.result,not fail);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
    address=addresses['_load_drive_bytes'];c.hook_add(UC_HOOK_CODE,read,begin=address,end=address);value=lib.call('_storage_detect_volume_filesystem',0x80,2048,size,result_bits=32);results.append((value,events))
 return results

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',required=True,type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference,native,True);s=exercise(a.source,source,False);assert e==s,[(i,x,y)for i,(x,y)in enumerate(zip(e,s))if x!=y];assert e[0][0]==1,e[0];print('Volume detection:',len(e),'native real-header, geometry, bounds, corrupt-header and media-failure comparisons passed.')
