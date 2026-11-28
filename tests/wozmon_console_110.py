#!/usr/bin/env python3
"""Compare monitor console editing, memory examination and byte storage.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import struct
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX, UC_X86_REG_ESP
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2
from unicorn.arm64_const import UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2
from wozmon_hex_110 import load_command
from native import inspect


def run(reference, source, output, which, keys):
    path = source if which else reference
    lib = load_command(path, output / ('source' if which else 'native'), bool(which))
    metadata, memory = inspect(path.read_bytes())
    if not which:
        # Fixed native commands can address their original data directly.
        start = metadata['base'] & -4096
        end = (metadata['end'] + 4095) & -4096
        if start >= 0x5000000:
            lib.cpu.mem_map(start, end - start)
            lib.cpu.mem_write(metadata['base'], memory)
    lib.instruction_limit = 2000000
    tables = lib.api_tables[:]
    if lib.cpu_type in [7, 0x1000007]:
        lib.cpu.mem_write(0x280800, bytes(lib.cpu.mem_read(0x6800, 412)))
        tables.append(0x280800)
    transcript = bytearray()
    colors = []
    runs = []
    pending = list(keys)
    arena = 0x4000000
    initial = bytes(range(64))
    lib.cpu.mem_write(arena, initial)

    def args(count):
        if lib.cpu_type == 7:
            return struct.unpack('<' + 'I' * count, lib.cpu.mem_read(lib.cpu.reg_read(UC_X86_REG_ESP) + 4, count * 4))
        registers = [UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX] if lib.cpu_type == 0x1000007 else [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2] if lib.cpu_type == 12 else [UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2]
        return [lib.cpu.reg_read(register) for register in registers[:count]]

    def text(pointer):
        result = bytearray()
        for index in range(4096):
            value = lib.cpu.mem_read(pointer + index, 1)[0]
            if not value:
                return result
            result.append(value)
        raise AssertionError('unbounded monitor output')

    def color(c, address, size, user):
        colors.append(tuple(args(3)))

    def put(c, address, size, user):
        transcript.append(args(1)[0] & 255)

    def puts(c, address, size, user):
        transcript.extend(text(args(1)[0]))

    def get(c, address, size, user):
        assert pending, 'monitor exhausted keyboard input'
        c.reg_write(lib.result, pending.pop(0))

    opcode = b'\xc3' if lib.cpu_type in [7, 0x1000007] else struct.pack('<I', 0xe12fff1e if lib.cpu_type == 12 else 0xd65f03c0)
    if b'R\r' in keys:
        lib.cpu.mem_write(arena, opcode)
        lib.cpu.hook_add(UC_HOOK_CODE, lambda c, a, z, u: runs.append(a), begin=arena, end=arena)
    for slot, target, callback in [(0x20, 0x23000, color), (0x24, 0x23100, put), (0x28, 0x23200, puts), (0x2c, 0x23300, get)]:
        lib.cpu.mem_write(target, opcode)
        lib.cpu.hook_add(UC_HOOK_CODE, callback, begin=target, end=target)
        for table in tables:
            lib.cpu.mem_write(table + slot, struct.pack('<I', target))
    result = lib.call('_main' if which else '_wozmon_entry', result_bits=32)
    if which:
        assert b'WOZMON FOR PERMAFROST' in transcript
        assert b'WINTERBOOT' not in transcript
    return bytes(transcript).replace(b'WINTERBOOT', b'PERMAFROST'), colors, pending, runs, bytes(lib.cpu.mem_read(arena, 64))


def exercise(reference, source, output):
    cases = [b'\x1b', b'?\r\x1b', b'04000000\r\x1b',
             b'04000000.0400000F\r\x1b', b'04000000: 12 34 AB CD\r\x1b',
             b'04000000: XX\r\x1b', b'04000000R\r\x1b', b'04000001\b0\r\x1b', b'ABC\x1b\x1b']
    for keys in cases:
        results = [run(reference, source, output, which, keys) for which in [0, 1]]
        assert results[0] == results[1], (keys, results)
        assert not results[0][2], (keys, results[0][2])
        if b'R\r' in keys:
            assert results[0][3] == [0x4000000]
        if keys.startswith(b'04000000: 12'):
            assert results[0][-1][:4] == b'\x12\x34\xab\xcd'
        print('Monitor console case passed:', repr(keys), flush=True)
    print('Monitor: nine native/source console editing, memory and guest-code workflows passed.')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    exercise(args.reference, args.source, args.output)
