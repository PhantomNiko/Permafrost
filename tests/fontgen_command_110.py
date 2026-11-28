#!/usr/bin/env python3
"""Compare interactive fontgen with controlled PNG input and file services.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import struct
from unicorn import UC_HOOK_CODE
from lua_command_fixture_110 import run_command


def execute(reference, source, output, which, inputs, decode=True, write=True):
    files = {}
    calls = []
    def setup(lib, args, text, events):
        cpu = lib.cpu
        def image(c, a, n, u):
            path, info = args(2)
            calls.append(('png', text(path)))
            if decode:
                pixels = bytes([0, 0, 0, 255, 255, 255, 255, 255]) * 32
                pointer = 0x3400000
                c.mem_write(pointer, pixels)
                lib.allocs[pointer] = len(pixels)
                c.mem_write(info, struct.pack('<6I', pointer, 0, len(pixels), 8, 8, 32))
            c.reg_write(lib.result, int(decode))
        def mkdir(c, a, n, u):
            calls.append(('mkdir', text(args(1)[0])))
            c.reg_write(lib.result, 1)
        def save(c, a, n, u):
            path, pointer, size = args(3)
            path = text(path)
            assert size < 0x100000
            calls.append(('write', path, size))
            if write:
                files[path] = bytes(c.mem_read(pointer, size))
            c.reg_write(lib.result, int(write))
        def error(c, a, n, u):
            pointer, capacity = args(2)
            assert capacity >= 1
            c.mem_write(pointer, b'\0')
            c.reg_write(lib.result, 0)
        opcode = b'\xc3' if lib.cpu_type in [7, 0x1000007] else struct.pack('<I', 0xe12fff1e if lib.cpu_type == 12 else 0xd65f03c0)
        for index, (slot, callback) in enumerate([(0x58, image), (0x8c, mkdir), (0x38, save), (0x158, error)]):
            target = 0x24000 + index * 0x100
            cpu.mem_write(target, opcode)
            cpu.hook_add(UC_HOOK_CODE, callback, begin=target, end=target)
            for table in lib.api_tables:
                cpu.mem_write(table + slot, struct.pack('<I', target))
    try:
        result = run_command(reference, source, None, which, output, [], inputs,
                             command='fontgen', raw_console=True, kernel_setup=setup)
    except Exception as error:
        raise AssertionError(('source' if which else 'native', calls)) from error
    return result, files, calls


def exercise(reference, source, output):
    success = ['image.png', '8', '8', '', '', '']
    cases = [([], True, True), ([''], True, True), (['image.png', '0'], True, True),
             (success, True, True), (['image.png', '8', '8', '65', '1', '1'], True, True),
             (['image.png', '3', '8', '', '', ''], True, True),
             (success, False, True), (success, True, False)]
    for index, (inputs, decode, write) in enumerate(cases):
        results = [execute(reference, source, output, which, inputs, decode, write) for which in [0, 1]]
        assert results[0] == results[1], (index, results)
        if index in [3, 4]:
            assert results[0][0][0] == 0 and len(results[0][1]) == 1
            assert next(iter(results[0][1].values())).startswith(b'WBF1')
        else:
            assert results[0][0][0] == 1 and not results[0][1]
        print('fontgen interactive workflow passed:', index, flush=True)
    print('fontgen: eight native/source input, image, WBF output and error workflows passed.')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    exercise(args.reference, args.source, args.output)
