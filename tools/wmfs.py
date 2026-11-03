#!/usr/bin/env python3
"""WMFS32 image reader. All offsets are relative to the supplied image."""
import argparse
import hashlib
import json
from pathlib import Path
import struct

SECTOR = 512
BASE = 65


class Image:
    def __init__(self, data):
        self.data = data
        start = BASE * SECTOR
        if data[start:start + 8] != b'WMFS32\0\0':
            raise ValueError('not a WMFS32 image')
        fields = struct.unpack_from('<11I', data, start + 8)
        (self.version, self.sector_size, self.cluster_sectors,
         self.fat_sector, self.fat_sectors, self.root_sector,
         self.root_sectors, self.data_sector, self.cluster_count,
         self.file_count, self.total_sectors) = fields
        if self.version != 1 or self.sector_size != SECTOR:
            raise ValueError('unsupported WMFS version or sector size')
        self.cluster_size = self.cluster_sectors * SECTOR

    def sector(self, relative):
        return (BASE + relative) * SECTOR

    def entries(self):
        root = self.sector(self.root_sector)
        for offset in range(root, root + self.root_sectors * SECTOR, 256):
            name = self.data[offset:offset + 240].split(b'\0', 1)[0]
            if not name:
                continue
            first, size = struct.unpack_from('<II', self.data, offset + 240)
            yield name.decode('utf-8'), first, size

    def read(self, first, size):
        result = bytearray()
        seen = set()
        while len(result) < size:
            if first < 2 or first in seen:
                raise ValueError('invalid or cyclic cluster chain')
            seen.add(first)
            offset = self.sector(self.data_sector) + (first - 2) * self.cluster_size
            chunk = self.data[offset:offset + self.cluster_size]
            if len(chunk) != self.cluster_size:
                raise ValueError('truncated cluster')
            result.extend(chunk)
            first = struct.unpack_from('<I', self.data, self.sector(self.fat_sector) + first * 4)[0]
        return bytes(result[:size])

    def files(self):
        return {name: self.read(first, size) for name, first, size in self.entries()}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('image', type=Path)
    parser.add_argument('--extract', type=Path)
    args = parser.parse_args()
    raw = args.image.read_bytes()
    image = Image(raw)
    entries = []
    for name, first, size in image.entries():
        content = image.read(first, size)
        entries.append(dict(name=name, first_cluster=first, size=size,
                            sha256=hashlib.sha256(content).hexdigest()))
        if args.extract:
            relative = Path(name.lstrip('/'))
            if '..' in relative.parts or relative.is_absolute():
                raise ValueError('unsafe filename')
            target = args.extract / relative
            target.parent.mkdir(parents=True, exist_ok=True)
            target.write_bytes(content)
    print(json.dumps(dict(sha256=hashlib.sha256(raw).hexdigest(),
                         bytes=len(raw), superblock=vars(image) | {'data': None},
                         files=entries), indent=2))


if __name__ == '__main__':
    main()
