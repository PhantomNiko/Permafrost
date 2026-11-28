#!/usr/bin/env python3
"""Compare SSH host startup and console shutdown with controlled guest services.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import struct
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_RAX, UC_X86_REG_RDX, UC_X86_REG_EAX, UC_X86_REG_EDX
import unicorn.arm64_const as arm64
from lua_command_fixture_110 import run_command
from native import inspect


def execute(reference, source, output, which, adapter):
    frames = []
    observed = []
    path = source if which else reference
    meta, memory = inspect(path.read_bytes())
    def setup(lib, args, text, events):
        assert lib.cpu_type in [7, 12, 0x1000007, 0x100000c]
        lib.instruction_limit = 200000000
        cpu = lib.cpu
        observed.append(events)
        def stamp(c, address, n, u):
            if lib.cpu_type in [7, 0x1000007]:
                c.reg_write(UC_X86_REG_EAX if lib.cpu_type == 7 else UC_X86_REG_RAX, 1000000)
                c.reg_write(UC_X86_REG_EDX if lib.cpu_type == 7 else UC_X86_REG_RDX, 0)
                c.reg_write(lib.pc, address + 2)
            else:
                word = int.from_bytes(c.mem_read(address, 4), 'little')
                c.reg_write(getattr(arm64, 'UC_ARM64_REG_X' + str(word & 31)), 1000000)
                c.reg_write(lib.pc, address + 4)
        start, length = next((a, n) for k, a, n in meta['sections'] if k == '__text')
        data = bytes(memory[start - meta['base']:start - meta['base'] + length])
        offset = 0
        while lib.cpu_type in [7, 0x1000007]:
            offset = data.find(b'\x0f\x31', offset)
            if offset < 0:break
            target = lib.base + start - meta['base'] + offset
            cpu.hook_add(UC_HOOK_CODE, stamp, begin=target, end=target)
            offset += 2
        if lib.cpu_type == 0x100000c:
            for offset in range(0, len(data) - 3, 4):
                if int.from_bytes(data[offset:offset + 4], 'little') & ~31 == 0xd53be040:
                    target = lib.base + start - meta['base'] + offset
                    cpu.hook_add(UC_HOOK_CODE, stamp, begin=target, end=target)
        def zero(c, a, n, u):c.reg_write(lib.result, 0)
        def console(c, a, n, u):c.reg_write(lib.result, 1)
        def escape(c, a, n, u):c.reg_write(lib.result, 27)
        def clock(c, a, n, u):
            c.mem_write(args(1)[0], struct.pack('<6I', 24, 0, 0, 0, 100, 0))
            c.reg_write(lib.result, 1)
        def network(c, a, n, u):
            if adapter:
                record = bytearray(192)
                struct.pack_into('<4I', record, 0, 192, 3 if adapter == 2 else 0, 1500, 1518)
                record[16:22] = bytes.fromhex('020000000001')
                record[68:76] = b'fixture\0'
                c.mem_write(args(1)[0], bytes(record))
            c.reg_write(lib.result, int(bool(adapter)))
        def receive(c, a, n, u):
            pointer, capacity, count = args(3)
            c.mem_write(count, bytes(4))
            c.reg_write(lib.result, 0)
        def send(c, a, n, u):
            pointer, count = args(2)
            assert count <= 1518
            frames.append(bytes(c.mem_read(pointer, count)))
            c.reg_write(lib.result, 1)
        services = [(0x20, console), (0x2c, escape), (0x30, zero), (0x98, zero),
                    (0x9c, zero), (0x124, network), (0x128, receive), (0x12c, send),
                    (0x168, clock), (0x174, zero)]
        for index, (slot, callback) in enumerate(services):
            target = 0x24000 + 0x100 * index
            cpu.mem_write(target, b'\xc3' if lib.cpu_type in [7, 0x1000007] else struct.pack('<I', 0xe12fff1e if lib.cpu_type == 12 else 0xd65f03c0))
            cpu.hook_add(UC_HOOK_CODE, callback, begin=target, end=target)
            for table in lib.api_tables:
                cpu.mem_write(table + slot, struct.pack('<I', target))
    try:
        result = run_command(reference, source, None, which, output, [], command='ssh',
                             raw_console=True, kernel_setup=setup)
    except Exception as error:
        raise AssertionError(('source' if which else 'native', adapter, observed[-1][-8:] if observed else [])) from error
    return result, frames


def exercise(reference, source, output):
    for adapter in [0, 1, 2]:
        results = [execute(reference, source, output, which, adapter) for which in [0, 1]]
        assert results[0] == results[1], (adapter, results)
        assert results[0][0][0] == (0 if adapter == 2 else 1), results[0]
        assert any(b'host key fingerprint SHA256:' in event[1] for event in results[0][0][1] if event[0] == 'text')
        print('SSH host startup/shutdown workflow passed:', adapter, flush=True)
    print('SSH: three native/source deterministic key, missing-adapter and Escape-shutdown workflows passed.')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    exercise(args.reference, args.source, args.output)
