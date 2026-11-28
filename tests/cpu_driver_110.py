#!/usr/bin/env python3
"""Compare 1.1 CPU driver descriptions and platform-provider registration records.

Pooka's Free Software License. Reference binaries are test inputs only.
"""
import argparse, struct, sys
from pathlib import Path
sys.path[:0] = [str(Path(__file__).resolve().parent), str(Path(__file__).resolve().parents[1] / 'tools')]
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.arm64_const import *
from unicorn.x86_const import *


def run(path, flags, fallback, brand, info_ok, device_ok, provider_ok):
    lib = DLL(path)
    c = lib.cpu
    events = []
    def arguments(n):
        if lib.cpu_type == 12:return [c.reg_read(r) for r in [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2][:n]]
        if lib.cpu_type == 0x100000c:return [c.reg_read(r) for r in [UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2][:n]]
        if lib.wide:return [c.reg_read(r) for r in [UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX][:n]]
        return list(struct.unpack('<' + 'I' * n, bytes(c.mem_read(c.reg_read(UC_X86_REG_ESP) + 4, n * 4))))
    def text(p):
        result = bytearray()
        while p and len(result) < 1024:
            v = c.mem_read(p + len(result), 1)[0]
            if not v:return bytes(result)
            result.append(v)
        assert not p
        return bytes(result)
    def callback(slot):
        def hook(cpu, a, z, u):
            args = arguments(3 if slot == 3 else 1)
            if slot == 15:
                record = bytearray(168)
                struct.pack_into('<I', record, 0, flags)
                record[4:4 + len(brand)] = brand
                struct.pack_into('<I', record, 100, fallback)
                c.mem_write(args[0], bytes(record))
                events.append(('cpu',))
                result = info_ok
            elif slot == 3:
                events.append(('device', tuple(text(p) for p in args)))
                result = device_ok
            else:
                events.append(('provider', bytes(c.mem_read(args[0], 184))))
                result = provider_ok
            c.reg_write(lib.result, int(result))
        return hook
    api = 0x2e0000
    raw = struct.pack('<3I', 0x54584b57, 1100000, 248) + bytes(244)
    c.mem_write(api - 8, b'\xa5' * 8 + raw + b'\xa5' * 8)
    for slot in [3, 15, 58]:
        target = 0x18000 + slot * 16
        c.mem_write(target, struct.pack('<I', 0xe12fff1e if lib.cpu_type == 12 else 0xd65f03c0) if lib.cpu_type in [12, 0x100000c] else b'\xc3')
        c.hook_add(UC_HOOK_CODE, callback(slot), begin=target, end=target)
        c.mem_write(api + slot * 4, struct.pack('<I', target))
    before = bytes(c.mem_read(api - 8, len(raw) + 16))
    result = lib.call('_winterboot_kext_init', api, result_bits=32)
    assert bytes(c.mem_read(api - 8, len(raw) + 16)) == before
    return result, events


if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('reference', type=Path)
    p.add_argument('source', type=Path)
    args = p.parse_args()
    count = 0
    for flags, fallback, brand in [(0, 0, b''), (0, 1, b''), (0, 16, b'Example CPU'), (1 << 16, 0, b'One core'), (8 << 16, 0, b'Eight cores'), (1 << 24, 1, b''), ((2 << 24) | (8 << 16), 0, b'Multiple sockets'), (255 << 24, 255, b'Boundary CPU')]:
        for info, device, provider in [(1, 1, 1), (0, 1, 1), (1, 0, 1), (1, 1, 0)]:
            expected = run(args.reference, flags, fallback, brand, info, device, provider)
            actual = run(args.source, flags, fallback, brand, info, device, provider)
            assert expected == actual, (flags, fallback, brand, info, device, provider, expected, actual)
            count += 1
    print('CPU driver:', count, 'native/source CPU descriptions, registration records, and service-error workflows passed.')
