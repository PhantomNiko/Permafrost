#!/usr/bin/env python3
"""PFZ1 executable compression. Pooka's Free Software License.

The 16-byte header holds the uncompressed size, payload size and CRC32.
Each control byte describes eight tokens, least significant bit first:
one is a literal; zero is a little-endian back-reference whose upper twelve
bits encode distance minus one and lower four bits encode length minus three.
"""
import argparse
from pathlib import Path
import struct
import zlib

MAGIC = b'PFZ1'
MAX_SIZE = 128 * 1024 * 1024


def unpack(data):
    if len(data) < 16 or data[:4] != MAGIC:
        raise ValueError('invalid PFZ1 header')
    size, used, checksum = struct.unpack_from('<3I', data, 4)
    if size > MAX_SIZE or used != len(data) - 16:
        raise ValueError('invalid PFZ1 size')
    output = bytearray()
    position = 16
    while len(output) < size:
        if position >= len(data):
            raise ValueError('truncated PFZ1 control byte')
        flags = data[position]
        position += 1
        for bit in range(8):
            if len(output) == size:
                break
            if flags & (1 << bit):
                if position >= len(data):
                    raise ValueError('truncated PFZ1 literal')
                output.append(data[position])
                position += 1
            else:
                if position + 2 > len(data):
                    raise ValueError('truncated PFZ1 match')
                token = struct.unpack_from('<H', data, position)[0]
                position += 2
                distance, length = (token >> 4) + 1, (token & 15) + 3
                if distance > len(output) or length > size - len(output):
                    raise ValueError('invalid PFZ1 match')
                for _ in range(length):
                    output.append(output[-distance])
            if len(output) == size and flags >> (bit + 1):
                raise ValueError('nonzero unused PFZ1 control bits')
    if position != len(data) or zlib.crc32(output) != checksum:
        raise ValueError('invalid PFZ1 checksum or trailing payload')
    return bytes(output)


def pack(data):
    if len(data) > MAX_SIZE:
        raise ValueError('PFZ1 input too large')
    output = bytearray()
    recent = {}
    position = 0
    while position < len(data):
        control = len(output)
        output.append(0)
        for bit in range(8):
            if position == len(data):
                break
            key = data[position:position + 3]
            previous = recent.get(key, -4097)
            length = 0
            if len(key) == 3 and 0 < position - previous <= 4096:
                while length < min(18, len(data) - position) and data[previous + length] == data[position + length]:
                    length += 1
            if length >= 3:
                output.extend(struct.pack('<H', ((position - previous - 1) << 4) | (length - 3)))
            else:
                length = 1
                output[control] |= 1 << bit
                output.append(data[position])
            for offset in range(length):
                current = position + offset
                recent[data[current:current + 3]] = current
                expired = current - 4096
                if expired >= 0:
                    old_key = data[expired:expired + 3]
                    if recent.get(old_key) == expired:
                        del recent[old_key]
            position += length
    return MAGIC + struct.pack('<3I', len(data), len(output), zlib.crc32(data)) + output


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('operation', choices=['pack', 'unpack'])
    parser.add_argument('input', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    args.output.write_bytes((pack if args.operation == 'pack' else unpack)(args.input.read_bytes()))
