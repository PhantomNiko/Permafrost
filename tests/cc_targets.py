#!/usr/bin/env python3
"""Execute SDK C/C++ output in Mach-O and flat form on each target CPU.

Requires Unicorn. Pooka's Free Software License.
"""
from pathlib import Path
import subprocess
import struct
import sys
import tempfile
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import slices,inspect,CPUS


def execute(binary,architecture,flat):
    from unicorn import Uc,UC_ARCH_X86,UC_ARCH_ARM,UC_ARCH_ARM64,UC_MODE_32,UC_MODE_64,UC_MODE_ARM
    from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_RSP,UC_X86_REG_EAX
    from unicorn.arm_const import UC_ARM_REG_SP,UC_ARM_REG_LR,UC_ARM_REG_R0
    from unicorn.arm64_const import UC_ARM64_REG_SP,UC_ARM64_REG_LR,UC_ARM64_REG_X0
    if architecture=='i386':cpu=Uc(UC_ARCH_X86,UC_MODE_32);spreg=UC_X86_REG_ESP;result=UC_X86_REG_EAX
    elif architecture=='x86_64':cpu=Uc(UC_ARCH_X86,UC_MODE_64);spreg=UC_X86_REG_RSP;result=UC_X86_REG_EAX
    elif architecture=='armv7':cpu=Uc(UC_ARCH_ARM,UC_MODE_ARM);spreg=UC_ARM_REG_SP;result=UC_ARM_REG_R0
    else:cpu=Uc(UC_ARCH_ARM64,UC_MODE_ARM);spreg=UC_ARM64_REG_SP;result=UC_ARM64_REG_X0
    if flat:base=entry=0x42000000 if architecture.startswith('arm')else 0x200000;memory=binary
    else:metadata,memory=inspect(binary);base=metadata['base'];entry=metadata['entry']
    cpu.mem_map(base,(len(memory)+4095)&~4095);cpu.mem_write(base,bytes(memory))
    cpu.mem_map(0x7fe00000,0x10000);cpu.mem_map(0x7ff00000,4096)
    stack=0x7fe0fff0;stop=0x7ff00000
    if architecture in ('i386','x86_64'):
        width=4 if architecture=='i386'else 8;stack-=width
        cpu.mem_write(stack,stop.to_bytes(width,'little'))
    else:cpu.reg_write(UC_ARM_REG_LR if architecture=='armv7'else UC_ARM64_REG_LR,stop)
    cpu.reg_write(spreg,stack);cpu.emu_start(entry,stop,count=100000)
    if cpu.reg_read(result)!=42:raise AssertionError('compiled program returned the wrong result')


def main():
    with tempfile.TemporaryDirectory(prefix='permafrost-cc-test-')as temporary:
        root=Path(temporary)
        for suffix,source in [('c','int main(void){volatile unsigned x=7;return x*6;}'),
                              ('cpp','struct Scale {int value;int run(int x){return value*x;}}; extern "C" int main(){Scale s{7};return s.run(6);}')]:
            path=root/('example.'+suffix);path.write_text(source+'\n')
            for output_format in ('macho','flat'):
                target=root/'program'
                subprocess.run([sys.executable,'tools/cc.py',str(path),'--arch','universal',
                                '--format',output_format,'-o',str(target)],check=True,stdout=subprocess.DEVNULL)
                images=slices(target.read_bytes())
                if set(images)!=set(CPUS.values()):raise AssertionError('missing universal CPU slice')
                for architecture,cpu in CPUS.items():execute(images[cpu],architecture,output_format=='flat')
            print('%s: all four CPUs passed Mach-O and flat execution'%suffix)


if __name__=='__main__':main()
