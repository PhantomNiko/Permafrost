#!/usr/bin/env python3
"""Compare 1.1 virtio block descriptor chains, DMA forwarding, and completion.

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


def run(path, entry, operation, sectors, modern, fault):
    lib = DLL(path)
    c = lib.cpu
    m, _ = inspect(path.read_bytes())
    names = {n: a for a, n in m['symbols']}
    native = '_qemu_block_submit' in names
    lib.exports['submit'] = lib.base + names.get('_qemu_block_submit', names.get('_recovered_%x' % (0x10000000 + entry)))
    api, device, buffer = 0x2e0000, 0x300000, 0x320008
    offset = 0x20 if lib.wide else 0
    c.mem_write(api, struct.pack('<3I', 0x54584b57, 1100000, 248) + bytes(244))
    c.mem_write(device, bytes(0x7000))
    c.mem_write(device, struct.pack('<Q' if lib.wide else '<I', api))
    for field, value in [(0x74, 1), (0x78, 1), (0x70, 0x80021800), (0x8c, modern)]:
        c.mem_write(device + field + offset, struct.pack('<I', value))
    c.mem_write(device + 0x84 + offset, struct.pack('<3H', 8, 0, 0))
    c.mem_write(device + 0x8a + offset, struct.pack('<H', 0x1f0))
    c.mem_write(device + (0x78 if lib.wide else 0x60), struct.pack('<Q' if lib.wide else '<I', 0x120000))
    size = max(1, sectors) * 512
    payload = bytes((i * 13 + 7) & 255 for i in range(size))
    c.mem_write(buffer - 8, b'\xa5' * 8 + payload + b'\xa5' * 8)
    events, dma_calls = [], 0
    descriptor = 0x1000 if modern else 0x100
    used = 0x2000 if modern else 0x300
    available = 0x1000 + 8 * 16 if modern else 0x200

    def arguments(count):
        if lib.cpu_type == 12:
            values = [c.reg_read(r) for r in [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3][:count]]
            if count > 4:
                values += list(struct.unpack('<I', bytes(c.mem_read(c.reg_read(UC_ARM_REG_SP), 4))))
            return values
        if lib.cpu_type == 0x100000c:
            return [c.reg_read(r) for r in [UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2, UC_ARM64_REG_X3, UC_ARM64_REG_X4][:count]]
        if lib.wide:
            return [c.reg_read(r) for r in [UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX, UC_X86_REG_RCX, UC_X86_REG_R8][:count]]
        return list(struct.unpack('<' + 'I' * count, bytes(c.mem_read(c.reg_read(UC_X86_REG_ESP) + 4, count * 4))))

    def hook(slot):
        def callback(cpu, a, z, u):
            nonlocal dma_calls
            args = arguments(5 if slot == 28 else 3 if slot == 29 else 0 if slot == 30 else 3 if slot in [22, 27, 48] else 1)
            if slot == 28:
                events.append((slot, tuple(args[:3])))
                dma_calls += 1
                if fault == 'dma' and dma_calls == 2:
                    c.reg_write(lib.result, 0)
                    return
                c.mem_write(args[3], struct.pack('<I', args[1]))
                c.mem_write(args[4], struct.pack('<I', 1))
            else:
                events.append((slot, tuple(args)))
            if slot in [22, 27, 48]:
                if fault == 'notify':
                    c.reg_write(lib.result, 0)
                    return
                c.mem_write(device + used + 2, struct.pack('<H', 1))
                length = 1 if operation != 0 else sectors * 512 + 1
                c.mem_write(device + used + 4, struct.pack('<II', 1 if fault == 'id' else 0, 0 if fault == 'length' else length))
                c.mem_write(device + 0x6000, bytes([1 if fault == 'status' else 0]))
                if operation == 0:
                    c.mem_write(device + 0x4000, bytes((i * 7 + 11) & 255 for i in range(sectors * 512)))
            c.reg_write(lib.result, 1)
        return callback

    for slot in [12, 22, 27, 28, 29, 30, 48]:
        target = 0x18000 + slot * 16
        c.mem_write(target, struct.pack('<I', 0xe12fff1e if lib.cpu_type == 12 else 0xd65f03c0) if lib.cpu_type in [12, 0x100000c] else b'\xc3')
        c.hook_add(UC_HOOK_CODE, hook(slot), begin=target, end=target)
        c.mem_write(api + slot * 4, struct.pack('<I', target))
    args = [device, operation, 0x1234567, buffer, sectors]
    if lib.cpu_type == 7 and native:
        c.reg_write(UC_X86_REG_ECX, args[0])
        c.reg_write(UC_X86_REG_EDX, args[1])
        result = lib.call('submit', *args[2:], result_bits=8)
    else:
        result = lib.call('submit', *args, result_bits=8)
    raw = bytes(c.mem_read(buffer - 8, size + 16))
    assert raw[:8] == raw[-8:] == b'\xa5' * 8
    return result, raw, events, bytes(c.mem_read(device + descriptor, 128)), bytes(c.mem_read(device + available, 22)), bytes(c.mem_read(device + 0x3000, 16))


if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('reference', type=Path)
    p.add_argument('source', type=Path)
    args = p.parse_args()
    metadata, _ = inspect(args.reference.read_bytes())
    entry = next(a for a, n in metadata['symbols'] if n == '_qemu_block_submit')
    count = 0
    for operation in [0, 1, 4]:
        for modern in [0, 1]:
            for sectors, fault in [(1, ''), (16, ''), (0, ''), (17, ''), (1, 'dma'), (1, 'notify'), (1, 'id'), (1, 'length'), (1, 'status')]:
                expected = run(args.reference, entry, operation, sectors, modern, fault)
                actual = run(args.source, entry, operation, sectors, modern, fault)
                differences = [(i, x if i < 3 else x.hex(), y if i < 3 else y.hex()) for i, (x, y) in enumerate(zip(expected, actual)) if x != y]
                assert not differences, (operation, sectors, modern, fault, differences)
                count += 1
    print('Virtio block queues:', count, 'native/source DMA, descriptor, completion, and failure comparisons passed.')
