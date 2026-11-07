#!/usr/bin/env python3
"""Resolve adjacent Mach-O stubs through their indirect symbol indices.

Pooka's Free Software License.
"""
from pathlib import Path
import struct
import sys
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from dylib import inspect


def fixture(wide):
    header_size, segment_size, section_size = (32, 72, 80) if wide else (28, 56, 68)
    commands_size = segment_size + section_size + 24 + 80
    symbols_offset = header_size + commands_size
    symbols_size = 3 * (16 if wide else 12)
    strings = b'\0_malloc\0_free\0_llroundl\0'
    strings_offset = symbols_offset + symbols_size
    indirect_offset = (strings_offset + len(strings) + 3) & -4
    binary = bytearray(indirect_offset + 16)
    struct.pack_into('<7I', binary, 0, 0xfeedfacf if wide else 0xfeedface,
                     0x1000007 if wide else 7, 3, 6, 3, commands_size, 0)
    segment = header_size
    struct.pack_into('<II16s', binary, segment, 0x19 if wide else 1,
                     segment_size + section_size, b'__TEXT')
    struct.pack_into('<4Q' if wide else '<4I', binary, segment + 24, 0, 0x2000, 0, len(binary))
    struct.pack_into('<I', binary, segment + (64 if wide else 48), 1)
    section = segment + segment_size
    struct.pack_into('<16s16s', binary, section, b'__stubs', b'__TEXT')
    struct.pack_into('<QQ' if wide else '<II', binary, section + 32, 0x1000, 16)
    struct.pack_into('<III', binary, section + (64 if wide else 56), 8, 0, 4)
    command = section + section_size
    struct.pack_into('<6I', binary, command, 2, 24, symbols_offset, 3, strings_offset, len(strings))
    command += 24
    struct.pack_into('<II', binary, command, 0xb, 80)
    struct.pack_into('<II', binary, command + 56, indirect_offset, 4)
    for index, name in enumerate((b'_malloc', b'_free', b'_llroundl')):
        offset = strings.index(name)
        struct.pack_into('<IBBHQ' if wide else '<IBBHI', binary,
                         symbols_offset + index * (16 if wide else 12), offset, 1, 0, 0, 0)
    binary[strings_offset:strings_offset + len(strings)] = strings
    struct.pack_into('<4I', binary, indirect_offset, 2, 0, 1, 0x80000000)
    return binary, indirect_offset


def main():
    for wide in (False, True):
        binary, indirect = fixture(wide)
        assert inspect(binary)['stubs'] == [
            dict(name='_llroundl', address=0x1000),
            dict(name='_malloc', address=0x1004),
            dict(name='_free', address=0x1008)]
        struct.pack_into('<I', binary, indirect, 99)
        try:
            inspect(binary)
        except ValueError:
            pass
        else:
            raise AssertionError('invalid indirect symbol accepted')
    print('32/64-bit stubs resolve reordered symbols and reject invalid indices.')


if __name__ == '__main__':
    main()
