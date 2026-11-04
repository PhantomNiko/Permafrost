#!/usr/bin/env python3
"""Small ELF64/x86-64 static linker for freestanding Permafrost code.

Supports allocated PROGBITS/NOBITS sections and absolute and PC-relative RELA
relocations. Unsupported inputs fail explicitly rather than producing a
partially linked executable. No platform linker or GNU objcopy is needed.
"""
import struct


def align(value, alignment):
    alignment = max(1, alignment)
    return (value + alignment - 1) // alignment * alignment


class Object:
    def __init__(self, blob):
        if blob[:7] not in (b'\x7fELF\x02\x01\x01', b'\x7fELF\x01\x01\x01'):
            raise ValueError('expected little-endian x86-64 ELF')
        self.ilp32 = blob[4] == 1
        header = struct.unpack_from('<16sHHIIIIIHHHHHH' if self.ilp32 else '<16sHHIQQQIHHHHHH', blob)
        if header[1:3] != (1, 62):
            raise ValueError('expected relocatable x86-64 object')
        table, entry_size, count, strings = header[6], header[11], header[12], header[13]
        self.sections = [dict(zip(('name_offset', 'type', 'flags', 'address', 'offset',
                                   'size', 'link', 'info', 'alignment', 'entry_size'),
                                  struct.unpack_from('<10I' if self.ilp32 else '<IIQQQQIIQQ', blob, table + i * entry_size)))
                         for i in range(count)]
        names_section = self.sections[strings]
        names = blob[names_section['offset']:names_section['offset'] + names_section['size']]
        self.symbol_tables = {}
        for index, section in enumerate(self.sections):
            section['name'] = names[section['name_offset']:].split(b'\0')[0].decode()
            section['data'] = (bytes(section['size']) if section['type'] == 8 else
                               blob[section['offset']:section['offset'] + section['size']])
        for index, section in enumerate(self.sections):
            if section['type'] != 2:
                continue
            strings = self.sections[section['link']]['data']
            symbols = []
            for pos in range(0, section['size'], 16 if self.ilp32 else 24):
                if self.ilp32:
                    name, value, size, info, other, shndx = struct.unpack_from('<IIIBBH', section['data'], pos)
                else:
                    name, info, other, shndx, value, size = struct.unpack_from('<IBBHQQ', section['data'], pos)
                symbols.append(dict(name=strings[name:].split(b'\0')[0].decode(), value=value,
                                    size=size, info=info, section=shndx))
            self.symbol_tables[index] = symbols


def link(objects, base=0x200000, entry='main', placements=None, shim=True, relocations=None, externals=None):
    output = bytearray(b'\xe9\0\0\0\0' if shim else b'')
    addresses = {}
    symbols = dict(externals or {})
    placements = placements or {}
    for object_index, obj in enumerate(objects):
        for index, section in enumerate(obj.sections):
            if not section['flags'] & 2 or not section['size']:
                continue
            if section['type'] not in (1, 8):
                raise ValueError('unsupported allocated section ' + section['name'])
            address = placements.get(section['name'], base + align(len(output), section['alignment']))
            offset = address - base
            if offset < len(output):
                raise ValueError('overlapping section ' + section['name'])
            output.extend(bytes(offset - len(output)))
            addresses[(object_index, index)] = address
            output.extend(section['data'])
        for table in obj.symbol_tables.values():
            for symbol in table:
                if symbol['info'] >> 4 not in (1, 2) or symbol['section'] == 0:
                    continue
                address = (symbol['value'] if symbol['section'] == 0xfff1 else
                           addresses[(object_index, symbol['section'])] + symbol['value'])
                if symbol['name'] in symbols:
                    raise ValueError('duplicate symbol ' + symbol['name'])
                symbols[symbol['name']] = address
    for object_index, obj in enumerate(objects):
        for section in obj.sections:
            if section['type'] != 4 or (object_index, section['info']) not in addresses:
                continue
            table = obj.symbol_tables[section['link']]
            target = addresses[(object_index, section['info'])]
            for pos in range(0, section['size'], 12 if obj.ilp32 else 24):
                offset, info, addend = struct.unpack_from('<IIi' if obj.ilp32 else '<QQq', section['data'], pos)
                symbol_index = info >> (8 if obj.ilp32 else 32)
                symbol = table[symbol_index]
                kind = info & (255 if obj.ilp32 else 0xffffffff)
                if kind not in (1, 2, 4, 10, 11, 24):
                    raise ValueError('unsupported x86-64 relocation %d' % kind)
                if symbol_index == 0:
                    value = 0  # STN_UNDEF represents an absolute numeric operand
                elif symbol['section'] == 0:
                    if symbol['name'] not in symbols:
                        raise ValueError('undefined symbol ' + symbol['name'])
                    value = symbols[symbol['name']]
                elif symbol['section'] == 0xfff1:
                    value = symbol['value']
                else:
                    value = addresses[(object_index, symbol['section'])] + symbol['value']
                where = target + offset - base
                value += addend - (target + offset if kind in (2, 4, 24) else 0)
                width = 8 if kind in (1, 24) else 4
                if kind in (2, 4, 11) and not -(1 << 31) <= value < (1 << 31):
                    raise ValueError('signed x86-64 relocation overflow')
                if kind == 10 and not 0 <= value <= 0xffffffff:
                    raise ValueError('unsigned x86-64 relocation overflow')
                struct.pack_into('<Q' if width == 8 else '<I', output, where,
                                 value & ((1 << (width * 8)) - 1))
                if relocations is not None and kind in (1, 10, 11):
                    relocations.append((target + offset, width))

    if shim:
        if entry not in symbols:
            raise ValueError('entry symbol not found: ' + entry)
        struct.pack_into('<i', output, 1, symbols[entry] - base - 5)
    return bytes(output), symbols, addresses
