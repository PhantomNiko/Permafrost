#!/usr/bin/env python3
"""Run the packaged VM libraries through the booted OS's actual DLL loader.

The loader entry addresses are private test bindings, not SDK interfaces.
Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import subprocess
import sys
import tempfile

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from wmfs import Image, repack_image
from vm_fixtures import fixtures

LOADERS = {
    'i386': ('recovered_2044840', 'recovered_2044dd0', 'recovered_20463b0'),
    'x86_64': ('recovered_2052590', 'recovered_2052bc0', 'recovered_20543e0'),
    'armv7': ('recovered_40434000', 'recovered_40434988', 'recovered_404355fc'),
    'arm64': ('recovered_40429690', 'recovered_40429e38', 'recovered_4042a63c'),
}
SERIAL_FLAGS = {'i386': 0x20b9179, 'x86_64': 0x20ce7d5,
                'armv7': 0x4046d3d1, 'arm64': 0x4045b571}
MODULES = {'lua': 'WinterLua', 'rwby': 'WinterRwby', 'winterscript': 'WinterScript'}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('image', type=Path)
    parser.add_argument('--arch', choices=LOADERS, required=True)
    parser.add_argument('--language', choices=MODULES, required=True)
    parser.add_argument('--sdk', type=Path, default=Path('build/Permafrost0.9.sdk'))
    parser.add_argument('--kernel-build', type=Path, default=Path('build/kernel'))
    parser.add_argument('--library', type=Path, help='override the packaged library for a recovery check')
    parser.add_argument('--native-metadata', type=Path, help='bind the test host to a reference kernel')
    parser.add_argument('--qemu', type=Path)
    parser.add_argument('--firmware', type=Path)
    parser.add_argument('--bochs', type=Path)
    parser.add_argument('--bios', type=Path)
    parser.add_argument('--vgabios', type=Path)
    parser.add_argument('--vars', type=Path)
    parser.add_argument('--resource-dir', type=Path)
    parser.add_argument('--memory', type=int)
    parser.add_argument('--display-device', default='virtio-ramfb', choices=('ramfb', 'virtio-ramfb', 'virtio-gpu-pci'))
    parser.add_argument('--timeout', type=int, default=90)
    parser.add_argument('--peek', action='append', type=lambda value: int(value, 0), default=[])
    args = parser.parse_args()
    if args.bochs:
        if args.arch != 'i386' or not args.bios or not args.vgabios:
            parser.error('BIOS checks require i386, --bios and --vgabios')
    elif not args.qemu or not args.firmware:
        parser.error('UEFI checks require --qemu and --firmware')
    kernel = 'i386-uefi' if args.arch == 'i386' and not args.bochs else args.arch
    symbols = json.loads((args.kernel_build / kernel / 'core-map.json').read_text())
    addresses = []
    for name in LOADERS[args.arch]:
        address = symbols.get(name, symbols.get('_' + name))
        if not isinstance(address, int):
            raise SystemExit('missing private loader binding: ' + name)
        addresses.append(address)
    if args.native_metadata:
        native = dict((name, address) for address, name in
                      json.loads(args.native_metadata.read_text())['symbols'])
        addresses = [native[name] for name in ('_macho_load_dylib_named',
                     '_macho_find_loaded_dylib', '_macho_lookup_symbol_in_image')]
    defines = dict(zip(('PF_VM_LOAD', 'PF_VM_FIND', 'PF_VM_LOOKUP'), addresses))
    defines['PF_VM_CPU'] = {'i386': 7, 'x86_64': 0x1000007, 'armv7': 12, 'arm64': 0x100000c}[args.arch]
    defines['PF_VM_LANGUAGE'] = {'lua': 1, 'rwby': 2, 'winterscript': 3}[args.language]
    defines['PF_VM_SERIAL_FLAG'] = SERIAL_FLAGS[args.arch]
    cases = '{' + ','.join('{%s,%d,%s}' % (json.dumps(code), expected, json.dumps('/vm-case-%d.txt' % index))
                           for index, (code, expected) in enumerate(fixtures(args.language))) + '}'
    base = 0x42000000 if args.arch.startswith('arm') else 0x240000
    source = Path(__file__).with_suffix('.c')
    with tempfile.TemporaryDirectory(prefix='permafrost-vm-guest-') as directory:
        root = Path(directory)
        program, disk, script = root / 'vm-guest.bin', root / 'guest.img', root / 'guest.ws'
        command = [str(args.sdk / 'bin/pf-cc'), str(source), '--runtime', '--arch', args.arch,
                   '--format', 'flat', '--base', hex(base), '-o', str(program),
                   '-DPF_VM_FIXTURES=' + cases]
        command += ['-D%s=%s' % (name, hex(value)) for name, value in defines.items()]
        if args.native_metadata and args.arch == 'i386':
            command += ['-DPF_VM_NATIVE_I386=1']
        subprocess.run(command, check=True)
        raw = args.image.read_bytes()
        module = MODULES[args.language] + '.dylib'
        user = Image(raw, 2).files()
        user[module] = (args.library or args.sdk / 'usr/lib' / module).read_bytes()
        user['vm-guest.bin'] = program.read_bytes()
        for index, (code, _) in enumerate(fixtures(args.language)):
            user['vm-case-%d.txt' % index] = code.encode()
        raw = repack_image(raw, user, 2)
        disk.write_bytes(raw)
        script.write_text('serial("PF-VM-GUEST-BOOT")\nassert(runcode("/vm-guest.bin",$%x)==1)\nserial("PF-VM-GUEST-DONE")\n' % base)
        command = [sys.executable, str(source.with_name('uefi.py')), str(disk),
                   '--arch', args.arch, '--sdk', str(args.sdk), '--qemu', str(args.qemu),
                   '--firmware', str(args.firmware), '--serial-flag', hex(SERIAL_FLAGS[args.arch]),
                   '--script', str(script), '--command', '2+3', '--expect', '5',
                   '--timeout', str(args.timeout), '--display-device', args.display_device]
        if args.bochs:
            command = [sys.executable, str(source.with_name('hardware.py')), str(disk),
                       '--bochs', str(args.bochs), '--bios', str(args.bios), '--vgabios', str(args.vgabios),
                       '--script', str(script), '--expect', 'PF-VM-GUEST-DONE',
                       '--timeout', str(args.timeout)]
        for option in ('vars', 'resource_dir', 'memory'):
            value = getattr(args, option)
            if value is not None:
                command += ['--' + option.replace('_', '-'), str(value)]
        for address in args.peek:
            command += ['--peek', hex(address)]
        result = subprocess.run(command, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)
        print(result.stdout, end='')
        if result.returncode or 'PF-VM-GUEST-PASS' not in result.stdout or 'PF-VM-GUEST-DONE' not in result.stdout:
            raise SystemExit('booted VM library check failed')
        for index in range(2 * len(fixtures(args.language))):
            if 'PF-VM-GUEST-CASE %d\r' % index not in result.stdout and 'PF-VM-GUEST-CASE %d\n' % index not in result.stdout:
                raise SystemExit('missing guest VM fixture: %d' % index)
        print('%s %s: %d booted DLL cases%s passed.' %
              (args.arch, args.language, 2 * len(fixtures(args.language)),
               ' via BIOS' if args.bochs else ' and console return'))


if __name__ == '__main__':
    main()
