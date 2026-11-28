#!/usr/bin/env python3
"""Compare 1.1 GPU software-provider commands and guarded framebuffer bytes.

Pooka's Free Software License. Reference binaries are test inputs only.
"""
import argparse, struct, sys
from pathlib import Path
sys.path[:0] = [str(Path(__file__).resolve().parent), str(Path(__file__).resolve().parents[1] / 'tools')]
from dll import DLL
from native import inspect
from graphics_draw import CASES


def run(path, address, commands, mutation=None):
    lib = DLL(path)
    metadata, _ = inspect(path.read_bytes())
    names = {n: a for a, n in metadata['symbols']}
    entry = names.get('_qemu_graphics_gpu_provider_submit', names.get('_recovered_%x' % (0x10000000 + address)))
    lib.exports['submit'] = lib.base + entry
    pixels, stride, width, height = 0x2f0008, 48, 8, 8
    size = stride * height
    lib.cpu.mem_write(pixels - 8, b'\xa5' * 8 + b'\x5a' * size + b'\xa5' * 8)
    encoded = bytearray()
    for kind, rect, color, vertices in commands:
        encoded += struct.pack('<10I4i2I', kind, 0, pixels, 0, size, width, height, stride, 1, 0, *rect, color, 0)
        for vertex in vertices:
            encoded += struct.pack('<3iI', *vertex)
    if mutation:
        offset, value = mutation
        struct.pack_into('<I', encoded, offset, value)
    lib.cpu.mem_write(0x2f1000, bytes(encoded))
    result = lib.call('submit', 0x2f1000, len(commands), result_bits=8)
    assert bytes(lib.cpu.mem_read(pixels - 8, 8)) == b'\xa5' * 8
    assert bytes(lib.cpu.mem_read(pixels + size, 8)) == b'\xa5' * 8
    return result, bytes(lib.cpu.mem_read(pixels, size))


if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('reference', type=Path)
    p.add_argument('source', type=Path)
    args = p.parse_args()
    metadata, _ = inspect(args.reference.read_bytes())
    address = next(a for a, n in metadata['symbols'] if n == '_qemu_graphics_gpu_provider_submit')
    count = 0
    for commands in CASES:
        assert run(args.reference, address, commands) == run(args.source, address, commands), count
        count += 1
    for mutation in [(0, 0), (0, 99), (8, 0), (16, 1), (20, 0), (24, 0), (28, 1), (32, 0), (32, 99)]:
        expected = run(args.reference, address, CASES[0], mutation)
        actual = run(args.source, address, CASES[0], mutation)
        assert expected == actual, (mutation, expected, actual)
        count += 1
    print('Graphics software provider:', count, 'native/source guarded command and raster comparisons passed.')
