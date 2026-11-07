#!/usr/bin/env python3
"""Compare audio file services and PCM conversion against the reference.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import struct
from audio_library import library, create, snapshot, PREFIX
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP, UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2
from unicorn.arm64_const import UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2


def filesystem(path):
    lib = library(path)
    lib.files = {}

    def arguments(count):
        if lib.cpu_type == 7:
            stack = lib.cpu.reg_read(UC_X86_REG_ESP)
            return struct.unpack('<' + 'I' * count, lib.cpu.mem_read(stack + 4, count * 4))
        registers = (UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2) if lib.cpu_type == 12 else (UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2) if lib.cpu_type == 0x100000c else (UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX)
        return [lib.cpu.reg_read(register) for register in registers[:count]]

    def name(pointer):
        return bytes(lib.cpu.mem_read(pointer, 128)).split(b'\0', 1)[0].decode()

    def read(cpu, address, size, user):
        filename, output = arguments(2)
        data = lib.files.get(name(filename))
        if data is None:
            cpu.reg_write(lib.result, 0)
            return
        cpu.mem_write(0x3200000, data)
        cpu.mem_write(output, struct.pack('<III', 0x3200000, len(data), 0))
        cpu.reg_write(lib.result, 1)

    def write(cpu, address, size, user):
        filename, pointer, count = arguments(3)
        assert count < 4000000
        lib.files[name(filename)] = bytes(cpu.mem_read(pointer, count))
        cpu.reg_write(lib.result, 1)

    for offset, address, callback in ((0x34, 0x10030, read), (0x38, 0x10040, write)):
        for table in lib.api_tables:
            lib.cpu.mem_write(table + offset, struct.pack('<I', address))
        lib.cpu.mem_write(address, struct.pack('<I', 0xe12fff1e if lib.cpu_type == 12 else 0xd65f03c0) if lib.cpu_type in (12, 0x100000c) else b'\xc3')
        lib.cpu.hook_add(UC_HOOK_CODE, callback, begin=address, end=address)
    return lib


def wave(channels=2, rate=44100, bits=16):
    data = bytes((0, 64, 128, 255)) if bits == 8 else struct.pack('<8h', -32768, 32767, -1000, 1000, 0, 0, 12000, -12000)
    align = channels * bits // 8
    return b'RIFF' + struct.pack('<I', 36 + len(data)) + b'WAVEfmt ' + struct.pack('<IHHIIHH', 16, 1, channels, rate, rate * align, align, bits) + b'data' + struct.pack('<I', len(data)) + data


def opened(path, data):
    lib = filesystem(path)
    lib.files['fixture.wav'] = data
    lib.cpu.mem_write(0x3000000, b'fixture.wav\0')
    track = lib.call(PREFIX + '8openFileEPKc', 0x3000000, result_bits=64 if lib.wide else 32)
    if not track:
        return None
    result = snapshot(lib, track)
    lib.call(PREFIX + '5closeEPNS0_5TrackE', track)
    return result


def saved(path):
    lib = filesystem(path)
    track = create(lib, 440, 2, 'sine', 'both')
    lib.cpu.mem_write(0x3000000, b'generated.wav\0')
    assert lib.call(PREFIX + '4saveEPKNS0_5TrackEPKc', track, 0x3000000)
    lib.call(PREFIX + '5closeEPNS0_5TrackE', track)
    assert 'generated.wav' in lib.files, (str(path), 'unexpected output filename', list(lib.files))
    return lib.files['generated.wav']


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    args = parser.parse_args()
    cases = [wave(), wave(1, 22050), wave(1, 44100, 8), b'', b'RIFF', wave()[:20]]
    for index, data in enumerate(cases):
        expected, actual = opened(args.reference, data), opened(args.source, data)
        assert expected == actual, ('WAV decoding differs', index)
        if index < 3:
            assert expected is not None, index
    native, source = saved(args.reference), saved(args.source)
    for data in (native, source):
        assert opened(args.reference, data) == opened(args.source, data), 'saved WAV samples differ'
    assert opened(args.reference, native) == opened(args.reference, source), 'source encoder changed samples'
    print('Audio files: PCM conversion, malformed input, saving and cross-decoding passed.')


if __name__ == '__main__':
    main()
