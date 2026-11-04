#!/usr/bin/env python3
"""Write the i386 MH_PRELOAD format accepted by the Permafrost 0.6 loader.

Pooka's Free Software License. Addresses are absolute, like the reference
applications. No Apple linker or Darwin runtime is involved.
"""
import struct


def pack(image, base=0x200000, entry=None):
    entry = base if entry is None else entry
    if base < 0x200000 or not base <= entry < base + len(image):
        raise ValueError('Mach-O entry must be within application memory')
    size = (len(image) + 4095) & ~4095
    segment = struct.pack('<II16s8I', 1, 56, b'__TEXT', base, size,
                          4096, len(image), 7, 7, 0, 0)
    registers = [0] * 16
    registers[10] = entry
    thread = struct.pack('<4I16I', 5, 80, 1, 16, *registers)
    commands = segment + thread
    header = struct.pack('<7I', 0xfeedface, 7, 3, 5, 2, len(commands), 0)
    return (header + commands).ljust(4096, b'\0') + image


def segments(binary):
    """Read loadable segments and entry for independent tooling and tests."""
    if len(binary) < 28:
        raise ValueError('truncated Mach-O header')
    magic, cpu, subtype, kind, count, total, flags = struct.unpack_from('<7I', binary)
    if (magic, cpu, kind) != (0xfeedface, 7, 5) or 28 + total > len(binary):
        raise ValueError('expected bounded i386 MH_PRELOAD')
    pos, result, entry = 28, [], None
    for _ in range(count):
        if pos + 8 > 28 + total:
            raise ValueError('truncated load command')
        cmd, size = struct.unpack_from('<2I', binary, pos)
        if size < 8 or pos + size > 28 + total:
            raise ValueError('invalid load command')
        if cmd == 1:
            if size < 56:
                raise ValueError('short segment command')
            _, _, name, address, memory, offset, length, *_ = struct.unpack_from('<II16s8I', binary, pos)
            if length > memory or offset + length > len(binary) or address + memory > 0xffffffff:
                raise ValueError('invalid segment bounds')
            result.append((address, memory, binary[offset:offset + length]))
        elif cmd == 5:
            if size < 80 or struct.unpack_from('<2I', binary, pos + 8) != (1, 16):
                raise ValueError('invalid i386 thread state')
            entry = struct.unpack_from('<I', binary, pos + 56)[0]
        pos += size
    if pos != 28 + total or not result or entry is None:
        raise ValueError('incomplete Mach-O executable')
    return result, entry
