#!/usr/bin/env python3
"""Compare ARM32 WinterScript scalar conversion through its native bit ABI.

Pooka's Free Software License. Reference binaries are independent test inputs.
"""
import argparse
from pathlib import Path
import struct
from dll import DLL


def exercise(reference, source):
    libraries = [DLL(path, api_base=0x40010800, poison_stack=True)
                 for path in (reference, source)]
    cases = []
    for value in [-2147483648, -16777217, -65537, -1, 0, 1, 65537,
                  16777217, 2147483647]:
        cases.append((2, struct.pack('<i', value), 4))
    for bits in [0, 0x80000000, 1, 0x80000001, 0x007fffff, 0x00800000,
                 0x3e800000, 0x3fc00000, 0xbfc00000, 0x4b800001,
                 0x7f7fffff, 0xff7fffff, 0x7f800000, 0xff800000,
                 0x7fc12345, 0xffc12345, 0x7f812345]:
        cases.append((3, struct.pack('<I', bits), 8))
    for value in [0, 1, 2, 127, 128, 255]:
        cases.append((4, bytes([value]), 12))
    symbol = '__ZN12WinterScript18fastScalarToDoubleERKNS_15FastScalarValueE'
    for kind, payload, offset in cases:
        raw = bytearray(b'\xa5' * 32)
        raw[8] = kind
        raw[8 + offset:8 + offset + len(payload)] = payload
        results = []
        for library in libraries:
            library.cpu.mem_write(0x3500000, bytes(raw))
            results.append(library.call(symbol, 0x3500008, result_bits=64))
            assert bytes(library.cpu.mem_read(0x3500000, 32)) == raw
        assert results[0] == results[1], (kind, payload.hex(), results)
    print('ARM32 WinterScript: %d native/source scalar conversions passed.' % len(cases))


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    args = parser.parse_args()
    exercise(args.reference, args.source)
