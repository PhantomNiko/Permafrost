#!/usr/bin/env python3
"""Build the pinned sibling OpenBIOS checkout without modifying its source."""
import argparse
import os
from pathlib import Path
import re
import shlex
import shutil
import subprocess
from firmware import package_firmware
from lz4 import envelope

REVISION = '3679a74f2ae99a0717da86a92ebf177dc77f8ac5'


def build_firmware(kernel, output, nasm='nasm', source=Path('../openbios'),
                   binutils_prefix='i386-elf-'):
    root = Path(__file__).resolve().parents[1]
    source = source.resolve()
    revision = subprocess.check_output(['git', '-C', str(source), 'rev-parse', 'HEAD'], text=True).strip()
    if revision != REVISION:
        raise ValueError('OpenBIOS checkout must use revision ' + REVISION)
    output = output.resolve()
    output.mkdir(parents=True, exist_ok=True)
    toolchain = output / 'toolchain'
    toolchain.mkdir(exist_ok=True)
    for name in ('ar', 'ld', 'nm', 'objcopy', 'objdump', 'ranlib', 'strip', 'readelf'):
        executable = shutil.which(binutils_prefix + name)
        if not executable:
            raise ValueError('missing cross-binutils tool: ' + binutils_prefix + name)
        wrapper = toolchain / ('i486-elf-' + name)
        wrapper.unlink(missing_ok=True)
        wrapper.symlink_to(Path(executable).resolve())
    flags = ['--target=i386-unknown-none-elf', '-ffreestanding', '-fno-stack-protector',
             '-fno-pic', '-fno-pie', '-fno-asynchronous-unwind-tables', '-fno-unwind-tables',
             '-mno-sse', '-mno-sse2', '-mno-mmx', '-std=gnu99',
             '-I' + str(root / 'ports/openbios'),
             '-ffile-prefix-map=' + str(root) + '=.',
             '-ffile-prefix-map=' + str(source) + '=openbios']
    compiler = toolchain / 'i486-elf-gcc'
    compiler.write_text('#!/bin/sh\nexec clang ' + shlex.join(flags) + ' "$@" -Wno-error -g0\n')
    compiler.chmod(0o755)
    env = dict(os.environ, PATH=str(toolchain) + os.pathsep + os.environ['PATH'])
    obj = output / 'obj-x86'
    if not (obj / 'config.mak').exists():
        subprocess.run([str(source / 'config/scripts/switch-arch'), 'builtin-x86'],
                       cwd=output, env=env, check=True)
    config = obj / 'config.mak'
    config.write_text(re.sub(r'^CROSSCFLAGS=.*$',
                            'CROSSCFLAGS=-USWAP_ENDIANNESS -DNATIVE_BITWIDTH_SMALLER_THAN_HOST_BITWIDTH',
                            config.read_text(), flags=re.M))
    subprocess.run(['make', '-j6'], cwd=obj, env=env, check=True)
    # Patch a generated copy; preserve the GPL header and the sibling checkout.
    patched = subprocess.check_output(['patch', '--silent', '-o', '-',
        str(source / 'arch/x86/builtin.c'), str(root / 'patches/openbios/builtin-memory.patch')])
    (obj / 'builtin-memory.c').write_bytes(patched)
    cflags = ['-fno-builtin', '-m32', '-Os', '-DNATIVE_BITWIDTH_EQUALS_HOST_BITWIDTH',
              '-USWAP_ENDIANNESS', '-I' + str(source / 'arch/x86'), '-I' + str(source / 'include'),
              '-I' + str(source / 'kernel/include'), '-I' + str(obj / 'target/include')]
    subprocess.run([str(compiler), *cflags, '-c', 'builtin-memory.c',
                    '-o', 'target/arch/x86/builtin.o'], cwd=obj, env=env, check=True)
    boot = (source / 'arch/x86/boot.c').read_text().replace('WinterBoot', 'Permafrost')
    (obj / 'boot-branding.c').write_text(boot)
    subprocess.run([str(compiler), *cflags, '-c', 'boot-branding.c',
                    '-o', 'target/arch/x86/boot.o'], cwd=obj, env=env, check=True)
    (obj / 'winterboot_payload.bin').write_bytes(envelope(kernel.read_bytes()))
    subprocess.run([str(toolchain / 'i486-elf-objcopy'), '-I', 'binary', '-O', 'elf32-i386',
        '-B', 'i386', '--redefine-sym',
        '_binary_winterboot_payload_bin_start=winterboot_payload_start', '--redefine-sym',
        '_binary_winterboot_payload_bin_end=winterboot_payload_end',
        'winterboot_payload.bin', 'winterboot_payload.o'], cwd=obj, env=env, check=True)
    subprocess.run([str(toolchain / 'i486-elf-ar'), 'r', 'libx86.a', 'target/arch/x86/boot.o', 'winterboot_payload.o'],
                   cwd=obj, env=env, check=True)
    subprocess.run(['make', '-j6'], cwd=obj, env=env, check=True)
    return package_firmware(obj / 'openbios-builtin.elf', output / 'firmware', nasm)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('kernel', type=Path)
    parser.add_argument('--out', type=Path, default=Path('build/openbios-source'))
    parser.add_argument('--source', type=Path, default=Path('../openbios'))
    parser.add_argument('--nasm', default='nasm')
    parser.add_argument('--binutils-prefix', default='i386-elf-')
    args = parser.parse_args()
    build_firmware(args.kernel, args.out, args.nasm, args.source, args.binutils_prefix)
