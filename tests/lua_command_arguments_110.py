#!/usr/bin/env python3
"""Compare Lua 1.1 command argument parsing against the native executable.

Uses the real Lua library and guarded argv storage. Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import struct
from desktop_calendar import load
from native import inspect


def exercise(reference, source, library, output):
    cases = [
        ['Monitor=false'], ['Monitor=0'], ['MONITOR=FALSE'],
        ['unknown=value', 'Monitor=false'],
        ['Monitor=true', 'Monitor=false'],
        ['Monitor=false', 'unknown=' + 'x' * 1024],
        ['', 'Monitor=false'], ['=ignored', 'Monitor=false'],
    ]
    for index, arguments in enumerate(cases):
        results = []
        for which, lib in enumerate(load(reference, source, output, library)):
            path = source if which else reference
            meta, _ = inspect(path.read_bytes())
            assert meta['cpu'] in (7, 0x1000007, 12, 0x100000c)
            symbols = {n: a for a, n in meta['symbols']}
            name = '_main' if which else '_winterboot_lua_entry'
            # Diagnostic containers retain executable symbol addresses and
            # acquire a zero-based segment covering the original low gap.
            lib.exports[name] = lib.base + symbols[name]
            lib.instruction_limit = 5000000
            if lib.cpu_type in (7, 0x1000007):
                lib.cpu.mem_write(0x280800, bytes(lib.cpu.mem_read(0x6800, 412)))
            if which:
                lib.exports['initialize'] = lib.base + symbols['_pf_app_initialize']
                lib.call('initialize')
            pointers = []
            guarded = []
            for i, text in enumerate(['lua'] + arguments):
                pointer = 0x3100000 + i * 4096
                raw = b'BEFORE!!' + text.encode() + b'\0AFTER!!!'
                lib.cpu.mem_write(pointer, raw)
                pointers.append(pointer + 8)
                guarded.append((pointer, raw))
            argv = struct.pack('<' + ('Q' if lib.wide else 'I') * (len(pointers) + 1), *pointers, 0)
            lib.cpu.mem_write(0x3120000, b'ARGVHEAD' + argv + b'ARGVTAIL')
            result = lib.call(name, len(pointers), 0x3120008, result_bits=32)
            assert bytes(lib.cpu.mem_read(0x3120000, len(argv) + 16)) == b'ARGVHEAD' + argv + b'ARGVTAIL'
            for pointer, raw in guarded:
                assert bytes(lib.cpu.mem_read(pointer, len(raw))) == raw
            results.append(result)
        assert results == [1, 1], (index, arguments, results)
        print('Lua command argument case %d passed.' % index, flush=True)
    print('Lua command: %d native/source guarded argument cases passed.' % len(cases))


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--library', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    exercise(args.reference, args.source, args.library, args.output)
