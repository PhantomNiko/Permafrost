#!/usr/bin/env python3
"""Compare 1.1 virtio input ring consumption, key modifiers, and pointer states.

Pooka's Free Software License. Reference binaries are test inputs only.
"""
import argparse, struct, sys
from pathlib import Path
sys.path[:0] = [str(Path(__file__).resolve().parent), str(Path(__file__).resolve().parents[1] / 'tools')]
from dll import DLL
from native import inspect

# Reviewed native device records and global queue addresses.
LAYOUTS = {
    'arm64': (0x8000, 0x9c04, 0x9c40, 0x88),
    'x86_64': (0x5100, 0x5000, 0x6d00, 0x88),
    'i386': (0x4200, 0x4100, 0x5e00, 0x68),
    'armv7': (0x8100, 0x9e04, 0x9d00, 0x68),
}


def run(path, reference_metadata, arch, events, mode):
    lib = DLL(path)
    cpu = lib.cpu
    metadata, _ = inspect(path.read_bytes())
    symbols = {name: address for address, name in metadata['symbols']}
    reference_symbols = {name: address for address, name in reference_metadata['symbols']}
    native = '_qemu_input_poll_key' in symbols
    text_end = next(a + n for k, a, n in reference_metadata['sections'] if k == '__text')
    source_state = 0 if native else next(a for k, a, n in metadata['sections'] if k == '__pf_state')
    base, count, queue, offset = LAYOUTS[arch]

    def address(value):
        return lib.base + value if native else lib.base + source_state + value - text_end

    def put(value, fmt, *items):
        cpu.mem_write(address(value), struct.pack(fmt, *items))

    for alias, name in [('poll', '_qemu_input_poll_key'), ('pointer', '_qemu_input_pointer_state')]:
        entry = symbols.get(name, symbols.get('_recovered_%x' % (0x10000000 + reference_symbols[name])))
        lib.exports[alias] = lib.base + entry
    put(count, '<I', 1)
    put(base + offset, '<I', 1)
    put(base + offset + 4, '<H', 64)
    put(base + offset + 6, '<H', 64)
    put(base + offset + 8, '<H', 0)
    for displacement, value in [(0x18, 1), (0x1c, mode == 2), (0x20, mode == 3),
                                (0x24, -100), (0x28, -200), (0x2c, 1000), (0x30, 2000)]:
        put(base + offset + displacement, '<i', value)
    assert len(events) <= 64
    put(base + 0x402, '<H', len(events))
    for i, event in enumerate(events):
        put(base + 0x404 + i * 8, '<II', i, 8)
        put(base + 0x600 + i * 8, '<HHi', *event)
    keys = []
    for _ in range(len(events) + 1):
        value = lib.call('poll', result_bits=32)
        if value:
            keys.append(value)
    cpu.mem_write(0x2f0000, b'\xa5' * 48)
    pointer = lib.call('pointer', 0x2f0008, result_bits=8)
    raw = bytes(cpu.mem_read(0x2f0000, 48))
    assert raw[:8] == raw[-8:] == b'\xa5' * 8
    return keys, pointer, raw, bytes(cpu.mem_read(address(queue), 256)), bytes(cpu.mem_read(address(base + 0x300), 256))


def cases():
    yield [], 1
    for code in range(1, 129):
        yield [(1, code, 1)], 1
        yield [(1, 42, 1), (1, code, 1), (1, 42, 0), (1, code, 0)], 1
    for code in [29, 42, 54, 56, 97, 100, 125, 126]:
        yield [(1, code, 1), (1, 30, 1), (1, code, 0), (1, 30, 1)], 1
    yield [(1, 30, 1)] * 64, 1
    for mode in [2, 3]:
        for button in [272, 273, 274]:
            yield [(1, button, 1), (0, 0, 0), (1, button, 0)], mode
    for value in [-2147483648, -201, -200, -100, 0, 500, 1000, 2000, 2147483647]:
        yield [(3, 0, value), (3, 1, value), (0, 0, 0)], 3
        yield [(2, 0, value), (2, 1, -5), (0, 0, 0)], 2


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('architecture', choices=LAYOUTS)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    args = parser.parse_args()
    metadata, _ = inspect(args.reference.read_bytes())
    count = 0
    for events, mode in cases():
        expected = run(args.reference, metadata, args.architecture, events, mode)
        actual = run(args.source, metadata, args.architecture, events, mode)
        differences = [(i, x if i < 2 else x.hex(), y if i < 2 else y.hex()) for i, (x, y) in enumerate(zip(expected, actual)) if x != y]
        assert not differences, (events, mode, differences)
        count += 1
    print('Virtio input:', count, 'native/source guarded key, modifier, ring, and pointer comparisons passed.')
