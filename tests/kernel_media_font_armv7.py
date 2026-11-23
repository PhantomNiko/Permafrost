#!/usr/bin/env python3
"""Compare media font images, opacity conversion and output guards.

Pooka's Free Software License. Exception frame registration is isolated;
empty-text exceptions are outside this raster comparison.
"""
from pathlib import Path
import sys,json,struct
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from kernel_font import FontKernel
from ttf_library import fixture
from native import inspect
from unicorn import UC_HOOK_CODE
import argparse
p=argparse.ArgumentParser(description='Compare native/source ARM32 media font rasters; Pooka\'s Free Software License.')
p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args()
ref=a.reference.read_bytes();src=a.source.read_bytes();m=json.loads(a.map.read_text());meta,_=inspect(ref);assert meta['cpu']==12;names={n:x for x,n in meta['symbols']};allresults=[]
for native in [True,False]:
 lib=FontKernel(ref if native else src,None if native else m,names);c=lib.cpu;address=lambda x:x if native else m['_recovered_%x'%x]
 lib.library.exports['media']=address(0x40489698)
 for original in [0x4046e5f8,0x4046e610]:
  target=address(original);c.hook_add(UC_HOOK_CODE,lambda *args:lib.leave(),begin=target,end=target)
 handle=lib.load(fixture(False),16);results=[]
 for text in [b'A',b'AAAA',b'ABCD']:
  for opacity in [0,1,128,255,0xffffffff]:
   c.mem_write(0x3001000,text+b'\0');c.mem_write(0x3002000,b'\xa5'*56)
   result=lib.library.call('media',handle,0x3001000,21,82,173,opacity,0x3002010,result_bits=32)
   image=struct.unpack('<6I',c.mem_read(0x3002010,24));data=bytes(c.mem_read(image[0],image[2]))if image[0]else b''
   assert bytes(c.mem_read(0x3002000,16))==b'\xa5'*16 and bytes(c.mem_read(0x3002028,16))==b'\xa5'*16
   lib.verify();results.append((result,image[1:],data))
 allresults.append(results)
assert allresults[0]==allresults[1],[(i,x[:2],y[:2])for i,(x,y)in enumerate(zip(*allresults))if x!=y]
print('15 native/source media font rasters, descriptors and canaries match.')
