#!/usr/bin/env python3
"""Check ARM64 Lua command result adapters against native library calls.

Executes the real Lua libraries and guards both aggregate outputs.
Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import struct
from desktop_calendar import load
from native import inspect
from dylib import inspect as dynamic
from unicorn.arm64_const import UC_ARM64_REG_X8


def exercise(reference, source, native_library, library, output):
    metadata, _ = inspect(reference.read_bytes())
    assert metadata['cpu'] == 0x100000c
    diagnostic = bytearray(reference.read_bytes())
    struct.pack_into('<I', diagnostic, 12, 6)
    stubs = dynamic(diagnostic)['stubs']
    bridge_names = {}
    for item in stubs:
        if 'runScriptString' in item['name']:
            bridge_names['script'] = '_pf_command_result_%x' % (item['address'] + 0x10000000)
        if 'toString' in item['name']:
            bridge_names['string'] = '_pf_command_result_%x' % (item['address'] + 0x10000000)
    cases = [
        ('answer=6*7', 42, b'42'),
        ('answer=-19+7', -12, b'-12'),
        ('answer=2+3*4', 14, b'14'),
        ('answer=2.5', 2, b'2.500000'),
        ('answer=0', 0, b'0'),
    ]
    for case, expected, expected_text in cases:
        answers = []
        for which, provider in enumerate([native_library, library]):
            lib = load(reference, source, output, provider)[which]
            lib.instruction_limit = 5000000
            pm, _ = inspect(provider.read_bytes())
            lib.exports.update({e['name']: 0x1000000 + e['address'] - pm['base']
                                for e in dynamic(provider.read_bytes())['exports']})
            if which:
                sm, _ = inspect(source.read_bytes())
                symbols = {n: a for a, n in sm['symbols']}
                lib.exports['initialize'] = lib.base + symbols['_pf_app_initialize']
                lib.call('initialize')
                for name, symbol in bridge_names.items():
                    lib.exports['bridge_' + name] = lib.base + symbols[symbol]
            vm = 0x3100000
            lib.cpu.mem_write(vm, b'\xa5' * 65536)
            lib.call('__ZN6winter3lua5LuaVMC1Ev', vm)
            for address, raw, storage in [(0x3110000, case.encode(), 0x3120000),
                    (0x3110100, b'[command-fixture]', 0x3120100),
                    (0x3110200, b'answer', 0x3120200)]:
                lib.cpu.mem_write(storage, raw + b'\0')
                lib.cpu.mem_write(address, struct.pack('<3Q', storage, len(raw), len(raw)))
            result = 0x3130008
            lib.cpu.mem_write(result - 8, b'BEFORE!!' + b'\x5a' * 80 + b'AFTER!!!')
            if which:
                lib.call('bridge_script', result, vm, 0x3110000, 0x3110100)
            else:
                lib.cpu.reg_write(UC_ARM64_REG_X8, result)
                lib.call('__ZN6winter3lua5LuaVM15runScriptStringERKN2wm6stringES5_',
                         vm, 0x3110000, 0x3110100)
            assert bytes(lib.cpu.mem_read(result - 8, 8)) == b'BEFORE!!'
            assert bytes(lib.cpu.mem_read(result + 80, 8)) == b'AFTER!!!'
            assert bytes(lib.cpu.mem_read(result, 1)) == b'\1'
            value = 0x3150000
            lib.call('__ZN6winter3lua8LuaValueC1Ev', value)
            assert lib.call('__ZNK6winter3lua5LuaVM9getGlobalERKN2wm6stringERNS0_8LuaValueE',
                            vm, 0x3110200, value)
            integer = lib.call('__ZNK6winter3lua8LuaValue9asIntegerEv', value, result_bits=64)
            if integer >= 1 << 63:
                integer -= 1 << 64
            string = 0x3140008
            lib.cpu.mem_write(string - 8, b'BEFORE!!' + b'\x5a' * 24 + b'AFTER!!!')
            if which:
                lib.call('bridge_string', string, value)
            else:
                lib.cpu.reg_write(UC_ARM64_REG_X8, string)
                lib.call('__ZNK6winter3lua8LuaValue8toStringEv', value)
            pointer, length, _ = struct.unpack('<3Q', lib.cpu.mem_read(string, 24))
            text = bytes(lib.cpu.mem_read(pointer, length))
            assert bytes(lib.cpu.mem_read(string - 8, 8)) == b'BEFORE!!'
            assert bytes(lib.cpu.mem_read(string + 24, 8)) == b'AFTER!!!'
            answers.append((integer, text))
            lib.call('_free', pointer)
            lib.call('__ZN6winter3lua5LuaVMD1Ev', vm)
        assert answers == [(expected, expected_text)] * 2, (case, answers)
        print('Lua ARM64 command result case passed:', case, flush=True)
    print('Lua ARM64: five native/source script and string result workflows passed.')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--native-library', type=Path, required=True)
    parser.add_argument('--library', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    exercise(args.reference, args.source, args.native_library, args.library, args.output)
