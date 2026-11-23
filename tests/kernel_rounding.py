#!/usr/bin/env python3
"""Compare native kernel floor and ceiling, including signed fractions.

Pooka's Free Software License.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from ttf_library import floating
from unicorn.x86_const import UC_X86_REG_XMM0

p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args()
meta,_=inspect(a.reference.read_bytes());assert meta['cpu']==0x1000007;names={n:x for x,n in meta['symbols']};m=json.loads(a.map.read_text());libraries=[Kernel(a.reference.read_bytes(),{name:names[name]for name in ['_floor','_ceil']}|{'_ws_errorf':0x4fe0000}),Kernel(a.source.read_bytes(),{name:m['recovered_%x'%names[name]]for name in ['_floor','_ceil']}|{'_ws_errorf':0x4fe0000})]
values=[-0.0,0.0,1e-300,-1e-300,float('inf'),float('-inf'),float('nan'),2147483647.75,-2147483648.75,1e15,-1e15]
values += [integer+fraction for integer in range(-128,129)for fraction in [-0.875,-0.5,-0.125,0.0,0.125,0.5,0.875]]
cases=0
for name in ['_floor','_ceil']:
 for value in values:
  results=[]
  for library in libraries:
   floating(library,value,True);library.call(name);results.append(library.cpu.reg_read(UC_X86_REG_XMM0)&((1<<64)-1))
  assert results[0]==results[1],(name,value,[hex(x)for x in results]);cases+=1
print('Kernel rounding: %d native/source floor and ceiling representations match.'%cases)
