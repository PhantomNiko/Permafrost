#!/usr/bin/env python3
"""Compare guarded 1.1 ATA sector transfers through intercepted hardware services.

Pooka's Free Software License. Reference binaries are test inputs only.
"""
import argparse, struct, sys
from pathlib import Path
sys.path[:0] = [str(Path(__file__).resolve().parent), str(Path(__file__).resolve().parents[1] / 'tools')]
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.arm64_const import *
from unicorn.x86_const import *


def run(path, entry, sector, writing, mmio, fail):
    lib = DLL(path)
    cpu = lib.cpu
    metadata, _ = inspect(path.read_bytes())
    names = {n: a for a, n in metadata['symbols']}
    native = '_qemu_ata_sector_once' in names
    lib.exports['sector'] = lib.base + names.get('_qemu_ata_sector_once', names.get('_recovered_%x' % (0x10000000 + entry)))
    api, device, buffer = 0x2e0000, 0x2e1000, 0x2f0008
    cpu.mem_write(api, struct.pack('<3I', 0x54584b57, 1100000, 248) + bytes(244))
    cpu.mem_write(device, bytes(0x200))
    cpu.mem_write(device, struct.pack('<Q' if lib.wide else '<I', api))
    offset = 0xb0 if lib.wide else 0x90
    cpu.mem_write(device + offset, struct.pack('<HHB', 0x1f0, 0x3f6, 0xe0))
    cpu.mem_write(device + (0xc4 if lib.wide else 0xa4), struct.pack('<I', 1))
    cpu.mem_write(device + (0xc8 if lib.wide else 0xa8), struct.pack('<Q' if lib.wide else '<I', 0x120000))
    cpu.mem_write(device + (0xd0 if lib.wide else 0xac), struct.pack('<I', int(mmio)))
    payload = bytes((i * 17 + 3) & 255 for i in range(512))
    cpu.mem_write(buffer - 8, b'\xa5' * 8 + payload + b'\xa5' * 8)
    events, transferred, command = [], 0, 0

    def arguments(count):
        if lib.cpu_type == 12:
            return [cpu.reg_read(r) for r in [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3][:count]]
        if lib.cpu_type == 0x100000c:
            return [cpu.reg_read(r) for r in [UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2, UC_ARM64_REG_X3][:count]]
        if lib.wide:
            return [cpu.reg_read(r) for r in [UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX, UC_X86_REG_RCX][:count]]
        return list(struct.unpack('<' + 'I' * count, bytes(cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP) + 4, count * 4))))

    def callback(slot):
        def hook(c, a, z, u):
            nonlocal transferred, command
            args = arguments(1 if slot == 12 else 3)
            reading = slot in [21, 26, 47]
            events.append((slot, tuple(args[:2] if reading else args)))
            if len(events) - 1 == fail:
                cpu.reg_write(lib.result, 0)
                return
            if slot != 12:
                register = (args[0] - 0x120000) // 16 if slot in [26, 27, 47, 48] else args[0] - 0x1f0
                if reading:
                    value = 0x40
                    if register == 7 and command and transferred < 256:
                        value = 8
                    if register == 0:
                        value = (transferred * 257 + 0x1234) & 65535
                        transferred += 1
                    cpu.mem_write(args[2], struct.pack('<I', value))
                elif register == 7:
                    command = args[2]
                elif register == 0 and args[1] == 2:
                    transferred += 1
            cpu.reg_write(lib.result, 1)
        return hook

    for slot in [12, 21, 22, 26, 27, 47, 48]:
        target = 0x18000 + slot * 16
        cpu.mem_write(target, struct.pack('<I', 0xe12fff1e if lib.cpu_type == 12 else 0xd65f03c0) if lib.cpu_type in [12, 0x100000c] else b'\xc3')
        cpu.hook_add(UC_HOOK_CODE, callback(slot), begin=target, end=target)
        cpu.mem_write(api + slot * 4, struct.pack('<I', target))
    if lib.cpu_type == 7 and native:
        cpu.reg_write(UC_X86_REG_ECX, device)
        cpu.reg_write(UC_X86_REG_EDX, sector)
        result = lib.call('sector', buffer, writing, result_bits=32)
    else:
        result = lib.call('sector', device, sector, buffer, writing, result_bits=32)
    raw = bytes(cpu.mem_read(buffer - 8, 528))
    assert raw[:8] == raw[-8:] == b'\xa5' * 8
    return result, raw, events


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    args = parser.parse_args()
    metadata, _ = inspect(args.reference.read_bytes())
    entry = next(a for a, n in metadata['symbols'] if n == '_qemu_ata_sector_once')
    count = 0
    for writing in [0, 1]:
        for mmio in [False, True]:
            for sector, fail in [(0, -1), (0x1234567, -1), (0xfffffff, -1), (0x10000000, -1), (0, 0), (0, 2), (0, 10), (0, 50)]:
                expected = run(args.reference, entry, sector, writing, mmio, fail)
                actual = run(args.source, entry, sector, writing, mmio, fail)
                assert expected == actual, (writing, mmio, sector, fail, [(i, (len(x), x[:16]) if i else x, (len(y), y[:16]) if i else y) for i, (x, y) in enumerate(zip(expected, actual)) if x != y])
                count += 1
    print('ATA sector transfers:', count, 'native/source guarded data, register, and service-failure comparisons passed.')
