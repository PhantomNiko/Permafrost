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


def make_image(boot, loader, files, sectors=2048):
    if len(boot) != 512 or boot[-2:] != b'\x55\xaa' or len(loader) != 64 * 512:
        raise ValueError('invalid boot chain size/signature')
    total = sectors - BASE
    cluster_sectors = 8
    root_sectors = max(3, (len(files) * 256 + 511) // 512)
    fat_sectors = 1
    while True:
        data_sector = 1 + fat_sectors + root_sectors
        clusters = (total - data_sector) // cluster_sectors
        needed = ((clusters + 2) * 4 + 511) // 512
        if needed <= fat_sectors:
            break
        fat_sectors = needed
    output = bytearray(sectors * SECTOR)
    output[:512] = boot
    output[512:BASE * SECTOR] = loader
    superblock = BASE * SECTOR
    output[superblock:superblock + 8] = b'WMFS32\0\0'
    struct.pack_into('<11I', output, superblock + 8,
                     1, SECTOR, cluster_sectors, 1, fat_sectors,
                     1 + fat_sectors, root_sectors, data_sector,
                     clusters, len(files), total)
    fat = (BASE + 1) * SECTOR
    root = (BASE + 1 + fat_sectors) * SECTOR
    data = (BASE + data_sector) * SECTOR
    struct.pack_into('<II', output, fat, 0xffffffff, 0xffffffff)
    current = 2
    for index, (name, content) in enumerate(files.items()):
        encoded = name.lstrip('/').encode('utf-8')
        if not encoded or len(encoded) >= 240 or b'\0' in encoded:
            raise ValueError('invalid WMFS filename')
        count = (len(content) + 4095) // 4096
        if current + count > clusters + 2:
            raise ValueError('image too small')
        entry = root + index * 256
        output[entry:entry + len(encoded)] = encoded
        struct.pack_into('<II', output, entry + 240, current if count else 0xffffffff, len(content))
        offset = data + (current - 2) * 4096
        output[offset:offset + len(content)] = content
        for step in range(count):
            struct.pack_into('<I', output, fat + (current + step) * 4,
                             current + step + 1 if step + 1 < count else 0xffffffff)
        current += count
    # Read back every chain through the independent reader before publishing.
    if Image(bytes(output)).files() != {n.lstrip('/'): b for n, b in files.items()}:
        raise ValueError('filesystem round trip failed')
    return bytes(output)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('image', type=Path)
    parser.add_argument('--extract', type=Path)
    parser.add_argument('--put', action='append', default=[], metavar='GUEST=HOST',
                        help='add/replace a file; requires --out')
    parser.add_argument('--out', type=Path, help='write a rebuilt image containing --put files')
    args = parser.parse_args()
    raw = args.image.read_bytes()
    image = Image(raw)
    if args.put:
        if not args.out:
            parser.error('--put requires --out')
        files = image.files()
        for spec in args.put:
            name, separator, host = spec.partition('=')
            if not separator:
                parser.error('--put expects GUEST=HOST')
            files[name.lstrip('/')] = Path(host).read_bytes()
        result = make_image(raw[:512], raw[512:BASE * SECTOR], files, len(raw) // SECTOR)
        args.out.write_bytes(result)
        print('Wrote image with %d files' % len(files))
        return
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
