#!/usr/bin/env python3
"""Read and create PolynyaFS 0.3 volumes. Pooka's Free Software License.

The block, allocation-chain and directory-record formats are recovered from
1.1 Stage3. Mount links are returned as records and never followed implicitly.
"""
import argparse
from dataclasses import dataclass
from pathlib import Path
import struct
import hashlib

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


@dataclass(frozen=True)
class Node:
    """An image input: regular file (1), directory (2), or mount link (6)."""
    kind: int = 1
    data: bytes = b''
    flags: int = 0


def build(nodes, *, label='Permafrost', spare_blocks=16):
    """Create a deterministic, writable single-member volume with a backup.

    Paths use slash separators. Missing parent directories are created. Links
    contain their native target bytes and are never resolved by the builder.
    Each file or directory receives one contiguous allocation extent.
    """
    encoded_label = label.encode('utf-8')
    if len(encoded_label) > 255 or b'\0' in encoded_label or spare_blocks < 0:
        raise ValueError('invalid PolynyaFS label or free-space count')
    tree = {'': Node(2)}
    for path, value in nodes.items():
        parts = path.split('/')
        if any(not part or part in ('.', '..') or '\\' in part or '\0' in part
               or len(part.encode('utf-8')) > 255 for part in parts):
            raise ValueError('invalid PolynyaFS input path')
        value = Node(data=value) if isinstance(value, bytes) else value
        if not isinstance(value, Node) or value.kind not in (1, 2, 6) or not 0 <= value.flags <= 7:
            raise ValueError('invalid PolynyaFS input node')
        if not isinstance(value.data, bytes) or value.kind == 2 and value.data:
            raise ValueError('invalid PolynyaFS input contents')
        tree[path] = value
        for count in range(1, len(parts)):
            tree.setdefault('/'.join(parts[:count]), Node(2))
    children = {path: [] for path, node in tree.items() if node.kind == 2}
    for path in sorted(tree):
        if not path:
            continue
        parent = path.rpartition('/')[0]
        if parent not in children:
            raise ValueError('PolynyaFS parent is not a directory')
        children[parent].append(path)
    sizes = {path: (len(children[path]) + 1) * RECORD_SIZE if node.kind == 2
             else len(node.data) for path, node in tree.items()}
    counts = {path: (size + BLOCK_SIZE - 1) // BLOCK_SIZE for path, size in sizes.items()}
    table_count = 8
    while True:
        total = max(12, 1 + table_count + sum(counts.values()) + spare_blocks)
        needed = max(8, (total + TABLE_ENTRIES - 1) // TABLE_ENTRIES)
        if needed == table_count:
            break
        table_count = needed
    raw = bytearray((total + 1) * BLOCK_SIZE)
    allocations = [(0, 0)] * total
    firsts = {}
    cursor = table_count + 1
    for path in sorted(tree):
        count = counts[path]
        firsts[path] = cursor if count else END
        if count:
            allocations[cursor] = (0, END)
            for number in range(cursor + 1, cursor + count):
                allocations[number] = (cursor, CONTINUATION)
        cursor += count
    for path, node in tree.items():
        if not counts[path]:
            continue
        content = node.data
        if node.kind == 2:
            content = bytearray(sizes[path])
            for index, child in enumerate(children[path]):
                item = tree[child]
                name = child.rsplit('/', 1)[-1].encode('utf-8')
                record = bytearray(RECORD_SIZE)
                struct.pack_into('<BBHIQQ', record, 0, item.kind, len(name), item.flags, 0,
                                 firsts[child], 0 if item.kind == 2 else len(item.data))
                record[0x40:0x40 + len(name)] = name
                struct.pack_into('<I', record, 4, crc32c(record))
                content[index * RECORD_SIZE:(index + 1) * RECORD_SIZE] = record
        start = firsts[path] * BLOCK_SIZE
        raw[start:start + len(content)] = content
    for number in range(table_count + 1):
        allocations[number] = (0, END - 2)
    for table in range(table_count):
        start = (table + 1) * BLOCK_SIZE
        for slot in range(TABLE_ENTRIES):
            index = table * TABLE_ENTRIES + slot
            if index >= total:
                break
            struct.pack_into('<QQ', raw, start + slot * 16, *allocations[index])
        raw[start + BLOCK_SIZE - 16:start + BLOCK_SIZE - 8] = b'PFATLINK'
        struct.pack_into('<Q', raw, start + BLOCK_SIZE - 8,
                         table + 2 if table + 1 < table_count else END)
    header = bytearray(BLOCK_SIZE)
    header[:16] = MAGIC
    struct.pack_into('<HH', header, 0x10, 0, 3)
    struct.pack_into('<I', header, 0x20, BLOCK_SIZE)
    # Content-derived UUID, independent of host paths, users and timestamps.
    header[0x28:0x38] = hashlib.sha256(raw[BLOCK_SIZE:] + encoded_label).digest()[:16]
    header[0x38:0x38 + len(encoded_label)] = encoded_label
    struct.pack_into('<6Q', header, 0x138, 0, total, total, 1, table_count, firsts[''])
    struct.pack_into('<I', header, 0x14, crc32c(header[:0x1000]))
    raw[:BLOCK_SIZE] = header
    struct.pack_into('<Q', header, 0x18, 0x20)
    struct.pack_into('<I', header, 0x14, 0)
    struct.pack_into('<I', header, 0x14, crc32c(header[:0x1000]))
    raw[total * BLOCK_SIZE:] = header
    return bytes(raw)


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
