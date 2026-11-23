#!/usr/bin/env python3
"""Check PFZ1 source packets against the native streaming decoder.

Pooka's Free Software License. A supplied x64 Stage3 is only a test input.
"""
import argparse
import random
import struct
import sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from pfz import pack, unpack
from native_boot import BootX64
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *


def native_decode(reference, encoded, size):
    lib = BootX64(reference)
    cpu = lib.cpu
    state, output, callback = 0x3000000, 0x3100000, 0x18000
    record = bytearray(0x1260)
    struct.pack_into('<9Q', record, 0, callback, 0, 0, len(encoded), size, 0, 16, 0, 0)
    struct.pack_into('<II', record, 72, 0xffffffff, struct.unpack_from('<I', encoded, 12)[0])
    cpu.mem_write(state, bytes(record))
    def read(cpu, address, length, user):
        offset, destination = cpu.reg_read(UC_X86_REG_RSI), cpu.reg_read(UC_X86_REG_RDX)
        count = min(512, len(encoded) - offset)
        assert count > 0
        cpu.mem_write(destination, encoded[offset:offset + count])
        cpu.reg_write(UC_X86_REG_RAX, 0)
        stack = cpu.reg_read(UC_X86_REG_RSP)
        target = int.from_bytes(cpu.mem_read(stack, 8), 'little')
        cpu.reg_write(UC_X86_REG_RSP, stack + 8)
        cpu.reg_write(UC_X86_REG_RIP, target)
    cpu.hook_add(UC_HOOK_CODE, read, begin=callback, end=callback)
    result = lib.call('_wb_stage1_pfz1_read', state, 0, output, size, result_bits=32)
    assert result == 0, hex(result)
    assert lib.call('_wb_stage1_pfz1_finish', state, result_bits=32) == 0
    return bytes(cpu.mem_read(output, size))


def exercise(reference):
    rng = random.Random(344)
    cases = [b'A', b'abc' * 1000, bytes(range(256)) * 40,
             bytes(rng.randrange(256) for _ in range(12000)),
             bytes(rng.randrange(256) for _ in range(4096)) * 3]
    for data in cases:
        encoded = pack(data)
        assert unpack(encoded) == data
        assert native_decode(reference, encoded, len(data)) == data
        broken = bytearray(encoded)
        broken[12] ^= 1
        try:
            unpack(bytes(broken))
        except ValueError:
            pass
        else:
            raise AssertionError('accepted a corrupted checksum')
    print('PFZ1: five source packets pass the native streaming decoder, including overlapping matches, full-window distances and incompressible input.')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('stage3', type=Path)
    exercise(parser.parse_args().stage3)
