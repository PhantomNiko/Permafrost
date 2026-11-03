#!/usr/bin/env python3
"""Compile freestanding C/C++ to a Permafrost flat native executable."""
import argparse
import os
from pathlib import Path
import subprocess
import sys
import tempfile
sys.dont_write_bytecode = True
from elf32 import Object, link


FLAGS = ['--target=i386-unknown-none-elf', '-march=i386', '-m32', '-Oz',
         '-ffreestanding', '-fno-builtin', '-fno-pic', '-fno-pie',
         '-fno-stack-protector', '-fno-asynchronous-unwind-tables',
         '-fno-unwind-tables', '-ffunction-sections', '-fdata-sections',
         '-fno-strict-aliasing', '-fwrapv', '-fno-delete-null-pointer-checks',
         '-mno-sse', '-mno-sse2', '-mno-mmx', '-nostdinc']


def compile_object(source, target, includes=(), defines=(), compiler=None, extra_flags=()):
    cpp = Path(source).suffix in ('.cpp', '.cc', '.cxx')
    compiler = compiler or os.environ.get('CXX' if cpp else 'CC', 'clang++' if cpp else 'clang')
    command = [compiler] + FLAGS
    command += list(extra_flags)
    if cpp:
        command += ['-std=c++17', '-fno-exceptions', '-fno-rtti', '-fno-threadsafe-statics']
    else:
        command += ['-std=c11']
    # Do not preserve build-machine locations in __FILE__ or compiler metadata.
    command += ['-ffile-prefix-map=' + str(Path.cwd()) + '=.',
                '-fdebug-prefix-map=' + str(Path.cwd()) + '=.']
    for include in includes:
        command += ['-I', str(include)]
    for define in defines:
        command += ['-D', define]
    command += ['-c', str(source), '-o', str(target)]
    subprocess.run(command, check=True)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('sources', nargs='+', type=Path)
    parser.add_argument('-o', required=True, type=Path)
    parser.add_argument('-I', action='append', default=[])
    parser.add_argument('-D', action='append', default=[])
    parser.add_argument('--base', type=lambda s: int(s, 0), default=0x200000)
    parser.add_argument('--entry', default='main')
    args = parser.parse_args()
    here = Path(__file__).resolve().parent
    bundled = here.parent / 'usr/include'
    include = bundled if bundled.exists() else here.parent / 'sdk/include'
    with tempfile.TemporaryDirectory(prefix='permafrost-cc-') as temp:
        objects = []
        for index, source in enumerate(args.sources):
            target = Path(temp) / ('unit%d.o' % index)
            if source.suffix == '.o':
                objects.append(Object(source.read_bytes()))
            else:
                compile_object(source, target, [include] + args.I, args.D)
                objects.append(Object(target.read_bytes()))
        result, symbols, _ = link(objects, base=args.base, entry=args.entry)
        args.o.parent.mkdir(parents=True, exist_ok=True)
        args.o.write_bytes(result)
        print('Linked %d bytes at 0x%x, entry %s' % (len(result), args.base, args.entry))


if __name__ == '__main__':
    try:
        main()
    except (ValueError, subprocess.CalledProcessError) as error:
        print('pf-cc: ' + str(error), file=sys.stderr)
        sys.exit(1)
