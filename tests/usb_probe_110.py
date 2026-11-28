#!/usr/bin/env python3
"""Compare 1.1 USB controller probe names, PCI enumeration, and service failures.

Pooka's Free Software License. Reference binaries are test inputs only.
"""
import argparse
from pathlib import Path
from serial_probe_110 import run

if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('reference', type=Path)
    p.add_argument('source', type=Path)
    args = p.parse_args()
    count = 0
    for identity, pci_class in [(0x000d1b36, 0x0c033001), (0x12348086, 0x0c030001),
                                (0x12348086, 0x0c031001), (0x12348086, 0x0c032001),
                                (0x12348086, 0x0c033001), (0x12348086, 0x0c038001),
                                (0xffff, 0x0c033001), (0x000d1b36, 0x07800001)]:
        for multi, fail, device_ok in [(False, -1, 1), (True, -1, 1), (False, 8, 1), (False, 12, 1), (False, -1, 0)]:
            expected = run(args.reference, identity, multi, fail, device_ok, pci_class)
            actual = run(args.source, identity, multi, fail, device_ok, pci_class)
            assert expected == actual, (identity, pci_class, multi, fail, device_ok, expected[0], actual[0], [(i, x, y) for i, (x, y) in enumerate(zip(expected[1], actual[1])) if x != y][:4], len(expected[1]), len(actual[1]))
            assert expected[0] == device_ok
            count += 1
    print('USB probe:', count, 'native/source controller names, enumeration, and registration workflows passed.')
