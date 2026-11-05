#!/usr/bin/env python3
"""Build ARM kernels from C and preserve their low-address compatibility entries.

Pooka's Free Software License.
"""
import argparse
import json
import re
import re
from pathlib import Path
import struct

from darwin import compile_object, link_executable
from macho import pack_segments
from native import inspect


def branch(address, target, architecture):
    delta = target - address - (8 if architecture == 'armv7' else 0)
    bits = 24 if architecture == 'armv7' else 26
    if delta & 3 or not -(1 << (bits+1)) <= delta < (1 << (bits+1)):
        raise ValueError('ARM compatibility entry cannot reach its C implementation')
    opcode = 0xea000000 if architecture == 'armv7' else 0x14000000
    return struct.pack('<I', opcode | ((delta >> 2) & ((1 << bits)-1)))


def build_kernel(source, output):
    source, output = Path(source), Path(output)
    profile = json.loads((source/'profile.json').read_text())
    arch = profile['architecture']
    if arch not in ('armv7', 'arm64'):
        raise ValueError('expected an ARM kernel profile')
    output.mkdir(parents=True, exist_ok=True)
    objects = []
    includes = [str(source), 'sdk/include', 'kernel']
    for name, path, defines in (
        ('implementation', source/'runtime.c', []),
        ('libc', Path('kernel/runtime.c'), []),
        ('format', Path('kernel/format.c'), []),
        ('compiler', Path('kernel/compiler.c'), []),
        ('entry', Path('kernel/entry.c'), [
            'PF_SET_LOADER_CONTEXT='+profile['set_loader_context'],
            'PF_KERNEL_MAIN='+profile['main'],
            'PF_KERNEL_LOAD_BASE='+hex(profile['base'])])):
        obj = output/(name+'.o')
        compile_object(path, obj, arch, includes, defines,
                       extra_flags=['-w', '-fno-inline-functions', '-Wno-int-conversion',
                                    '-Wno-incompatible-pointer-types',
                                    '-Wno-incompatible-function-pointer-types'])
        objects.append(obj)
    core_metadata, core_memory = link_executable(objects, output/'core.linked', arch,
                                                profile['core_base'], 'pf_kernel_entry')
    core_end = max(a+n for name, a, n in core_metadata['sections'])
    core = core_memory[:core_end-core_metadata['base']]
    symbols = {name: address for address, name in
               core_metadata['symbols']+core_metadata['data_symbols']}
    state_object = output/'state.o'
    compile_object(source/'state.c', state_object, arch, includes)
    state_metadata, state_memory = inspect(state_object.read_bytes())
    state_address, state_size = next((a, n) for k, a, n in state_metadata['sections']
                                    if k == '__pf_state')
    state_offset = state_address-state_metadata['base']
    state = state_memory[state_offset:state_offset+state_size]
    base, start, end = profile['base'], profile['text_end'], profile['state_end']
    if len(state) != end-start or end > profile['core_base']:
        raise ValueError('ARM kernel data overlaps its separately linked implementation')
    image = bytearray(end-base)
    image[start-base:] = state
    entries = {int(a, 16): symbols['_'+name] for a, name in profile['functions'].items()}
    # Multiline C declarations must not leave callable entries as zero words.
    for name,target in symbols.items():
        match=re.fullmatch(r'_recovered_([0-9a-f]+)',name)
        if match:
            address=int(match[1],16)
            if profile['text_start']<=address<profile['text_end']:
                entries.setdefault(address,target)

    width = 8 if arch == 'arm64' else 4
    for offset in range((start-base+width-1) & -width, len(image)-width+1, width):
        value = int.from_bytes(image[offset:offset+width], 'little')
        tag = (value & (1 << 63)) if width == 8 else 0
        if value & ~tag in entries:
            image[offset:offset+width] = (entries[value & ~tag] | tag).to_bytes(width, 'little')
    for address, target in entries.items():
        image[address-base:address-base+4] = branch(address, target, arch)
    entry = profile['entry']
    struct.pack_into('<5I', image, 0, 0x504c4d57, 1, entry,
                     profile['text_start']-base, 0)
    image[entry-base:entry-base+4] = branch(entry, symbols['_pf_kernel_entry'], arch)
    for address, values in profile.get('inline_data', {}).items():
        offset = int(address, 16)-base
        if offset < 20 or offset+len(values) > len(image):
            raise ValueError('inline data is outside the kernel')
        image[offset:offset+len(values)] = bytes(values)
    for address,target in entries.items():
        expected=branch(address,symbols['_pf_kernel_entry']if address==entry else target,arch)
        if image[address-base:address-base+4]!=expected:
            raise ValueError('inline data overwrites a compiled entry shim')
    image=image.replace(b'WinterBoot',b'Permafrost').replace(b'WinterMoon',b'Permafrost')
    version=profile['version'].encode()
    def release_name(match):
        if len(version)>len(match[1]):raise ValueError('release version exceeds its string slot')
        return b'Permafrost OS v'+version.ljust(len(match[1]),b' ')
    image=re.sub(rb'Permafrost OS v([0-9]+\.[0-9]+)',release_name,image)
    binary = pack_segments([(base, len(image), image),
                            (core_metadata['base'], len(core), core)], entry, arch)
    (output/'Permafrost').write_bytes(binary)
    (output/'core-map.json').write_text(json.dumps(symbols, indent=2)+'\n')
    return binary


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    binary = build_kernel(args.source, args.output)
    print('Built ARM source kernel: %d bytes' % len(binary))
