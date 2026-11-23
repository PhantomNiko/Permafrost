#!/usr/bin/env python3
"""Compare IA32 shell request arguments and captured output against the native kernel.

Pooka's Free Software License. Provider services run in CPU emulation.
"""
import argparse
import json
from pathlib import Path
import struct
from kernel_scalars import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ECX, UC_X86_REG_EDX, UC_X86_REG_ESP, UC_X86_REG_EIP, UC_X86_REG_EAX


def exercise(path, mapping, native):
    address = lambda value: value if native else mapping['recovered_%x' % value]
    lib = Kernel(path.read_bytes(), {'route': address(0x20b41d0), '_ws_errorf': 0x4fe0000}, native)
    cpu = lib.cpu
    events = []
    state = {'status': 0, 'output': b''}

    def arguments(count):
        sp = cpu.reg_read(UC_X86_REG_ESP)
        if native:
            return [cpu.reg_read(UC_X86_REG_ECX), cpu.reg_read(UC_X86_REG_EDX)][:count] + list(
                struct.unpack('<' + 'I' * max(0, count - 2), cpu.mem_read(sp + 4, max(0, count - 2) * 4)))
        return list(struct.unpack('<' + 'I' * count, cpu.mem_read(sp + 4, count * 4)))

    def leave(value, native_stack_arguments):
        sp = cpu.reg_read(UC_X86_REG_ESP)
        target = int.from_bytes(cpu.mem_read(sp, 4), 'little')
        cpu.reg_write(UC_X86_REG_ESP, sp + 4 + (native_stack_arguments * 4 if native else 0))
        cpu.reg_write(UC_X86_REG_EAX, value)
        cpu.reg_write(UC_X86_REG_EIP, target)

    def dispatch(cpu, pc, size, user):
        capability, code, request = arguments(3)
        fields = struct.unpack('<10I', cpu.mem_read(request, 40))
        assert capability == 0x40000 and code == 0x50001
        assert fields[0:3] == (1, 40, 0x3005000), fields
        assert fields[7:] == (0, 0, 0)
        events.append(('request', fields))
        data = state['output'][:max(0, fields[4] - 1)]
        cpu.mem_write(fields[3], data + b'\0')
        leave(state['status'], 1)

    def emit(cpu, pc, size, user):
        pointer, length, first, second = arguments(4)
        events.append(('line', bytes(cpu.mem_read(pointer, length)), first, second))
        leave(0, 2)

    for value, hook in [(0x210de10, dispatch), (0x20ecd70, emit)]:
        pc = address(value)
        cpu.hook_add(UC_HOOK_CODE, hook, begin=pc, end=pc)
    outputs = []
    for text in [b'1+1', b'', b'echo recovered shell']:
        cpu.mem_write(0x3005000, text + b'\0')
        for pointer, capacity in [(0, 0), (0, 64), (0x3006000, 0), (0x3006000, 1), (0x3006000, 64)]:
            for is_path in [0, 1]:
                for status, emitted in [(0, b''), (1, b'2\n'), (7, b'first\r\nsecond')]:
                    state.update(status=status, output=emitted)
                    events.clear()
                    cpu.mem_write(0x3006000, b'\xa5' * 96)
                    cpu.mem_write(0x248b224, bytes(4))
                    result = lib.call('route', 0x3005000, pointer, capacity, is_path, result_bits=32)
                    assert result == status
                    fields = events[0][1]
                    assert fields[5] == is_path
                    assert fields[3:5] == ((pointer, capacity) if pointer and capacity else (0x24a0fcc, 8192))
                    assert fields[6] == bool(pointer and capacity)
                    memory = bytes(cpu.mem_read(0x3006000, 96))
                    assert memory[max(capacity, 1):] == b'\xa5' * (96 - max(capacity, 1))
                    outputs.append((result, tuple(events), memory))
    return outputs


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--map', type=Path, required=True)
    args = parser.parse_args()
    mapping = json.loads(args.map.read_text())
    native = exercise(args.reference, mapping, True)
    actual = exercise(args.source, mapping, False)
    assert native == actual
    print('IA32 shell: 90 native command, output, capacity, request and return-status cases match.')
