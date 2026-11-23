#!/usr/bin/env python3
"""Read PolynyaFS 0.3 volumes. Pooka's Free Software License.

The block, allocation-chain and directory-record formats are recovered from
1.1 Stage3. Mount links are returned as records and never followed implicitly.
"""
import argparse
from dataclasses import dataclass
from pathlib import Path
import struct

BLOCK_SIZE = 0x20000
RECORD_SIZE = 512
TABLE_ENTRIES = BLOCK_SIZE // 16 - 1
END = (1 << 64) - 1
CONTINUATION = END - 5
MAGIC = b'PolynyaFS' + bytes(7)


def _crc_table():
    result = []
    for value in range(256):
        for _ in range(8):
            value = (value >> 1) ^ (0x82f63b78 if value & 1 else 0)
        result.append(value)
    return result


_CRC = _crc_table()


def crc32c(data):
    value = 0xffffffff
    for byte in data:
        value = (value >> 8) ^ _CRC[(value ^ byte) & 255]
    return value ^ 0xffffffff


def checked_crc(data, offset):
    checksum = struct.unpack_from('<I', data, offset)[0]
    return crc32c(data[:offset] + bytes(4) + data[offset + 4:]) == checksum


@dataclass(frozen=True)
class Entry:
    name: str
    kind: int
    flags: int
    first: int
    size: int
    record_offset: int


def decode_entry(data, offset=0):
    if len(data) != RECORD_SIZE:
        raise ValueError('invalid PolynyaFS directory record size')
    kind, length, flags = struct.unpack_from('<BBH', data)
    if kind == 0:
        return None
    if kind > 6 or flags > 7 or data[0x13f] or any(data[0x30:0x40]) or any(data[0x140:]):
        raise ValueError('invalid PolynyaFS directory record')
    if not checked_crc(data, 4):
        raise ValueError('invalid PolynyaFS directory checksum')
    first, size = struct.unpack_from('<QQ', data, 8)
    name = data[0x40:0x40 + length].decode('utf-8')
    if kind != 3 and (not name or name in ('.', '..') or '/' in name or '\\' in name or '\0' in name):
        raise ValueError('invalid PolynyaFS filename')
    return Entry(name, kind, flags, first, size, offset)


class Image:
    def __init__(self, data, base=None):
        self.data = data
        if base is None:
            base = next((offset for offset in range(0, min(len(data), 0x100000), 512)
                         if data[offset:offset + 16] == MAGIC), None)
        if base is None or base < 0 or base + BLOCK_SIZE > len(data):
            raise ValueError('PolynyaFS header not found')
        header = data[base:base + BLOCK_SIZE]
        if header[:16] != MAGIC or not checked_crc(header[:0x1000], 0x14):
            raise ValueError('invalid PolynyaFS header checksum')
        self.version = struct.unpack_from('<HH', header, 0x10)
        self.flags = struct.unpack_from('<Q', header, 0x18)[0]
        size = struct.unpack_from('<I', header, 0x20)[0]
        member_start, member_size, self.total, self.table_first, self.table_count, self.root = struct.unpack_from('<6Q', header, 0x138)
        self.label = header[0x38:0x138].split(b'\0', 1)[0].decode('utf-8')
        if self.version != (0, 3) or size != BLOCK_SIZE or self.flags >= 128:
            raise ValueError('unsupported PolynyaFS version or geometry')
        if member_start or member_size != self.total or self.flags & 2:
            raise ValueError('encrypted or multi-member PolynyaFS requires its native provider')
        if self.flags & 0x20:
            base -= self.total * BLOCK_SIZE
        self.base = base
        if base < 0 or base + (self.total + 1) * BLOCK_SIZE > len(data):
            raise ValueError('truncated PolynyaFS volume')
        if not 0 < self.table_first < self.total or not self.table_count or not 0 < self.root < self.total:
            raise ValueError('invalid PolynyaFS allocation roots')
        self._tables = []

    def block(self, number):
        if not 0 <= number < self.total:
            raise ValueError('PolynyaFS block out of bounds')
        start = self.base + number * BLOCK_SIZE
        return self.data[start:start + BLOCK_SIZE]

    def allocation(self, number):
        if not 0 <= number < self.total:
            raise ValueError('PolynyaFS allocation index out of bounds')
        index, slot = divmod(number, TABLE_ENTRIES)
        while len(self._tables) <= index:
            block = self.table_first if not self._tables else struct.unpack_from('<Q', self.block(self._tables[-1]), BLOCK_SIZE - 8)[0]
            if block in self._tables or not 0 < block < self.total:
                raise ValueError('invalid PolynyaFS allocation-table chain')
            table = self.block(block)
            if table[-16:-8] != b'PFATLINK':
                raise ValueError('invalid PolynyaFS allocation-table trailer')
            self._tables.append(block)
        return struct.unpack_from('<QQ', self.block(self._tables[index]), slot * 16)

    def extents(self, first):
        seen = set()
        extents = []
        while True:
            if first in seen or not 0 < first < self.total:
                raise ValueError('invalid or cyclic PolynyaFS extent chain')
            seen.add(first)
            logical, following = self.allocation(first)
            count = 1
            while first + count < self.total and self.allocation(first + count) == (first, CONTINUATION):
                count += 1
            extents.append((logical, first, count))
            if following == END:
                break
            if following >= END - 4095:
                raise ValueError('reserved PolynyaFS allocation marker in extent chain')
            first = following
        expected = 0
        for logical, first, count in sorted(extents):
            if logical != expected:
                raise ValueError('overlapping or incomplete PolynyaFS logical extents')
            expected += count
        return sorted(extents)

    def read(self, first, size):
        if not size:
            return b''
        if size > self.total * BLOCK_SIZE:
            raise ValueError('PolynyaFS file too large')
        result = bytearray()
        for logical, first, count in self.extents(first):
            start = self.base + first * BLOCK_SIZE
            used = min(count * BLOCK_SIZE, size - len(result))
            result.extend(self.data[start:start + used])
            if len(result) == size:
                return bytes(result)
        raise ValueError('short PolynyaFS file')

    def directory(self, first):
        for logical, block, count in self.extents(first):
            for number in range(block, block + count):
                data = self.block(number)
                for offset in range(0, BLOCK_SIZE, RECORD_SIZE):
                    entry = decode_entry(data[offset:offset + RECORD_SIZE], self.base + number * BLOCK_SIZE + offset)
                    if entry is None:
                        return
                    if entry.kind != 3:
                        yield entry

    def entries(self):
        seen = set()
        def visit(first, prefix):
            if first in seen:
                raise ValueError('cyclic PolynyaFS directory tree')
            seen.add(first)
            for entry in self.directory(first):
                path = prefix + entry.name
                yield path, entry
                if entry.kind == 2:
                    yield from visit(entry.first, path + '/')
        yield from visit(self.root, '')

    def files(self):
        return {path: self.read(entry.first, entry.size) for path, entry in self.entries() if entry.kind == 1}


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('image', type=Path)
    args = parser.parse_args()
    image = Image(args.image.read_bytes())
    for path, entry in image.entries():
        print(entry.kind, entry.size, path)
