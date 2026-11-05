#!/usr/bin/env python3
"""Compare recovered integer parsing with the native reference on a CPU emulator.

Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import struct
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from native import inspect


class Machine:
    def __init__(self, binary, address, source):
        from unicorn import Uc, UC_ARCH_X86, UC_ARCH_ARM, UC_ARCH_ARM64, UC_MODE_32, UC_MODE_64, UC_MODE_ARM
        metadata, memory = inspect(binary)
        self.cpu_type, self.address, self.source = metadata['cpu'], address, source
        arm = self.cpu_type in (12, 0x100000c)
        architecture = UC_ARCH_ARM if self.cpu_type == 12 else UC_ARCH_ARM64 if arm else UC_ARCH_X86
        mode = UC_MODE_ARM if arm else UC_MODE_64 if self.cpu_type == 0x1000007 else UC_MODE_32
        self.cpu = Uc(architecture, mode)
        self.cpu.mem_map(0, 0x10000 if arm else 0x5000000)
        if arm:
            self.cpu.mem_map(0x40000000, 0x8000000)
        self.cpu.mem_write(metadata['base'], memory)
        if arm:
            # Supply a free RAM region outside the loaded kernels and test data.
            shared = 0x40010000
            self.cpu.mem_write(shared+0x88, struct.pack('<II', 0x48000000, 1))
            self.cpu.mem_write(shared+0x90, struct.pack('<QQI', 0x44000000, 0x1000000, 1))
            self.cpu.mem_write(shared+0x238, struct.pack('<IIQQ', 0x34364857, 1, 0x44000000, 0x1000000))
        self.data = 0x43000000 if arm else 0x3000000
        self.stack = 0x47fe0000 if arm else 0x4fe0000
        self.stop = self.stack + 0x10000

    def parse(self, text):
        from unicorn.x86_const import UC_X86_REG_ESP, UC_X86_REG_ECX, UC_X86_REG_EDX, UC_X86_REG_EAX, UC_X86_REG_RSP, UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RAX
        from unicorn.arm_const import UC_ARM_REG_SP, UC_ARM_REG_LR, UC_ARM_REG_R0, UC_ARM_REG_R1
        from unicorn.arm64_const import UC_ARM64_REG_SP, UC_ARM64_REG_X30, UC_ARM64_REG_X0, UC_ARM64_REG_X1
        cpu, data = self.cpu, self.data
        cpu.mem_write(data, text.encode() + b'\0')
        cpu.mem_write(data+4096, struct.pack('<I', 0x12345678))
        if self.cpu_type == 7:
            sp = self.stack - 12
            cpu.reg_write(UC_X86_REG_ESP, sp)
            cpu.mem_write(sp, struct.pack('<3I', self.stop, data, data+4096))
            if not self.source:
                cpu.reg_write(UC_X86_REG_ECX, data)
                cpu.reg_write(UC_X86_REG_EDX, data+4096)
            result = UC_X86_REG_EAX
        elif self.cpu_type == 0x1000007:
            cpu.reg_write(UC_X86_REG_RSP, self.stack-8)
            cpu.mem_write(self.stack-8, struct.pack('<Q', self.stop))
            cpu.reg_write(UC_X86_REG_RDI, data)
            cpu.reg_write(UC_X86_REG_RSI, data+4096)
            result = UC_X86_REG_RAX
        elif self.cpu_type == 12:
            cpu.reg_write(UC_ARM_REG_SP, self.stack)
            cpu.reg_write(UC_ARM_REG_LR, self.stop)
            cpu.reg_write(UC_ARM_REG_R0, data)
            cpu.reg_write(UC_ARM_REG_R1, data+4096)
            result = UC_ARM_REG_R0
        else:
            cpu.reg_write(UC_ARM64_REG_SP, self.stack)
            cpu.reg_write(UC_ARM64_REG_X30, self.stop)
            cpu.reg_write(UC_ARM64_REG_X0, data)
            cpu.reg_write(UC_ARM64_REG_X1, data+4096)
            result = UC_ARM64_REG_X0
        cpu.emu_start(self.address, self.stop, count=2000000)
        value = struct.unpack('<i', bytes(cpu.mem_read(data+4096, 4)))[0]
        return bool(cpu.reg_read(result) & 255), value


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source', type=Path)
    parser.add_argument('--source-map', type=Path, required=True)
    parser.add_argument('--reference', type=Path, required=True)
    parser.add_argument('--metadata', type=Path, required=True)
    args = parser.parse_args()
    metadata = json.loads(args.metadata.read_text())
    address = next(a for a, n in metadata['symbols'] if n == '_ws_parse_int_literal')
    mapping = json.loads(args.source_map.read_text())
    name = 'recovered_%x' % address
    source_address = mapping.get(name, mapping.get('_'+name))
    if source_address is None:
        raise ValueError('source map has no integer-parser entry')
    source = Machine(args.source.read_bytes(), source_address, True)
    reference = Machine(args.reference.read_bytes(), address, False)
    cases = ('4', '+4', '-4', '0', '0004', '0xff', '0XABCD', '$ff',
             '2147483647', '-2147483648', '  -42  ', '', '+', '-', '0x', '$',
             '2147483648', '-2147483649', '99999999999999', '1.2', '4x', '0xfg')
    for text in cases:
        actual, expected = source.parse(text), reference.parse(text)
        if actual != expected:
            raise AssertionError(repr(text) + ': source ' + str(actual) + ', native ' + str(expected))
    print('Integer literals: %d native/source cases passed.' % len(cases))


if __name__ == '__main__':
    main()
