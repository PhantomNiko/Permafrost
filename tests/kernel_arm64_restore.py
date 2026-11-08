#!/usr/bin/env python3
"""Compare scheduler foreground image restoration with the ARM64 reference.

Pooka's Free Software License. Reference kernels are test inputs only.
"""
import argparse
import json
import struct
import sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect
from unicorn import Uc, UC_ARCH_ARM64, UC_MODE_ARM, UC_HOOK_CODE
from unicorn.arm64_const import *


def exercise(binary, mapping=None):
    metadata, memory = inspect(binary)
    cpu = Uc(UC_ARCH_ARM64, UC_MODE_ARM)
    cpu.mem_map(0, 0x5000000)
    cpu.mem_map(0x82000000, 0x8000000)
    cpu.mem_write(metadata['base'], memory)
    def target(address):
        return address if mapping is None else mapping['_recovered_%x' % address]
    events = []
    def finish(value):
        cpu.reg_write(UC_ARM64_REG_X0, value)
        cpu.reg_write(UC_ARM64_REG_PC, cpu.reg_read(UC_ARM64_REG_X30))
    def current_process(cpu, address, size, user): finish(0)
    def flush(cpu, address, size, user):
        events.append((cpu.reg_read(UC_ARM64_REG_X0), cpu.reg_read(UC_ARM64_REG_X1)))
        finish(0)
    for address, hook in [(0x8241dfd4, current_process), (0x824404d0, flush)]:
        cpu.hook_add(UC_HOOK_CODE, hook, begin=target(address), end=target(address))
    results = []
    for enabled, restore, count, capacity in [(1, 0, 257, 4096), (1, 1, 1, 4096),
            (1, 1, 257, 4096), (1, 1, 4096, 4096),
            (1, 1, 4097, 4096), (0, 1, 257, 4096)]:
        payload = bytes(i % 251 for i in range(8192))
        cpu.mem_write(0x3100000, payload)
        cpu.mem_write(0x84000000, b'\xa5'*8192)
        cpu.mem_write(0x8266ec45, bytes([enabled]))
        cpu.mem_write(0x8266edd0, struct.pack('<QQQ', 0x12345678, 0x3100000, capacity))
        events.clear()
        cpu.reg_write(UC_ARM64_REG_SP, 0x4fe0000)
        cpu.reg_write(UC_ARM64_REG_X30, 0x4ff0000)
        for register, value in [(UC_ARM64_REG_X0, 0), (UC_ARM64_REG_X1, restore), (UC_ARM64_REG_X2, count)]:
            cpu.reg_write(register, value)
        cpu.emu_start(target(0x8243e714), 0x4ff0000, count=1000000)
        assert cpu.reg_read(UC_ARM64_REG_PC) == 0x4ff0000
        actual = cpu.reg_read(UC_ARM64_REG_X0) & 255
        copied = enabled and restore and count <= capacity
        expected = int(not restore or copied)
        assert actual == expected, (enabled, restore, count, actual)
        output = bytes(cpu.mem_read(0x84000000, 8192))
        assert output == (payload[:count]+b'\xa5'*(8192-count) if copied else b'\xa5'*8192), ('foreground image was not restored', count)
        assert events == ([(0x84000000, count)] if copied else []), (enabled, restore, count, events)
        results.append((actual, output, tuple(events)))
    return results


if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('reference', type=Path)
    p.add_argument('source', type=Path)
    p.add_argument('--map', type=Path, required=True)
    a = p.parse_args()
    assert exercise(a.reference.read_bytes()) == exercise(a.source.read_bytes(), json.loads(a.map.read_text()))
    print('ARM64 scheduler: six native foreground restoration byte, bound and cache-flush comparisons passed.')
