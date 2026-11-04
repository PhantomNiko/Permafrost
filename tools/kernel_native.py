#!/usr/bin/env python3
"""Link the native Permafrost kernel from C/C++ and initialized data.

Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import struct

from cc import compile_object
from macho import pack_segments


def build_kernel(output, architecture='i386', profile_path=None):
    profile_path = profile_path or Path('recovery/kernels', architecture + '.json')
    profile = json.loads(profile_path.read_text())
    if profile['architecture'] != architecture:
        raise ValueError('kernel profile architecture does not match')
    if architecture == 'i386':
        from elf32 import Object, link
    else:
        from elf64 import Object, link
    root = Path(profile['source'])
    output.mkdir(parents=True, exist_ok=True)
    includes = [str(root), 'sdk/include', 'kernel', 'firmware']
    flags = ['-fno-inline-functions', '-Wno-int-conversion',
             '-Wno-incompatible-pointer-types', '-Wno-pointer-sign',
             '-Wno-incompatible-function-pointer-types']

    def object_for(source, tag, defines=()):
        target = output / (tag + '.o')
        compile_object(source, target, includes, defines,
                       extra_flags=flags, architecture=architecture)
        return Object(target.read_bytes())

    bridge, bridge_symbols = b'', {}
    if architecture == 'i386':
        bridge, bridge_symbols, _ = link([
            object_for(Path('firmware/bios-transition.c'), 'bios-transition',
                       ['PF_BIOS_CODE_BASE=0x20080', 'PF_BIOS_SEGMENT_BASE=0x20000'])
        ], base=0x20080, shim=False)
    objects = [object_for(root / 'runtime.c', 'implementation')]
    if architecture == 'i386':
        objects.append(object_for(root / 'firmware.c', 'platform'))
    objects += [object_for(Path('kernel/runtime.c'), 'libc'),
                object_for(Path('kernel/compiler.c'), 'compiler'),
                object_for(Path('kernel/entry.c'), 'entry', [
                    'PF_SET_LOADER_CONTEXT=' + profile['set_loader_context'],
                    'PF_KERNEL_MAIN=' + profile['main'],
                    'PF_KERNEL_LOAD_BASE=0x%x' % profile['base']])]
    core, symbols, _ = link(objects, base=profile['core_base'], shim=False,
                            externals=bridge_symbols)
    if architecture == 'i386' and profile['core_base'] + len(core) >= 0x1e0000:
        raise ValueError('kernel core overlaps its initial stack')
    state_object = object_for(root / 'state.c', 'state')
    state = next(s['data'] for s in state_object.sections if s['name'] == '.pf.state')
    base, start, end = profile['base'], profile['text_end'], profile['state_end']
    if len(state) != end - start:
        raise ValueError('kernel state extent changed')
    image = bytearray(end - base)
    image[start - base:] = state
    if bridge:
        if 0x80 + len(bridge) > 0xc14:
            raise ValueError('BIOS transition overlaps platform state')
        image[0x80:0x80 + len(bridge)] = bridge
    struct.pack_into('<5I', image, 0, 0x504c4d57, 1, profile['entry'],
                     profile['text_start'] - base, 0)
    abi = json.loads((root / 'abi.json').read_text())
    entries = {int(a, 16): symbols[item['symbol']] for a, item in abi.items()}
    if architecture == 'i386':
        for address in (0x2002c, 0x20113, 0x2022b, 0x20386, 0x204b9,
                        0x205e7, 0x206a8, 0x207a6, 0x20867):
            entries[address] = symbols['FUN_%08x' % address]
    word = 8 if architecture == 'x86_64' else 4
    encoding = '<Q' if word == 8 else '<I'
    first = (start - base + word - 1) & ~(word - 1)
    for offset in range(first, len(image) - word + 1, word):
        value = struct.unpack_from(encoding, image, offset)[0]
        if value in entries:
            struct.pack_into(encoding, image, offset, entries[value])
    for raw, value in profile.get('inline_constants', {}).items():
        offset, payload = int(raw, 16) - base, bytes.fromhex(value)
        image[offset:offset + len(payload)] = payload
    # Keep stable entry addresses for data tables and original tooling; each
    # entry transfers directly into the separately linked C implementation.
    addresses = sorted(int(a, 16) for a in abi)
    for index, address in enumerate(addresses):
        limit = addresses[index + 1] if index + 1 < len(addresses) else start
        if address + 5 <= limit:
            image[address - base:address - base + 5] = b'\xe9' + struct.pack(
                '<i', entries[address] - address - 5)
    entry = profile['entry']
    image[entry - base:entry - base + 5] = b'\xe9' + struct.pack(
        '<i', symbols['pf_kernel_entry'] - entry - 5)
    image = image.replace(b'WinterBoot', b'Permafrost').replace(b'WinterMoon', b'Permafrost')
    image = image.replace(b'Permafrost OS v0.8', b'Permafrost OS v0.7')
    binary = pack_segments([(base, len(image), image),
                            (profile['core_base'], len(core), core)], entry,
                           architecture=architecture)
    (output / 'Permafrost').write_bytes(binary)
    (output / 'core-map.json').write_text(json.dumps(symbols, indent=2) + '\n')
    print('Built %s kernel from %d C functions: %d bytes' % (
        architecture, len(abi), len(binary)))
    return binary


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--arch', choices=('i386', 'x86_64'), default='i386')
    parser.add_argument('--output', type=Path, default=Path('build/kernel-native'))
    args = parser.parse_args()
    build_kernel(args.output, args.arch)
