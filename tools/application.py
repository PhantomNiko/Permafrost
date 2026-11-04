#!/usr/bin/env python3
"""Build a recovered native application entirely from its C sources and data.

Pooka's Free Software License.
"""
import argparse
import hashlib
import json
from pathlib import Path
import struct
from cc import compile_object
from elf32 import Object, link
from macho import pack


def build_application(program, output, layout_path=None):
    layout = json.loads((layout_path or Path('recovery/applications', program + '.json')).read_text())
    root = Path(layout['source'])
    output.mkdir(parents=True, exist_ok=True)
    sources = [root / 'runtime.c', Path('kernel/runtime.c'), Path('kernel/compiler.c')]
    headers = list(root.glob('*.h')) + list(Path('kernel').glob('*.h')) + list(Path('sdk/include').glob('*.h'))
    shared = b''.join(path.read_bytes() for path in headers + [Path('tools/cc.py'), Path('tools/elf32.py'), Path(__file__)])
    cache_file = output / 'compile-cache.json'
    cache = json.loads(cache_file.read_text()) if cache_file.exists() else {}
    objects = []
    for index, source in enumerate(sources + [root / 'state.c']):
        target = output / ('unit%d.o' % index)
        digest = hashlib.sha256(shared + source.read_bytes()).hexdigest()
        if not target.exists() or cache.get(str(source)) != digest:
            compile_object(source, target, ['sdk/include', 'kernel', str(root)], extra_flags=[
                '-fno-inline-functions', '-ferror-limit=0', '-Wno-int-conversion', '-Wno-incompatible-pointer-types', '-Wno-pointer-sign'])
            cache[str(source)] = digest
            cache_file.write_text(json.dumps(cache, indent=2) + '\n')
        objects.append(Object(target.read_bytes()))
    core, symbols, _ = link(objects[:-1], base=layout['core_base'], shim=False)
    state = next(section['data'] for section in objects[-1].sections if section['name'] == '.pf.state')
    base, start, end = layout['base'], layout['text_end'], layout['state_end']
    if len(state) != end - start:
        raise ValueError('application state extent changed')
    if layout['core_base'] < end or layout['core_base'] + len(core) >= 0x300000:
        raise ValueError('native program overlaps the default heap')
    data = bytearray(layout['core_base'] - base + len(core))
    data[start - base:end - base] = state
    data[layout['core_base'] - base:] = core
    abi = json.loads((root / 'abi.json').read_text())
    entries = {int(address, 16): symbols[item['symbol']] for address, item in abi.items()}
    for offset in range((start - base + 3) & ~3, end - base - 3, 4):
        target = struct.unpack_from('<I', data, offset)[0]
        if target in entries:
            struct.pack_into('<I', data, offset, entries[target])
    for raw, value in layout.get('inline_constants', {}).items():
        address = int(raw, 16)
        data[address - base:address - base + len(bytes.fromhex(value))] = bytes.fromhex(value)
    addresses = sorted(entries)
    for index, address in enumerate(addresses):
        limit = addresses[index + 1] if index + 1 < len(addresses) else start
        if not base <= address < start:
            raise ValueError('native entry outside text')
        if address+5>limit:
            if address==layout['entry']:
                raise ValueError('program entry has no room for its jump')
            continue
        data[address - base:address - base + 5] = b'\xe9' + struct.pack('<i', entries[address] - address - 5)
    # Equal-length branding preserves pointers into the original string pool.
    data = data.replace(b'WinterBoot', b'Permafrost').replace(b'WinterMoon', b'Permafrost')
    binary = pack(data, base, layout['entry'])
    (output / program).write_bytes(binary)
    (output / 'core-map.json').write_text(json.dumps(symbols, indent=2) + '\n')
    print('Built %s from C: %d bytes, SHA-256 %s' % (program, len(binary), hashlib.sha256(binary).hexdigest()))
    return binary


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('program')
    parser.add_argument('--out', type=Path)
    args = parser.parse_args()
    build_application(args.program, args.out or Path('build/applications', args.program))


if __name__ == '__main__':
    main()
