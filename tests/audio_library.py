#!/usr/bin/env python3
"""Compare generated audio tracks through the native C++ interface.

The reference imports llroundl from its runtime; the oracle supplies that
standard rounding operation. Pooka's Free Software License.
"""
import argparse
import math
from pathlib import Path
import struct
from dll import DLL
from dylib import inspect
from ttf_library import floating
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_RSP, UC_X86_REG_ESP
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_LR
from unicorn.arm64_const import UC_ARM64_REG_D0, UC_ARM64_REG_LR

PREFIX = '__ZN6winter5audio'


def library(path, api_base=None):
    lib = DLL(path, instruction_limit=200000000, api_base=api_base)
    metadata = inspect(Path(path).read_bytes())
    imports = {item['name'] for item in metadata['imports']} - {'dyld_stub_binder'}
    if not imports:
        return lib
    assert imports == {'_llroundl'}, imports
    address = next(item['address'] for item in metadata['stubs'] if item['name'] == '_llroundl')
    width = 8 if lib.wide else 4
    target = lib.base + address

    def rounding(cpu, address, size, user):
        if lib.cpu_type in (7, 0x1000007):
            stack_register = UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP
            stack = cpu.reg_read(stack_register)
            mantissa, exponent = struct.unpack('<QH', cpu.mem_read(stack + width, 10))
            value = math.ldexp(float(mantissa), (exponent & 0x7fff) - 16383 - 63) if mantissa else 0.0
            if exponent & 0x8000:
                value = -value
            destination = int.from_bytes(cpu.mem_read(stack, width), 'little')
            cpu.reg_write(stack_register, stack + width)
        else:
            bits = cpu.reg_read(UC_ARM64_REG_D0) if lib.wide else cpu.reg_read(UC_ARM_REG_R0) | cpu.reg_read(UC_ARM_REG_R1) << 32
            value = struct.unpack('<d', struct.pack('<Q', bits))[0]
            destination = cpu.reg_read(UC_ARM64_REG_LR if lib.wide else UC_ARM_REG_LR)
        result = math.floor(value + .5) if value >= 0 else math.ceil(value - .5)
        cpu.reg_write(lib.result, result & (0xffffffffffffffff if lib.wide else 0xffffffff))
        if not lib.wide:
            from unicorn.x86_const import UC_X86_REG_EDX
            cpu.reg_write(UC_ARM_REG_R1 if lib.cpu_type == 12 else UC_X86_REG_EDX, (result >> 32) & 0xffffffff)
        cpu.reg_write(lib.pc, destination)

    lib.cpu.hook_add(UC_HOOK_CODE, rounding, begin=target, end=target)
    return lib


def create(lib, frequency, duration, waveform, side):
    if waveform is not None:
        lib.cpu.mem_write(0x3000000, waveform.encode() + b'\0')
    if side is not None:
        lib.cpu.mem_write(0x3000100, side.encode() + b'\0')
    return lib.call(PREFIX + '4formEiiPKcS2_', frequency & 0xffffffff, duration & 0xffffffff, 0x3000000 if waveform is not None else 0, 0x3000100 if side is not None else 0, result_bits=64 if lib.wide else 32)


def snapshot(lib, track):
    output = 0x3001000
    view_size = 22 if lib.wide else 18
    if not lib.call(PREFIX + '7inspectEPKNS0_5TrackEPNS0_14TrackAudioViewE', track, output):
        assert bytes(lib.cpu.mem_read(output, view_size)) == bytes(view_size)
        return 0, 0, 0, b''
    pointer, count, rate, channels = struct.unpack('<QQIH' if lib.wide else '<IQIH', lib.cpu.mem_read(output, view_size))
    assert count < 1000000 and rate > 0 and 0 < channels <= 8, (count, rate, channels)
    samples = bytes(lib.cpu.mem_read(pointer, count * 2)) if count else b''
    return count, rate, channels, samples


def generated(path, *arguments, api_base=None):
    lib = library(path, api_base)
    track = create(lib, *arguments)
    if not track:
        return None
    result = snapshot(lib, track)
    lib.call(PREFIX + '5closeEPNS0_5TrackE', track)
    return result


def trimmed(path, start, end, api_base=None):
    lib = library(path, api_base)
    track = create(lib, 440, 11, 'sine', 'both')
    assert track
    mask = (1 << 64) - 1
    if lib.wide:
        arguments = track, start & mask, end & mask
    else:
        arguments = (track, start & 0xffffffff, (start >> 32) & 0xffffffff, end & 0xffffffff, (end >> 32) & 0xffffffff)
    status = lib.call(PREFIX + '4trimEPNS0_5TrackExx', *arguments)
    result = snapshot(lib, track)
    lib.call(PREFIX + '5closeEPNS0_5TrackE', track)
    return status, result


def transformed(path, method, factor, api_base=None):
    lib = library(path, api_base)
    track = create(lib, 440, 11, 'sine', 'both')
    assert track
    bits = floating(lib, factor, True)
    if lib.wide:
        arguments = (track,)
    else:
        arguments = (track, bits & 0xffffffff, bits >> 32)
    status = lib.call(PREFIX + '5' + method + 'EPNS0_5TrackEd', *arguments)
    result = snapshot(lib, track)
    lib.call(PREFIX + '5closeEPNS0_5TrackE', track)
    return status, result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--api-base', type=lambda value: int(value, 0))
    args = parser.parse_args()
    count = 0
    for waveform in ('square', 'sine', 'saw'):
        for side in ('left', 'right', 'both'):
            case = (440, 2, waveform, side)
            expected, actual = (generated(path, *case, api_base=args.api_base) for path in (args.reference, args.source))
            assert expected is not None, case
            assert actual == expected, ('audio samples differ', case, None if actual is None else actual[:3], expected[:3])
            count += 1
    for case in ((0, 2, 'square', 'both'), (440, 0, 'sine', 'both'), (440, 1, 'sine', 'both'), (440, 5, 'sine', 'both'), (22050, 11, 'saw', 'both')):
        expected, actual = (generated(path, *case, api_base=args.api_base) for path in (args.reference, args.source))
        assert actual == expected, ('audio boundary differs', case)
        count += 1
    for case in ((-1, 1, 'sine', 'both'), (440, -1, 'sine', 'both'), (440, 1, 'unknown', 'both'), (440, 1, 'sine', 'unknown'), (440, 1, None, 'both'), (440, 1, 'sine', None)):
        assert generated(args.reference, *case, api_base=args.api_base) is None
        assert generated(args.source, *case, api_base=args.api_base) is None
        count += 1
    for case in ((0, 2), (2, 5), (5, 11), (50, 60), (3, 2), (-1, 2), (0, 0), (0, (1 << 63) - 1)):
        expected, actual = (trimmed(path, *case, api_base=args.api_base) for path in (args.reference, args.source))
        assert actual == expected, ('trim differs', case)
        count += 1
    for method in ('pitch', 'speed'):
        for factor in (1., .5, 2., 1.25, 0., -1., float('inf'), float('nan')):
            expected, actual = (transformed(path, method, factor, args.api_base) for path in (args.reference, args.source))
            assert actual == expected, ('audio transform differs', method, factor)
            count += 1
    print('Audio library: %d native/source generation, trim and invalid-input cases passed.' % count)


if __name__ == '__main__':
    main()
