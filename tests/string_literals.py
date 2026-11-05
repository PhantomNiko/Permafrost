#!/usr/bin/env python3
"""Compare WinterScript string decoding, including its value ABI, with native code.

Requires Unicorn. Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import struct
from integer_literals import Machine


def decode(machine,text):
    success,kind=machine.parse(text)
    if not success:return False,None
    if kind!=3:raise AssertionError('decoded value is not a string')
    wide=machine.cpu_type in (0x1000007,0x100000c)
    raw=bytes(machine.cpu.mem_read(machine.data+4096+(16 if wide else 12),8 if wide else 4))
    pointer=int.from_bytes(raw,'little')
    if not pointer:raise AssertionError('successful string has no storage')
    data=bytearray()
    for i in range(512):
        value=machine.cpu.mem_read(pointer+i,1)[0]
        if value==0:return True,bytes(data)
        data.append(value)
    raise AssertionError('decoded string is not terminated')


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('native',type=Path);parser.add_argument('source',type=Path)
    parser.add_argument('--source-map',type=Path,required=True)
    args=parser.parse_args()
    from native import inspect
    metadata,_=inspect(args.native.read_bytes())
    address=next(a for a,n in metadata['symbols']if n=='_ws_decode_string_literal')
    name='recovered_%x'%address;mapping=json.loads(args.source_map.read_text())
    source_address=mapping.get(name,mapping.get('_'+name))
    if source_address is None:raise ValueError('missing source string decoder')
    reference=Machine(args.native.read_bytes(),address,False)
    source=Machine(args.source.read_bytes(),source_address,True)
    cases=['""','"hello"','"a b"',"'single'",'"line\\nend"','"tab\\tend"',
           '"quote\\\"slash\\\\"','"100% ready"','"héllo"','"\\x41"',
           '"PF-ARM-BOOT-PASS"','plain','"missing',"'mismatch\"",'"'+('a'*255)+'"']
    for text in cases:
        expected=decode(reference,text);actual=decode(source,text)
        if actual!=expected:raise AssertionError(repr(text)+': source '+repr(actual)+', native '+repr(expected))
    print('String literals: %d native/source cases passed.'%len(cases))


if __name__=='__main__':main()
