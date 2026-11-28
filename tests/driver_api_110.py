#!/usr/bin/env python3
"""Compare 1.1 driver descriptors and guarded API admission without hardware.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import struct
from dll import DLL


def description(lib):
    pointer = lib.call('_winterboot_kext_descriptor', result_bits=64 if lib.wide else 32)
    fields = struct.unpack('<2I3Q' if lib.wide else '<5I', lib.cpu.mem_read(pointer, 32 if lib.wide else 20))
    strings = []
    for pointer in fields[2:]:
        text = bytearray()
        while pointer and len(text) < 1024:
            value = lib.cpu.mem_read(pointer + len(text), 1)[0]
            if not value:break
            text.append(value)
        assert len(text) < 1024
        strings.append(bytes(text))
    return fields[:2], strings


def exercise(reference, source):
    results = [description(DLL(path)) for path in [reference, source]]
    assert results[0] == results[1], ('descriptor', results)
    assert results[0][0] == (2, 0), results[0]
    checks = 0
    for magic, version, size in [(0, 1100000, 248), (0x54584b57, 1000000, 248),
                                 (0x54584b57, 1100000, 0), (0x54584b57, 1100000, 247),
                                 (0x54584b57, 1100000, 248), (0x54584b57, 1100000, 512)]:
        values = []
        for path in [reference, source]:
            lib = DLL(path)
            raw = struct.pack('<3I', magic, version, size) + bytes(512 - 12)
            lib.cpu.mem_write(0x2e0000, b'BEFORE!!' + raw + b'AFTER!!!')
            values.append(lib.call('_winterboot_kext_init', 0x2e0008, result_bits=32))
            assert bytes(lib.cpu.mem_read(0x2e0000, len(raw) + 16)) == b'BEFORE!!' + raw + b'AFTER!!!'
        assert values == [0, 0], (magic, version, size, values)
        checks += 1
    for path in [reference, source]:
        assert DLL(path).call('_winterboot_kext_init', 0, result_bits=32) == 0
    print('Driver: native/source descriptor and seven guarded API admission/rejection cases passed.')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    args = parser.parse_args()
    exercise(args.reference, args.source)
