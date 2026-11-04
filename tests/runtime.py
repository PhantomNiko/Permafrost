#!/usr/bin/env python3
"""Compare rewritten C runtime entry points against the original machine code."""
import argparse
import json
from pathlib import Path
import random
import struct
import sys
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32, UC_HOOK_CODE
from unicorn.x86_const import *

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from wmfs import Image

DATA = 0x200000
STACK = 0x280000
RETURN = 0x290000
SAVED = [UC_X86_REG_EBX, UC_X86_REG_ESI, UC_X86_REG_EDI, UC_X86_REG_EBP]


class Runtime:
    def __init__(self, kernel, relocate=False):
        self.cpu = Uc(UC_ARCH_X86, UC_MODE_32)
        self.cpu.mem_map(0, 4 * 1024 * 1024)
        self.cpu.mem_write(0x20000, kernel)
        if relocate:
            layout = json.loads(Path('recovery/layout.json').read_text())
            # Exercise the real bootstrap, including core decompression, and
            # stop before entering the relocated stage-two initializer.
            self.cpu.reg_write(UC_X86_REG_ESP, STACK)
            entered=[]
            def stop(cpu,address,size,user):
                entered.append(address)
                cpu.emu_stop()
            handle=self.cpu.hook_add(UC_HOOK_CODE,stop,begin=layout['core_base'],end=0x16ffff)
            self.cpu.emu_start(layout['kernel_base']+16, RETURN, count=20000000)
            self.cpu.hook_del(handle)
            assert entered, 'kernel bootstrap did not relocate the C core'
            self.cpu.mem_write(layout['initialized_end'], bytes(layout['state_end']-layout['initialized_end']))

    def call(self, address, args, memory):
        cpu = self.cpu
        cpu.mem_write(DATA, memory)
        cpu.reg_write(UC_X86_REG_ESP, STACK)
        cpu.reg_write(UC_X86_REG_EFLAGS, 2)
        cpu.reg_write(UC_X86_REG_EAX, 0x12345678)
        for index, register in enumerate(SAVED):
            cpu.reg_write(register, 0x13570000 + index)
        cpu.mem_write(STACK, struct.pack('<%dI' % (len(args) + 1), RETURN, *args))
        cpu.emu_start(address, RETURN, count=1000000)
        assert cpu.reg_read(UC_X86_REG_EIP) == RETURN, 'routine did not return'
        assert cpu.reg_read(UC_X86_REG_ESP) == STACK + 4, 'stack ABI mismatch'
        for index, register in enumerate(SAVED):
            assert cpu.reg_read(register) == 0x13570000 + index, 'callee-saved register changed'
        return cpu.reg_read(UC_X86_REG_EAX), bytes(cpu.mem_read(DATA, len(memory)))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference_image', type=Path)
    parser.add_argument('--kernel', type=Path, default=Path('build/kernel.bin'))
    args = parser.parse_args()
    files = Image(args.reference_image.read_bytes()).files()
    old = Runtime(files['WinterBoot-baremetal.bin'])
    new = Runtime(args.kernel.read_bytes(), relocate=True)
    entries = json.loads(Path('kernel/runtime.json').read_text())
    randomizer = random.Random(0x5046)
    tested = 0

    def compare(name, arguments, memory):
        nonlocal tested
        address = entries[name][0]
        expected = old.call(address, arguments, memory)
        actual = new.call(address, arguments, memory)
        assert actual == expected, '%s case %d differs: %r != %r' % (name, tested, actual[0], expected[0])
        tested += 1

    for count in [0, 1, 2, 3, 7, 16, 31, 64, 127, 255]:
        memory = bytes(randomizer.randrange(256) for _ in range(1024))
        compare('pf_memcpy', [DATA, DATA + 512, count], memory)
        for out, source in [(0, 4), (4, 0), (0, 0), (0, 512)]:
            compare('pf_memmove', [DATA + out, DATA + source, count], memory)
        for value in [0, 1, 0x80, 0xff, 0x1234, 0xffffffff]:
            compare('pf_memset', [DATA, value, count], memory)
        compare('pf_memcmp', [DATA, DATA + 512, count], memory)
        compare('pf_memcmp', [DATA, DATA, count], memory)
    strings = [b'', b'a', b'abc', b'abba', b'abcabc', b'x' * 255, b'\x80\xffa']
    for left in strings:
        for right in strings:
            memory = (left + b'\0').ljust(512, b'\0') + (right + b'\0').ljust(512, b'\0')
            compare('pf_strlen', [DATA], memory)
            compare('pf_strcmp', [DATA, DATA + 512], memory)
            compare('pf_strcmp_alias', [DATA, DATA + 512], memory)
            compare('pf_strcpy', [DATA + 512, DATA], memory)
            compare('pf_strspn', [DATA, DATA + 512], memory)
            compare('pf_strpbrk', [DATA, DATA + 512], memory)
            compare('pf_strstr', [DATA, DATA + 512], memory)
        for character in [0, 97, 98, 120, 128, 255, 0xffffffff]:
            memory = (left + b'\0').ljust(1024, b'\0')
            compare('pf_strchr', [DATA, character], memory)
    compare('pf_strlen', [0], bytes(1024))
    print('%d original-vs-C cases passed, including stack and callee-saved registers.' % tested)


if __name__ == '__main__':
    main()
