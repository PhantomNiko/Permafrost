#!/usr/bin/env python3
"""Compare 1.1 serial-controller discovery and registered descriptions.

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


def run(path, identity, multi, fail, device_ok, pci_class=0x07800001):
    lib = DLL(path)
    c = lib.cpu
    events = []
    def arguments(n):
        if lib.cpu_type == 12:
            values = [c.reg_read(r) for r in [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3][:n]]
            if n > 4:values += list(struct.unpack('<' + 'I' * (n - 4), bytes(c.mem_read(c.reg_read(UC_ARM_REG_SP), (n - 4) * 4))))
            return values
        if lib.cpu_type == 0x100000c:return [c.reg_read(r) for r in [UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2, UC_ARM64_REG_X3, UC_ARM64_REG_X4, UC_ARM64_REG_X5][:n]]
        if lib.wide:return [c.reg_read(r) for r in [UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX, UC_X86_REG_RCX, UC_X86_REG_R8, UC_X86_REG_R9][:n]]
        return list(struct.unpack('<' + 'I' * n, bytes(c.mem_read(c.reg_read(UC_X86_REG_ESP) + 4, n * 4))))
    def text(p):
        out = bytearray()
        while p and len(out) < 1500:
            value = c.mem_read(p + len(out), 1)[0]
            if not value:return bytes(out)
            out.append(value)
        assert not p
        return bytes(out)
    def callback(slot):
        def hook(cpu, a, z, u):
            args = arguments(6 if slot == 23 else 3)
            if slot == 3:
                events.append(('device', tuple(text(p) for p in args)))
                c.reg_write(lib.result, device_ok)
                return
            bus, device, function, offset, width, output = args
            assert width == 4, args
            events.append(('pci', bus, device, function, offset, width))
            present = bus == 2 and device == 3 and (function == 0 or multi and function == 4)
            if present and offset != fail:
                value = {0: identity, 4: 7, 8: pci_class, 12: 0x800000 if multi else 0}.get(offset, 0)
                c.mem_write(output, struct.pack('<I', value))
            c.reg_write(lib.result, int(present and offset != fail))
        return hook
    api = 0x2e0000
    c.mem_write(api, struct.pack('<3I', 0x54584b57, 1100000, 248) + bytes(244))
    for slot in [3, 23]:
        target = 0x18000 + slot * 16
        c.mem_write(target, struct.pack('<I', 0xe12fff1e if lib.cpu_type == 12 else 0xd65f03c0) if lib.cpu_type in [12, 0x100000c] else b'\xc3')
        c.hook_add(UC_HOOK_CODE, callback(slot), begin=target, end=target)
        c.mem_write(api + slot * 4, struct.pack('<I', target))
    before = bytes(c.mem_read(api, 256))
    result = lib.call('_winterboot_kext_init', api, result_bits=32)
    assert bytes(c.mem_read(api, 256)) == before
    return result, events


if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('reference', type=Path)
    p.add_argument('source', type=Path)
    args = p.parse_args()
    count = 0
    for identity, multi in [(0x10031af4, False), (0x10431af4, False), (0x10031af4, True), (0x99991af4, False), (0x12348086, False), (0, False), (0xffff, False)]:
        for fail, device_ok in [(-1, 1), (0, 1), (8, 1), (4, 1), (12, 1), (-1, 0)]:
            expected = run(args.reference, identity, multi, fail, device_ok)
            actual = run(args.source, identity, multi, fail, device_ok)
            assert expected == actual, (identity, multi, fail, device_ok, expected[0], actual[0], [(i, x, y) for i, (x, y) in enumerate(zip(expected[1], actual[1])) if x != y][:4], len(expected[1]), len(actual[1]))
            assert expected[0] == device_ok
            count += 1
    print('Serial discovery:', count, 'native/source PCI enumeration, registration, and failure workflows passed.')
