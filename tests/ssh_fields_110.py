#!/usr/bin/env python3
"""Compare guarded SSH field products, canonical packing and Edwards points.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import random
import struct
from ssh_crypto_110 import loaded, invoke, guard, guarded


def exercise(reference, source, output):
    libs = [loaded(reference, source, output, which) for which in [0, 1]]
    for index, lib in enumerate(libs):
        lib.ssh_native = index == 0
        lib.instruction_limit = 200000000
    rng = random.Random(110)
    cases = [[0] * 16, [1] + [0] * 15, [65535] * 16, [-1] * 16]
    cases += [[rng.randrange(-65536, 65536) for _ in range(16)] for _ in range(12)]
    checks = 0
    prime = (1 << 255) - 19
    for index, values in enumerate(cases):
        other = cases[-index - 1]
        raw, second = struct.pack('<16q', *values), struct.pack('<16q', *other)
        expected = (sum(value << (16 * i) for i, value in enumerate(values)) % prime).to_bytes(32, 'little')
        packed = []
        for lib in libs:
            left = guard(lib, 0x3100000, 128)
            lib.cpu.mem_write(left, raw)
            target = guard(lib, 0x3110000, 32)
            invoke(lib, '_ssh_gf_pack', target, left)
            assert guarded(lib, left, 128) == raw
            packed.append(guarded(lib, target, 32))
        assert packed == [expected] * 2, ('canonical packing', index, packed, expected)
        checks += 1
        for alias in [False, True]:
            products = []
            for lib in libs:
                left = guard(lib, 0x3100000, 128)
                lib.cpu.mem_write(left, raw)
                right = guard(lib, 0x3110000, 128)
                lib.cpu.mem_write(right, second)
                target = left if alias else guard(lib, 0x3120000, 128)
                invoke(lib, '_ssh_gf_mul', target, left, right)
                assert guarded(lib, right, 128) == second
                if not alias:assert guarded(lib, left, 128) == raw
                products.append(guarded(lib, target, 128))
            assert products[0] == products[1], ('field product', index, alias, products)
            checks += 1
    for scalar in [bytes(range(32)), bytes([255]) * 32]:
        points = []
        for lib in libs:
            key = guard(lib, 0x3100000, 32)
            lib.cpu.mem_write(key, scalar)
            target = guard(lib, 0x3110000, 512)
            invoke(lib, '_ssh_ed_scalarbase', target, key)
            assert guarded(lib, key, 32) == scalar
            points.append(guarded(lib, target, 512))
        assert points[0] == points[1], ('Edwards scalar multiplication', scalar, points)
        checks += 1
    print('SSH: %d guarded packing, field product, alias and Edwards comparisons passed.' % checks)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    exercise(args.reference, args.source, args.output)
