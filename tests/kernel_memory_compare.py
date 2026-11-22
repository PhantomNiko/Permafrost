#!/usr/bin/env python3
"""Compare i386 memcmp at aligned and unaligned lengths and mismatch positions.

Pooka's Free Software License. No hardware boundary is used.
"""
import argparse,json
from pathlib import Path
from kernel_scalars import Kernel
from dll import DLL
from native import inspect

def exercise(path,addresses,native):
 lib=Kernel(path.read_bytes(),addresses,native);c=lib.cpu;results=[]
 for size in [0,1,2,3,4,7,8,9,15,16,17,31,32,33,64,257]:
  for left_offset in range(4):
   for right_offset in range(4):
    for mismatch in sorted(set([-1,0,size//2,max(0,size-1)])):
     left=0x3000000+left_offset;right=0x3001000+right_offset;data=bytes((i*97+213)&255 for i in range(max(1,size)));other=bytearray(data)
     if mismatch>=0 and mismatch<size:other[mismatch]^=0xff
     c.mem_write(left,data);c.mem_write(right,bytes(other));value=DLL.call(lib,'_memcmp',left,right,size,result_bits=32);expected=next((a-b for a,b in zip(data[:size],other[:size])if a!=b),0)&0xffffffff
     assert value==expected,(native,size,left_offset,right_offset,mismatch,value,expected);results.append(value)
 return results

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',required=True,type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference,native,True);s=exercise(a.source,source,False);assert e==s;print('Memory comparison:',len(e),'native alignment, size, unsigned-byte, mismatch and equality cases passed.')
