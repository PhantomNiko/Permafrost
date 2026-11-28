#!/usr/bin/env python3
"""Compare 1.1 graphics PCI BAR rereads, mappings, and guarded outputs.

Pooka's Free Software License. Reference binaries are test inputs only.
"""
from pathlib import Path
import argparse, struct, sys
sys.path[:0] = [str(Path(__file__).resolve().parent), str(Path(__file__).resolve().parents[1] / 'tools')]
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.arm64_const import *
from unicorn.x86_const import *


def run(path, address, case):
    lib = DLL(path)
    cpu = lib.cpu
    metadata, _ = inspect(path.read_bytes())
    symbols = {name: value for value, name in metadata['symbols']}
    native = '_qemu_kext_map_pci_bar' in symbols
    entry = symbols.get('_qemu_kext_map_pci_bar', symbols.get('_recovered_%x' % (0x10000000 + address)))
    lib.exports['bar'] = lib.base + entry
    api, device, output = 0x2e0000, 0x2e1000, 0x2e2008
    size, available, low, high, reread, fail, index, span = case
    events = []

    def arguments(count):
        if lib.cpu_type == 12:
            registers = [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3]
            values = [cpu.reg_read(r) for r in registers[:count]]
            if count > 4:
                values += list(struct.unpack('<' + 'I' * (count - 4), bytes(cpu.mem_read(cpu.reg_read(UC_ARM_REG_SP), 4 * (count - 4)))))
            return values
        if lib.cpu_type == 0x100000c:
            return [cpu.reg_read(r) for r in [UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2, UC_ARM64_REG_X3, UC_ARM64_REG_X4, UC_ARM64_REG_X5][:count]]
        if lib.wide:
            return [cpu.reg_read(r) for r in [UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX, UC_X86_REG_RCX, UC_X86_REG_R8, UC_X86_REG_R9][:count]]
        return list(struct.unpack('<' + 'I' * count, bytes(cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP) + 4, count * 4))))

    def callback(slot):
        def hook(c, a, z, u):
            args = arguments(6 if slot == 23 else 4)
            if slot == 23:
                events.append((slot, tuple(args[:5])))
                if not fail:
                    value = reread if args[3] == index * 4 + 16 else high
                    cpu.mem_write(args[5], struct.pack('<I', value))
            else:
                events.append((slot, tuple(args[:3])))
                cpu.mem_write(args[3], struct.pack('<Q' if lib.wide and slot == 46 else '<I', 0x123000))
            cpu.reg_write(lib.result, 0 if fail else 1)
        return hook

    cpu.mem_write(api, struct.pack('<3I', 0x54584b57, 1100000, size) + bytes(244))
    for slot in [23, 25, 46]:
        target = 0x18000 + slot * 16
        cpu.mem_write(target, struct.pack('<I', 0xe12fff1e if lib.cpu_type == 12 else 0xd65f03c0) if lib.cpu_type in [12, 0x100000c] else b'\xc3')
        cpu.hook_add(UC_HOOK_CODE, callback(slot), begin=target, end=target)
        if slot == 23 or slot in available:
            cpu.mem_write(api + slot * 4, struct.pack('<I', target))
    record = bytearray(64)
    record[:3] = bytes([2, 3, 4])
    struct.pack_into('<II', record, 20 + index * 4, low, high)
    cpu.mem_write(device, bytes(record))
    cpu.mem_write(output - 8, b'\xa5' * 32)
    if lib.cpu_type == 7 and native:
        stack = 0x4fe0000
        cpu.reg_write(UC_X86_REG_ESP, stack)
        cpu.reg_write(UC_X86_REG_ECX, api)
        cpu.reg_write(UC_X86_REG_EDX, device)
        cpu.mem_write(stack, struct.pack('<4I', lib.stop, index, span, output))
        cpu.emu_start(lib.exports['bar'], lib.stop, count=100000)
        assert cpu.reg_read(lib.pc) == lib.stop
        result = cpu.reg_read(lib.result)
    else:
        result = lib.call('bar', api, device, index, span, output, result_bits=32)
    return result, bytes(cpu.mem_read(output - 8, 32)), events


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    args = parser.parse_args()
    metadata, _ = inspect(args.reference.read_bytes())
    address = next(a for a, n in metadata['symbols'] if n == '_qemu_kext_map_pci_bar')
    count = 0
    for size, available in [(248, [25, 46]), (248, [25]), (248, []), (104, [25]), (103, [25])]:
        for low, high, reread, fail, index, span in [
            (0x10008000, 0, 0x20009000, False, 0, 4096),
            (0x10008004, 1, 0x20009004, False, 0, 4096),
            (0x10008004, 0, 0x20009004, False, 0, 4096),
            (0x10008000, 0, 0x20009001, False, 0, 4096),
            (0x10008000, 0, 0, False, 0, 4096),
            (0x10008000, 0, 0x20009000, True, 0, 4096),
            (0x10008001, 0, 0x20009000, False, 0, 4096),
            (0, 0, 0x20009000, False, 0, 4096),
            (0x10008000, 0, 0x20009000, False, 0, 0),
            (0x10008004, 1, 0x20009004, False, 5, 4096),
        ]:
            case = size, available, low, high, reread, fail, index, span
            expected, actual = run(args.reference, address, case), run(args.source, address, case)
            assert expected == actual, (case, expected, actual)
            count += 1
    print('Graphics BAR mappings:', count, 'native/source guarded comparisons passed.')
