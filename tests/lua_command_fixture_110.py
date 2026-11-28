"""Controlled kernel console services for native/source Lua command checks.

Pooka's Free Software License.
"""
import struct
from desktop_calendar import load
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP, UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX, UC_X86_REG_RCX
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3
from unicorn.arm64_const import UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2, UC_ARM64_REG_X3


def run_command(reference, source, provider, which, output, arguments, input_lines=(), command="lua"):
    lib = load(reference, source, output, provider)[which]
    meta, memory = inspect((source if which else reference).read_bytes())
    symbols = {n: a for a, n in meta['symbols']}
    name = '_main' if which else '_winterboot_' + command + '_entry'
    lib.exports[name] = lib.base + symbols[name]
    if not which:
        # Fixed-address command vtables have no dyld rebase entries. The
        # diagnostic loader places code above the null page, so reconnect
        # only words that name an actual owned function in native const data.
        word = 8 if lib.wide else 4
        text_start, text_size = next((start, size) for section, start, size in meta['sections'] if section == '__text')
        owned = {address for address, _ in meta['symbols'] if text_start <= address < text_start + text_size}
        for section, start, size in meta['sections']:
            if section != '__const':
                continue
            for place in range((start + word - 1) & -word, start + size - word + 1, word):
                target = int.from_bytes(memory[place - meta['base']:place - meta['base'] + word], 'little')
                if target in owned:
                    lib.cpu.mem_write(lib.base + place, (lib.base + target).to_bytes(word, 'little'))
    lib.instruction_limit = 5000000
    cpu = lib.cpu
    if lib.cpu_type in [7, 0x1000007]:
        cpu.mem_write(0x280800, bytes(cpu.mem_read(0x6800, 412)))
        lib.api_tables.append(0x280800)
    if which:
        lib.exports['initialize'] = lib.base + symbols['_pf_app_initialize']
        lib.call('initialize')
    events = []
    pending = list(input_lines)

    def args(count):
        if lib.cpu_type == 7:
            return struct.unpack('<' + 'I' * count,
                                 cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP) + 4, count * 4))
        registers = [UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX, UC_X86_REG_RCX] if lib.cpu_type == 0x1000007 else [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3] if lib.cpu_type == 12 else [UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2, UC_ARM64_REG_X3]
        return [cpu.reg_read(register) for register in registers[:count]]

    def text(pointer):
        raw = bytearray()
        if not pointer:
            return b''
        for index in range(2048):
            value = cpu.mem_read(pointer + index, 1)[0]
            if not value:
                return bytes(raw)
            raw.append(value)
        raise AssertionError('unbounded console text')

    def line(c, address, size, user):
        events.append(('line', text(args(1)[0])))
        c.reg_write(lib.result, 1)

    def read(c, address, size, user):
        pointer, capacity, prompt, flags = args(4)
        payload = pending.pop(0).encode() if pending else None
        events.append(('read', capacity, text(prompt), flags & 255, payload))
        if payload is not None:
            assert len(payload) + 1 <= capacity
            cpu.mem_write(pointer, payload + b'\0')
        c.reg_write(lib.result, int(payload is not None))

    opcode = b'\xc3' if lib.cpu_type in [7, 0x1000007] else struct.pack('<I', 0xe12fff1e if lib.cpu_type == 12 else 0xd65f03c0)
    for slot, target, callback in [(0x40, 0x23000, line), (0x44, 0x23100, read)]:
        cpu.mem_write(target, opcode)
        cpu.hook_add(UC_HOOK_CODE, callback, begin=target, end=target)
        for table in lib.api_tables:
            cpu.mem_write(table + slot, struct.pack('<I', target))
    pointers = []
    guards = []
    for index, value in enumerate([command] + arguments):
        pointer = 0x3100000 + index * 4096
        raw = b'BEFORE!!' + value.encode() + b'\0AFTER!!!'
        cpu.mem_write(pointer, raw)
        pointers.append(pointer + 8)
        guards.append((pointer, raw))
    word = 'Q' if lib.wide else 'I'
    argv = struct.pack('<' + word * (len(pointers) + 1), *pointers, 0)
    cpu.mem_write(0x3120000, b'ARGVHEAD' + argv + b'ARGVTAIL')
    status = lib.call(name, len(pointers), 0x3120008, result_bits=32)
    assert not pending, ('command did not consume input', pending)
    for pointer, raw in guards:
        assert bytes(cpu.mem_read(pointer, len(raw))) == raw
    assert bytes(cpu.mem_read(0x3120000, len(argv) + 16)) == b'ARGVHEAD' + argv + b'ARGVTAIL'
    return status, events
