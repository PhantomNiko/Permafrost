#!/usr/bin/env python3
"""Compare Tayga virtual-path normalization and output boundaries.

Pooka's Free Software License. No filesystem or device is accessed.
"""
import argparse,json
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
PATHS=[None,b'',b'/',b'.',b'..',b'one/../two',b'a//b/./',b'\\root\\a',b'../../file',b'/one/../../two',b'a'*240,b'a'*241]
CWDS=[None,b'',b'/',b'/root',b'/home/example']
def exercise(binary,addresses,native):
 results=[]
 for path in PATHS:
  for cwd in CWDS:
   lib=Kernel(binary,addresses,native);c=lib.cpu;c.mem_write(0x3000000,(path or b'')+b'\0');c.mem_write(0x3001000,(cwd or b'')+b'\0');c.mem_write(0x3002000,b'\xa5'*273);lib.call('_tayga_normalize_virtual_path',0 if path is None else 0x3000000,0 if cwd is None else 0x3001000,0x3002000,result_bits=32);results.append(bytes(c.mem_read(0x3002000,273)))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference.read_bytes(),native,True);s=exercise(a.source.read_bytes(),source,False);assert e==s,[(PATHS[i//len(CWDS)],CWDS[i%len(CWDS)],x,y)for i,(x,y)in enumerate(zip(e,s))if x!=y][:4];print('Tayga paths:',len(e),'native absolute, relative, parent, separator, cwd, capacity and guard comparisons passed.')
