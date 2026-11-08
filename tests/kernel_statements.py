#!/usr/bin/env python3
"""Compare kernel statement control flow and returned scalar values.

Pooka's Free Software License. Reference binaries are test inputs only.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect

CASES=[['mountedUserDevice = 0'],['x = 2','return x+3'],
       ['x = 2','x += 3','return x'],['if true','return 3','end'],
       ['x = {2,4,6}','return x[2]'],
       ['x = 0','for i = 1, 3','x += i','end','return x']]

def execute(binary,addresses,native,lines):
    kernel=Kernel(binary,addresses,native);kernel.error=False
    pointers=[]
    for index,line in enumerate(lines):
        address=0x3100000+index*0x1000
        kernel.cpu.mem_write(address,line.encode()+b'\0');pointers.append(address)
    word='Q'if kernel.wide else'I'
    kernel.cpu.mem_write(0x3120000,struct.pack('<'+word*len(pointers),*pointers))
    kernel.cpu.mem_write(0x3130000,bytes(256))
    result=kernel.call('_ws_execute_block',0x3120000,len(lines),0x3130000,
                       0x3130040,0x3130080,result_bits=8)
    read=lambda address,size:bytes(kernel.cpu.mem_read(address,size))
    return (result,kernel.error,read(0x3130000,8 if kernel.wide else 4),
            read(0x3130040,4),read(0x3130080,12))

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference',type=Path);parser.add_argument('kernel',type=Path)
    parser.add_argument('--abi',type=Path,required=True);parser.add_argument('--map',type=Path,required=True)
    args=parser.parse_args();reference=args.reference.read_bytes();metadata,_=inspect(reference)
    native={name:address for address,name in metadata['symbols']}
    abi=json.loads(args.abi.read_text());symbols=json.loads(args.map.read_text())
    source={item['original']:symbols.get(item['symbol'],symbols.get('_'+item['symbol']))for item in abi.values()}
    actual_binary=args.kernel.read_bytes()
    for lines in CASES:
        expected=execute(reference,native,True,lines)
        actual=execute(actual_binary,source,False,lines)
        assert expected[0]==1 and not expected[1],('invalid reference fixture',lines,expected)
        assert expected==actual,(lines,expected,actual)
    print('%d native/source kernel statement cases passed.'%len(CASES))

if __name__=='__main__':main()
