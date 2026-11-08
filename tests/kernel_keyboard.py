#!/usr/bin/env python3
"""Compare x64 platform scancodes and process/window key routing for 1.0.

Pooka's Free Software License. Reference binaries are test inputs only.
"""
import argparse
import json
from pathlib import Path
import struct
import sys
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from native import inspect
from unicorn import Uc, UC_ARCH_X86, UC_MODE_64, UC_HOOK_CODE, UC_HOOK_INSN
from unicorn.x86_const import *


def exercise(binary, reference, mapping=None):
    metadata, memory = inspect(binary)
    assert metadata['cpu'] == 0x1000007, 'This fixture covers x86-64.'
    names = {name: address for address, name in reference['symbols']}
    def target(name):
        address = names[name]
        return address if mapping is None else mapping['recovered_%x' % address]
    cpu = Uc(UC_ARCH_X86, UC_MODE_64)
    cpu.mem_map(0, 0x5000000)
    cpu.mem_write(metadata['base'], memory)
    stop, stack = 0x4ff0000, 0x4fe0000
    def call(address):
        cpu.reg_write(UC_X86_REG_RSP, stack)
        cpu.mem_write(stack, struct.pack('<Q', stop))
        cpu.emu_start(address, stop, count=1000000)
        assert cpu.reg_read(UC_X86_REG_RIP) == stop, 'Keyboard routine did not return.'
        return cpu.reg_read(UC_X86_REG_EAX)
    # The 1.0 WFE5 loader context selects direct PS/2 polling on x64.
    cpu.mem_write(0x2109008, struct.pack('<Q', 0x3100000))
    cpu.mem_write(0x3100000, struct.pack('<III', 0x33454657, 5, 0x2138))
    scancodes = []
    def port(cpu, port, size, user):
        if port == 0x64:
            return int(bool(scancodes))
        assert port == 0x60, ('Unexpected keyboard port', port)
        return scancodes.pop(0)
    cpu.hook_add(UC_HOOK_INSN, port, None, 1, 0, UC_X86_INS_IN)
    decoded = []
    for code in [0x1e, 0x9e, 0x03, 0x83, 0x2a, 0x0d,
                 0x8d, 0xaa, 0x04, 0x84, 0x1c, 0x9c]:
        scancodes[:] = [code]
        decoded.append(call(target('_wm_platform_poll_key_ax')))

    def finish(value):
        sp = cpu.reg_read(UC_X86_REG_RSP)
        address = int.from_bytes(cpu.mem_read(sp, 8), 'little')
        cpu.reg_write(UC_X86_REG_RAX, value)
        cpu.reg_write(UC_X86_REG_RSP, sp + 8)
        cpu.reg_write(UC_X86_REG_RIP, address)
    for name in ['_scheduler_preempt_checkpoint', '_wm_platform_smp_current_cpu_index']:
        address = target(name)
        cpu.hook_add(UC_HOOK_CODE, lambda cpu, address, size, user: finish(0),
                     begin=address, end=address)
    polled = []
    platform_value = 0x1e61
    def platform(cpu, address, size, user):
        polled.append(True)
        finish(platform_value)
    address = target('_wm_platform_poll_key_ax')
    cpu.hook_add(UC_HOOK_CODE, platform, begin=address, end=address)
    # The decoder has already executed. Invalidate its translated block before
    # replacing it with the routing fixture's platform callback.
    cpu.ctl_remove_cache(0, 0x5000000)
    routed = []
    for active, child in [(True, False), (False, False), (True, True), (False, True)]:
        cpu.mem_write(0x21711e0, bytes(0x440))
        cpu.mem_write(0x21737b0, bytes(0x2a0 * 16))
        root = 0x21711e0
        for index in range(2 if child else 1):
            record = bytearray(0x110)
            record[0] = record[4] = 1
            struct.pack_into('<I', record, 16, 7 + index)
            if child:
                struct.pack_into('<Q', record, 200, 0x3110000)
            cpu.mem_write(root + index * 0x110, bytes(record))
        cpu.mem_write(0x2176800, struct.pack('<Q', root + (0x110 if child else 0)))
        window = bytearray(0x2a0)
        window[0] = 1
        struct.pack_into('<II', window, 4, 17, 7)
        struct.pack_into('<I', window, 0x34, 10 if active else 8)
        cpu.mem_write(0x21737b0, bytes(window))
        polled.clear()
        value = call(target('_wm_kernel_program_poll_key_ax'))
        routed.append((value, len(polled)))
        assert value == (0x1e61 if active else 0), (active, child, routed[-1])
    for platform_value in [0x22e63, 0x42e63, 0x10d2b, 0x80010000]:
        cpu.mem_write(0x21737b0 + 0x34, struct.pack('<I', 10))
        polled.clear()
        value = call(target('_wm_kernel_program_poll_key_ax'))
        routed.append((value, len(polled)))
        assert value == platform_value, ('modifier flags were truncated', hex(platform_value), hex(value))
    return decoded, routed


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--map', required=True, type=Path)
    args = parser.parse_args()
    reference = args.reference.read_bytes()
    metadata, _ = inspect(reference)
    expected = exercise(reference, metadata)
    actual = exercise(args.source.read_bytes(), metadata, json.loads(args.map.read_text()))
    assert expected == actual, (expected, actual)
    assert expected[0] == [0x1e61, 0, 0x332, 0, 0x80010000, 0x10d2b,
                           0, 0x80000000, 0x433, 0, 0x1c0d, 0]
    print('x64 keyboard: twelve scancode and eight process/window/modifier routing cases passed.')


if __name__ == '__main__':
    main()
