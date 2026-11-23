#!/usr/bin/env python3
"""Compare PolynyaFS metadata with the original Stage3 validators.

Pooka's Free Software License. Original boot code is an optional test input.
"""
import argparse
from pathlib import Path
import struct
import sys
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from pfs import Image, decode_entry, crc32c, BLOCK_SIZE
from native_boot import BootX64


def exercise(stage3, path):
    raw = path.read_bytes()
    image = Image(raw)
    lib = BootX64(stage3)
    source, result = 0x3000000, 0x3100000
    for base in [image.base, image.base + image.total * BLOCK_SIZE]:
        header = raw[base:base + BLOCK_SIZE]
        lib.cpu.mem_write(source, header)
        assert lib.call('_pfs_header_decode', source, result, result_bits=32) == 0
        decoded = bytes(lib.cpu.mem_read(result, 0x778))
        assert struct.unpack_from('<HH', decoded) == image.version
        assert struct.unpack_from('<4Q', decoded, 0x130) == (image.total, image.total, image.table_first, image.table_count)
        assert struct.unpack_from('<Q', decoded, 0x150)[0] == image.root
    count = 0
    for name, entry in image.entries():
        record = raw[entry.record_offset:entry.record_offset + 512]
        lib.cpu.mem_write(source, record)
        assert lib.call('_pfs_directory_entry_decode', source, result, result_bits=32) == 0, name
        decoded = bytes(lib.cpu.mem_read(result, 0x130))
        assert decoded[0] == entry.kind and decoded[1] == len(entry.name.encode())
        assert decoded[0x30:0x30 + decoded[1]].decode() == entry.name
        assert struct.unpack_from('<QQ', decoded, 8) == (entry.first, entry.size)
        if count < 12:
            corrupt = bytearray(record)
            corrupt[4] ^= 1
            lib.cpu.mem_write(source, bytes(corrupt))
            assert lib.call('_pfs_directory_entry_decode', source, result, result_bits=32) == 6
            try:
                decode_entry(bytes(corrupt))
            except ValueError:
                pass
            else:
                raise AssertionError('accepted corrupt directory metadata')
        count += 1
    assert crc32c(b'123456789') == 0xe3069283
    print('PolynyaFS:', count, 'native directory records and both volume headers match; corrupted metadata is rejected.')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('stage3', type=Path)
    parser.add_argument('image', type=Path)
    args = parser.parse_args()
    exercise(args.stage3, args.image)
