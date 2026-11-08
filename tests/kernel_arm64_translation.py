#!/usr/bin/env python3
"""Compare ARM64 address validation with native architectural translation results.

Pooka's Free Software License. Reference kernels are test inputs only.
"""
import argparse
import json
import sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect
from unicorn import Uc, UC_ARCH_ARM64, UC_MODE_ARM, UC_HOOK_CODE
from unicorn.arm64_const import *
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM


def exercise(binary, mapping=None):
    metadata, memory = inspect(binary)
    cpu = Uc(UC_ARCH_ARM64, UC_MODE_ARM)
    cpu.mem_map(0, 0x5000000)
    cpu.mem_map(0x82000000, 0x8000000)
    cpu.mem_write(metadata['base'], memory)
    decoder = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
    events = []
    translation_result = 0
    def instruction(cpu, address, size, user):
        word = int.from_bytes(cpu.mem_read(address, 4), 'little')
        if word & 0xffffffe0 == 0xd5384240:
            cpu.reg_write(UC_ARM64_REG_X0+(word&31), level*4)
            cpu.reg_write(UC_ARM64_REG_PC, address+4)
        # AT S1E1R/W and S1E2R/W: substitute the architectural result while
        # executing the caller's actual barriers, MRS and success predicate.
        if word & 0xfffbffc0 == 0xd5087800:
            decoded = next(decoder.disasm(bytes(cpu.mem_read(address, 4)), address))
            events.append((decoded.op_str.split(',')[0], cpu.reg_read(UC_ARM64_REG_X0+(word&31))))
            cpu.reg_write(UC_ARM64_REG_PAR_EL1, translation_result)
            cpu.reg_write(UC_ARM64_REG_PC, address+4)
    cpu.hook_add(UC_HOOK_CODE, instruction)
    target = 0x82402408 if mapping is None else mapping['_recovered_82402408']
    results = []
    for level in [1, 2]:
        for writable in [0, 1]:
            for address in [0x10008000, 0x10017fff]:
                for translation_result in [0xff00000010008000, 0x809]:
                    events.clear()
                    cpu.reg_write(UC_ARM64_REG_PSTATE, 5)
                    cpu.reg_write(UC_ARM64_REG_SP, 0x4fe0000)
                    cpu.reg_write(UC_ARM64_REG_X30, 0x4ff0000)
                    cpu.reg_write(UC_ARM64_REG_X0, address)
                    cpu.reg_write(UC_ARM64_REG_X1, writable)
                    cpu.emu_start(target, 0x4ff0000, count=10000)
                    assert cpu.reg_read(UC_ARM64_REG_PC) == 0x4ff0000
                    actual = cpu.reg_read(UC_ARM64_REG_X0)
                    expected = int(not (translation_result & 1))
                    assert actual == expected, (level, writable, hex(address), hex(translation_result), actual)
                    assert events == [('s1e%u%s' % (level, 'w' if writable else 'r'), address)], events
                    results.append(actual)
    return results


if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('reference', type=Path)
    p.add_argument('source', type=Path)
    p.add_argument('--map', type=Path, required=True)
    a = p.parse_args()
    assert exercise(a.reference.read_bytes()) == exercise(a.source.read_bytes(), json.loads(a.map.read_text()))
    print('ARM64 translation: 16 native comparisons passed across EL1/EL2, read/write, aligned/unaligned and valid/fault results.')
