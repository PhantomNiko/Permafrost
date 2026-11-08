#!/usr/bin/env python3
"""Check ARM32 absolute-pointer packets and nonblocking EFI event polling.

Pooka's Free Software License. Reference executables are test inputs only.
"""
import argparse
import json
from pathlib import Path
import struct
import sys
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from native import inspect
from unicorn import Uc, UC_ARCH_ARM, UC_MODE_ARM, UC_HOOK_CODE
from unicorn.arm_const import *


def exercise(binary, address, deferred=False, event_ready=True, has_event=True,
             position=(600, 1200)):
    metadata, memory = inspect(binary)
    assert metadata['cpu'] == 12, 'This fixture covers ARM32.'
    cpu = Uc(UC_ARCH_ARM, UC_MODE_ARM)
    cpu.mem_map(0, 0x5000000)
    cpu.mem_map(0x40000000, 0x8000000)
    cpu.reg_write(UC_ARM_REG_C1_C0_2, 15 << 20)
    cpu.reg_write(UC_ARM_REG_FPEXC, 1 << 30)
    cpu.mem_write(metadata['base'], memory)
    context = 0x43000000
    protocol, mode, event, services, out, get = [context + i * 0x10000 for i in range(1, 7)]
    check = get + 16
    # The 1.0 ARM32 platform stores its WFE5 context at this fixed address.
    cpu.mem_write(0x40500004, struct.pack('<I', context))
    cpu.mem_write(context, struct.pack('<5I', 0x33454657, 5, 0x2138, 0, services))
    cpu.mem_write(protocol, struct.pack('<4I', 0, get, event if has_event else 0, mode))
    cpu.mem_write(services + 0x48, struct.pack('<I', check))
    cpu.mem_write(mode, struct.pack('<6QI', 100, 200, 0, 1100, 2200, 0, 0))
    calls = []
    reads = 0
    def finish(value):
        cpu.reg_write(UC_ARM_REG_R0, value)
        cpu.reg_write(UC_ARM_REG_PC, cpu.reg_read(UC_ARM_REG_LR))
    def read(cpu, address, size, user):
        nonlocal reads
        assert cpu.reg_read(UC_ARM_REG_R0) == protocol
        target = cpu.reg_read(UC_ARM_REG_R1)
        reads += 1
        calls.append(('read',))
        if deferred and reads == 1:
            finish(0x80000006)  # EFI_NOT_READY
            return
        cpu.mem_write(target, struct.pack('<3QI', *position, 0, 1))
        finish(0)
    def poll(cpu, address, size, user):
        supplied = cpu.reg_read(UC_ARM_REG_R0)
        assert supplied == event, ('CheckEvent requires the protocol event', hex(supplied))
        calls.append(('check',))
        finish(0 if event_ready else 0x80000006)
    for target, callback in [(get, read), (check, poll)]:
        cpu.mem_write(target, struct.pack('<I', 0xe12fff1e))
        cpu.hook_add(UC_HOOK_CODE, callback, begin=target, end=target)
    cpu.reg_write(UC_ARM_REG_R0, protocol)
    cpu.reg_write(UC_ARM_REG_R1, out)
    cpu.reg_write(UC_ARM_REG_SP, 0x47fe0000)
    cpu.reg_write(UC_ARM_REG_LR, 0x47ff0000)
    cpu.emu_start(address, 0x47ff0000, count=3000000)
    assert cpu.reg_read(UC_ARM_REG_PC) == 0x47ff0000, 'Pointer polling did not return.'
    return cpu.reg_read(UC_ARM_REG_R0), struct.unpack('<8I', bytes(cpu.mem_read(out, 32))), calls


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--map', required=True, type=Path)
    args = parser.parse_args()
    reference, source = args.reference.read_bytes(), args.source.read_bytes()
    metadata, _ = inspect(reference)
    original = next(a for a, name in metadata['symbols']
                    if name == '_platform_efi_read_absolute_pointer_state')
    mapping = json.loads(args.map.read_text())
    name = 'recovered_%x' % original
    recovered = mapping.get(name, mapping.get('_' + name))
    for position, expected in [((600, 1200), (500, 1000)), ((100, 200), (0, 0))]:
        native = exercise(reference, original, position=position)
        actual = exercise(source, recovered, position=position)
        assert native == actual, (position, native, actual)
        assert actual[:2] == (1, (1, 1, *expected, 0, 0, 1000, 2000))
    # CheckEvent must receive WaitForInput, including when GetState first says
    # NOT_READY. This explicitly checks the corrected EFI call contract.
    result, packet, calls = exercise(source, recovered, deferred=True)
    assert result == 1 and packet == (1, 1, 500, 1000, 0, 0, 1000, 2000)
    assert calls == [('read',), ('check',), ('read',)]
    result, packet, calls = exercise(source, recovered, deferred=True, event_ready=False)
    assert result == 0 and packet == (0,) * 8 and calls == [('read',), ('check',)]
    native = exercise(reference, original, deferred=True, has_event=False)
    actual = exercise(source, recovered, deferred=True, has_event=False)
    assert native == actual and actual[0] == 0 and actual[2] == [('read',)]
    print('ARM32 pointer: ready-packet parity, deferred events and nonblocking absence passed.')


if __name__ == '__main__':
    main()
