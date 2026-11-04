#!/usr/bin/env python3
"""Build the current Permafrost BIOS/OpenBIOS images and macOS SDK."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
from application import build_application
from cc import compile_object
from elf32 import Object, link
from kernel import compile_kernel
from macho import pack
from native_application import build_native_application
from openbios import build_firmware
from sdk import build_sdk
from wmfs import make_disk


def assemble(nasm, source, target, include=None, defines=()):
    command = [nasm, '-f', 'bin']
    if include:
        command += ['-I', str(include) + '/']
    command += ['-D' + item for item in defines]
    subprocess.run([*command, str(source), '-o', str(target)], check=True)
    return target.read_bytes()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--nasm', default='nasm')
    parser.add_argument('--out', type=Path, default=Path('build'))
    parser.add_argument('--sectors', type=int, default=81920)
    parser.add_argument('--variant', choices=('all', 'bios', 'openbios'), default='all')
    parser.add_argument('--openbios-source', type=Path, default=Path('../openbios'))
    parser.add_argument('--binutils-prefix', default='i386-elf-')
    args = parser.parse_args()
    output = args.out
    output.mkdir(parents=True, exist_ok=True)
    app_root = output / 'applications'
    programs = {'lua': build_application('lua', app_root / 'lua')}
    programs.update({name: build_native_application(name, app_root / name)
                     for name in ('rwby', 'winterscript')})
    for name, extension, base in [('wozmon', 'cpp', 0x200000),
            ('expand-disk', 'c', 0x200000), ('nightmode', 'cpp', 0x240000),
            ('graphics', 'c', 0x240000), ('textmode', 'c', 0x240000)]:
        unit = app_root / (name + '.o')
        compile_object('apps/' + name + '.' + extension, unit, ['sdk/include'])
        binary, _, _ = link([Object(unit.read_bytes())], base=base, entry='main')
        filename = name if name == 'wozmon' else name + '.bin'
        programs[filename] = pack(binary, base) if name == 'wozmon' else binary
        (app_root / filename).write_bytes(programs[filename])
    files = {p.name: p.read_bytes() for p in Path('assets').iterdir()
             if p.is_file() and p.name not in ('firmware-startup.ws', 'recovery-startup.ws')}
    files.update(programs)
    for notice in ('LICENSE.TXT', 'licenses/UPSTREAM.TXT', 'licenses/THIRD-PARTY.TXT',
                   'LICENSES.md', 'DEPENDENCIES.md', 'licenses/OPENBIOS-GPL-2.0.TXT'):
        files[Path(notice).name] = Path(notice).read_bytes()
    boot = assemble(args.nasm, Path('src/boot.asm'), output / 'boot.bin')
    results = {}
    for variant in (('bios', 'openbios') if args.variant == 'all' else (args.variant,)):
        work = output / variant
        compile_kernel(work, args.nasm, variant)
        prefix = '' if variant == 'bios' else 'openbios-'
        kernel = assemble(args.nasm, Path('src/' + prefix + 'kernel.asm'), work / 'kernel.bin', work)
        loader = assemble(args.nasm, Path('src/' + prefix + 'loader.asm'), work / 'loader.bin',
                          defines=('PF_RAMDISK_SECTORS=%d' % args.sectors,))
        variant_files = files | {'Permafrost-kernel.bin': kernel}
        common = {name: variant_files[name] for name in ('Permafrost-kernel.bin',
            'bitmap-font.wbf', 'LICENSE.TXT', 'UPSTREAM.TXT', 'THIRD-PARTY.TXT',
            'LICENSES.md', 'DEPENDENCIES.md', 'OPENBIOS-GPL-2.0.TXT')}
        if variant == 'openbios':
            firmware = build_firmware(work / 'kernel.bin', output / 'openbios-source',
                                      args.nasm, args.openbios_source, args.binutils_prefix)
            common['OpenBIOS.wmlp'] = firmware
            variant_files['OpenBIOS.wmlp'] = firmware
        firmware_files = common | {'expand-disk.bin': programs['expand-disk.bin'],
                                  'startup.ws': Path('assets/firmware-startup.ws').read_bytes()}
        recovery = common | {'startup.ws': Path('assets/recovery-startup.ws').read_bytes()}
        image = make_disk(boot, loader, firmware_files, recovery, variant_files,
                          sectors=args.sectors, firmware_sectors=2048, recovery_sectors=2048)
        name = 'Permafrost-0.6' + ('-OpenBIOS' if variant == 'openbios' else '') + '.img'
        (output / name).write_bytes(image)
        results[name] = dict(bytes=len(image), sha256=hashlib.sha256(image).hexdigest())
        print('Built %s (%d bytes).' % (name, len(image)))
    sdk = build_sdk(output)
    archive = sdk.with_suffix('.sdk.zip')
    results[archive.name] = dict(bytes=archive.stat().st_size,
                               sha256=hashlib.sha256(archive.read_bytes()).hexdigest())
    (output / 'release.json').write_text(json.dumps(dict(version='0.6', artifacts=results), indent=2) + '\n')


if __name__ == '__main__':
    main()
