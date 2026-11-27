#!/usr/bin/env python3
"""Compare Lua command missing-file handling through native library imports.

Controlled kernel output records the real entry-point status and text.
Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import struct
from desktop_calendar import load
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP, UC_X86_REG_RDI
from unicorn.arm_const import UC_ARM_REG_R0
from unicorn.arm64_const import UC_ARM64_REG_X0


def exercise(reference, source, native_library, library, output):
    cases = [
        (['script=missing-fixture.lua', 'Monitor=false'], 'missing-fixture.lua'),
        (['SCRIPT=absent script.lua', 'Monitor=false'], 'absent script.lua'),
        (['script=ignored.lua', 'script=final.lua', 'Monitor=false'], 'final.lua'),
        (['script=', 'Monitor=false'], None),
    ]
    for arguments, missing in cases:
        results = []
        for which, provider in enumerate([native_library, library]):
            lib = load(reference, source, output, provider)[which]
            meta, _ = inspect((source if which else reference).read_bytes())
            symbols = {n: a for a, n in meta['symbols']}
            name = '_main' if which else '_winterboot_lua_entry'
            lib.exports[name] = lib.base + symbols[name]
            lib.instruction_limit = 5000000
            cpu = lib.cpu
            if lib.cpu_type in [7, 0x1000007]:
                cpu.mem_write(0x280800, bytes(cpu.mem_read(0x6800, 412)))
                lib.api_tables.append(0x280800)
            if which:
                lib.exports['initialize'] = lib.base + symbols['_pf_app_initialize']
                lib.call('initialize')
            events = []
            target = 0x23000
            cpu.mem_write(target, b'\xc3' if lib.cpu_type in [7, 0x1000007]
                          else struct.pack('<I', 0xe12fff1e if lib.cpu_type == 12 else 0xd65f03c0))

            def line(c, address, size, user):
                if lib.cpu_type == 7:
                    pointer = struct.unpack('<I', c.mem_read(c.reg_read(UC_X86_REG_ESP) + 4, 4))[0]
                else:
                    register = UC_X86_REG_RDI if lib.cpu_type == 0x1000007 else UC_ARM_REG_R0 if lib.cpu_type == 12 else UC_ARM64_REG_X0
                    pointer = c.reg_read(register)
                raw = bytearray()
                for index in range(2048):
                    value = c.mem_read(pointer + index, 1)[0]
                    if not value:
                        break
                    raw.append(value)
                else:
                    raise AssertionError('unbounded console output')
                events.append(bytes(raw))
                c.reg_write(lib.result, 1)

            cpu.hook_add(UC_HOOK_CODE, line, begin=target, end=target)
            for table in lib.api_tables:
                cpu.mem_write(table + 0x40, struct.pack('<I', target))
            pointers = []
            guards = []
            for index, text in enumerate(['lua'] + arguments):
                pointer = 0x3100000 + index * 4096
                raw = b'BEFORE!!' + text.encode() + b'\0AFTER!!!'
                cpu.mem_write(pointer, raw)
                pointers.append(pointer + 8)
                guards.append((pointer, raw))
            word = 'Q' if lib.wide else 'I'
            argv = struct.pack('<' + word * (len(pointers) + 1), *pointers, 0)
            cpu.mem_write(0x3120000, b'ARGVHEAD' + argv + b'ARGVTAIL')
            status = lib.call(name, len(pointers), 0x3120008, result_bits=32)
            for pointer, raw in guards:
                assert bytes(cpu.mem_read(pointer, len(raw))) == raw
            assert bytes(cpu.mem_read(0x3120000, len(argv) + 16)) == b'ARGVHEAD' + argv + b'ARGVTAIL'
            results.append((status, events))
        expected = (0, [b'script failed: unable to open script file: ' + missing.encode()]) if missing else (1, [])
        assert results == [expected, expected], (arguments, results)
        print('Lua command missing-file case passed:', arguments, flush=True)
    print('Lua command: four native/source missing-file and empty-option workflows passed.')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--native-library', type=Path, required=True)
    parser.add_argument('--library', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    exercise(args.reference, args.source, args.native_library, args.library, args.output)
