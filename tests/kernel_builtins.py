#!/usr/bin/env python3
"""Compare kernel math and typed formatting with the reference.

Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import struct
from kernel_scalars import Kernel
from native import inspect


def exercise(binary, addresses, native=False):
    results=[]
    cases=[('math.abs',[-7]),('math.abs',[-7.5]),('math.floor',[3.9]),
           ('math.ceil',[3.1]),('math.min',[3,1,4]),('math.max',[3,1,4]),
           ('math.sqrt',[81]),('math.log',[1]),('math.sin',[0.5]),
           ('math.cos',[0.5]),('math.rad',[90]),
           ('string.format',['%s-%d','ws',3]),
           ('string.format',['%.2f',1.25])]
    for name,values in cases:
        kernel=Kernel(binary,addresses,native)
        size=64 if kernel.wide else 36
        arguments=bytearray(size*len(values))
        for index,value in enumerate(values):
            offset=index*size
            if isinstance(value,str):
                address=0x3010000+index*1024
                kernel.cpu.mem_write(address,value.encode()+b'\0')
                struct.pack_into('<I',arguments,offset,3)
                width=8 if kernel.wide else 4
                offset+=16 if kernel.wide else 12
                arguments[offset:offset+width]=address.to_bytes(width,'little')
            else:
                struct.pack_into('<Iif',arguments,offset,1 if isinstance(value,int) else 2,int(value),float(value))
        kernel.cpu.mem_write(0x3000000,name.encode()+b'\0')
        kernel.cpu.mem_write(0x3004000,bytes(arguments))
        kernel.error=False
        try:
            status=kernel.call('_ws_call_builtin',0,0x3000000,0x3004000,len(values),0x3006000)
        except Exception as error:
            raise AssertionError((native,name,values)) from error
        assert status and not kernel.error,(name,values)
        value=bytes(kernel.cpu.mem_read(0x3006000,size))
        text=b''
        if value[0]==3:
            start=16 if kernel.wide else 12
            width=8 if kernel.wide else 4
            pointer=int.from_bytes(value[start:start+width],'little')
            text=bytes(kernel.cpu.mem_read(pointer,128)).split(b'\0')[0]
        results.append((name,values,value[:12],text))
    return results


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    for name in ('reference', 'kernel', 'map'):
        parser.add_argument('--' + name, type=Path, required=True)
    mapping = parser.add_mutually_exclusive_group(required=True)
    mapping.add_argument('--abi', type=Path)
    mapping.add_argument('--profile', type=Path)
    args = parser.parse_args()
    raw = args.reference.read_bytes()
    metadata, _ = inspect(raw)
    native = {name: address for address, name in metadata['symbols']}
    symbols = json.loads(args.map.read_text())
    if args.abi:
        entries = json.loads(args.abi.read_text())
        source = {row['original']: symbols.get(row['symbol'], symbols.get('_' + row['symbol']))
                  for row in entries.values()}
    else:
        functions = json.loads(args.profile.read_text())['functions']
        source = {name: symbols.get(functions.get(f'{address:x}', ''),
                                   symbols.get('_' + functions.get(f'{address:x}', '')))
                  for name, address in native.items()}
    expected=exercise(raw,native,native=True)
    actual=exercise(args.kernel.read_bytes(),source)
    differences=[(result,reference) for result,reference in zip(actual,expected) if result!=reference]
    assert not differences,differences
    print('Kernel builtins: math and typed string formatting match the native interpreter.')



if __name__ == '__main__':
    main()
