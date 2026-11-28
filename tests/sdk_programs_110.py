#!/usr/bin/env python3
"""Execute SDK C/C++ examples against the 1.1 service ABI in CPU emulation.

Pooka's Free Software License. Real VM execution remains a separate gate.
"""
import argparse
import itertools
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
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3
from unicorn.arm64_const import UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2, UC_ARM64_REG_X3, UC_CPU_ARM64_MAX
from unicorn.x86_const import UC_X86_REG_ESP, UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX, UC_X86_REG_RCX


def exercise(sdk):
    with tempfile.TemporaryDirectory(prefix='permafrost-sdk-programs-') as temporary:
        root = Path(temporary)
        for arch in ('i386', 'x86_64', 'armv7', 'arm64'):
            for language, available in itertools.product(('c', 'cpp', 'files'), (False, True)):
                binary, diagnostic = root/'example', root/'diagnostic'
                example = 'files.c' if language=='files' else 'runtime.'+language
                build_program([sdk/'Examples'/example], binary, arch, sdk)
                diagnostic_reference(binary, diagnostic)
                api = 0x82010800 if arch=='arm64' else 0x40010800 if arch=='armv7' else 0x280800
                lib = DLL(diagnostic, api_base=api, poison_allocations=True,
                          instruction_limit=200000000, cpu_model=UC_CPU_ARM64_MAX if arch=='arm64' else None)
                meta, _ = inspect(diagnostic.read_bytes())
                lib.exports.update({n:lib.base+a-meta['base'] for a,n in meta['symbols']})
                output, ended, devices, files, writes = [], [], [], {}, []
                def args(count):
                    cpu=lib.cpu
                    if arch=='i386':
                        return list(struct.unpack('<'+'I'*count,cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP)+4,count*4)))
                    registers = ([UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3] if arch=='arm64' else
                                 [UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3] if arch=='armv7' else
                                 [UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX])
                    return [cpu.reg_read(r)for r in registers[:count]]
                def text(pointer):
                    return bytes(lib.cpu.mem_read(pointer,256)).split(b'\0')[0]
                def file_write(cpu, pc, size, user):
                    device,path,data,count=args(4)
                    assert device==(7 if available else 96),(arch,language,device)
                    assert text(path)==b'/Tayga/root/sdk-runtime-check.txt'
                    files[text(path)]=bytes(cpu.mem_read(data,count));writes.append(count)
                    cpu.reg_write(lib.result,1)
                def file_stat(cpu, pc, size, user):
                    device,path,record=args(3)
                    assert device==(7 if available else 96),(arch,language,device)
                    payload=files.get(text(path))
                    if payload is not None:
                        cpu.mem_write(0x2f0000,payload)
                        cpu.mem_write(record,struct.pack('<III',0x2f0000,len(payload),0))
                    cpu.reg_write(lib.result,int(payload is not None))
                def write(cpu, pc, size, user):
                    descriptor,address,count=args(3)
                    assert descriptor==1,(arch,language,descriptor)
                    assert count<4096
                    output.append(bytes(cpu.mem_read(address,count)))
                    cpu.reg_write(lib.result,count)
                def info(cpu, pc, size, user):
                    record=bytearray(0x620)
                    struct.pack_into('<i',record,0x14,7)
                    record[0x10d:0x10d+10]=b'Home/SDK-X'
                    record[0x21e:0x21e+5]=b'SDK-X'
                    cpu.mem_write(args(1)[0],bytes(record));cpu.reg_write(lib.result,int(available))
                def current_device(cpu, pc, size, user):
                    devices.append(96);cpu.reg_write(lib.result,96)
                def end(cpu, pc, size, user):
                    ended.append(True);cpu.reg_write(lib.pc,lib.stop);cpu.emu_stop()
                for offset, callback in ((0x148,write),(0x144,info),(0xbc,current_device),(0x30,end),
                                         (0xd0,file_write),(0xc8,file_stat)):
                    pc = 0x18000+offset
                    lib.cpu.mem_write(pc,struct.pack('<I',0xe12fff1e if arch=='armv7' else 0xd65f03c0)if arch.startswith('arm')else b'\xc3')
                    lib.cpu.hook_add(UC_HOOK_CODE,callback,begin=pc,end=pc)
                    lib.cpu.mem_write(api+offset,struct.pack('<I',pc))
                lib.cpu.mem_write(api,struct.pack('<III',0x50414d57,1100000,608))
                lib.call('_winterboot_tayga_c_entry')
                expected = ('SOURCE SDK C 42 argc=%d\n'%int(available)).encode() if language=='c' else b'SOURCE SDK CPP 12 init=7\n'
                if language=='files':
                    payload=b'permafrost source runtime\n'
                    expected=('SOURCE SDK FILE ROUNDTRIP %u\n'%len(payload)).encode()
                    assert files=={b'/Tayga/root/sdk-runtime-check.txt':payload},(arch,available,files)
                    assert writes==[len(payload)],(arch,available,writes)
                assert b''.join(output)==expected,(arch,language,output)
                assert ended==[True],(arch,language,'missing process termination')
                assert devices==([] if available else [96]),(arch,language,'fallback device query',devices)
                assert not lib.allocs,(arch,language,'leaked allocations',lib.allocs)
                print(arch,language,'legacy process context='+str(available)+': startup, allocation, console output and termination passed.',flush=True)


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('sdk',type=Path)
    exercise(parser.parse_args().sdk)
