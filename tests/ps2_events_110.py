#!/usr/bin/env python3
"""Compare 1.1 i8042 keyboard decoding, modifiers, mouse packets, and I/O guards.

Pooka's Free Software License. Reference binaries are test inputs only.
"""
import argparse, struct, sys
from pathlib import Path
sys.path[:0] = [str(Path(__file__).resolve().parent), str(Path(__file__).resolve().parents[1] / 'tools')]
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *


def run(path, reference, events):
    lib = DLL(path)
    c = lib.cpu
    m, _ = inspect(path.read_bytes())
    symbols = {n: a for a, n in m['symbols']}
    originals = {n: a for a, n in reference['symbols']}
    native = '_i8042_poll_key' in symbols
    end = next(a + n for k, a, n in reference['sections'] if k == '__text')
    state = 0 if native else next(a for k, a, n in m['sections'] if k == '__pf_state')
    def address(a):return lib.base + a if native else lib.base + state + a - end
    control = 0x3000 if lib.wide else 0x201c
    api = 0x2e0000
    c.mem_write(api, struct.pack('<3I', 0x54584b57, 1100000, 248) + bytes(244))
    c.mem_write(address(control), struct.pack('<Q' if lib.wide else '<I', api))
    c.mem_write(address(control + (8 if lib.wide else 4)), struct.pack('<II', 1, 1))
    remaining = list(events)
    calls = []
    def read(cpu, a, z, u):
        if lib.wide:
            port, width, output = [c.reg_read(r) for r in [UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX]]
        else:
            port, width, output = struct.unpack('<3I', bytes(c.mem_read(c.reg_read(UC_X86_REG_ESP) + 4, 12)))
        assert width == 1 and port in [0x60, 0x64], (port, width, output)
        calls.append((port, width))
        if port == 0x64:value = remaining[0][0] if remaining else 0
        else:value = remaining.pop(0)[1] if remaining else 0
        c.mem_write(output, struct.pack('<I', value))
        c.reg_write(lib.result, 1)
    target = 0x18000
    c.mem_write(target, b'\xc3')
    c.hook_add(UC_HOOK_CODE, read, begin=target, end=target)
    c.mem_write(api + 21 * 4, struct.pack('<I', target))
    for alias, name in [('poll', '_i8042_poll_key'), ('pointer', '_i8042_pointer_state')]:
        lib.exports[alias] = lib.base + symbols.get(name, symbols.get('_recovered_%x' % (0x10000000 + originals[name])))
    keys = []
    for _ in range(len(events) + 2):
        value = lib.call('poll', result_bits=32)
        if value:keys.append(value)
    c.mem_write(0x320000, b'\xa5' * 48)
    result = lib.call('pointer', 0x320008, result_bits=32)
    raw = bytes(c.mem_read(0x320000, 48))
    assert raw[:8] == raw[-8:] == b'\xa5' * 8
    return keys, result, raw, calls, remaining


def cases():
    yield []
    for code in range(1, 89):
        yield [(1, code), (1, code | 128)]
        yield [(1, 42), (1, code), (1, code | 128), (1, 170)]
    for code in [0x1c, 0x1d, 0x35, 0x38, 0x47, 0x48, 0x4b, 0x4d, 0x50, 0x53, 0x5b, 0x5c]:
        yield [(1, 224), (1, code), (1, 224), (1, code | 128)]
    yield [(1, 30)] * 100
    for packet in [[8, 12, 5], [0x38, 255, 254], [9, 0, 0], [0x48, 1, 2], [0, 1, 2], [8, 1]]:
        yield [(0x21, b) for b in packet]
    yield [(0x21, 8), (1, 30), (0x21, 12), (1, 158), (0x21, 5)]
    yield [(0x61, 8), (1, 30)]


if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('reference', type=Path)
    p.add_argument('source', type=Path)
    args = p.parse_args()
    m, _ = inspect(args.reference.read_bytes())
    count = 0
    for events in cases():
        expected, actual = run(args.reference, m, events), run(args.source, m, events)
        assert expected == actual, (events, expected, actual)
        if events == [(1, 30), (1, 158)]:assert expected[0]
        count += 1
    print('PS/2 input:', count, 'native/source key, modifier, packet, mixed-input, and controller-error workflows passed.')
