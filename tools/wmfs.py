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
    def __init__(self, data, partition=0):
        self.data = data
        self.partitions = []
        self.base = BASE
        table = BASE * SECTOR
        if data[table:table + 4] == b'WBPT':
            version, count = struct.unpack_from('<HH', data, table + 4)
            if version != 1 or count > 14:
                raise ValueError('unsupported partition table')
            for index in range(count):
                offset = table + 32 + index * 32
                kind, start, size, flags = struct.unpack_from('<4I', data, offset)
                name = data[offset + 16:offset + 32].split(b'\0', 1)[0].decode('ascii')
                self.partitions.append(dict(name=name, type=kind, start=start, sectors=size, flags=flags))
            self.base = self.partitions[partition]['start']
        start = self.base * SECTOR
        self.wide = data[start:start + 8] == b'WMFS64\0\0'
        if data[start:start + 8] not in (b'WMFS32\0\0', b'WMFS64\0\0'):
            raise ValueError('not a WMFS32 image')
        if self.wide:
            fields = struct.unpack_from('<11I', data, start + 8)
            (self.version, self.sector_size, self.cluster_sectors, self.fat_sector,
             self.fat_sectors, self.root_sector, self.cluster_count, self.root_cluster,
             self.root_bytes, self.file_count, self.total_sectors) = fields
            self.data_sector = self.root_sector
            self.cluster_size = self.cluster_sectors * SECTOR
            return
        fields = struct.unpack_from('<11I', data, start + 8)
        (self.version, self.sector_size, self.cluster_sectors,
         self.fat_sector, self.fat_sectors, self.root_sector,
         self.root_sectors, self.data_sector, self.cluster_count,
         self.file_count, self.total_sectors) = fields
        if self.version != 1 or self.sector_size != SECTOR:
            raise ValueError('unsupported WMFS version or sector size')
        self.cluster_size = self.cluster_sectors * SECTOR

    def sector(self, relative):
        return (self.base + relative) * SECTOR

    def entries(self):
        root = self.sector(self.root_sector)
        if self.wide:
            directory = self.read(self.root_cluster, self.root_bytes)
        else:
            directory = self.data[root:root + self.root_sectors * SECTOR]
        for offset in range(0, len(directory), 256):
            name = directory[offset:offset + 240].split(b'\0', 1)[0]
            if not name:
                continue
            first, size = struct.unpack_from('<II', directory, offset + 240)
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
    root_sectors = max(1, (len(files) * 256 + 511) // 512)
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


def make_wmfs64(files, sectors):
    root_bytes = len(files) * 256
    root_clusters = max(1, (root_bytes + 4095) // 4096)
    fat_sectors = 1
    while True:
        clusters = (sectors - 1 - fat_sectors) // 8
        needed = ((clusters + 2) * 4 + 511) // 512
        if needed <= fat_sectors:
            break
        fat_sectors = needed
    data_sector = 1 + fat_sectors
    output = bytearray(sectors * SECTOR)
    output[:8] = b'WMFS64\0\0'
    struct.pack_into('<11I', output, 8, 1, 512, 8, 1, fat_sectors,
                     data_sector, clusters, 2, root_bytes, len(files), sectors)
    fat = SECTOR
    struct.pack_into('<II', output, fat, 0xffffffff, 0xffffffff)
    data = data_sector * SECTOR
    directory = bytearray(root_clusters * 4096)
    current = 2 + root_clusters
    for step in range(root_clusters):
        struct.pack_into('<I', output, fat + (2 + step) * 4,
                         3 + step if step + 1 < root_clusters else 0xffffffff)
    for index, (name, content) in enumerate(files.items()):
        encoded = name.lstrip('/').encode('utf-8')
        if not encoded or len(encoded) >= 240 or b'\0' in encoded:
            raise ValueError('invalid WMFS filename')
        count = (len(content) + 4095) // 4096
        if current + count > clusters + 2:
            raise ValueError('WMFS64 image too small')
        entry = index * 256
        directory[entry:entry + len(encoded)] = encoded
        struct.pack_into('<II', directory, entry + 240,
                         current if count else 0xffffffff, len(content))
        offset = data + (current - 2) * 4096
        output[offset:offset + len(content)] = content
        for step in range(count):
            struct.pack_into('<I', output, fat + (current + step) * 4,
                             current + step + 1 if step + 1 < count else 0xffffffff)
        current += count
    output[data:data + len(directory)] = directory
    return bytes(output)


def make_disk(boot, loader, firmware, recovery, user, sectors=8192,
              firmware_sectors=2048, recovery_sectors=812):
    """Build the current WBPT layout with firmware, recovery and growable user data."""
    starts = [66, 66 + firmware_sectors, 66 + firmware_sectors + recovery_sectors]
    sizes = [firmware_sectors, recovery_sectors, sectors - starts[2]]
    if sizes[2] <= 0:
        raise ValueError('disk is too small for its partitions')
    volumes = [make_image(boot, loader, files, size + BASE)[BASE * SECTOR:]
               for files, size in zip((firmware, recovery), sizes)]
    volumes.append(make_wmfs64(user, sizes[2]))
    output = bytearray(sectors * SECTOR)
    output[:512] = boot
    output[512:BASE * SECTOR] = loader
    table = BASE * SECTOR
    output[table:table + 8] = b'WBPT' + struct.pack('<HH', 1, 3)
    output[table + 8:table + 8 + 12] = b'PermafrostOS'
    for index, (name, kind, start, size, flags, volume) in enumerate(zip(
            ('firmware', 'recovery', 'user data'), (1, 1, 2), starts,
            (sizes[0], sizes[1], 0), (0, 1, 0), volumes)):
        offset = table + 32 + index * 32
        struct.pack_into('<4I', output, offset, kind, start, size, flags)
        output[offset + 16:offset + 16 + len(name)] = name.encode('ascii')
        output[start * SECTOR:start * SECTOR + len(volume)] = volume
    for index, files in enumerate((firmware, recovery, user)):
        if Image(bytes(output), index).files() != {n.lstrip('/'): b for n, b in files.items()}:
            raise ValueError('partition round trip failed')
    return bytes(output)


def repack_image(raw, files, partition=0, sectors=None):
    """Update one volume while preserving the other partitions' files."""
    image = Image(raw)
    sectors = sectors or len(raw) // SECTOR
    if not image.partitions:
        return make_image(raw[:512], raw[512:BASE * SECTOR], files, sectors)
    volumes = [Image(raw, index).files() for index in range(len(image.partitions))]
    volumes[partition] = files
    return make_disk(raw[:512], raw[512:BASE * SECTOR], *volumes, sectors=sectors,
                     firmware_sectors=image.partitions[0]['sectors'],
                     recovery_sectors=image.partitions[1]['sectors'])


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('image', type=Path)
    parser.add_argument('--extract', type=Path)
    parser.add_argument('--sectors', type=int, help='output disk size in sectors when rebuilding')
    parser.add_argument('--partition', type=int, default=0, help='WBPT volume index')
    parser.add_argument('--put', action='append', default=[], metavar='GUEST=HOST',
                        help='add/replace a file; requires --out')
    parser.add_argument('--out', type=Path, help='write a rebuilt image containing --put files')
    args = parser.parse_args()
    raw = args.image.read_bytes()
    image = Image(raw, args.partition)
    if args.put:
        if not args.out:
            parser.error('--put requires --out')
        files = image.files()
        for spec in args.put:
            name, separator, host = spec.partition('=')
            if not separator:
                parser.error('--put expects GUEST=HOST')
            files[name.lstrip('/')] = Path(host).read_bytes()
        result = repack_image(raw, files, args.partition, args.sectors)
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
