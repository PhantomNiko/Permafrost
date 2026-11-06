#!/usr/bin/env python3
"""Compare kernel loops, branches and x64 decay stepping with the native interpreter.

Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import struct
from kernel_scalars import Kernel
from native import inspect


def step(binary, addresses, index):
    kernel = Kernel(binary, addresses)
    lines = ['while true', 'answer=2', 'other=3', 'end']
    for position, line in enumerate(lines):
        address = 0x3003000 + position * 1024
        kernel.cpu.mem_write(0x3000000 + position * 8, struct.pack('<Q', address))
        kernel.cpu.mem_write(address, line.encode() + b'\0')
    kernel.cpu.mem_write(0x3001000, bytes(128))
    kernel.error = False
    status = kernel.call('_ws_decay_execute_single_statement', 0x3000000, len(lines),
                         index, 0x3001000, 0x3001010, 0x3001020)
    return status, bytes(kernel.cpu.mem_read(0x3001000, 24)), kernel.error



def execute(binary, addresses, lines, variable, native=False):
    kernel = Kernel(binary, addresses, native)
    word = 8 if kernel.wide else 4
    for position, line in enumerate(lines):
        address = 0x3003000 + position * 1024
        kernel.cpu.mem_write(0x3000000 + position * word, address.to_bytes(word, 'little'))
        kernel.cpu.mem_write(address, line.encode() + b'\0')
    kernel.cpu.mem_write(0x3001000, bytes(128))
    kernel.error = False
    status = kernel.call('_ws_execute_block', 0x3000000, len(lines),
                         0x3001000, 0x3001010, 0x3001020)
    result = (status, bytes(kernel.cpu.mem_read(0x3001000, 24)), kernel.error,
              kernel.expression(variable))
    return result


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
    cases = [(['answer=0', 'for i=1,6', 'answer+=i', 'end'], 'answer', 21),
             (['branch=0', 'for i=1,6', 'if i==2', 'branch+=1', 'elseif i==4',
               'branch+=10', 'break', 'else', 'branch+=100', 'end', 'end'], 'branch', 211),
             (['answer=0','for idx,value in ipairs({2,4,6})','answer+=idx+value','end'],'answer',18),
             (['map={alpha:1,beta:2}','answer=0','for key,value in pairs(map)','answer+=len(key)+value','end'],'answer',12),
             (['map={alpha:1,beta:2}','key,value=next(map)','key2,value2=next(map,key)',
               'answer=(key=="alpha" and value==1 and key2=="beta" and value2==2) and 1 or 0'],'answer',1),
             (['chunk=load("return 8,9")','first,second=chunk()','answer=first*10+second'],'answer',89),
             (['array={2,4}','key,value=next(array)','key2,value2=next(array,key)',
               'answer=key2*10+value2'],'answer',24),
             (['chunk=load("return 8,9","named")','first,second=chunk()',
               'answer=first*10+second'],'answer',89)]
    for lines, variable, number in cases:
        expected = execute(raw, native, lines, variable, native=True)
        assert expected[0] and not expected[2], expected
        assert struct.unpack('<i', expected[3][4][4:8])[0] == number, expected
        actual = execute(args.kernel.read_bytes(), source, lines, variable)
        assert actual == expected, (lines, actual, expected)
    if metadata['cpu'] != 0x1000007:
        print('Kernel control: numeric loops and nested elseif/break match the native interpreter.')
        return
    for index in (1, 2):
        expected = step(raw, native, index)
        assert expected[0] and not expected[2], expected
        assert step(args.kernel.read_bytes(), source, index) == expected, index
    print('Kernel control: loops, branches and two nonzero decay line positions match the native interpreter.')


if __name__ == '__main__':
    main()
