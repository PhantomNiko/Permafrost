#!/usr/bin/env python3
"""Execute source-built freestanding arithmetic on all four target CPUs.

Requires Unicorn for CPU execution. Pooka's Free Software License.
"""
from pathlib import Path
import struct
import sys
import tempfile
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from darwin import compile_object, preload
from native import inspect


def main(probe='tests/compiler_targets.c', architectures=('i386', 'x86_64', 'armv7', 'arm64')):
    from unicorn import Uc, UC_ARCH_X86, UC_ARCH_ARM, UC_ARCH_ARM64, UC_MODE_32, UC_MODE_64, UC_MODE_ARM
    from unicorn.x86_const import UC_X86_REG_ESP, UC_X86_REG_EAX, UC_X86_REG_RSP, UC_X86_REG_RAX, UC_X86_REG_FPCW, UC_X86_REG_FPSW, UC_X86_REG_FPTAG
    from unicorn.arm_const import UC_ARM_REG_SP, UC_ARM_REG_LR, UC_ARM_REG_R0, UC_ARM_REG_FPEXC, UC_ARM_REG_C1_C0_2
    from unicorn.arm64_const import UC_ARM64_REG_SP, UC_ARM64_REG_X30, UC_ARM64_REG_X0
    base, stop, stack = 0x40400000, 0x40600000, 0x405fe000
    with tempfile.TemporaryDirectory(prefix='permafrost-compiler-') as directory:
        root = Path(directory)
        for arch in architectures:
            objects = []
            for index, source in enumerate((probe, 'kernel/compiler.c', 'kernel/runtime.c', 'kernel/format.c')):
                obj = root / (arch + '-' + str(index) + '.o')
                compile_object(source, obj, arch, ['sdk/include', 'kernel'])
                objects.append(obj)
            binary = preload(objects, root / (arch + '.linked'), arch, base)
            metadata, memory = inspect(binary)
            if arch in ('i386', 'x86_64'):
                wide = arch == 'x86_64'
                cpu = Uc(UC_ARCH_X86, UC_MODE_64 if wide else UC_MODE_32)
                cpu.reg_write(UC_X86_REG_FPCW,0x37f)
                cpu.reg_write(UC_X86_REG_FPSW,0)
                cpu.reg_write(UC_X86_REG_FPTAG,0xffff)
                stack_register = UC_X86_REG_RSP if wide else UC_X86_REG_ESP
                result_register = UC_X86_REG_RAX if wide else UC_X86_REG_EAX
            else:
                cpu = Uc(UC_ARCH_ARM if arch == 'armv7' else UC_ARCH_ARM64, UC_MODE_ARM)
                stack_register = UC_ARM_REG_SP if arch == 'armv7' else UC_ARM64_REG_SP
                result_register = UC_ARM_REG_R0 if arch == 'armv7' else UC_ARM64_REG_X0
            if arch=='armv7':
                cpu.reg_write(UC_ARM_REG_C1_C0_2,0xf<<20);cpu.reg_write(UC_ARM_REG_FPEXC,1<<30)
            cpu.mem_map(base, stop - base)
            cpu.mem_write(metadata['base'], memory)
            if arch in ('i386', 'x86_64'):
                sp = stack - (8 if arch == 'x86_64' else 4)
                cpu.mem_write(sp, struct.pack('<Q' if arch == 'x86_64' else '<I', stop))
            else:
                sp = stack
                cpu.reg_write(UC_ARM_REG_LR if arch == 'armv7' else UC_ARM64_REG_X30, stop)
            cpu.reg_write(stack_register, sp)
            cpu.emu_start(metadata['entry'], stop, count=2000000)
            if cpu.reg_read(result_register) != 42:
                raise AssertionError(arch + ': compiler arithmetic/formatting mismatch '+str(cpu.reg_read(result_register)))
            print(arch + ': source compilation, native entry, and wide arithmetic passed')


if __name__ == '__main__':
    main()
