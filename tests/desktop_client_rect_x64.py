#!/usr/bin/env python3
"""Compare desktop client rendering with full-width dirty rectangles.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import struct
import sys
import tempfile
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from native import inspect
from dylib import inspect as dynamic
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX, UC_X86_REG_RAX


def exercise(path, source, folder):
    blob = bytearray(path.read_bytes())
    struct.pack_into('<I', blob, 12, 6)
    normalized = folder / ('source' if source else 'reference')
    normalized.write_bytes(blob)
    meta, _ = inspect(blob)
    lib = DLL(normalized, api_base=0x280800, instruction_limit=100000000)
    cpu = lib.cpu
    names = {n: lib.base + a - meta['base'] for a, n in meta['symbols'] + meta['data_symbols']}
    targets = {}
    for stub in dynamic(blob)['stubs']:
        name = stub['name']
        if name not in ['_memcpy', '_memmove', '_memset', '_bzero', '___bzero', '_terror_ui_colour']:
            continue
        pc = lib.base + stub['address'] - meta['base']
        targets[name] = pc
        def service(c, address, size, name):
            dest, data, count = [c.reg_read(r) for r in [UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX]]
            if name in ['_memcpy', '_memmove']:
                c.mem_write(dest, bytes(c.mem_read(data, count)))
            elif name == '_terror_ui_colour':
                dest = (dest * 0x123456 + 0x112233) & 0xffffff
            else:
                c.mem_write(dest, bytes([data & 255]) * count if name == '_memset' else bytes(data))
            c.reg_write(UC_X86_REG_RAX, dest)
        cpu.mem_write(pc, b'\xc3')
        cpu.hook_add(UC_HOOK_CODE, service, name, begin=pc, end=pc)
    for slot in dynamic(blob)['pointers']:
        if slot['name'] in targets:
            cpu.mem_write(lib.base + slot['address'] - meta['base'], struct.pack('<Q', targets[slot['name']]))
    if source:
        lib.exports['initialize'] = names['_pf_app_initialize']
        lib.call('initialize')
        state, start = names['_pf_module_state'], 0x4562c
        lib.exports['draw'] = names['_recovered_10020650']
    else:
        state, start = lib.base, 0
        lib.exports['draw'] = names['_drawWindowContent']
    def write(address, value):
        cpu.mem_write(state + address - start, value)
    results = []
    for ww, wh in [(40, 30), (320, 70)]:
        for dirty in [None, (0, 0, 400, 100), (260, 0, 100, 80), (280, 20, 20, 15), (0, 0, 32, 16)]:
            iw, ih = 40, 30
            picture = bytes(v for y in range(ih) for x in range(iw)
                            for v in [x * 7 % 256, y * 13 % 256, (x + y) * 3 % 256, 255])
            cpu.mem_write(0x3100000, picture)
            record = bytearray(0x6cb0)
            record[0] = 1
            struct.pack_into('<I', record, 0x10, 6)
            struct.pack_into('<4I', record, 0x5c, 5, 7, ww, wh)
            struct.pack_into('<Q', record, 0x69f8, 0x3100000)
            struct.pack_into('<I', record, 0x6a00, len(picture))
            struct.pack_into('<4I', record, 0x6a08, iw, ih, iw * 4, 0x112233)
            record[0x6a18] = 0xc0
            cpu.mem_write(0x3001000, bytes(record))
            write(0x490a0, struct.pack('<2I', 400, 100))
            write(0x4c1a8, struct.pack('<Q', 0x3010000))
            write(0x698f0, bytes([dirty is not None]))
            write(0x698f8, struct.pack('<4i', *(dirty or (0, 0, 0, 0))))
            cpu.mem_write(0x300fff0, b'\xa5' * 16 + bytes([42]) * 400 * 100 * 4 + b'\xa5' * 16)
            lib.call('draw', 0x3001000)
            pixels = bytes(cpu.mem_read(0x300fff0, 400 * 100 * 4 + 32))
            assert pixels[:16] == pixels[-16:] == b'\xa5' * 16
            results.append(pixels)
    return results


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    args = parser.parse_args()
    with tempfile.TemporaryDirectory(prefix='permafrost-client-rect-') as directory:
        native = exercise(args.reference, False, Path(directory))
        actual = exercise(args.source, True, Path(directory))
        for index, (expected, result) in enumerate(zip(native, actual)):
            assert expected == result, ('client dirty rectangle differs', index)
        assert native == actual
    print('Desktop client rendering: ten native full/partial rasters and guards match.')


if __name__ == '__main__':
    main()
