#!/usr/bin/env python3
"""Compare i386 Tayga process binding and executable-path classification.

Pooka's Free Software License. No process or hardware is executed.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
PATHS=[None,b'',b'Tayga',b'Tayga.app/Contents/Permafrost/Tayga',b'/Tayga.app/Contents/Permafrost/Tayga',b'prefix/TAYGA.APP/CONTENTS/PERMAFROST/TAYGA',b'Tayga.app/Contents/Permafrost/Tayga.bad',b'CompilerProbe.app/Contents/Permafrost/CompilerProbe']
def exercise(binary,addresses,native):
 results=[]
 for path in PATHS:
  for process in [0,1,99]:
   lib=Kernel(binary,addresses,native);c=lib.cpu;c.mem_write(0x3000000,(path or b'')+b'\0');pointer=0 if path is None else 0x3000000
   c.mem_write(0x20d9d48,bytes(8));c.mem_write(0x20d9d65,bytes(8));c.mem_write(0x20de0ec,bytes(112));classified=lib.call('_tayga_source_path_is_tayga',pointer,result_bits=8);lib.call('_tayga_note_process_started',process,pointer,result_bits=32);results.append((classified,bytes(c.mem_read(0x20d9d48,12)),bytes(c.mem_read(0x20d9d65,8)),bytes(c.mem_read(0x20de0ec,112))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference.read_bytes(),native,True);s=exercise(a.source.read_bytes(),source,False);assert e==s,[(i,x,y)for i,(x,y)in enumerate(zip(e,s))if x!=y];print('Tayga process binding: 24 native process IDs, paths, case, null, suffix, state, and guard comparisons passed.')
