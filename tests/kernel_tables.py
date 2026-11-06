#!/usr/bin/env python3
"""Compare kernel table mutation, sorting and concatenation with the reference.

Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import struct
from kernel_scalars import Kernel
from native import inspect


def exercise(binary, addresses, native=False, plain=False):
    kernel = Kernel(binary, addresses, native)
    kernel.expression('{}' if plain else '{3,1,2}')
    width = 8 if kernel.wide else 4
    size = 64 if kernel.wide else 36
    array_offset = (48 if kernel.wide else 28) if plain else (40 if kernel.wide else 24)
    array = bytes(kernel.cpu.mem_read(0x3003000, size))
    pointer = int.from_bytes(array[array_offset:array_offset + width], 'little')
    results = []
    operations = ([('insert', [3]), ('insert', [1]), ('insert', [2, 2]),
                   ('remove', [1]), ('sort', []), ('concat', ['-'])] if plain else
                  [('insert', [4]), ('remove', [2]), ('sort', []), ('concat', ['-'])])
    for method, values in operations:
        arguments = bytearray(array + bytes(size * len(values)))
        for index, number in enumerate(values, 1):
            if isinstance(number, int):
                struct.pack_into('<Iif', arguments, size * index, 1, number, float(number))
            elif isinstance(number, str):
                struct.pack_into('<I', arguments, size * index, 3)
                offset = size * index + (16 if kernel.wide else 12)
                arguments[offset:offset + width] = (0x3008000).to_bytes(width, 'little')
                kernel.cpu.mem_write(0x3008000, b'-\0')
        kernel.cpu.mem_write(0x3000000, ('table.' + method).encode() + b'\0')
        kernel.cpu.mem_write(0x3004000, bytes(arguments))
        kernel.cpu.mem_write(0x3006000, bytes(size))
        kernel.error = False
        status = kernel.call('_ws_call_builtin', 0, 0x3000000, 0x3004000,
                             1 + len(values), 0x3006000)
        assert status and not kernel.error, method
        value = bytes(kernel.cpu.mem_read(0x3006000, size))
        count = 0 if plain else int.from_bytes(kernel.cpu.mem_read(pointer + 8, width), 'little')
        data_offset = 24 if kernel.wide else 16
        data = int.from_bytes(kernel.cpu.mem_read(pointer + data_offset, width), 'little')
        assert count <= 4, method
        elements = [bytes(kernel.cpu.mem_read(data + index * size, 12)) for index in range(count)]
        text = b''
        if value[0] == 3:
            offset = 16 if kernel.wide else 12
            address = int.from_bytes(value[offset:offset + width], 'little')
            text = bytes(kernel.cpu.mem_read(address, 128)).split(b'\0')[0]
        results.append((value[:12], elements, text))
    assert results[-1][2] == (b'1-2' if plain else b'2-3-4'), results
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
    for plain in (False, True):
        expected = exercise(raw, native, native=True, plain=plain)
        actual = exercise(args.kernel.read_bytes(), source, plain=plain)
        assert actual == expected, (plain, actual, expected)
    print('Kernel tables: insertion, removal, sorting and concatenation match the native interpreter.')


if __name__ == '__main__':
    main()
