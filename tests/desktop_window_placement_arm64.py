#!/usr/bin/env python3
"""Compare initial and menu-driven desktop window placement on ARM64.

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
from unicorn.arm64_const import UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2


def exercise(path, source, folder):
    blob = bytearray(path.read_bytes())
    struct.pack_into('<I', blob, 12, 6)
    normalized = folder / ('source' if source else 'reference')
    normalized.write_bytes(blob)
    meta, _ = inspect(blob)
    lib = DLL(normalized, api_base=0x82010800)
    cpu = lib.cpu
    names = {name: lib.base + address - meta['base']
             for address, name in meta['symbols'] + meta['data_symbols']}
    for stub in dynamic(blob)['stubs']:
        if stub['name'] not in ['_memcpy', '_memset', '_bzero', '___bzero']:
            continue
        pc = lib.base + stub['address'] - meta['base']

        def memory(cpu, address, length, name):
            dest, value, count = [cpu.reg_read(r) for r in
                                 [UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2]]
            if name == '_memcpy':
                data = bytes(cpu.mem_read(value, count))
            else:
                data = bytes([value & 255]) * count if name == '_memset' else bytes(value)
            cpu.mem_write(dest, data)
            cpu.reg_write(UC_ARM64_REG_X0, dest)

        cpu.mem_write(pc, struct.pack('<I', 0xd65f03c0))
        cpu.hook_add(UC_HOOK_CODE, memory, stub['name'], begin=pc, end=pc)
    if source:
        lib.exports['initialize'] = names['_pf_app_initialize']
        lib.call('initialize')
        state, start = names['_pf_module_state'], 0x2336c
    else:
        state, start = lib.base, 0

    def write(address, data):
        cpu.mem_write(state + address - start, data)

    def function(address):
        return names['_recovered_%x' % address] if source else lib.base + address - 0x10000000

    # Isolate placement from title allocation, focus, scrolling and service delivery.
    for address, value in [(0x10017ff8, 1), (0x100180c4, 1),
                           (0x1001b62c, 0), (0x1001ef98, 1)]:
        pc = function(address)
        cpu.mem_write(pc, struct.pack('<I', 0xd65f03c0))
        cpu.hook_add(UC_HOOK_CODE, lambda c, a, n, v: c.reg_write(UC_ARM64_REG_X0, v),
                     value, begin=pc, end=pc)
    lib.exports['create'] = function(0x10018370)
    lib.exports['menu'] = function(0x1001998c)
    write(0x6109c, struct.pack('<I', 1))
    write(0x61168, struct.pack('<Q', 0x3005000))
    write(0x2f0a8, struct.pack('<II', 800, 600))
    cpu.mem_write(0x3005000, struct.pack('<Q', 0x3010000))
    cpu.mem_write(0x3003000, b'Diagnostics\0')
    outputs = []
    dimensions = [(1000, 690), (700, 400), (40, 30), (800, 600), (1, 1)]
    for width, height in dimensions:
        cpu.mem_write(0x3010000, bytes(0x6cb0))
        cpu.mem_write(0x3001000, struct.pack('<QQII', 6, 0x3003000, width, height))
        status = lib.call('create', 0x3001000, result_bits=32)
        record = bytes(cpu.mem_read(0x3010000, 0x6cb0))
        expected = (int((800 - width) / 2), int((600 - height) / 2), width, height)
        assert struct.unpack_from('<4i', record, 0x5c) == expected
        outputs.append((status, record))
    write(0x2f0c0, struct.pack('<I', 0))
    cpu.mem_write(0x3020000, b'\x01' + bytes(0x334f))
    cpu.mem_write(0x3023338, struct.pack('<Q', 0x3030000))
    cpu.mem_write(0x302334c, struct.pack('<I', 1))
    cpu.mem_write(0x3030000, struct.pack('<I', 8) + bytes(0x108))
    for width, height in dimensions:
        record = bytearray(0x6cb0)
        record[0] = 1
        struct.pack_into('<2I', record, 100, width, height)
        cpu.mem_write(0x3010000, bytes(record))
        status = lib.call('menu', 0x3020000, 0, 100 | (100 << 32), 0, 5, 5, result_bits=32)
        record = bytes(cpu.mem_read(0x3010000, 0x6cb0))
        expected = (int((800 - width) / 2), int((600 - height) / 2), width, height)
        assert struct.unpack_from('<4i', record, 0x5c) == expected
        outputs.append((status, record))
    return outputs


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    args = parser.parse_args()
    with tempfile.TemporaryDirectory(prefix='permafrost-placement-') as directory:
        assert exercise(args.reference, False, Path(directory)) == exercise(args.source, True, Path(directory))
    print('ARM64 desktop: ten native initial/menu placement records match, including oversized windows.')
