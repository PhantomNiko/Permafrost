#!/usr/bin/env python3
"""Check kernel C fill operations across alignments, sizes, and boundary bytes.

Pooka's Free Software License. Executes target code only in CPU emulation.
"""
import argparse,json
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect

def exercise(reference,kernel,abi,mapping):
 metadata,_=inspect(reference.read_bytes());names=json.loads(mapping.read_text());entries=json.loads(abi.read_text());addresses={v['original']:names.get('_'+v['symbol'],names.get(v['symbol']))for v in entries.values()};addresses['fill']=names.get('_pf_memset',names.get('pf_memset'));assert addresses['fill'];lib=Kernel(kernel.read_bytes(),addresses);base=0x3000000;cases=0
 for alignment in range(16):
  for size in [0,1,2,3,4,7,8,9,15,16,17,31,32,33,127,128,129,1023,1024,4095,4096,16303]:
   for value in [0,1,0xa5,0xff,0x1234,0xffffffff]:
    original=bytes((i*37+11)&255 for i in range(16400));lib.cpu.mem_write(base,original);pointer=base+alignment+16;result=lib.call('fill',pointer,value,size,result_bits=64 if lib.wide else 32);expected=bytearray(original);expected[alignment+16:alignment+16+size]=bytes([value&255])*size
    assert result==pointer and bytes(lib.cpu.mem_read(base,len(original)))==bytes(expected),(alignment,size,value);cases+=1
 assert lib.call('fill',0,0xa5,0,result_bits=64 if lib.wide else 32)==0
 print('Kernel memory: %d alignment, length, fill, and boundary comparisons passed.'%(cases+1))
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('kernel',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.kernel,a.abi,a.map)
