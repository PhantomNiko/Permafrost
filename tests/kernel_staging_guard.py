#!/usr/bin/env python3
"""Compare process staging checksums and the private process-pointer ABI.

Pooka's Free Software License. Uses synthetic process and staging records.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect


def exercise(path,addresses,native):
 lib=Kernel(path.read_bytes(),addresses,native);c=lib.cpu;wide=lib.wide;process=0x3000000;guard=0x3100000;results=[]
 for extent in [0,100,0x5fffffff,0x60000000]:
  length=min(4096,max(0,0x60000000-extent));base=(guard-extent)&0xffffffff
  for corrupt in [-1,0,7,4095]:
   record=bytearray(128);struct.pack_into('<Q'if wide else'<I',record,0x20 if wide else 0x10,extent);struct.pack_into('<I',record,0x38 if wide else 0x1c,base);c.mem_write(process,bytes(record));data=bytearray(4096)
   for index in range(length):
    value=(process>>4)^(index*33)^extent^base;data[index]=((value>>24)^(value>>16)^(value>>8)^value^0xa5)&255
   if corrupt>=0 and length:data[min(corrupt,length-1)]^=1
   c.mem_write(guard,bytes(data));status=lib.call('_scheduler_staging_guard_intact',process,result_bits=8);assert bool(status)==(corrupt<0 or not length),(native,extent,corrupt,status);results.append(status)
 return results


if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in json.loads(a.abi.read_text()).values()};e=exercise(a.reference,native,True);s=exercise(a.source,source,False);assert e==s,(e,s);print('Staging guard:',len(e),'native checksum, corruption, boundary and private pointer comparisons passed.')
