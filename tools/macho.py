#!/usr/bin/env python3
"""Write x86 and ARM MH_PRELOAD and universal Permafrost executables.

Pooka's Free Software License. Addresses are absolute, like the reference
applications. Container generation does not require a Darwin runtime.
"""
import struct


ARCHITECTURES = {'i386': (7, 3), 'x86_64': (0x1000007, 3),
                 'armv7': (12, 9), 'arm64': (0x100000c, 0)}


def thread_command(architecture, entry):
    if architecture == 'i386':
        registers = [0] * 16
        registers[10] = entry
        return struct.pack('<4I16I', 5, 80, 1, 16, *registers)
    if architecture == 'x86_64':
        registers = [0] * 21
        registers[16] = entry
        return struct.pack('<4I21Q', 5, 184, 4, 42, *registers)
    if architecture == 'armv7':
        registers = [0] * 17
        registers[15] = entry & ~1
        registers[16] = 0x20 if entry & 1 else 0
        return struct.pack('<4I17I', 5, 84, 1, 17, *registers)
    if architecture == 'arm64':
        registers = [0] * 33
        registers[32] = entry
        return struct.pack('<4I33Q2I', 5, 288, 6, 68, *registers, 0, 0)
    raise ValueError('unsupported Mach-O architecture')


def pack(image, base=0x200000, entry=None, architecture="i386", kernel=False):
    entry = base if entry is None else entry
    if base < (0x10000 if kernel else 0x200000) or not base <= entry < base + len(image):
        raise ValueError('Mach-O entry must be within application memory')
    size = (len(image) + 4095) & ~4095
    if architecture not in ARCHITECTURES:
        raise ValueError('unsupported Mach-O architecture')
    wide = architecture in ('x86_64', 'arm64')
    cpu, subtype = ARCHITECTURES[architecture]
    segment = struct.pack('<II16s4Q4I' if wide else '<II16s8I',
                          0x19 if wide else 1, 72 if wide else 56, b'__TEXT',
                          base, size, 4096, len(image), 7, 7, 0, 0)
    commands = segment + thread_command(architecture, entry)
    header = struct.pack('<8I', 0xfeedfacf, cpu, subtype, 5, 2, len(commands), 0, 0) if wide else \
             struct.pack('<7I', 0xfeedface, cpu, subtype, 5, 2, len(commands), 0)
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


def universal(images,architectures=None):
    """Pack thin executables in the original big-endian FAT_MAGIC container."""
    if not images or len(images)>16:
        raise ValueError('invalid universal architecture count')
    result=bytearray(4096);records=[];seen=set()
    if architectures is not None and len(architectures)!=len(images):
        raise ValueError('universal architecture count mismatch')
    for index,thin in enumerate(images):
        if architectures is None:cpu,subtype=struct.unpack_from('<II',thin,4)
        else:cpu,subtype=ARCHITECTURES[architectures[index]]
        if cpu in seen:raise ValueError('duplicate universal architecture')
        seen.add(cpu);offset=(len(result)+4095)&~4095
        result.extend(bytes(offset-len(result)));result.extend(thin)
        records.append((cpu,subtype,offset,len(thin),12))
    struct.pack_into('>II',result,0,0xcafebabe,len(records))
    for index,record in enumerate(records):struct.pack_into('>5I',result,8+index*20,*record)
    return bytes(result)


def pack_segments(pieces, entry, architecture='i386'):
    """Write discontiguous source kernel regions without touching the VGA hole."""
    wide=architecture in ('x86_64','arm64')
    if architecture not in ARCHITECTURES or not pieces or len(pieces)>128:
        raise ValueError('invalid executable regions')
    if not any(address<=entry<address+memory for address,memory,data in pieces):
        raise ValueError('entry outside executable regions')
    payload=bytearray();commands=[]
    for address,memory,data in pieces:
        if len(data)>memory or address<0x10000 or address+memory>0x100000000:
            raise ValueError('invalid source kernel region')
        offset=4096+len(payload)
        if wide:command=struct.pack('<II16s4Q4I',0x19,72,b'__TEXT',address,memory,offset,len(data),7,7,0,0)
        else:command=struct.pack('<II16s8I',1,56,b'__TEXT',address,memory,offset,len(data),7,7,0,0)
        commands.append(command);payload.extend(data)
        payload.extend(bytes((-len(payload))&15))
    commands.append(thread_command(architecture,entry))
    command_bytes=b''.join(commands)
    if len(command_bytes)+(32 if wide else 28)>4096:raise ValueError('load commands exceed header page')
    cpu,subtype=ARCHITECTURES[architecture]
    header=struct.pack('<8I',0xfeedfacf,cpu,subtype,5,len(commands),len(command_bytes),0,0) if wide else \
           struct.pack('<7I',0xfeedface,cpu,subtype,5,len(commands),len(command_bytes),0)
    return (header+command_bytes).ljust(4096,b'\0')+payload
