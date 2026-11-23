#!/usr/bin/env python3
"""Compare WinterScript provider file forwarding with native kernel code.

Pooka's Free Software License. Provider execution is an isolated callback.
"""
import argparse
import json
import struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_PC, UC_ARM_REG_LR
from unicorn.arm64_const import UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_PC, UC_ARM64_REG_LR

p = argparse.ArgumentParser(description=__doc__)
p.add_argument('reference', type=Path)
p.add_argument('source', type=Path)
p.add_argument('--map', required=True, type=Path)
a = p.parse_args()
metadata, _ = inspect(a.reference.read_bytes())
wide = metadata['cpu'] == 0x100000c
assert metadata['cpu'] in (12, 0x100000c)
symbols = {name: address for address, name in metadata['symbols']}
mapping = json.loads(a.map.read_text())
global_address = 0x827382b8 if wide else 0x4065cc70
registers = (UC_ARM64_REG_X0, UC_ARM64_REG_X1) if wide else (UC_ARM_REG_R0, UC_ARM_REG_R1)
pc, lr = (UC_ARM64_REG_PC, UC_ARM64_REG_LR) if wide else (UC_ARM_REG_PC, UC_ARM_REG_LR)
word = 8 if wide else 4
fmt = '<Q' if wide else '<I'
names = ['_wm_kernel_program_ws_run_file', '_wm_kernel_program_ws_run_file_on_device']
results = []
for native in (True, False):
    addresses = {name: symbols[name] if native else mapping['_recovered_%x' % symbols[name]] for name in names}
    lib = Kernel((a.reference if native else a.source).read_bytes(), addresses | {'_ws_errorf': 0x4fe0000})
    cpu = lib.cpu
    events = []
    state = {'result': 0}
    def provider(emulator, address, size, user):
        events.append((address, tuple(cpu.reg_read(reg) for reg in registers)))
        cpu.reg_write(registers[0], state['result'])
        cpu.reg_write(pc, cpu.reg_read(lr))
    for index in range(2):
        target = 0x3002000 + index * 16
        cpu.mem_write(0x3001000 + (0x60 if wide else 0x34) + index * word, struct.pack(fmt, target))
        cpu.hook_add(UC_HOOK_CODE, provider, begin=target, end=target)
    cases = []
    for present in (False, True):
        cpu.mem_write(global_address, struct.pack(fmt, 0x3001000 if present else 0))
        for index, name in enumerate(names):
            for device in (0, 2, 0xffffffff):
                for path in (0, 0x3003000):
                    for value in (0, 1, 0x80, 0xff):
                        state['result'] = value
                        before = len(events)
                        args = (device, path) if index else (path, 0xa5a5a5a5)
                        result = lib.call(name, *args)
                        assert result == (value if present else 0)
                        if present:
                            assert len(events) == before + 1
                            assert events[-1][1][:index + 1] == args[:index + 1]
                        else:
                            assert len(events) == before
                        cases.append((result, events[before:]))
    results.append(cases)
assert results[0] == results[1]
print('%d native/source WinterScript file forwarding cases passed.' % len(results[0]))
