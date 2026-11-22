#!/usr/bin/env python3
"""Compare architecture selection for thin, universal, and damaged Mach-O images.

Pooka's Free Software License. Synthetic executable bytes are never executed.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from macho import pack,universal,ARCHITECTURES

def exercise(binary,addresses,native):
 lib=Kernel(binary,addresses,native);results=[]
 images=[b'',bytes(4),bytes(64)]
 pieces=[pack(bytes(32),architecture=arch)for arch in ARCHITECTURES]
 images+=pieces+[universal([p])for p in pieces]+[universal(pieces),universal(list(reversed(pieces)))]
 damaged=bytearray(universal(pieces));struct.pack_into('>I',damaged,16,0x7fffffff);images.append(bytes(damaged))
 for image in images:
  for cpu in [7,0x1000007,12,0x100000c]:
   for capacity in [0,1,160]:
    lib.cpu.mem_write(0x3000000,image+bytes(4096));lib.cpu.mem_write(0x3100000,b'\xa5'*192);lib.cpu.mem_write(0x3101000,b'\xa5'*16)
    result=lib.call('_macho_select_expected_image',0x3000000,len(image),cpu,0x3101000,0x3101004,0x3100000,capacity,result_bits=8)
    results.append((result,bytes(lib.cpu.mem_read(0x3100000,192)),bytes(lib.cpu.mem_read(0x3101000,16))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',required=True,type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference.read_bytes(),native,True);s=exercise(a.source.read_bytes(),source,False);assert e==s,[(i,x,y)for i,(x,y)in enumerate(zip(e,s))if x!=y];assert any(x[0]for x in e);print('Mach-O selection:',len(e),'native thin, universal, damaged-image, CPU, error-capacity, and guard comparisons passed.')
