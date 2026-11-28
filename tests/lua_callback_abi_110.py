#!/usr/bin/env python3
"""Check Lua callback vtable result ABI against the native library.

Calls the relocated function pointer with native C++ argument and cleanup rules.
Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import struct
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP
from unicorn.arm64_const import UC_ARM64_REG_X8, UC_ARM64_REG_X0, UC_ARM64_REG_SP


def exercise(reference, source, profile_path):
    profile = json.loads(profile_path.read_text())
    callback = profile['native_result_function_pointers'][0]
    wide = profile['architecture'] == 'arm64'
    api = 0x82010800 if wide else 0x280800
    width = 8 if wide else 4
    size = 40 if wide else 24
    tag_offset = 32 if wide else 20
    word = 'Q' if wide else 'I'
    slot = next(row['offset'] for row in profile['relocations']
                if row['target'] == {'kind': 'function', 'address': callback})
    fixtures = [([], b''), ([('nil', 0)], b'nil'), ([('integer', 42)], b'42'),
                ([('float', 2.5)], b'2.500000'),
                ([('boolean', True)], b'true'),
                ([('string', b'Permafrost')], b'Permafrost'),
                ([('integer', -12), ('boolean', True)], None)]
    for values, expected in fixtures:
        outputs = []
        for which, path in enumerate([reference, source]):
            lib = DLL(path, api_base=api, poison_allocations=True, poison_stack=True)
            assert lib.cpu_type == (0x100000c if wide else 7)
            meta, _ = inspect(path.read_bytes())
            if which:
                symbols = {n: a for a, n in meta['symbols'] + meta['data_symbols']}
                state = lib.base + symbols['_pf_module_state'] - meta['base']
                target = int.from_bytes(lib.cpu.mem_read(state + slot, width), 'little')
            else:
                target = lib.base + int(callback, 16)
            lib.exports['callback'] = target
            events = []

            def line(cpu, address, size, user):
                pointer = cpu.reg_read(UC_ARM64_REG_X0) if wide else struct.unpack('<I', cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP) + 4, 4))[0]
                text = bytearray()
                for index in range(1024):
                    byte = cpu.mem_read(pointer + index, 1)[0]
                    if not byte:
                        break
                    text.append(byte)
                else:
                    raise AssertionError('callback output is unbounded')
                events.append(bytes(text))
                cpu.reg_write(lib.result, 1)

            lib.cpu.mem_write(0x23000, struct.pack('<I', 0xd65f03c0) if wide else b'\xc3')
            lib.cpu.mem_write(api + 0x40, struct.pack('<I', 0x23000))
            lib.cpu.hook_add(UC_HOOK_CODE, line, begin=0x23000, end=0x23000)
            raw = bytearray()
            for index, (kind, value) in enumerate(values):
                record = bytearray(size)
                tag = {'nil': 0, 'integer': 1, 'float': 2, 'boolean': 3, 'string': 4}[kind]
                record[0] = tag
                struct.pack_into('<' + word, record, tag_offset, tag)
                if kind == 'integer':
                    struct.pack_into('<q', record, 8, value)
                elif kind == 'float':
                    struct.pack_into('<d', record, 8, value)
                elif kind == 'boolean':
                    record[8] = value
                elif kind == 'string':
                    pointer = 0x3140000 + index * 1024
                    lib.cpu.mem_write(pointer, value + b'\0')
                    struct.pack_into('<3' + word, record, 8, pointer, len(value), len(value))
                raw.extend(record)
            data = b'BEFORE!!' + raw + b'AFTER!!!'
            lib.cpu.mem_write(0x3120000, bytes(data))
            vector = struct.pack('<3' + word, 0x3120008, len(values), len(values))
            lib.cpu.mem_write(0x3110000, b'VECBEGIN' + vector + b'VECEND!!')
            lib.cpu.mem_write(0x3130000, b'BEFORE!!' + b'\x5a' * size + b'AFTER!!!')
            lib.cpu.mem_write(0x3100000, bytes(16))
            if wide:
                lib.cpu.reg_write(UC_ARM64_REG_X8, 0x3130008)
                lib.call('callback', 0x3100000, 0, 0x3110008)
                assert lib.cpu.reg_read(UC_ARM64_REG_SP) == 0x4fe0000
            else:
                returned = lib.call('callback', 0x3130008, 0x3100000, 0, 0x3110008, result_bits=32)
                assert returned == 0x3130008
                assert lib.cpu.reg_read(UC_X86_REG_ESP) == 0x4fe0008, 'Native callback must pop its hidden result pointer.'
            assert bytes(lib.cpu.mem_read(0x3130000, 8)) == b'BEFORE!!'
            assert bytes(lib.cpu.mem_read(0x3130008 + size, 8)) == b'AFTER!!!'
            assert bytes(lib.cpu.mem_read(0x3130008, 1)) == b'\0'
            assert bytes(lib.cpu.mem_read(0x3130008 + tag_offset, width)) == bytes(width)
            assert bytes(lib.cpu.mem_read(0x3120000, len(data))) == data
            assert bytes(lib.cpu.mem_read(0x3110000, 16 + width * 3)) == b'VECBEGIN' + vector + b'VECEND!!'
            if expected is not None:
                assert events == [expected], (which, values, events)
            outputs.append(events)
        assert outputs[0] == outputs[1], (values, outputs)
    print('Lua callback: seven native/source vtable, argument guard and hidden-result ABI cases passed.')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--profile', type=Path, required=True)
    args = parser.parse_args()
    exercise(args.reference, args.source, args.profile)
