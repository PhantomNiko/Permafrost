#!/usr/bin/env python3
"""Compare ARM64 PFS writer results and directory visitor argument positions.

Pooka's Free Software License. Physical I/O and allocation are test boundaries.
"""
import argparse
import json
from pathlib import Path
import struct
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2, UC_ARM64_REG_X3, UC_ARM64_REG_PC, UC_ARM64_REG_LR

p = argparse.ArgumentParser(description=__doc__)
p.add_argument('reference', type=Path)
p.add_argument('source', type=Path)
p.add_argument('--map', type=Path, required=True)
a = p.parse_args()
meta, _ = inspect(a.reference.read_bytes())
assert meta['cpu'] == 0x100000c
names = {name: pc for pc, name in meta['symbols']}
mapping = json.loads(a.map.read_text())
results = []
registers = [UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2, UC_ARM64_REG_X3]
for native in (True, False):
    address = lambda name: names[name] if native else mapping['_recovered_%x' % names[name]]
    lib = Kernel((a.reference if native else a.source).read_bytes(), {
        'write': address('_fs_polynyafs_io_write'),
        'visitor': address('_fs_polynyafs_preflight_noop_visitor'),
        '_ws_errorf': 0x4fe0000})
    c = lib.cpu
    events, output = [], []
    state = {'writable': 1, 'read': 1, 'write': 1, 'allocate': 1}
    def leave(value=0):
        c.reg_write(UC_ARM64_REG_X0, value)
        c.reg_write(UC_ARM64_REG_PC, c.reg_read(UC_ARM64_REG_LR))
    def block(cpu, pc, size, operation):
        args = [c.reg_read(r) for r in registers]
        events.append((operation, *args))
        if operation == 'read' and state['read']:
            c.mem_write(args[2], b'\x35' * args[3])
        leave(state[operation])
    def allocate(*unused):
        length = c.reg_read(UC_ARM64_REG_X0)
        events.append(('allocate', length))
        assert length <= 0x20000
        c.mem_write(0x3200000, b'\xa5' * (length + 16))
        leave(0x3200000 if state['allocate'] else 0)
    def copy(*unused):
        dest, src, length = [c.reg_read(r) for r in registers[:3]]
        c.mem_write(dest, bytes(c.mem_read(src, length)))
        leave(dest)
    hooks = [('_storage_drive_is_writable', lambda *unused: leave(state['writable']), None),
             ('_load_drive_bytes', block, 'read'), ('_write_drive_bytes_deferred', block, 'write'),
             ('_malloc', allocate, None), ('_free', lambda *unused: leave(), None),
             ('_memcpy', copy, None)]
    for name, hook, user in hooks:
        pc = address(name)
        c.hook_add(UC_HOOK_CODE, hook, user, begin=pc, end=pc)
    c.mem_write(0x3000000, struct.pack('<B3xII', 0x80, 2, 128))
    c.mem_write(0x3100000, bytes(range(256)) * 4)
    for writable, read, write, allocated in [(1, 1, 1, 1), (0, 1, 1, 1), (1, 0, 1, 1), (1, 1, 0, 1), (1, 1, 1, 0)]:
        state.update(writable=writable, read=read, write=write, allocate=allocated)
        for context, offset, data, length in [(0, 0, 0x3100000, 512), (0x3000000, 0, 0, 1), (0x3000000, 0, 0, 0), (0x3000000, 0, 0x3100000, 512), (0x3000000, 1, 0x3100000, 513), (0x3000000, 65536, 0x3100000, 1)]:
            events.clear()
            status = lib.call('write', context, offset, data, length, result_bits=32)
            assert bytes(c.mem_read(0x3100000, 1024)) == bytes(range(256)) * 4
            output.append((status, tuple(events)))
    for context in (0, 1):
        for stop in (0, 1, 0x3100000):
            value = lib.call('visitor', context, 0x1234, 0x5678, stop, result_bits=32)
            assert value == int(stop == 0), (native, context, stop, value)
            output.append(value)
    results.append(output)
assert results[0] == results[1], [(i, n, s) for i, (n, s) in enumerate(zip(*results)) if n != s][:3]
print('ARM64 PFS callbacks: 36 native/source status, bounds, allocation, I/O and visitor-argument comparisons passed.')
