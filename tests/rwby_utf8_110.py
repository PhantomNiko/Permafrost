#!/usr/bin/env python3
"""Compare native x64 Rwby UTF-8 length across vector and scalar boundaries.

Pooka's Free Software License. Reference binaries are independent test inputs.
"""
import argparse
import json
from pathlib import Path
import random
import struct
from dll import DLL


def exercise(reference, source):
    rng = random.Random(110)
    cases = [b'', b'Hello', '雪❄️'.encode(), 'Permafrost 雪'.encode()]
    cases += [bytes([value]) * count for value in [0, 65, 127, 128, 191, 192, 224, 255]
              for count in [1, 7, 8, 9, 15, 16, 17, 31, 32, 33, 63, 64, 65]]
    cases += [bytes(rng.randrange(256) for _ in range(count)) for count in range(130)]
    libs = [DLL(reference, api_base=0x280800), DLL(source, api_base=0x280800)]
    mapping = json.loads((source.parent / 'source-map.json').read_text())
    for index, lib in enumerate(libs):
        lib.exports['length'] = lib.base + (mapping['_recovered_100488c0'] if index else 0x488c0)
    for case in cases:
        results = []
        for lib in libs:
            value = bytearray(40)
            value[0] = 4
            struct.pack_into('<QQQQ', value, 8, 0x3501000, len(case), len(case), 4)
            lib.cpu.mem_write(0x3500000, bytes(value))
            lib.cpu.mem_write(0x3501000, case + b'\0')
            lib.cpu.mem_write(0x3502000, struct.pack('<QQQ', 0x3500000, 1, 1))
            lib.cpu.mem_write(0x3503000, b'\xa5' * 56)
            lib.call('length', 0x3503008, 0, 0, 0x3502000)
            out = bytes(lib.cpu.mem_read(0x3503000, 56))
            assert out[:8] == out[-8:] == b'\xa5' * 8
            assert out[8] == 1 and struct.unpack_from('<Q', out, 40)[0] == 1
            results.append(struct.unpack_from('<Q', out, 16)[0])
        expected = sum((value & 0xc0) != 0x80 for value in case)
        assert results == [expected, expected], (case, results, expected)
    print('Rwby x64: %d native/source UTF-8 length cases passed.' % len(cases))


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    args = parser.parse_args()
    exercise(args.reference, args.source)
