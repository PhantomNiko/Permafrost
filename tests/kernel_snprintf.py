#!/usr/bin/env python3
"""Compare i386 kernel formatting of paths, precision, width and output guards.

Pooka's Free Software License. No filesystem is accessed.
"""
import argparse,json
from pathlib import Path
from kernel_scalars import Kernel
from dll import DLL
from native import inspect
FORMATS=[(b'%s/%.*s',[0x3003000,3,0x3004000]),(b'%.*s',[3,0x3004000]),(b'%.3s',[0x3004000]),(b'%*.*s',[8,3,0x3004000]),(b'%s',[0x3004000]),(b'%08x',[0x1234]),(b'%d',[-42]),(b'%u',[0xffffffff]),(b'%c',[65]),(b'%%',[])]
def exercise(binary,addresses):
 lib=Kernel(binary,addresses);c=lib.cpu;results=[];assert lib.cpu_type==7
 c.mem_write(0x3003000,b'Tayga\0');c.mem_write(0x3004000,b'bin/example\0')
 for format,args in FORMATS:
  for capacity in [0,1,4,32,128]:
   c.mem_write(0x3000000,format+b'\0');c.mem_write(0x3001000,b'\xa5'*160);value=DLL.call(lib,'_snprintf',0x3001000,capacity,0x3000000,*[v&0xffffffff for v in args],result_bits=32);results.append((value,bytes(c.mem_read(0x3001000,160))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference.read_bytes(),native);s=exercise(a.source.read_bytes(),source);assert e==s,[(FORMATS[i//5][0],x[0],x[1][:40],y[0],y[1][:40])for i,(x,y)in enumerate(zip(e,s))if x!=y][:8];print('Kernel formatting:',len(e),'native path, precision, width, numeric, capacity and guard comparisons passed.')
