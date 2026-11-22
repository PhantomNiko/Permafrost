#!/usr/bin/env python3
"""Compare i386 resident path lookup and actual-case output buffers.

Pooka's Free Software License. Heap initialization is intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
def exercise(binary,addresses,native):
 results=[]
 for path in [None,b'',b'Sample.app',b'sample.APP',b'/sample.app',b'Sample.app/Contents/Permafrost/Tayga',b'sample.app/contents/permafrost/TAYGA',b'missing']:
  for out in [0,0x3002000]:
   lib=Kernel(binary,addresses,native);c=lib.cpu;records=bytearray(544)
   for i,name in enumerate([b'Sample.app',b'Sample.app/Contents/Permafrost/Tayga']):records[i*272:i*272+len(name)]=name
   c.mem_write(0x3000000,bytes(records));context=bytearray(188);struct.pack_into('<4I',context,0,0x3000000,2,2,0);context[184]=1;c.mem_write(0x2130724,bytes(context));c.mem_write(0x3001000,(path or b'')+b'\0');c.mem_write(0x3002000,b'\xa5'*257)
   def zero(c,a,z,u):
    c.reg_write(lib.result,0);sp=c.reg_read(UC_X86_REG_ESP);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
   a=addresses['_wm_probe_heap_init'];c.hook_add(UC_HOOK_CODE,zero,begin=a,end=a)
   result=lib.call('_fs_resolve_existing_path_ignore_case',0 if path is None else 0x3001000,out,result_bits=8);results.append((result,bytes(c.mem_read(0x3002000,257))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',required=True,type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference.read_bytes(),native,True);s=exercise(a.source.read_bytes(),source,False);assert e==s,[(i,x,y)for i,(x,y)in enumerate(zip(e,s))if x!=y];assert any(x[0]for x in e);print('Existing paths: 16 native case, root-prefix, null, missing-path, output-buffer, and guard comparisons passed.')
