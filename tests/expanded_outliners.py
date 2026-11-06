#!/usr/bin/env python3
"""Execute native and expanded ARM64 helpers across repeated call sites.

Pooka's Free Software License.
"""
from pathlib import Path
import json
import struct
import sys
import tempfile
from unicorn import Uc, UC_ARCH_ARM64, UC_MODE_ARM
from unicorn.arm64_const import UC_ARM64_REG_X0, UC_ARM64_REG_LR, UC_ARM64_REG_PC
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools/ghidra'))
from expand_arm64 import branch, expand


def main():
    base = 0x100000
    helper, leaf, stop = base + 0x40, base + 0x60, base + 0xf00
    memory = bytearray(0x68)
    words = [0xaa1e03f3, 0xd2800040, 0, 0x91001400, 0, 0xaa1303fe, 0xd65f03c0]
    memory[:28] = struct.pack('<7I', *words)
    memory[8:12] = branch(base+8, helper, True)
    memory[16:20] = branch(base+16, helper, True)
    memory[0x40:0x44] = struct.pack('<I', 0xd37ff800)
    memory[0x44:0x48] = branch(helper+4, leaf)
    memory[0x60:0x68] = struct.pack('<2I', 0x91000400, 0xd65f03c0)
    metadata = dict(cpu=0x100000c, base=base, end=base+len(memory), entry=base,
                    sections=[['__text', base, len(memory)]],
                    symbols=[[base, '_main'], [helper, '_OUTLINED_FUNCTION_0'], [leaf, '_leaf']],
                    data_symbols=[])
    with tempfile.TemporaryDirectory(prefix='permafrost-outliners-') as directory:
        source, output = Path(directory)/'source', Path(directory)/'expanded'
        source.mkdir()
        (source/'metadata.json').write_text(json.dumps(metadata))
        (source/'memory.bin').write_bytes(memory)
        expand(source, output)
        expanded = (output/'memory.bin').read_bytes()
        for image in [bytes(memory), expanded]:
            cpu = Uc(UC_ARCH_ARM64, UC_MODE_ARM)
            cpu.mem_map(base, 8192)
            cpu.mem_write(base, image)
            cpu.reg_write(UC_ARM64_REG_LR, stop)
            cpu.emu_start(base, stop, count=1000)
            assert cpu.reg_read(UC_ARM64_REG_PC) == stop
            assert cpu.reg_read(UC_ARM64_REG_X0) == 21
        assert len(json.loads((output/'metadata.json').read_text())['outlined_expansions']) == 2
    print('Repeated native and expanded tail-call helpers match with zero padding.')


if __name__ == '__main__':
    main()
