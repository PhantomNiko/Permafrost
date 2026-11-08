#!/usr/bin/env python3
"""Compare scalar formatting through the complete native owned-string API.

Pooka's Free Software License. Reference kernels are test inputs only.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
CASES=[(0,0),(1,0),(1,5),(1,-7),(1,-2147483648),(1,2147483647),
       (2,0.0),(2,3.5),(2,-0.25),(5,0),(5,1),(6,0x1234),(6,0xffffffff)]
def exercise(binary,addresses,native):
 results=[]
 for kind,value in CASES:
  k=Kernel(binary,addresses,native);data=bytearray(64);struct.pack_into('<I',data,0,kind)
  if kind==2:struct.pack_into('<f',data,8,value)
  else:struct.pack_into('<I',data,4,value&0xffffffff)
  k.cpu.mem_write(0x3003000,bytes(data));k.cpu.mem_write(0x3004000,bytes(8))
  status=k.call('_ws_value_to_owned_string',0x3003000,0x3004000,result_bits=8)
  pointer=int.from_bytes(k.cpu.mem_read(0x3004000,8 if k.wide else 4),'little')
  assert status==1 and pointer,(kind,value,status,pointer)
  text=bytes(k.cpu.mem_read(pointer,512)).split(b'\0')[0];results.append((status,text))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('kernel',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args()
 reference=a.reference.read_bytes();m,_=inspect(reference);native={name:address for address,name in m['symbols']};abi=json.loads(a.abi.read_text());mapping=json.loads(a.map.read_text());source={item['original']:mapping.get(item['symbol'],mapping.get('_'+item['symbol']))for item in abi.values()}
 expected=exercise(reference,native,True);actual=exercise(a.kernel.read_bytes(),source,False)
 assert expected==actual,list(zip(CASES,expected,actual))
 print('Kernel value text: thirteen native integer, float, boolean, pointer, and empty-value comparisons passed.')
