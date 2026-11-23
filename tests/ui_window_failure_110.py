#!/usr/bin/env python3
"""Compare TerrorUI 1.1 window cleanup when creation or backing allocation fails.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import struct
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP, UC_X86_REG_RDI
from unicorn.arm_const import UC_ARM_REG_R0
from unicorn.arm64_const import UC_ARM64_REG_X0


def exercise(path, api_base):
    results = []
    for failure in ['create', 'missing-allocator', 'allocation']:
        lib = DLL(path, api_base=api_base, poison_stack=True)
        cpu = lib.cpu
        context, spec, title = 0x3000000, 0x3010000, 0x3020000
        word = 8 if lib.wide else 4
        record = bytearray(72 if lib.wide else 52)
        struct.pack_into('<Q' if lib.wide else '<I', record, 0, title)
        struct.pack_into('<8I', record, word, 32, 24, 128, 0x123456,
                         0xffffffff, 0xffffffff, 0xffffffff, 0)
        struct.pack_into('<I', record, word + 32 + 3 * word, 1)
        cpu.mem_write(title, b'Failure fixture\0')
        cpu.mem_write(spec, bytes(record))
        size = 848 if lib.wide else 832
        cpu.mem_write(context, b'\xa5' * (size + 16))
        events = []

        def first_argument():
            if lib.cpu_type == 7:
                sp = cpu.reg_read(UC_X86_REG_ESP)
                return int.from_bytes(cpu.mem_read(sp + 4, 4), 'little')
            return cpu.reg_read({12: UC_ARM_REG_R0, 0x100000c: UC_ARM64_REG_X0,
                                 0x1000007: UC_X86_REG_RDI}[lib.cpu_type])

        def service(cpu, address, length, user):
            if address == 0x18000:
                events.append(('create',))
                result = 0 if failure == 'create' else 17
            elif address == 0x18010:
                events.append(('close', first_argument()))
                result = 1
            else:
                events.append(('malloc', first_argument()))
                result = 0
            cpu.reg_write(lib.result, result)

        for offset, address in [(0xa0, 0x18000), (0xa8, 0x18010), (0x4c, 0x18020)]:
            code = struct.pack('<I', 0xe12fff1e if lib.cpu_type == 12 else 0xd65f03c0)
            cpu.mem_write(address, code if lib.cpu_type in [12, 0x100000c] else b'\xc3')
            cpu.hook_add(UC_HOOK_CODE, service, begin=address, end=address)
            for table in lib.api_tables:
                cpu.mem_write(table + offset, struct.pack('<I',
                    0 if offset == 0x4c and failure == 'missing-allocator' else address))
        returned = lib.call('_terror_ui_window_open', context, spec)
        assert returned == 0, (failure, returned)
        assert events == [('create',)] + ([] if failure == 'create' else
            ([('malloc', 3072)] if failure == 'allocation' else []) + [('close', 17)]), (failure, events)
        memory = bytes(cpu.mem_read(context, size + 16))
        assert memory == bytes(size) + b'\xa5' * 16, (failure, 'context cleanup or guard')
        assert not lib.allocs
        results.append((returned, events, memory))
    return results


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--api-base', type=lambda s: int(s, 0), required=True)
    args = parser.parse_args()
    assert exercise(args.reference, args.api_base) == exercise(args.source, args.api_base)
    print('TerrorUI: three failed-window lifecycle paths preserve cleanup and window identifiers.')
