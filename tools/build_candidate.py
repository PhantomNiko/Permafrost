#!/usr/bin/env python3
"""Build the in-progress 1.1 C/C++ candidate, without promoting or tagging it.

Pooka's Free Software License. Reference bytes are accepted only for explicitly
hashed non-program resources. PicoFrost is omitted until its source build exists.
"""
import argparse
import concurrent.futures
import hashlib
import json
from pathlib import Path
import struct
import subprocess
import sys

from fat import make_efi_volume
from firmware import build_bios
from macho import universal
from pfs import Image, Node, build
from pfz import pack, unpack
from sdk import build_sdk
from tayga_cc import build_program

ROOT = Path('recovery/in-progress')
ARCHS = ('i386', 'x86_64', 'armv7', 'arm64')
EFI_NAMES = dict(zip(ARCHS, ('BOOTIA32.EFI', 'BOOTX64.EFI', 'BOOTARM.EFI', 'BOOTAA64.EFI')))


def digest(data):
    return hashlib.sha256(data).hexdigest()


def profiles(group):
    for path in sorted((ROOT/group).glob('*/*/profile.json')):
        yield path.parent, json.loads(path.read_text())


def products(output):
    """Map each guest program to its C source and expected compiler product."""
    result = {}
    applications = json.loads((ROOT/'build-manifest.json').read_text())['applications']
    for group in ('libraries', 'drivers', 'modules', 'applications'):
        for source, profile in profiles(group):
            name, arch, module = source.parent.name, profile['architecture'], profile['module']
            if group == 'libraries':
                path = 'Library/Native/'+module+'.dylib'
            elif group == 'applications':
                path = applications[name]
            else:
                path = profile['install_name'].lstrip('/')
            result.setdefault(path, {})[arch] = output/group/name/arch/module
    kernels = {a: output/'kernel'/a/'Permafrost' for a in ARCHS}
    for name in ('Permafrost', 'UEFI'):
        result['Kernel/'+name+'.kernel'] = kernels
    result['Kernel/Permafrost-efi.kernel'] = {'arm64': kernels['arm64']}
    for folder, path, module in (
        ('Zastruga Engine', 'Applications/Zastruga.app/Contents/Permafrost/Zastruga', 'Zastruga'),
        ('Sleet', 'Applications/Sleet.app/Contents/Permafrost/SleetMisskey', 'SleetMisskey'),
        ('Amur', 'Binary/Amur', 'Amur'),
    ):
        result[path] = {a: Path('..')/folder/'build/source-1.1'/a/module for a in ARCHS}
    for language in ('c', 'cpp'):
        result['Home/SDK-'+language.upper()] = {
            a: output/'sdk-examples'/a/language for a in ARCHS}
    return result


def compile_candidate(output, jobs, siblings=True, applications_only=False):
    logs = output/'logs'
    logs.mkdir(parents=True, exist_ok=True)

    def batch(items):
        def run(item):
            label, command = item
            with (logs/(label+'.log')).open('w') as log:
                done = subprocess.run(command, stdout=log, stderr=log)
            if done.returncode:
                raise RuntimeError('Build failed: '+label+'; see its build log')
            print('Built '+label, flush=True)
        with concurrent.futures.ThreadPoolExecutor(max_workers=jobs) as pool:
            list(pool.map(run, items))

    queue = []
    for arch in ARCHS:
        source, target = ROOT/'kernel'/arch, output/'kernel'/arch
        if arch.startswith('arm'):
            command = [sys.executable, 'tools/arm_kernel.py', str(source), str(target)]
        else:
            command = [sys.executable, 'tools/kernel_native.py', '--arch', arch,
                       '--profile', str(source/'build-profile.json'), '--output', str(target)]
        queue.append(('kernel-'+arch, command))
        queue.append(('firmware-'+arch, [sys.executable, 'tools/uefi_portable.py', '--arch', arch,
                      '--source', str(ROOT/'firmware/uefi/common'), '--out', str(output/'firmware'/arch)]))
        queue.append(('runtime-'+arch, [sys.executable, 'tools/sdk_runtime.py', '--source',
                      str(ROOT/'sdk/runtime'), '--arch', arch, '--output', str(output/'sdk-runtime'/arch)]))
    for group in ('libraries', 'drivers', 'modules'):
        for source, profile in profiles(group):
            name, arch = source.parent.name, profile['architecture']
            queue.append((group+'-'+name+'-'+arch, [sys.executable, 'tools/library_native.py',
                         str(source), str(output/group/name/arch)]))
    if not applications_only:
        batch(queue)
    queue = []
    dependencies = json.loads((ROOT/'build-manifest.json').read_text())['application_libraries']
    for source, profile in profiles('applications'):
        name, arch = source.parent.name, profile['architecture']
        command = [sys.executable, 'tools/application_native.py', str(source),
                   str(output/'applications'/name/arch), '--headers', str(ROOT/'sdk/include')]
        available = {lib['module']+'.dylib': (library, lib)
                     for library, lib in profiles('libraries') if lib['architecture'] == arch}
        for install_name in dependencies[name][arch]:
            library, lib = available[Path(install_name).name]
            command += ['--library', install_name+'='+str(output/'libraries'/library.parent.name/arch/lib['module'])]
        queue.append(('application-'+name+'-'+arch, command))
    if siblings:
        for name in ('Zastruga Engine', 'Sleet', 'Amur'):
            for arch in ARCHS:
                queue.append((name.lower().replace(' ', '-')+'-'+arch,
                              [sys.executable, str(Path('..')/name/'tools/build.py'), '--arch', arch]))
    batch(queue)
    build_bios(output/'firmware/bios', source=ROOT/'firmware/bios')


def package_candidate(output, reference):
    manifest = json.loads((ROOT/'build-manifest.json').read_text())
    raw = reference.read_bytes()
    if digest(raw) != manifest['reference_sha256']:
        raise ValueError('wrong reference resource image')
    original = Image(raw)
    entries = dict(original.entries())
    nodes = {}
    for item in manifest['resources']:
        entry = entries[item['path']]
        data = b'' if entry.kind == 2 else original.read(entry.first, entry.size)
        if entry.kind != item['kind'] or entry.flags != item['flags'] or digest(data) != item['sha256']:
            raise ValueError('resource mismatch: '+item['path'])
        nodes[item['path']] = Node(entry.kind, data, entry.flags)
    sdk = build_sdk(output, products=output, source_root=ROOT, version='1.1')
    for arch in ARCHS:
        for language in ('c', 'cpp'):
            build_program([sdk/'Examples'/('runtime.'+language)],
                          output/'sdk-examples'/arch/language, arch, sdk)
    cache = output/'packed'
    cache.mkdir(exist_ok=True)

    def compressed(binary):
        cached = cache/(digest(binary)+'.pfz')
        if cached.is_file():
            data = cached.read_bytes()
            if unpack(data) != binary:
                raise ValueError('corrupt compressed product cache')
            return data
        data = pack(binary)
        cached.write_bytes(data)
        return data

    provenance = []
    for path, slices in products(output).items():
        architectures = [a for a in ARCHS if a in slices]
        # The C BIOS loader streams Mach-O segments directly from disk. Its
        # i386 kernel slice remains uncompressed; EFI supports PFZ1 slices.
        data = universal([
            slices[a].read_bytes() if a=='i386' and path.startswith('Kernel/') and path.endswith('.kernel')
            else compressed(slices[a].read_bytes()) for a in architectures], architectures)
        nodes[path] = Node(1, data)
        provenance.append(dict(path=path, architectures=architectures, sha256=digest(data), source='C/C++'))
        print('Packed '+path, flush=True)
    for name in ('LICENSE.TXT', 'LICENSES.md', 'DEPENDENCIES.md'):
        nodes[name] = Node(data=Path(name).read_bytes())
    volume = build(nodes, label='Permafrost 1.1', spare_blocks=128)
    checked = Image(volume)
    assert {p:(e.kind,e.flags, b'' if e.kind==2 else checked.read(e.first,e.size)) for p,e in checked.entries()} == {
        p:(n.kind,n.flags,n.data) for p,n in nodes.items()}
    boot = (output/'firmware/bios/boot.bin').read_bytes()
    loader = (output/'firmware/bios/loader.bin').read_bytes()
    esp = make_efi_volume({'EFI/BOOT/'+EFI_NAMES[a]:(output/'firmware'/a/EFI_NAMES[a]).read_bytes() for a in ARCHS})
    first, volume_start = 1, 257
    partition_sectors = volume_start-first+len(volume)//512
    esp_start = ((volume_start+len(volume)//512+2047)//2048)*2048
    disk = bytearray(esp_start*512+len(esp))
    disk[:512] = boot
    disk[512:512+len(loader)] = loader
    for i, (kind, start, count) in enumerate(((0x7f, first, partition_sectors), (0xef, esp_start, len(esp)//512))):
        struct.pack_into('<B3sB3sII', disk, 446+i*16, 0x80 if i==0 else 0, b'\xfe\xff\xff',
                         kind, b'\xfe\xff\xff', start, count)
    disk[volume_start*512:volume_start*512+len(volume)] = volume
    disk[esp_start*512:] = esp
    path = output/'Permafrost-1.1-candidate.img'
    path.write_bytes(disk)
    status = dict(version='1.1', complete=False, tagged=False,
                  image=dict(file=path.name, bytes=len(disk), sha256=digest(disk)),
                  sdk=sdk.name, programs=provenance,
                  omitted=manifest['omitted'], vm_parity='pending')
    (output/'candidate.json').write_text(json.dumps(status, indent=2)+'\n')
    print('Built in-progress C/C++ image and SDK; VM parity and PicoFrost remain pending.', flush=True)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--out', type=Path, default=Path('build/candidate-1.1'))
    parser.add_argument('--jobs', type=int, default=4)
    parser.add_argument('--stage', choices=('compile', 'applications', 'package', 'all'), default='all')
    parser.add_argument('--reference', type=Path, default=Path('img/WinterBoot-1.1r344-Beta.img'))
    parser.add_argument('--skip-sibling-builds', action='store_true')
    args = parser.parse_args()
    if args.jobs < 1:
        parser.error('--jobs must be positive')
    args.out.mkdir(parents=True, exist_ok=True)
    if args.stage != 'package':
        compile_candidate(args.out, args.jobs, not args.skip_sibling_builds, args.stage=='applications')
    if args.stage in ('package', 'all'):
        package_candidate(args.out, args.reference)


if __name__ == '__main__':
    main()
