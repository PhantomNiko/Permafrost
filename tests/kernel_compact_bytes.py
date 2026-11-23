#!/usr/bin/env python3
"""Compare compact byte labels, thresholds, truncation and memory pairs.

Pooka's Free Software License. Kernel binaries remain external inputs.
"""
import argparse,json
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args()
meta,_=inspect(a.reference.read_bytes());assert meta['cpu']==0x100000c;names={n:x for x,n in meta['symbols']};m=json.loads(a.map.read_text());selected=['_format_compact_bytes','_format_ram_with_slow_headroom'];libraries=[Kernel(a.reference.read_bytes(),{n:names[n]for n in selected}|{'_ws_errorf':0x4fe0000}),Kernel(a.source.read_bytes(),{n:m['_recovered_%x'%names[n]]for n in selected}|{'_ws_errorf':0x4fe0000})]
values=[0,1,1023,1024,1025,0xfffff,0x100000,0x100001,(1<<64)-1]
for whole in [1,2,8,9,10,11,0xffffffff,0x100000001]:
 for fraction in [0,1,0x6666666,0x6666667,0x6666668,0x1fffffff,0x20000000,0x3fffffff]:values.append((whole<<30)|fraction)
cases=0
for value in values:
 for capacity in [0,1,4,8,16,32]:
  for null in [False,True]:
   results=[]
   for library in libraries:
    c=library.cpu;c.mem_write(0x3000000,b'\xa5'*96);status=library.call('_format_compact_bytes',value,0 if null else 0x3000010,capacity,result_bits=64);results.append((status,bytes(c.mem_read(0x3000000,96))))
   assert results[0]==results[1],('byte label',value,capacity,null,results);cases+=1
for fast in values[:33]:
 for slow in [0,1,0x400,0x140000000]:
  results=[]
  for library in libraries:
   c=library.cpu;c.mem_write(0x3000000,b'\xa5'*96);status=library.call('_format_ram_with_slow_headroom',fast,slow,0x3000010,result_bits=64);results.append((status,bytes(c.mem_read(0x3000000,96))))
  assert results[0]==results[1],('memory pair',fast,slow,results);cases+=1
print('Compact byte formatting: %d native/source labels, pair outputs and buffer canaries match.'%cases)
