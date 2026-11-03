#!/usr/bin/env python3
"""Link the current Lua application against its separately licensed sibling source."""
import json
from pathlib import Path
import subprocess
from cc import compile_object
from elf32 import Object, link

CORE = 'lapi lcode lctype ldebug ldo ldump lfunc lgc llex lmem lobject lopcodes lparser lstate lstring ltable ltm lundump lvm lzio'
LIBRARIES = 'lauxlib lbaselib lcorolib liolib lstrlib ltablib lutf8lib loadlib lmathlib'


def compile_lua(output, source=Path('../lua'), variant='i386'):
    if not (source / 'lua.h').is_file():
        raise ValueError('Lua source is required at ../lua; see DEPENDENCIES.md')
    output.mkdir(parents=True, exist_ok=True)
    files = [source / (name + '.c') for name in (CORE + ' ' + LIBRARIES).split()]
    files += [Path('ports/lua/libc.c'), Path('ports/lua/main.c'),
              Path('ports/lua/jump.S'), Path('kernel/runtime.c'), Path('kernel/compiler.c')]
    objects = []
    for index, path in enumerate(files):
        target = output / ('lua_unit%d.o' % index)
        compile_object(path, target, ['ports/lua/include', 'sdk/include', source],
                       defines=['NDEBUG'] + (['PF_TARGET_IA64=1'] if variant=='IA64' else []), extra_flags=['-Wno-unused-value', '-Wno-pointer-sign',
                           '-ffile-prefix-map=' + str(source.resolve()) + '=lua',
                           '-fdebug-prefix-map=' + str(source.resolve()) + '=lua'])
        objects.append(Object(target.read_bytes()))
    binary, symbols, _ = link(objects, base=0x230000, entry='main')
    if 0x230000 + len(binary) >= 0x2f0000:
        raise ValueError('Lua application approaches the kernel heap')
    (output / 'lua.map.json').write_text(json.dumps(symbols, indent=2) + '\n')
    (output / 'lua.bin').write_bytes(binary)
    # Preserve the actual dependency notice alongside any distributed binary.
    header = (source / 'lua.h').read_text()
    notice = header[header.rindex('Copyright (C)'):header.rindex('******************************************************************************/')]
    notice = '\n'.join(line.removeprefix('* ').removeprefix('*') for line in notice.splitlines()).strip()
    (output / 'LUA-LICENSE.TXT').write_text(notice + '\n')
    return binary


if __name__ == '__main__':
    print('Built Lua application: %d bytes' % len(compile_lua(Path('build/lua'))))
