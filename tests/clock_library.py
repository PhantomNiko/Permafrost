#!/usr/bin/env python3
"""Compare clock return values and the exported chrono counter.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
from dll import DLL


def exercise(path):
    lib = DLL(path)
    counter = lib.exports['__ZZN2wm6chrono6detail15next_clock_tickEvE4tick']
    width = 8 if lib.wide else 4
    mask = (1 << (width * 8)) - 1
    results = []
    for initial in (0, 41, mask - 1, mask):
        lib.cpu.mem_write(counter, initial.to_bytes(width, 'little'))
        for _ in range(2):
            result = lib.call('_clock', result_bits=width * 8)
            value = int.from_bytes(lib.cpu.mem_read(counter, width), 'little')
            results.append((result, value))
    return results


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    args = parser.parse_args()
    native, source = exercise(args.reference), exercise(args.source)
    assert native == source, (native, source)
    print('Clock: eight native/source return and exported-counter cases passed.')


if __name__ == '__main__':
    main()
