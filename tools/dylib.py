#!/usr/bin/env python3
"""Mach-O dynamic-library metadata and relocation streams.

Used by source recovery and source-built library packaging.
Pooka's Free Software License.
"""
import struct


def uleb(data, position):
    value, shift = 0, 0
    while position < len(data) and shift < 70:
        byte = data[position]
        position += 1
        value |= (byte & 127) << shift
        if not byte & 128:
            return value, position
        shift += 7
    raise ValueError('invalid ULEB128 operand')


def encode_uleb(value):
    if value < 0:
        raise ValueError('negative ULEB128 operand')
    result = bytearray()
    while value >= 128:
        result.append((value & 127) | 128)
        value >>= 7
    result.append(value)
    return bytes(result)


def inspect(binary):
    if len(binary) < 28:
        raise ValueError('truncated Mach-O library')
    magic, cpu, subtype, kind, count, length, flags = struct.unpack_from('<7I', binary)
    if magic not in (0xfeedface, 0xfeedfacf) or kind != 6:
        raise ValueError('expected MH_DYLIB')
    wide = magic == 0xfeedfacf
    header = 32 if wide else 28
    if length > len(binary) - header or count > 4096:
        raise ValueError('invalid Mach-O command table')
    result = dict(cpu=cpu, subtype=subtype, width=8 if wide else 4, flags=flags,
                  commands=[], segments=[], sections=[], exports=[], imports=[], dependencies=[])
    position, table = header, None
    for _ in range(count):
        if position + 8 > header + length:
            raise ValueError('truncated Mach-O command')
        command, size = struct.unpack_from('<II', binary, position)
        if size < 8 or position + size > header + length:
            raise ValueError('invalid Mach-O command')
        result['commands'].append((command, position, size))
        if command in (1, 0x19):
            segment_wide = command == 0x19
            name = binary[position+8:position+24].split(b'\0')[0].decode('ascii')
            address, memory, offset, used = struct.unpack_from('<4Q' if segment_wide else '<4I', binary, position+24)
            if used > memory or offset + used > len(binary):
                raise ValueError('invalid library segment')
            segment = dict(name=name, address=address, memory=memory, offset=offset, used=used)
            result['segments'].append(segment)
            number = struct.unpack_from('<I', binary, position+(64 if segment_wide else 48))[0]
            start, stride = (72, 80) if segment_wide else (56, 68)
            if start + stride * number > size:
                raise ValueError('invalid library sections')
            for index in range(number):
                p = position + start + stride * index
                section_name = binary[p:p+16].split(b'\0')[0].decode('ascii')
                a, n = struct.unpack_from('<QQ' if segment_wide else '<II', binary, p+32)
                result['sections'].append((section_name, a, n))
        elif command in (0x22, 0x80000022):
            if size != 48:
                raise ValueError('invalid dyld info command')
            fields = struct.unpack_from('<10I', binary, position+8)
            result['dyld'] = dict(zip(('rebase_offset','rebase_size','bind_offset','bind_size',
                                      'weak_offset','weak_size','lazy_offset','lazy_size',
                                      'export_offset','export_size'), fields))
            for i in range(0, 10, 2):
                if fields[i] + fields[i+1] > len(binary):
                    raise ValueError('dyld stream exceeds file')
        elif command == 2:
            if size != 24:
                raise ValueError('invalid symbol table command')
            table = struct.unpack_from('<4I', binary, position+8)
        elif command in (0xc, 0x80000018, 0x8000001f):
            offset = struct.unpack_from('<I', binary, position+8)[0]
            if not 24 <= offset < size:
                raise ValueError('invalid dylib dependency name')
            result['dependencies'].append(binary[position+offset:position+size].split(b'\0')[0].decode('utf-8'))
        position += size
    if position != header + length:
        raise ValueError('inconsistent Mach-O command length')
    if table:
        offset, number, strings, string_size = table
        stride = 16 if wide else 12
        if offset + number * stride > len(binary) or strings + string_size > len(binary):
            raise ValueError('invalid library symbol table')
        for index in range(number):
            values = struct.unpack_from('<IBBHQ' if wide else '<IBBHI', binary, offset+index*stride)
            name_offset, tag, section, description, address = values
            if name_offset >= string_size:
                raise ValueError('invalid library symbol name')
            name = binary[strings+name_offset:strings+string_size].split(b'\0')[0].decode('utf-8')
            if tag & 0xe0 or not tag & 1:
                continue
            if tag & 0xe == 0xe:
                result['exports'].append(dict(name=name, address=address, section=section, weak=bool(description & 0x80)))
            elif tag & 0xe == 0:
                result['imports'].append(dict(name=name, ordinal=description >> 8, weak=bool(description & 0x40)))
    return result


def rebase_locations(binary, metadata=None):
    metadata = metadata or inspect(binary)
    info = metadata.get('dyld', {})
    start, length = info.get('rebase_offset', 0), info.get('rebase_size', 0)
    data = binary[start:start+length]
    position, segment, offset, kind = 0, None, 0, 1
    locations = []
    def emit():
        if segment is None or segment >= len(metadata['segments']):
            raise ValueError('rebase has no valid segment')
        width = metadata['width'] if kind == 1 else 4
        if kind not in (1, 2) or offset + width > metadata['segments'][segment]['memory']:
            raise ValueError('unsupported or out-of-range rebase')
        locations.append((metadata['segments'][segment]['address'] + offset, width))
    while position < len(data):
        byte = data[position]
        position += 1
        opcode, immediate = byte & 0xf0, byte & 15
        if opcode == 0:
            if byte or any(data[position:]):
                raise ValueError('invalid rebase terminator')
            break
        if opcode == 0x10:
            kind = immediate
        elif opcode == 0x20:
            segment = immediate
            offset, position = uleb(data, position)
        elif opcode == 0x30:
            delta, position = uleb(data, position)
            offset += delta
        elif opcode == 0x40:
            offset += immediate * metadata['width']
        elif opcode in (0x50, 0x60):
            count = immediate
            if opcode == 0x60:
                count, position = uleb(data, position)
            if count > len(binary):
                raise ValueError('unbounded rebase count')
            for _ in range(count):
                emit()
                offset += metadata['width']
        elif opcode == 0x70:
            delta, position = uleb(data, position)
            emit()
            offset += metadata['width'] + delta
        elif opcode == 0x80:
            count, position = uleb(data, position)
            skip, position = uleb(data, position)
            if count > len(binary):
                raise ValueError('unbounded rebase count')
            for _ in range(count):
                emit()
                offset += metadata['width'] + skip
        else:
            raise ValueError('unknown dyld rebase opcode')
    if len(set(locations)) != len(locations):
        raise ValueError('duplicate rebase location')
    return locations
