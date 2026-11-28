#!/usr/bin/env python3
"""Compare guarded virtio absolute-axis decoding and signed endpoint ranges.

Pooka's Free Software License. Reference binaries are test inputs only.
"""
import argparse, struct, sys
from pathlib import Path
sys.path[:0] = [str(Path(__file__).resolve().parent), str(Path(__file__).resolve().parents[1] / 'tools')]
from dll import DLL
from native import inspect
from unicorn.x86_const import UC_X86_REG_ECX, UC_X86_REG_EDX


def run(path, address, minimum, maximum, size, missing):
    lib = DLL(path)
    metadata, _ = inspect(path.read_bytes())
    symbols = {n: a for a, n in metadata['symbols']}
    native = '_qemu_input_decode_absolute_info' in symbols
    entry = symbols.get('_qemu_input_decode_absolute_info', symbols.get('_recovered_%x' % (0x10000000 + address)))
    lib.exports['decode'] = lib.base + entry
    lib.cpu.mem_write(0x2e0000, b'\xa5' * 8 + struct.pack('<ii', minimum, maximum) + b'\xa5' * 8)
    lib.cpu.mem_write(0x2f0000, b'\xa5' * 32)
    args = [0x2e0008, size, 0x2f0008, 0x2f0010]
    if missing is not None:
        args[missing] = 0
    if lib.cpu_type == 7 and native:
        lib.cpu.reg_write(UC_X86_REG_ECX, args[0])
        lib.cpu.reg_write(UC_X86_REG_EDX, args[1])
        result = lib.call('decode', *args[2:], result_bits=32)
    else:
        result = lib.call('decode', *args, result_bits=32)
    assert bytes(lib.cpu.mem_read(0x2e0000, 24)) == b'\xa5' * 8 + struct.pack('<ii', minimum, maximum) + b'\xa5' * 8
    output = bytes(lib.cpu.mem_read(0x2f0000, 32))
    assert output[:8] == b'\xa5' * 8 and output[12:16] == b'\xa5' * 4 and output[20:] == b'\xa5' * 12
    return result, output


if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('reference', type=Path)
    p.add_argument('source', type=Path)
    args = p.parse_args()
    metadata, _ = inspect(args.reference.read_bytes())
    address = next(a for a, n in metadata['symbols'] if n == '_qemu_input_decode_absolute_info')
    count = 0
    for low, high in [(0, 1), (0, 0), (1, 0), (-100, 100), (-2147483648, 2147483647),
                      (-2147483648, 0), (0, 2147483647), (-1, 0), (-1, 2147483647),
                      (2147483647, -2147483648), (100, 101), (-100, -99)]:
        for size, missing in [(8, None), (7, None), (24, None), (8, 0), (8, 2), (8, 3)]:
            expected = run(args.reference, address, low, high, size, missing)
            actual = run(args.source, address, low, high, size, missing)
            assert expected == actual, (low, high, size, missing, expected, actual)
            count += 1
    print('Virtio absolute axes:', count, 'native/source guarded endpoint and output comparisons passed.')
