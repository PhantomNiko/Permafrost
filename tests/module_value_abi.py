"""Check module value-result storage through the published provider callback.

Pooka's Free Software License.
"""
from native import inspect
from dylib import rebase_locations
from unicorn.x86_const import UC_X86_REG_ESP


def check_ia32_null_provider(lib, module, metadata, symbols, reference, source):
    original = reference.read_bytes()
    native, memory = inspect(original)
    constructor = next(a for a, name in native['symbols'] if name == '_ws_make_null')
    end = next(a + n for name, a, n in native['sections'] if name == '__text')
    slots = [a - end for a, width in rebase_locations(original)
             if a >= end and width == 4
             and int.from_bytes(memory[a-native['base']:a-native['base']+4], 'little') == constructor]
    assert len(slots) == 1, slots
    state = symbols['_pf_module_state'] if source else module.base + end - native['base']
    pointer = int.from_bytes(lib.cpu.mem_read(state + slots[0], 4), 'little')
    lib.exports['provider_null'] = pointer
    output = 0x3006000
    lib.cpu.mem_write(output, b'\xa5' * 40)
    lib.call('provider_null', output, result_bits=32)
    value = bytes(lib.cpu.mem_read(output, 40))
    assert value == bytes(36) + b'\xa5' * 4, value
    # Darwin IA32 aggregate-return callees pop the hidden result pointer.
    stack = lib.cpu.reg_read(UC_X86_REG_ESP)
    assert stack == 0x4fe0008, ('provider hidden-result stack', hex(stack))
