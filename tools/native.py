#!/usr/bin/env python3
"""Inspect universal i386/x86-64/ARM32/ARM64 Mach-O reference executables.

Pooka's Free Software License. This module is also used by source recovery;
normal builds do not require the reference executables.
"""
import struct

CPUS = {'i386': 7, 'x86_64': 0x1000007, 'armv7': 12, 'arm64': 0x100000c}


def slices(binary):
    if binary[:4] != b'\xca\xfe\xba\xbe':
        return {struct.unpack_from('<I', binary, 4)[0]: binary}
    count = struct.unpack_from('>I', binary, 4)[0]
    if count > 16 or 8 + count * 20 > len(binary):
        raise ValueError('invalid universal header')
    result = {}
    for index in range(count):
        cpu, subtype, offset, size, alignment = struct.unpack_from('>5I', binary, 8 + index * 20)
        if offset + size > len(binary) or cpu in result:
            raise ValueError('invalid universal slice')
        result[cpu] = binary[offset:offset + size]
    return result


def inspect(binary):
    magic, cpu, subtype, kind, count, size, flags = struct.unpack_from('<7I', binary)
    wide = magic == 0xfeedfacf
    if magic not in (0xfeedface, 0xfeedfacf) or cpu not in CPUS.values():
        raise ValueError('unsupported Mach-O architecture')
    header = 32 if wide else 28
    if count > 4096 or header + size > len(binary):
        raise ValueError('invalid load-command extent')
    position, pieces, sections, symbols, data_symbols, entry = header, [], [], [], [], None
    for _ in range(count):
        command, length = struct.unpack_from('<2I', binary, position)
        if length < 8 or position + length > header + size:
            raise ValueError('invalid load command')
        if command in (1, 0x19):
            address, memory, offset, used = struct.unpack_from('<4Q' if wide else '<4I', binary, position + 24)
            if used > memory or offset + used > len(binary):
                raise ValueError('invalid segment extent')
            segment_name = binary[position + 8:position + 24].split(b'\0', 1)[0]
            if segment_name != b'__PAGEZERO':
                pieces.append((address, memory, binary[offset:offset + used]))
            number = struct.unpack_from('<I', binary, position + (64 if wide else 48))[0]
            start, stride = (72, 80) if wide else (56, 68)
            if start + number * stride > length:
                raise ValueError('invalid section table')
            for index in range(number):
                p = position + start + index * stride
                name = binary[p:p + 16].split(b'\0', 1)[0].decode('ascii')
                a, n = struct.unpack_from('<2Q' if wide else '<2I', binary, p + 32)
                sections.append((name, a, n))
        elif command == 2:
            offset, number, strings, strings_size = struct.unpack_from('<4I', binary, position + 8)
            stride = 16 if wide else 12
            if offset + number * stride > len(binary) or strings + strings_size > len(binary):
                raise ValueError('invalid symbol table')
            for index in range(number):
                ix, tag, section, description, address = struct.unpack_from(
                    '<IBBHQ' if wide else '<IBBHI', binary, offset + index * stride)
                if ix >= strings_size:
                    raise ValueError('invalid symbol string')
                name = binary[strings + ix:strings + strings_size].split(b'\0', 1)[0].decode('utf-8')
                if tag & 0xe == 0xe:
                    if section == 1:
                        symbols.append((address, name))
                    else:
                        data_symbols.append((address, name))
        elif command == 5:
            flavor, words = struct.unpack_from('<2I', binary, position + 8)
            thread_states = {7: (1, 16, 56, '<I'), 0x1000007: (4, 42, 144, '<Q'),
                             12: (1, 17, 76, '<I'), 0x100000c: (6, 68, 272, '<Q')}
            expected_flavor, expected_words, pc_offset, pc_format = thread_states[cpu]
            if (flavor, words) != (expected_flavor, expected_words):
                raise ValueError('unsupported thread state')
            if pc_offset + struct.calcsize(pc_format) > length:
                raise ValueError('truncated thread state')
            entry = struct.unpack_from(pc_format, binary, position + pc_offset)[0]
        position += length
    base = min(a for a, n, data in pieces if n)
    end = max(a + n for a, n, data in pieces)
    if end - base > 128 * 1024 * 1024:
        raise ValueError('unbounded executable memory')
    memory = bytearray(end - base)
    for address, length, data in pieces:
        memory[address - base:address - base + len(data)] = data
    return dict(cpu=cpu, base=base, end=end, entry=entry, sections=sections,
                symbols=symbols, data_symbols=data_symbols), bytes(memory)
