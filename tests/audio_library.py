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
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_RSP, UC_X86_REG_ESP
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_LR
from unicorn.arm64_const import UC_ARM64_REG_D0, UC_ARM64_REG_LR

PREFIX = '__ZN6winter5audio'


def library(path):
    lib = DLL(path, instruction_limit=200000000)
    metadata = inspect(Path(path).read_bytes())
    imports = {item['name'] for item in metadata['imports']} - {'dyld_stub_binder'}
    if not imports:
        return lib
    assert imports == {'_llroundl'}, imports
    address, size = next((a, n) for k, a, n in metadata['sections'] if k == '__la_symbol_ptr')
    width = 8 if lib.wide else 4
    assert size == width
    target = int.from_bytes(lib.cpu.mem_read(lib.base + address, width), 'little')

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


def generated(path, frequency, duration, waveform, side):
    lib = library(path)
    if waveform is not None:
        lib.cpu.mem_write(0x3000000, waveform.encode() + b'\0')
    if side is not None:
        lib.cpu.mem_write(0x3000100, side.encode() + b'\0')
    track = lib.call(PREFIX + '4formEiiPKcS2_', frequency & 0xffffffff, duration & 0xffffffff, 0x3000000 if waveform is not None else 0, 0x3000100 if side is not None else 0, result_bits=64 if lib.wide else 32)
    if not track:
        return None
    output = 0x3001000
    if not lib.call(PREFIX + '7inspectEPKNS0_5TrackEPNS0_14TrackAudioViewE', track, output):
        assert bytes(lib.cpu.mem_read(output, 22 if lib.wide else 14)) == bytes(22 if lib.wide else 14)
        lib.call(PREFIX + '5closeEPNS0_5TrackE', track)
        return 0, 0, 0, b''
    pointer, count, rate, channels = struct.unpack('<QQIH' if lib.wide else '<IIIH', lib.cpu.mem_read(output, 22 if lib.wide else 14))
    assert count < 1000000 and rate == 44100 and channels == 2, (count, rate, channels)
    samples = bytes(lib.cpu.mem_read(pointer, count * 2)) if count else b''
    lib.call(PREFIX + '5closeEPNS0_5TrackE', track)
    return count, rate, channels, samples


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    args = parser.parse_args()
    count = 0
    for waveform in ('square', 'sine', 'saw'):
        for side in ('left', 'right', 'both'):
            case = (440, 2, waveform, side)
            expected, actual = (generated(path, *case) for path in (args.reference, args.source))
            assert expected is not None, case
            assert actual == expected, ('audio samples differ', case, None if actual is None else actual[:3], expected[:3])
            count += 1
    for case in ((0, 2, 'square', 'both'), (440, 0, 'sine', 'both'), (440, 1, 'sine', 'both'), (440, 5, 'sine', 'both'), (22050, 11, 'saw', 'both')):
        expected, actual = (generated(path, *case) for path in (args.reference, args.source))
        assert actual == expected, ('audio boundary differs', case)
        count += 1
    for case in ((-1, 1, 'sine', 'both'), (440, -1, 'sine', 'both'), (440, 1, 'unknown', 'both'), (440, 1, 'sine', 'unknown'), (440, 1, None, 'both'), (440, 1, 'sine', None)):
        assert generated(args.reference, *case) is None
        assert generated(args.source, *case) is None
        count += 1
    print('Audio library: %d native/source generation and invalid-input cases passed.' % count)


if __name__ == '__main__':
    main()
