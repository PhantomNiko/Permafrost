#!/usr/bin/env python3
"""Build Permafrost entirely from checked-in source, without a reference image."""
import argparse
import hashlib
import json
import shutil
import struct
import subprocess
from pathlib import Path
from wmfs import BASE, SECTOR, Image


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
    parser.add_argument('--nasm', default='nasm')
    parser.add_argument('--out', type=Path, default=Path('build'))
    parser.add_argument('--sectors', type=int, default=2048)
    args = parser.parse_args()
    args.out.mkdir(parents=True, exist_ok=True)
    for part in ('boot', 'loader', 'kernel', 'expand-disk', 'nightmode'):
        subprocess.run([args.nasm, '-f', 'bin', 'src/' + part + '.asm',
                        '-o', str(args.out / (part + '.bin'))], check=True)
    files = {'BinaryWriter.ws': Path('assets/BinaryWriter.ws').read_bytes(),
             'Permafrost-kernel.bin': (args.out / 'kernel.bin').read_bytes(),
             'expand-disk.bin': (args.out / 'expand-disk.bin').read_bytes(),
             'nightmode.bin': (args.out / 'nightmode.bin').read_bytes(),
             'startup.ws': Path('assets/startup.ws').read_bytes(),
             'LICENSE.TXT': Path('LICENSE.TXT').read_bytes(),
             'UPSTREAM.TXT': Path('licenses/UPSTREAM.TXT').read_bytes()}
    result = make_image((args.out / 'boot.bin').read_bytes(),
                        (args.out / 'loader.bin').read_bytes(), files, args.sectors)
    (args.out / 'Permafrost-0.1.img').write_bytes(result)
    print('Built Permafrost-0.1.img (%d bytes, SHA-256 %s)' %
          (len(result), hashlib.sha256(result).hexdigest()))


if __name__ == '__main__':
    main()
