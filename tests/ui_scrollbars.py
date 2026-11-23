#!/usr/bin/env python3
"""Compare TerrorUI 1.1 scrollbar layout, point mapping and theme roles.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import struct
from dll import DLL

p=argparse.ArgumentParser(description=__doc__)
p.add_argument('reference',type=Path);p.add_argument('source',type=Path)
p.add_argument('--api-base',type=lambda value:int(value,0))
a=p.parse_args()
def exercise(path):
 lib=DLL(path,api_base=a.api_base,poison_stack=True);c=lib.cpu;results=[]
 results.append(tuple(lib.call('_terror_ui_colour',role,result_bits=32)for role in range(75)))
 models=[None,(0,100,25,10),(0,100,120,1),(-100,100,-25,0),(9,2,4,12),(0,0,0,1)]
 for rect in [(0,0,100,80),(-7,12,31,32),(0,0,0,0),(4,9,-1,-2)]:
  for vertical in models:
   for horizontal in models[:3]:
    for pointer,model in [(0x3000000,vertical),(0x3001000,horizontal)]:
     c.mem_write(pointer,struct.pack('<4i',*model)if model else bytes(16))
    c.mem_write(0x3001ff0,b'\xa5'*(188+32))
    pointers=[0x3000000 if vertical else 0,0x3001000 if horizontal else 0,0x3002000]
    args=list(struct.unpack('<2Q',struct.pack('<4i',*rect)))if lib.wide else [x&0xffffffff for x in rect]
    lib.call('_terror_ui_scrollbars_layout',*args,*pointers)
    data=bytes(c.mem_read(0x3002000,188));results.append(data)
    assert bytes(c.mem_read(0x3001ff0,16))==bytes(c.mem_read(0x3002000+188,16))==b'\xa5'*16
    for layout,model in [(0x3002000+20,vertical),(0x3002000+104,horizontal)]:
     c.mem_write(0x3003000,struct.pack('<4i',*model)if model else bytes(16))
     for coordinate,grab in [(-20,0),(0,0),(17,3),(70,-2),(1000,4)]:
      results.append(lib.call('_terror_ui_scrollbar_value_from_point',layout,0x3003000 if model else 0,coordinate&0xffffffff,grab&0xffffffff,result_bits=32))
 return results
native,source=exercise(a.reference),exercise(a.source)
assert native==source,next((i,n,s)for i,(n,s)in enumerate(zip(native,source))if n!=s)
print('TerrorUI scrollbars: 75 theme roles, 72 guarded layouts and 720 point mappings match.')
