#!/usr/bin/env python3
"""Compare guarded 1.1 virtio Ethernet frame queues and hardware callbacks.

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
    'arm64': (0x11428, 0x18, 0x40, 0x50, 0x11500, 0x8000, 0x11400, 0x11700, 0x11300, 0x11100, 0x11200),
    'x86_64': (0x5000, 0x18, 0x40, 0x50, 0x5300, 0x5400, 0x5200, 0xe700, 0xe400, 0xe500, 0xe600),
    'i386': (0x4100, 0x10, 0x34, 0x40, 0x4400, 0x4500, 0x4300, 0xd800, 0xd500, 0xd600, 0xd700),
    'armv7': (0xe024, 0x10, 0x34, 0x40, 0x4300, 0x4400, 0xe000, 0xd700, 0xd400, 0xd500, 0xd600),
}


def run(path, reference, arch, sending, size, header, capacity, fault):
    lib = DLL(path)
    c = lib.cpu
    m, _ = inspect(path.read_bytes())
    names = {n: a for a, n in m['symbols']}
    originals = {n: a for a, n in reference['symbols']}
    native = '_qemu_network_send_frame' in names
    end = next(a + n for k, a, n in reference['sections'] if k == '__text')
    source_state = 0 if native else next(a for k, a, n in m['sections'] if k == '__pf_state')
    def address(value):
        return lib.base + value if native else lib.base + source_state + value - end
    def put(value, fmt, *items):
        c.mem_write(address(value), struct.pack(fmt, *items))
    def normal(value):
        start = lib.base + end if native else lib.base + source_state
        return ('state', value - start + end) if start <= value < start + reference['end'] - end else value
    control, active, rx, tx, rxused, rxbuffer, rxavail, txbuffer, txdesc, txavail, txused = LAYOUTS[arch]
    api, output, length = 0x2e0000, 0x320008, 0x330008
    c.mem_write(api, struct.pack('<3I', 0x54584b57, 1100000, 248) + bytes(244))
    put(control, '<Q' if lib.wide else '<I', api)
    put(control + active, '<I', 1)
    put(control + active + 4, '<I', 0x80021800)
    put(control + active + 0x10, '<I', header)
    put(control + active + 0x14, '<II', 0x12345678, 1)
    for queue, notify in [(rx, 0x120000), (tx, 0x120100)]:
        put(control + queue, '<HHH', 16 if queue == rx else 1, 0, 0)
        put(control + queue + 8, '<Q' if lib.wide else '<I', notify)
    payload = bytes((i * 17 + 9) & 255 for i in range(size))
    output_size = max(size, capacity)
    c.mem_write(output - 8, b'\xa5' * 8 + (payload if sending else b'\x5a' * size) + b'\x5a' * (output_size - size) + b'\xa5' * 8)
    c.mem_write(length - 8, b'\xa5' * 20)
    if not sending:
        put(rxused + 2, '<H', 1)
        put(rxused + 4, '<II', 16 if fault == 'id' else 0, 2305 if fault == 'length' else header + size)
        c.mem_write(address(rxbuffer), bytes(header) + payload)
    events = []
    def arguments(count):
        if lib.cpu_type == 12:return [c.reg_read(r) for r in [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2][:count]]
        if lib.cpu_type == 0x100000c:return [c.reg_read(r) for r in [UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2][:count]]
        if lib.wide:return [c.reg_read(r) for r in [UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX][:count]]
        return list(struct.unpack('<' + 'I' * count, bytes(c.mem_read(c.reg_read(UC_X86_REG_ESP) + 4, count * 4))))
    def callback(slot):
        def hook(cpu, a, z, u):
            args = arguments(0 if slot == 30 else 3 if slot in [29, 27, 48] else 1)
            events.append((slot, tuple(normal(v) for v in args)))
            if slot in [27, 48]:
                if fault == 'notify':c.reg_write(lib.result, 0);return
                if sending:
                    put(txused + 2, '<H', 1)
                    put(txused + 4, '<II', 1 if fault == 'id' else 0, 1 if fault == 'length' else 0)
            c.reg_write(lib.result, 1)
        return hook
    for slot in [12, 27, 29, 30, 48]:
        target = 0x18000 + slot * 16
        c.mem_write(target, struct.pack('<I', 0xe12fff1e if lib.cpu_type == 12 else 0xd65f03c0) if lib.cpu_type in [12, 0x100000c] else b'\xc3')
        c.hook_add(UC_HOOK_CODE, callback(slot), begin=target, end=target)
        c.mem_write(api + slot * 4, struct.pack('<I', target))
    name = '_qemu_network_send_frame' if sending else '_qemu_network_poll_frame'
    lib.exports['frame'] = lib.base + names.get(name, names.get('_recovered_%x' % (0x10000000 + originals[name])))
    result = lib.call('frame', output, size if sending else capacity, *([] if sending else [length]), result_bits=32)
    raw = bytes(c.mem_read(output - 8, output_size + 16))
    assert raw[:8] == raw[-8:] == b'\xa5' * 8
    length_raw = bytes(c.mem_read(length - 8, 20))
    assert length_raw[:8] == length_raw[-8:] == b'\xa5' * 8
    return result, raw, length_raw, events, bytes(c.mem_read(address(txbuffer), 0x80c)), bytes(c.mem_read(address(txdesc), 16)), bytes(c.mem_read(address(rxavail), 36))


if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('architecture', choices=LAYOUTS)
    p.add_argument('reference', type=Path)
    p.add_argument('source', type=Path)
    args = p.parse_args()
    m, _ = inspect(args.reference.read_bytes())
    count = 0
    for sending in [False, True]:
        for size, header, capacity, fault in [(64, 10, 128, ''), (64, 12, 128, ''), (64, 10, 8, ''), (0, 10, 128, ''), (13, 10, 128, ''), (2048, 10, 2048, ''), (2049, 10, 2049, ''), (64, 10, 128, 'notify'), (64, 10, 128, 'id'), (64, 10, 128, 'length')]:
            expected = run(args.reference, m, args.architecture, sending, size, header, capacity, fault)
            actual = run(args.source, m, args.architecture, sending, size, header, capacity, fault)
            if not fault and ((sending and 14 <= size <= 2048) or (not sending and 0 < size <= min(2048, capacity))):assert expected[0] == 1, (sending, size, expected[0])
            assert expected == actual, (sending, size, header, capacity, fault, [(i, x if i in [0, 3] else x.hex(), y if i in [0, 3] else y.hex()) for i, (x, y) in enumerate(zip(expected, actual)) if x != y])
            count += 1
    print('Virtio Ethernet:', count, 'native/source guarded frame, descriptor, DMA, and completion workflows passed.')
