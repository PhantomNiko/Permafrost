#!/usr/bin/env python3
"""Compare ARM32 PFS allocation-entry validation and reserved link sentinels.

Pooka's Free Software License. Reference binaries remain external inputs.
"""
import argparse,json,random,struct
from pathlib import Path
from kernel_scalars import Kernel
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path)
a=p.parse_args();mapping=json.loads(a.map.read_text());entry=0x40449298
libs=[Kernel(a.reference.read_bytes(),{'entry':entry,'_ws_errorf':0x4fe0000},True),Kernel(a.source.read_bytes(),{'entry':mapping['_recovered_%x'%entry],'_ws_errorf':0x4fe0000})]
mask=(1<<64)-1;magic=0x4b4e494c54414650;cases=[]
for current,total in [(0,2134),(1,2134),(2133,2134),(2134,2134),(2135,2134),(0xffffffff,0x100000001),(0x100000000,0x100000001),(mask-1,mask)]:
 for link in [0,1,current,current+1,total-1,total,mask,*range(mask-4100,mask-4090),*range(mask-10,mask)]:
  for first in [0,1,current,magic]:cases.append((current,total,first,link&mask))
rng=random.Random(344)
for i in range(3000):cases.append((rng.getrandbits(64),rng.getrandbits(64),rng.getrandbits(64),rng.getrandbits(64)))
for i,(current,total,first,link)in enumerate(cases):
 results=[]
 for lib in libs:
  lib.cpu.mem_write(0x3000000,struct.pack('<QQ',first,link));results.append(lib.call('entry',current&0xffffffff,current>>32,total&0xffffffff,total>>32,0x3000000,result_bits=32))
 assert results[0]==results[1],(i,hex(current),hex(total),hex(first),hex(link),results)
print('PFS allocation entries: %d native/source comparisons preserve sentinels, bounds and 64-bit carries.'%len(cases))
