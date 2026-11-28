#!/usr/bin/env python3
"""Compare guarded 1.1 virtio entropy DMA, descriptor, and completion workflows.

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
LAYOUTS = {
 'arm64': (0xb310, 0x88, 0x8c, 0x90, 0x94, 0xa0, 0xb388, 0xb300, 0xb100, 0xb200, 0xb400, 0x8000),
 'x86_64': (0x4000, 0x88, 0x8c, 0x90, 0x94, 0xa0, 0x4078, 0x4100, 0x4200, 0x4300, 0x8000, 0x5000),
 'i386': (0x4000, 0x68, 0x6c, 0x70, 0x74, 0x80, 0x4060, 0x4100, 0x4200, 0x4300, 0x8000, 0x5000),
 'armv7': (0x5000, 0x68, 0x6c, 0x70, 0x74, 0x80, 0x5060, 0x5100, 0x5200, 0x5300, 0x9000, 0x6000),
}


def run(path, reference, arch, size, transport, fault):
    lib = DLL(path)
    c = lib.cpu
    m, _ = inspect(path.read_bytes())
    names = {n: a for a, n in m['symbols']}
    original = dict((n, a) for a, n in reference['symbols'])
    native = '_rng_read_entropy' in names
    end = next(a + n for k, a, n in reference['sections'] if k == '__text')
    source_state = 0 if native else next(a for k, a, n in m['sections'] if k == '__pf_state')
    def address(v):return lib.base + v if native else lib.base + source_state + v - end
    def put(v, fmt, *items):c.mem_write(address(v), struct.pack(fmt, *items))
    def normal(v):
        start = lib.base + end if native else lib.base + source_state
        return ('state', v - start + end) if start <= v < start + reference['end'] - end else v
    control, kind, dma, port, queue, active, notify, desc, available, used, data, modernbase = LAYOUTS[arch]
    if transport == 2:
        desc, available, used = modernbase, modernbase + 8 * 16, modernbase + 0x1000
    api, output = 0x2e0000, 0x320008
    c.mem_write(api, struct.pack('<3I', 0x54584b57, 1100000, 248) + bytes(244))
    put(control, '<Q' if lib.wide else '<I', api)
    for offset, value in [(kind, transport), (dma, 0x80021800), (port, 0x1f0), (active, 1)]:put(control + offset, '<I', value)
    put(control + queue, '<3H', 8, 0, 0)
    put(notify, '<Q' if lib.wide else '<I', 0x120000)
    c.mem_write(output - 8, b'\xa5' * 8 + b'\x5a' * max(1, size) + b'\xa5' * 8)
    events = []
    def arguments(count):
        if lib.cpu_type == 12:
            result = [c.reg_read(r) for r in [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3][:count]]
            if count > 4:result += list(struct.unpack('<I', bytes(c.mem_read(c.reg_read(UC_ARM_REG_SP), 4))))
            return result
        if lib.cpu_type == 0x100000c:return [c.reg_read(r) for r in [UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2, UC_ARM64_REG_X3, UC_ARM64_REG_X4][:count]]
        if lib.wide:return [c.reg_read(r) for r in [UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX, UC_X86_REG_RCX, UC_X86_REG_R8][:count]]
        return list(struct.unpack('<' + 'I' * count, bytes(c.mem_read(c.reg_read(UC_X86_REG_ESP) + 4, count * 4))))
    def callback(slot):
        def hook(cpu, a, z, u):
            args = arguments(5 if slot == 28 else 0 if slot == 30 else 3 if slot in [22, 27, 29, 48] else 1)
            events.append((slot, tuple(normal(v) for v in (args[:3] if slot == 28 else args))))
            if slot == 28:
                if fault == 'dma':c.reg_write(lib.result, 0);return
                c.mem_write(args[3], struct.pack('<I', 0x12345678))
                c.mem_write(args[4], struct.pack('<I', 1))
            if slot in [22, 27, 48]:
                if fault == 'notify':c.reg_write(lib.result, 0);return
                put(used + 2, '<H', 1)
                put(used + 4, '<II', 1 if fault == 'id' else 0, size - 1 if fault == 'short' else 257 if fault == 'long' else size)
                c.mem_write(address(data), bytes((i * 11 + 3) & 255 for i in range(256)))
            c.reg_write(lib.result, 1)
        return hook
    for slot in [12, 22, 27, 28, 29, 30, 48]:
        target = 0x18000 + slot * 16
        c.mem_write(target, struct.pack('<I', 0xe12fff1e if lib.cpu_type == 12 else 0xd65f03c0) if lib.cpu_type in [12, 0x100000c] else b'\xc3')
        c.hook_add(UC_HOOK_CODE, callback(slot), begin=target, end=target)
        c.mem_write(api + slot * 4, struct.pack('<I', target))
    lib.exports['entropy'] = lib.base + names.get('_rng_read_entropy', names.get('_recovered_%x' % (0x10000000 + original['_rng_read_entropy'])))
    result = lib.call('entropy', output, size, result_bits=32)
    raw = bytes(c.mem_read(output - 8, max(1, size) + 16))
    assert raw[:8] == raw[-8:] == b'\xa5' * 8
    return result, raw, events, bytes(c.mem_read(address(desc), 16)), bytes(c.mem_read(address(available), 22))


if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('architecture', choices=LAYOUTS)
    p.add_argument('reference', type=Path)
    p.add_argument('source', type=Path)
    args = p.parse_args()
    m, _ = inspect(args.reference.read_bytes())
    count = 0
    for transport in [1, 2]:
        for size in [0, 1, 32, 256, 257]:
            for fault in ['', 'dma', 'notify', 'id', 'short', 'long']:
                expected = run(args.reference, m, args.architecture, size, transport, fault)
                actual = run(args.source, m, args.architecture, size, transport, fault)
                if 1 <= size <= 256 and not fault:assert expected[0] == 1, (size, transport, expected)
                assert expected == actual, (size, transport, fault, [(i, x if i in [0, 2] else x.hex(), y if i in [0, 2] else y.hex()) for i, (x, y) in enumerate(zip(expected, actual)) if x != y])
                count += 1
    print('Virtio entropy:', count, 'native/source guarded data, DMA, descriptor, and completion workflows passed.')
