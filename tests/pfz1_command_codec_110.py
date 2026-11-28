#!/usr/bin/env python3
"""Compare command PFZ1 encoding, decoding and guarded failure behavior.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import random
import struct
from unicorn.x86_const import UC_X86_REG_ECX, UC_X86_REG_EDX
from wozmon_hex_110 import load_command
from native import inspect
from pfz import unpack


def loaded(reference, source, output, which):
    path = source if which else reference
    lib = load_command(path, output / ('source' if which else 'native'), bool(which))
    lib.instruction_limit = 30000000
    if lib.cpu_type in [7, 0x1000007]:
        lib.cpu.mem_write(0x280800, bytes(lib.cpu.mem_read(0x6800, 412)))
    meta, _ = inspect(reference.read_bytes())
    for address, name in meta['symbols']:
        target = '_recovered_%x' % (address - meta['base'] + 0x10000000)
        if which and target in lib.exports:
            lib.exports[name] = lib.exports[target]
    return lib


def call(lib, native, name, *arguments):
    if native and lib.cpu_type == 7:
        lib.cpu.reg_write(UC_X86_REG_ECX, arguments[0])
        lib.cpu.reg_write(UC_X86_REG_EDX, arguments[1])
        return lib.call(name, *arguments[2:], result_bits=32)
    return lib.call(name, *arguments, result_bits=64 if lib.wide and name == '_wm_pfz1_encode' else 32)


def encode(reference, source, output, which, data):
    lib = loaded(reference, source, output, which)
    lib.cpu.mem_write(0x3100000, data or b'\0')
    word = 'Q' if lib.wide else 'I'
    size = 24 if lib.wide else 12
    lib.cpu.mem_write(0x3110000, b'BEFORE!!' + bytes(size) + b'AFTER!!!')
    error = call(lib, not which, '_wm_pfz1_encode', 0x3100000, len(data), 0x3110008)
    assert error == 0, ('encoder error', which, hex(error), len(data))
    assert bytes(lib.cpu.mem_read(0x3110000, 8)) == b'BEFORE!!'
    assert bytes(lib.cpu.mem_read(0x3110008 + size, 8)) == b'AFTER!!!'
    pointer, count, capacity = struct.unpack('<3' + word, lib.cpu.mem_read(0x3110008, size))
    assert 16 <= count <= capacity <= 0x1000000
    result = bytes(lib.cpu.mem_read(pointer, count))
    assert unpack(result) == data
    return result


def decode(reference, source, output, which, encoded, capacity):
    lib = loaded(reference, source, output, which)
    lib.cpu.mem_write(0x3100000, encoded or b'\0')
    lib.cpu.mem_write(0x3120000, b'BEFORE!!' + b'\x5a' * capacity + b'AFTER!!!')
    word_size = 8 if lib.wide else 4
    lib.cpu.mem_write(0x3130000, b'BEFORE!!' + b'\xa5' * word_size + b'AFTER!!!')
    result = call(lib, not which, '_pfz1_decode', 0x3100000, len(encoded),
                  0x3120008, capacity, 0x3130008) & 255
    assert bytes(lib.cpu.mem_read(0x3120000, 8)) == b'BEFORE!!'
    assert bytes(lib.cpu.mem_read(0x3120008 + capacity, 8)) == b'AFTER!!!'
    assert bytes(lib.cpu.mem_read(0x3130000, 8)) == b'BEFORE!!'
    assert bytes(lib.cpu.mem_read(0x3130008 + word_size, 8)) == b'AFTER!!!'
    count = int.from_bytes(lib.cpu.mem_read(0x3130008, word_size), 'little')
    return result, count, bytes(lib.cpu.mem_read(0x3120008, capacity))


def exercise(reference, source, output):
    rng = random.Random(110)
    cases = [b'', b'A', b'abc' * 100, bytes(range(256)) * 8,
             bytes(rng.randrange(256) for _ in range(4096)), b'A' * 5000,
             b'boundary-' * 600]
    checks = 0
    for data in cases:
        packets = [encode(reference, source, output, which, data) for which in [0, 1]]
        assert packets[0] == packets[1], ('encoded packet differs', len(data))
        checks += 1
        if not data:
            continue
        packet = packets[0]
        broken = bytearray(packet)
        broken[12] ^= 1
        variants = [(packet, len(data), True), (packet, len(data) - 1, False),
                    (bytes(broken), len(data), False), (packet[:-1], len(data), False),
                    (b'BAD!' + packet[4:], len(data), False)]
        for encoded, capacity, valid in variants:
            results = [decode(reference, source, output, which, encoded, capacity)
                       for which in [0, 1]]
            assert results[0] == results[1], (len(data), capacity, valid, results)
            assert bool(results[0][0]) == valid
            if valid:
                assert results[0][1:] == (len(data), data)
            checks += 1
        print('PFZ1 codec fixture passed:', len(data), flush=True)
    print('PFZ1: %d native/source encoding, decoding and guarded rejection workflows passed.' % checks)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    exercise(args.reference, args.source, args.output)
