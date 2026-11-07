#!/usr/bin/env python3
"""Compare native setjmp buffers and nonlocal register restoration.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import struct
from dll import DLL
from unicorn import x86_const as x86, arm_const as arm, arm64_const as arm64


def exercise(path, value):
    lib = DLL(path)
    if lib.cpu_type == 7:
        registers = [x86.UC_X86_REG_EBX, x86.UC_X86_REG_ESI, x86.UC_X86_REG_EDI, x86.UC_X86_REG_EBP]
        size = 24
    elif lib.cpu_type == 0x1000007:
        registers = [getattr(x86, 'UC_X86_REG_' + name) for name in ('RBX', 'RBP', 'R12', 'R13', 'R14', 'R15')]
        size = 64
    elif lib.cpu_type == 12:
        registers = [getattr(arm, 'UC_ARM_REG_R%d' % index) for index in range(4, 12)]
        size = 40
    else:
        registers = [getattr(arm64, 'UC_ARM64_REG_X%d' % index) for index in range(19, 30)]
        registers += [getattr(arm64, 'UC_ARM64_REG_D%d' % index) for index in range(8, 16)]
        size = 168
    expected = []
    for index, register in enumerate(registers):
        pattern = 0x330000 + index * 16
        lib.cpu.reg_write(register, pattern)
        expected.append(pattern)
    context = 0x3002000
    lib.cpu.mem_write(context, b'\xa5' * size)
    assert lib.call('_setjmp', context, result_bits=32) == 0
    saved = bytes(lib.cpu.mem_read(context, size))
    for register in registers:
        lib.cpu.reg_write(register, 0x12345678)
    result = lib.call('_longjmp', context, value & 0xffffffff, result_bits=32)
    assert result == (value if value else 1) & 0xffffffff, (value, result)
    actual = [lib.cpu.reg_read(register) for register in registers]
    assert actual == expected, ('callee-saved registers differ', actual, expected)
    return saved


def unwind(path):
    lib = DLL(path)
    width = 8 if lib.wide else 4
    if lib.cpu_type == 7:
        frame, stack = x86.UC_X86_REG_EBP, x86.UC_X86_REG_ESP
    elif lib.cpu_type == 0x1000007:
        frame, stack = x86.UC_X86_REG_RBP, x86.UC_X86_REG_RSP
    elif lib.cpu_type == 12:
        frame, stack = arm.UC_ARM_REG_R7, arm.UC_ARM_REG_SP
    else:
        frame, stack = arm64.UC_ARM64_REG_X29, arm64.UC_ARM64_REG_SP
    context, expected_frame, expected_stack = 0x3000000, 0x12345678, 0x4fd0000
    lib.cpu.mem_write(context + width * 8, struct.pack('<QQQ' if lib.wide else '<III',
                                                     expected_frame, lib.stop, expected_stack))
    lib.call('_winterboot_sjlj_jump', context)
    result = lib.cpu.reg_read(frame), lib.cpu.reg_read(stack)
    assert result == (expected_frame, expected_stack), ('scope-unwind context differs', result)
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    args = parser.parse_args()
    for value in (0, 7, -1):
        assert exercise(args.reference, value) == exercise(args.source, value), 'native/source context bytes differ'
    assert unwind(args.reference) == unwind(args.source)
    print('Context ABI: native saved buffers, register restoration and scope unwinding match.')


if __name__ == '__main__':
    main()
