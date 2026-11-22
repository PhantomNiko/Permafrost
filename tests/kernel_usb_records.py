#!/usr/bin/env python3
"""Compare recovered BIOS USB report and controller record helpers.

Pooka's Free Software License. No physical controller is accessed.
"""
import argparse
import json
import random
import struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect


def exercise(binary, addresses, native):
    lib = Kernel(binary, addresses, native)
    cpu = lib.cpu
    data, out = 0x3000000, 0x3001000
    results = []
    generator = random.Random(232)
    for size in range(10):
        for _ in range(32):
            report = bytes(generator.randrange(256) for _ in range(16))
            cpu.mem_write(data, report)
            cpu.mem_write(out, struct.pack('<8I', 0, 0, 0, 0, 100, 200, 0, 0))
            status = lib.call('_platform_usb_decode_pointer_report', data,
                              size, out, result_bits=8)
            results.append((status, bytes(cpu.mem_read(out, 32))))
    for name, words in [('_platform_qemu_ohci_write_td', 4),
                        ('_platform_qemu_ohci_write_ed', 3),
                        ('_platform_qemu_uhci_write_td', 4)]:
        for _ in range(32):
            values = [generator.randrange(1 << 32) for _ in range(words)]
            cpu.mem_write(out, b'\xa5' * 32)
            lib.call(name, out, *values)
            results.append(bytes(cpu.mem_read(out, 32)))
    for pointer in [0, 1, 0x1000, 0x3000000, 0xfffffff0, 0xffffffff]:
        for size in [0, 1, 16, 4096]:
            cpu.mem_write(out, b'\xa5' * 16)
            status = lib.call('_platform_qemu_dma_address64', pointer, size,
                              out, result_bits=8)
            results.append((status, bytes(cpu.mem_read(out, 16))))
    return results


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--abi', required=True, type=Path)
    parser.add_argument('--map', required=True, type=Path)
    args = parser.parse_args()
    metadata, _ = inspect(args.reference.read_bytes())
    native = {name: address for address, name in metadata['symbols']}
    mapping = json.loads(args.map.read_text())
    source = {entry['original']: mapping.get('_' + entry['symbol'],
              mapping.get(entry['symbol']))
              for entry in json.loads(args.abi.read_text()).values()}
    expected = exercise(args.reference.read_bytes(), native, True)
    actual = exercise(args.source.read_bytes(), source, False)
    differences = [(i, e, a) for i, (e, a) in enumerate(zip(expected, actual))
                   if e != a]
    assert not differences, differences[:12]
    print('BIOS USB records:', len(expected),
          'native HID, OHCI/UHCI descriptor and DMA comparisons passed.')
