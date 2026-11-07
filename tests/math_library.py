#!/usr/bin/env python3
"""Compare r232 exponential and time exports through each native ABI.

Pooka's Free Software License.
"""
import argparse
import math
from pathlib import Path
import struct
from dll import DLL
from ttf_library import floating
from unicorn.x86_const import UC_X86_REG_FP0, UC_X86_REG_FPSW, UC_X86_REG_FPTAG, UC_X86_REG_XMM0
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1
from unicorn.arm64_const import UC_ARM64_REG_S0, UC_ARM64_REG_D0


def returned(lib, single=False):
    if lib.cpu_type == 7:
        top = (lib.cpu.reg_read(UC_X86_REG_FPSW) >> 11) & 7
        mantissa, exponent = lib.cpu.reg_read(UC_X86_REG_FP0 + top)
        if exponent & 0x7fff == 0x7fff:
            value = float('inf') if mantissa == 0x8000000000000000 else float('nan')
        else:
            value = math.ldexp(float(mantissa), (exponent & 0x7fff) - 16383 - 63) if mantissa else 0.0
        return -value if exponent & 0x8000 else value
    if lib.cpu_type == 12:
        bits = lib.cpu.reg_read(UC_ARM_REG_R0)
        if not single:
            bits |= lib.cpu.reg_read(UC_ARM_REG_R1) << 32
    else:
        register = UC_X86_REG_XMM0 if lib.cpu_type == 0x1000007 else UC_ARM64_REG_S0 if single else UC_ARM64_REG_D0
        bits = lib.cpu.reg_read(register)
    return struct.unpack('<f' if single else '<d', struct.pack('<I' if single else '<Q', bits & (0xffffffff if single else 0xffffffffffffffff)))[0]


def extended(value, size):
    sign = 0x8000 if math.copysign(1.0, value) < 0 else 0
    if not math.isfinite(value):
        mantissa, exponent = (0xc000000000000000 if math.isnan(value) else 0x8000000000000000), 0x7fff
    elif value:
        fraction, power = math.frexp(abs(value))
        mantissa, exponent = int(fraction * 2**64), power - 1 + 16383
    else:
        mantissa, exponent = 0, 0
    return struct.pack('<QH', mantissa, exponent | sign) + bytes(size - 10)


def exponential(lib, value, kind):
    if lib.cpu_type in (7, 0x1000007):
        lib.cpu.reg_write(UC_X86_REG_FPSW, 0)
        lib.cpu.reg_write(UC_X86_REG_FPTAG, 0xffff)
    if kind == 'expl' and lib.cpu_type in (7, 0x1000007):
        data = extended(value, 12 if lib.cpu_type == 7 else 16)
        if lib.cpu_type == 7:
            arguments = struct.unpack('<III', data)
        else:
            lib.cpu.mem_write(0x4fe0000, data)
            arguments = ()
    else:
        bits = floating(lib, value, kind != 'expf')
        arguments = () if bits is None else (bits,) if kind == 'expf' else (bits & 0xffffffff, bits >> 32)
    lib.call('_' + kind, *arguments)
    if kind == 'expl' and lib.cpu_type == 0x1000007:
        top = (lib.cpu.reg_read(UC_X86_REG_FPSW) >> 11) & 7
        mantissa, exponent = lib.cpu.reg_read(UC_X86_REG_FP0 + top)
        if exponent & 0x7fff == 0x7fff:
            return float('nan') if mantissa != 0x8000000000000000 else math.copysign(float('inf'), -1 if exponent & 0x8000 else 1)
        value = math.ldexp(float(mantissa), (exponent & 0x7fff) - 16383 - 63) if mantissa else 0.0
        return -value if exponent & 0x8000 else value
    return returned(lib, kind == 'expf')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    args = parser.parse_args()
    native, source = DLL(args.reference), DLL(args.source)
    assert native.cpu_type == source.cpu_type
    count = 0
    values = (-746., -745., -710., -100., -4., -1., -.5, -0., .1, .5, 1., 4., 20., 100., 700., 710., float('inf'), float('-inf'), float('nan'))
    for kind in ('exp', 'expf', 'expl'):
        for value in values:
            expected, actual = (exponential(lib, value, kind) for lib in (native, source))
            assert actual == expected or math.isnan(actual) and math.isnan(expected), (kind, value, actual, expected)
            count += 1
    for end, start in ((0, 0), (1, 0), (0, 1), (-1, 1), (0x7fffffff, -0x80000000), (-0x80000000, 0x7fffffff)):
        values = []
        for lib in (native, source):
            if lib.cpu_type == 7:
                lib.cpu.reg_write(UC_X86_REG_FPSW, 0)
                lib.cpu.reg_write(UC_X86_REG_FPTAG, 0xffff)
            mask = 0xffffffffffffffff if lib.wide else 0xffffffff
            lib.call('_difftime', end & mask, start & mask)
            values.append(returned(lib))
        assert values[0] == values[1], (end, start, values)
        count += 1
    print('Math library: %d native/source ABI cases passed.' % count)


if __name__ == '__main__':
    main()
