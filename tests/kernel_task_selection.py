#!/usr/bin/env python3
"""Compare i386 task selection, process filtering, priority, and slot outputs.

Pooka's Free Software License. Synthetic task records are never executed.
"""
import argparse,json,struct,itertools
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
def exercise(binary,addresses,native):
 results=[]
 for filter in [0,0x3000000,0x3001000]:
  for wait in [0,1,99]:
   for case in range(8):
    lib=Kernel(binary,addresses,native);c=lib.cpu;records=bytearray(184*32)
    for slot in range(3):
     offset=slot*184;records[offset]=1 if case&(1<<slot)else 0;records[offset+6]=[128,64,128][slot];struct.pack_into('<3I',records,offset+8,[9,3,3][slot],[3,2,1][slot],[1,99,25][slot]);struct.pack_into('<I',records,offset+0x74,0x3000000 if slot!=2 else 0x3001000)
    c.mem_write(0x21468fc,bytes(records));c.mem_write(0x21ec4e0,struct.pack('<I',wait));c.mem_write(0x3002000,b'\xa5'*16);result=lib.call('_scheduler_take_task_locked',filter,0x3002000,result_bits=32);results.append((result,bytes(c.mem_read(0x3002000,16)),bytes(c.mem_read(0x21468fc,184*3)),bytes(c.mem_read(0x22452a8,48))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference.read_bytes(),native,True);s=exercise(a.source.read_bytes(),source,False);assert e==s,[(i,x,y)for i,(x,y)in enumerate(zip(e,s))if x!=y][:3];print('Task selection: 72 native process filters, wait IDs, active sets, priorities, slot outputs, and state comparisons passed.')
