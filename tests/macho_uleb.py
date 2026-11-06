#!/usr/bin/env python3
"""Compare native/source Mach-O relocation integer decoding.

Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect


def encode(value):
    result = bytearray()
    while value >= 128:
        result.append((value & 127) | 128)
        value >>= 7
    result.append(value)
    return bytes(result)


def decode(kernel, data, position=0):
    width = 8 if kernel.wide else 4
    kernel.cpu.mem_write(0x3000000, data or b'\0')
    kernel.cpu.mem_write(0x3002000, position.to_bytes(width, 'little'))
    kernel.cpu.mem_write(0x3003000, bytes.fromhex('efcdab8967452301'))
    status = kernel.call('decode', 0x3000000, len(data), 0x3002000, 0x3003000)
    cursor = int.from_bytes(kernel.cpu.mem_read(0x3002000, width), 'little')
    value = int.from_bytes(kernel.cpu.mem_read(0x3003000, 8), 'little')
    return bool(status & 1), cursor, value


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--source-map', type=Path, required=True)
    args = parser.parse_args()
    original, recovered = args.reference.read_bytes(), args.source.read_bytes()
    metadata, _ = inspect(original)
    arch = {7: 'i386', 0x1000007: 'x86_64', 12: 'armv7', 0x100000c: 'arm64'}[metadata['cpu']]
    address = dict((name, value) for value, name in metadata['symbols'])['_macho_read_uleb128']
    if arch in ('i386', 'x86_64'):
        name = json.loads((Path('kernel') / arch / 'abi.json').read_text())[f'{address:x}']['symbol']
    else:
        name = json.loads((Path('kernel') / arch / 'profile.json').read_text())['functions'][f'{address:x}']
    mapping = json.loads(args.source_map.read_text())
    target = mapping.get(name, mapping.get('_' + name))
    if not isinstance(target, int):
        raise SystemExit('missing source relocation decoder')
    reference = Kernel(original, {'decode': address, '_ws_errorf': 0x4ff1000}, True)
    source = Kernel(recovered, {'decode': target, '_ws_errorf': 0x4ff1000})
    numbers = [0, 1, 2, 127, 128, 300, 16384, 0xffffffff, 0x100000000,
               0x7fffffffffffffff, 0xffffffffffffffff]
    for value in numbers:
        data = encode(value)
        expected = decode(reference, data)
        assert expected == (True, len(data), value), (arch, 'reference', value, expected)
        actual = decode(source, data)
        assert actual == expected, (arch, value, actual, expected)
    malformed = [b'', b'\x80', b'\x80' * 10 + b'\x01']
    for data in malformed:
        expected, actual = decode(reference, data), decode(source, data)
        assert actual == expected, (arch, data.hex(), actual, expected)
    data = b'\xcc' + encode(300)
    expected, actual = decode(reference, data, 1), decode(source, data, 1)
    assert actual == expected == (True, len(data), 300)
    print('%s: %d native/source relocation integer cases passed.' %
          (arch, len(numbers) + len(malformed) + 1))


if __name__ == '__main__':
    main()
