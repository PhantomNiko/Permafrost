#!/usr/bin/env python3
"""Compare Tayga formatted-output buffers with the reference kernel.

Pooka's Free Software License. Calls use each target's native variadic ABI.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect

def exercise(binary,addresses,native):
 lib=Kernel(binary,addresses,native);results=[]
 formats=[(b'',[]),(b'plain',[]),(b'%s',[(0x3003000,4)]),(b'%s:%d/%u %c',[(0x3003000,4),(-7&0xffffffff,4),(42,4),(65,4)]),(b'%08x %llu',[(0x123,4),(0x1234567887654321,8)]),(b'null=%s',[(0,4)]),(None,[]),(b'%s',[(0x3004000,4)])]
 lib.cpu.mem_write(0x3003000,b'path\0');lib.cpu.mem_write(0x3004000,b'x'*700+b'\0')
 for fmt,args in formats:
  lib.cpu.mem_write(0x3002000,(fmt or b'')+b'\0')
  for cap in [0,1,2,8,64,512,1024]:
   for prefix in [b'',b'prior']:
    out=0x3001000;initial=(prefix+b'\0').ljust(2048,b'\xa5');lib.cpu.mem_write(out,initial)
    fixed=[out,cap,0 if fmt is None else 0x3002000]
    if lib.cpu_type==0x100000c:
     lib.cpu.mem_write(0x4fe0000,b''.join(struct.pack('<Q',v)for v,w in args));lib.call('_tayga_output_appendf',*fixed)
    elif lib.cpu_type==12:
     words=[]
     for v,w in args:words.extend(struct.unpack('<'+'I'*(w//4),v.to_bytes(w,'little')))
     lib.call('_tayga_output_appendf',*fixed,*words)
    else:raise ValueError('This fixture currently covers the two ARM variadic ABIs')
    results.append(bytes(lib.cpu.mem_read(out,2048)))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};expected=exercise(a.reference.read_bytes(),native,True);actual=exercise(a.source.read_bytes(),source,False);assert expected==actual,[i for i,(e,s)in enumerate(zip(expected,actual))if e!=s];print('Tayga formatted output: 112 native comparisons of arguments, truncation, prefixes, and guard bytes passed.')
