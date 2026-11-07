#!/usr/bin/env python3
"""Link the native Permafrost kernel from C/C++ and initialized data.

Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import struct
import re

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
             '-fbracket-depth=2048',
             '-Wno-incompatible-pointer-types', '-Wno-pointer-sign',
             '-Wno-incompatible-function-pointer-types']
    if architecture == 'x86_64':
        flags.append('-mstackrealign')
    slide=profile.get('address_slide',0)
    constants={int(x,16) for x in profile.get('address_constants',[])}
    if slide:
        # Recovered C helpers can use equivalent pool addresses absent from
        # the original instruction operands. Explicit pointer literals also slide.
        pointer_literals = re.findall(r'\([^()\n]*\*\)\s*0x([0-9a-fA-F]+)',
                                      (root / 'runtime.c').read_text())
        constants.update(int(x, 16) for x in pointer_literals
                         if profile['base'] - slide <= int(x, 16) < profile['state_end'] - slide)
        # Memory lvalues are address-bearing even when their effective address
        # was folded from a base operand in the original instructions.
        for line in (root/'runtime.c').read_text().splitlines():
            if line.startswith('#define '):
                constants.update(int(x,16)for x in re.findall(r'0x([0-9a-fA-F]+)',line)
                                 if profile['base']-slide<=int(x,16)<profile['state_end']-slide)

    def object_for(source, tag, defines=()):
        target = output / (tag + '.o')
        if slide and source in (root/'runtime.c',root/'firmware.c'):
            text=source.read_text()
            if source.name=='firmware.c':
                constants.update(int(x,16)for x in re.findall(r'0x([0-9a-fA-F]+)',text)
                    if profile['base']-slide<=int(x,16)<profile['state_end']-slide)
            text=re.sub(r'\b0x([0-9a-fA-F]+)([uUlL]*)',lambda m:
                '0x%x%s'%(int(m[1],16)+slide,m[2])if int(m[1],16)in constants else m[0],text)
            translated=output/(tag+'.c');translated.write_text(text);source=translated
        compile_object(source, target, includes, defines,
                       extra_flags=flags, architecture=architecture)
        return Object(target.read_bytes())

    bridge, bridge_symbols = b'', {}
    if architecture == 'i386' and profile.get('platform')!='uefi':
        resident=profile.get('resident_bios_bridge',False)
        bridge_base=0x9000 if resident else 0x20080
        segment_base=0 if resident else 0x20000
        bridge, bridge_symbols, _ = link([
            object_for(Path('firmware/bios-transition.c'), 'bios-transition',
                       ['PF_BIOS_CODE_BASE='+hex(bridge_base), 'PF_BIOS_SEGMENT_BASE='+hex(segment_base)])
        ], base=bridge_base, shim=False)
        if resident:bridge=b''
    from image_module import make_image_module
    objects = [object_for(root / 'runtime.c', 'implementation'),
               object_for(make_image_module(output, architecture), 'image-module')]
    if architecture == 'i386':
        objects.append(object_for(root / 'firmware.c', 'platform'))
        if profile.get('platform')=='uefi':
            objects.append(object_for(Path('firmware/uefi/bios-unavailable.c'),'bios-unavailable'))
    objects += [object_for(Path('kernel/runtime.c'), 'libc'),
                object_for(Path('kernel/format.c'), 'format'),
                object_for(Path('kernel/compiler.c'), 'compiler'),
                object_for(Path('kernel/entry.c'), 'entry', [
                    'PF_SET_LOADER_CONTEXT=' + profile['set_loader_context'],
                    'PF_KERNEL_MAIN=' + profile['main'],
                    'PF_KERNEL_LOAD_BASE=0x%x' % profile['base']])]
    core, symbols, _ = link(objects, base=profile['core_base'], shim=False,
                            externals=bridge_symbols)
    if architecture == 'i386' and not slide and profile['base']<0x1e0000 and profile['core_base'] + len(core) >= 0x1e0000:
        raise ValueError('kernel core overlaps its initial stack')
    state_object = object_for(Path(profile.get('state_source',root / 'state.c')), 'state')
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
    entries = {int(a, 16)+slide: symbols[item['symbol']] for a, item in abi.items()}
    if architecture == 'i386':
        for address,name in profile['firmware_entries'].items():
            entries[int(address,16)+slide] = symbols[name]
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
    addresses = sorted(int(a, 16)+slide for a in abi)
    for index, address in enumerate(addresses):
        limit = addresses[index + 1] if index + 1 < len(addresses) else start
        if address + 5 <= limit:
            image[address - base:address - base + 5] = b'\xe9' + struct.pack(
                '<i', entries[address] - address - 5)
    entry = profile['entry']
    image[entry - base:entry - base + 5] = b'\xe9' + struct.pack(
        '<i', symbols['pf_kernel_entry'] - entry - 5)
    image = image.replace(b'WinterBoot', b'Permafrost').replace(b'WinterMoon', b'Permafrost')
    version=profile['version'].encode()
    upstream=profile.get('upstream_display_version','').encode()
    if upstream:
        if len(version)!=len(upstream):raise ValueError('display version must fit its string slot')
        image=image.replace(b'\0'+upstream+b'\0',b'\0'+version+b'\0')
    def release_name(match):
        if len(version)>len(match[2]):raise ValueError('release version exceeds its string slot')
        return match[1]+version.ljust(len(match[2]),b' ')
    image=re.sub(rb'(Permafrost(?: OS)? v)([0-9]+\.[0-9]+)',release_name,image)
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
