#!/usr/bin/env python3
"""Build Permafrost entirely from checked-in source, without a reference image."""
import argparse
import hashlib
import subprocess
from pathlib import Path
from wmfs import make_image
from kernel import compile_kernel
from cc import compile_object
from elf32 import Object, link


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--nasm', default='nasm')
    parser.add_argument('--out', type=Path, default=Path('build'))
    parser.add_argument('--sectors', type=int, default=2048)
    args = parser.parse_args()
    args.out.mkdir(parents=True, exist_ok=True)
    compile_kernel(args.out)
    for part in ('boot', 'loader', 'kernel'):
        subprocess.run([args.nasm, '-I', str(args.out) + '/', '-f', 'bin', 'src/' + part + '.asm',
                        '-o', str(args.out / (part + '.bin'))], check=True)
    applications = {}
    for name, extension, base in [('wozmon', 'cpp', 0x220000),
                                   ('expand-disk', 'c', 0x200000),
                                   ('nightmode', 'cpp', 0x200000)]:
        target = args.out / (name + '.o')
        compile_object('apps/' + name + '.' + extension, target, ['sdk/include'])
        binary, _, _ = link([Object(target.read_bytes())], base=base, entry='main')
        (args.out / (name + '.bin')).write_bytes(binary)
        applications[name + '.bin'] = binary
    files = {p.name: p.read_bytes() for p in Path('assets').iterdir() if p.is_file()}
    files.update(applications)
    files.update({'Permafrost-kernel.bin': (args.out / 'kernel.bin').read_bytes(),
                  'LICENSE.TXT': Path('LICENSE.TXT').read_bytes(),
                  'UPSTREAM.TXT': Path('licenses/UPSTREAM.TXT').read_bytes()})
    result = make_image((args.out / 'boot.bin').read_bytes(),
                        (args.out / 'loader.bin').read_bytes(), files, args.sectors)
    (args.out / 'Permafrost-0.2.img').write_bytes(result)
    print('Built Permafrost-0.2.img (%d bytes, SHA-256 %s)' %
          (len(result), hashlib.sha256(result).hexdigest()))


if __name__ == '__main__':
    main()
