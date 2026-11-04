#!/usr/bin/env python3
"""Package covered bundled native VMs with source-built integer helpers.

Pooka's Free Software License; VM provenance is in applications/bundled.
"""
import hashlib
import json
from pathlib import Path
import struct
from cc import compile_object
from elf32 import Object, link
from macho import pack, segments


def build_native_application(program, output):
    source = Path('applications/bundled', program).read_bytes()
    record = json.loads(Path('applications/bundled/manifest.json').read_text())[program]
    if hashlib.sha256(source).hexdigest() != record['reference_sha256']:
        raise ValueError('bundled application hash changed: ' + program)
    parts, entry = segments(source)
    base = min(address for address, memory, data in parts if memory)
    end = max(address + memory for address, memory, data in parts)
    helper_base = (end + 4095) & ~4095
    if base != 0x200000 or not base <= entry < end:
        raise ValueError('unsupported bundled native layout')
    image = bytearray(helper_base - base)
    for address, memory, data in parts:
        image[address - base:address - base + len(data)] = data
    output.mkdir(parents=True, exist_ok=True)
    unit = output / 'integer-helpers.o'
    compile_object('kernel/compiler.c', unit, ['sdk/include'])
    runtime = output / 'memory.o'
    compile_object('kernel/runtime.c', runtime, ['sdk/include'])
    helpers, symbols, _ = link([Object(unit.read_bytes()), Object(runtime.read_bytes())],
                               base=helper_base, shim=False)
    if helper_base + len(helpers) >= 0x300000:
        raise ValueError('native helper code overlaps the default heap')
    image.extend(helpers)
    for name, address in record['integer_helpers'].items():
        if not base <= address < end - 5:
            raise ValueError('invalid integer helper address')
        image[address - base:address - base + 5] = b'\xe9' + struct.pack('<i', symbols[name] - address - 5)
    image = image.replace(b'WinterBoot', b'Permafrost').replace(b'WinterMoon', b'Permafrost')
    binary = pack(image, base, entry)
    (output / program).write_bytes(binary)
    print('Packaged bundled ' + program + ' with source-built integer helpers.')
    return binary
