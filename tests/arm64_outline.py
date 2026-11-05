#!/usr/bin/env python3
"""Check analysis-only outliner expansion against native ARM64 execution.

Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import struct
from integer_literals import Machine
from tokenizer import tokens


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('metadata', type=Path)
    parser.add_argument('expanded', type=Path)
    args = parser.parse_args()
    metadata = json.loads(args.metadata.read_text())
    symbols = {name: address for address, name in metadata['symbols']}
    image = args.reference.read_bytes()
    native = Machine(image, symbols['_ws_parse_int_literal'], False)
    expanded = Machine(image, symbols['_ws_parse_int_literal'], False)
    expanded.cpu.mem_write(metadata['base'], args.expanded.read_bytes())
    for text in ('4', '-4', '+4', '0xff', '$ff', '2147483647', '-2147483648',
                 '2147483648', '-2147483649', '  -42  ', '', '+', '0x', '4x'):
        assert native.parse(text) == expanded.parse(text), repr(text)
    native.address = expanded.address = symbols['_ws_tokenize_line']
    for text in ('4 + 5', 'a <= b && c != d', 'serial("hello world")',
                 "'quoted' @@ comment", 'array[1] += 2', '1.25 + $ff', ''):
        assert tokens(native, text) == tokens(expanded, text), repr(text)
    from unicorn.arm64_const import UC_ARM64_REG_SP, UC_ARM64_REG_X30, UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2
    outputs = []
    for machine in (native, expanded):
        cpu, data = machine.cpu, machine.data
        cpu.mem_write(data, b'%s %d %x\0')
        cpu.mem_write(data+256, b'outliner\0')
        cpu.mem_write(machine.stack, struct.pack('<3Q', data+256, 42, 0xabcd))
        for register, value in ((UC_ARM64_REG_SP, machine.stack),
                                (UC_ARM64_REG_X30, machine.stop),
                                (UC_ARM64_REG_X0, data+512),
                                (UC_ARM64_REG_X1, 128), (UC_ARM64_REG_X2, data)):
            cpu.reg_write(register, value)
        cpu.emu_start(symbols['_snprintf'], machine.stop, count=2000000)
        assert cpu.reg_read(UC_ARM64_REG_X30) == machine.stop
        outputs.append(bytes(cpu.mem_read(data+512, 128)).split(b'\0')[0])
    assert outputs[0] == outputs[1] == b'outliner 42 abcd', outputs
    print('ARM64 outliner expansion: 14 integer, 7 tokenizer, and variadic formatting cases passed.')


if __name__ == '__main__':
    main()
