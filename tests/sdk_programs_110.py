#!/usr/bin/env python3
"""Execute SDK C/C++ examples against the 1.1 service ABI in CPU emulation.

Pooka's Free Software License. Real VM execution remains a separate gate.
"""
import argparse
from pathlib import Path
import struct
import sys
import tempfile
sys.path[:0] = [str(Path(__file__).resolve().parents[1]/'tools')]
from cube_render import diagnostic_reference
from dll import DLL
from native import inspect
from tayga_cc import build_program
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2
from unicorn.arm64_const import UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2, UC_CPU_ARM64_MAX
from unicorn.x86_const import UC_X86_REG_ESP, UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX


def exercise(sdk):
    with tempfile.TemporaryDirectory(prefix='permafrost-sdk-programs-') as temporary:
        root = Path(temporary)
        for arch in ('i386', 'x86_64', 'armv7', 'arm64'):
            for language in ('c', 'cpp'):
                binary, diagnostic = root/'example', root/'diagnostic'
                build_program([sdk/'Examples'/('runtime.'+language)], binary, arch, sdk)
                diagnostic_reference(binary, diagnostic)
                api = 0x82010800 if arch=='arm64' else 0x40010800 if arch=='armv7' else 0x280800
                lib = DLL(diagnostic, api_base=api, poison_allocations=True,
                          instruction_limit=200000000, cpu_model=UC_CPU_ARM64_MAX if arch=='arm64' else None)
                meta, _ = inspect(diagnostic.read_bytes())
                lib.exports.update({n:lib.base+a-meta['base'] for a,n in meta['symbols']})
                output, ended = [], []
                def args(count):
                    cpu=lib.cpu
                    if arch=='i386':
                        return list(struct.unpack('<'+'I'*count,cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP)+4,count*4)))
                    registers = ([UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2] if arch=='arm64' else
                                 [UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2] if arch=='armv7' else
                                 [UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX])
                    return [cpu.reg_read(r)for r in registers[:count]]
                def write(cpu, pc, size, user):
                    descriptor,address,count=args(3)
                    assert descriptor==1,(arch,language,descriptor)
                    assert count<4096
                    output.append(bytes(cpu.mem_read(address,count)))
                    cpu.reg_write(lib.result,count)
                def info(cpu, pc, size, user):
                    record=bytearray(0x620)
                    record[0x10d:0x10d+10]=b'Home/SDK-X'
                    record[0x21e:0x21e+5]=b'SDK-X'
                    cpu.mem_write(args(1)[0],bytes(record));cpu.reg_write(lib.result,1)
                def end(cpu, pc, size, user):
                    ended.append(True);cpu.reg_write(lib.pc,lib.stop);cpu.emu_stop()
                for offset, callback in ((0x148,write),(0x144,info),(0x30,end)):
                    pc = 0x18000+offset
                    lib.cpu.mem_write(pc,struct.pack('<I',0xe12fff1e if arch=='armv7' else 0xd65f03c0)if arch.startswith('arm')else b'\xc3')
                    lib.cpu.hook_add(UC_HOOK_CODE,callback,begin=pc,end=pc)
                    lib.cpu.mem_write(api+offset,struct.pack('<I',pc))
                lib.cpu.mem_write(api,struct.pack('<III',0x50414d57,1100000,608))
                lib.call('_winterboot_tayga_c_entry')
                expected = b'SOURCE SDK C 42 argc=1\n' if language=='c' else b'SOURCE SDK CPP 12 init=7\n'
                assert b''.join(output)==expected,(arch,language,output)
                assert ended==[True],(arch,language,'missing process termination')
                assert not lib.allocs,(arch,language,'leaked allocations',lib.allocs)
                print(arch,language,'startup, allocation, console output and termination passed.',flush=True)


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('sdk',type=Path)
    exercise(parser.parse_args().sdk)
