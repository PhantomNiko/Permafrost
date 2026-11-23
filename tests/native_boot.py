"""Execute fixed-address boot helpers in an isolated CPU emulator.

Pooka's Free Software License. Reference binaries are optional test inputs.
"""
from pathlib import Path
from dll import DLL
from native import inspect
from unicorn import Uc, UC_ARCH_X86, UC_MODE_64
from unicorn.x86_const import UC_X86_REG_RIP, UC_X86_REG_RAX


class BootX64(DLL):
    def __init__(self, path):
        meta, memory = inspect(Path(path).read_bytes())
        if meta['cpu'] != 0x1000007:
            raise ValueError('this boot fixture requires x64')
        self.cpu_type = meta['cpu']
        self.wide = True
        self.cpu = Uc(UC_ARCH_X86, UC_MODE_64)
        self.cpu.mem_map(0, 0x5000000)
        base = meta['base'] & ~4095
        self.cpu.mem_map(base, (meta['end'] - base + 4095) & ~4095)
        self.cpu.mem_write(meta['base'], memory)
        self.exports = {name: address for address, name in meta['symbols']}
        self.stop = 0x4ff0000
        self.pc = UC_X86_REG_RIP
        self.result = UC_X86_REG_RAX
        self.instruction_limit = 100000000
