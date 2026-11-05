#!/usr/bin/env python3
"""Compile freestanding C/C++ to a Permafrost native executable."""
import argparse
import os
from pathlib import Path
import subprocess
import struct
import sys
import tempfile
sys.dont_write_bytecode = True
from elf32 import Object, link
from macho import pack, universal


FLAGS = ['--target=i386-unknown-none-elf', '-march=i386', '-m32', '-Oz',
         '-ffreestanding', '-fno-builtin', '-fno-pic', '-fno-pie',
         '-fno-stack-protector', '-fno-asynchronous-unwind-tables',
         '-fno-unwind-tables', '-ffunction-sections', '-fdata-sections',
         '-fno-strict-aliasing', '-fwrapv', '-fno-delete-null-pointer-checks',
         '-mno-sse', '-mno-sse2', '-mno-mmx', '-nostdinc']


def compile_object(source, target, includes=(), defines=(), compiler=None, extra_flags=(), architecture="i386"):
    cpp = Path(source).suffix in ('.cpp', '.cc', '.cxx')
    compiler = compiler or os.environ.get('CXX' if cpp else 'CC', 'clang++' if cpp else 'clang')
    if architecture in ('armv7','arm64'):
        from darwin import compile_object as compile_darwin
        return compile_darwin(source,target,architecture,includes,defines,extra_flags)
    if architecture not in ('i386', 'x86_64'):
        raise ValueError('unsupported target architecture')
    flags = FLAGS if architecture == 'i386' else [
        '--target=x86_64-unknown-none-elf', '-m64', '-mno-red-zone', '-fms-extensions'] + [
        flag for flag in FLAGS[3:] if flag not in ('-mno-sse', '-mno-sse2', '-mno-mmx')]
    command = [compiler] + flags
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
    parser.add_argument('--base', type=lambda s: int(s, 0), default=None)
    parser.add_argument('--entry', default='main')
    parser.add_argument('--arch',choices=('i386','x86_64','armv7','arm64','universal'),default='i386')
    parser.add_argument('--format', choices=['macho', 'flat'], default='macho')
    parser.add_argument('--runtime', action='store_true',
                        help='link the supplied freestanding arithmetic and memory support')
    args = parser.parse_args()
    here = Path(__file__).resolve().parent
    bundled = here.parent / 'usr/include'
    include = bundled if bundled.exists() else here.parent / 'sdk/include'
    sources=list(args.sources)
    if args.runtime:
        support=here.parent/'usr/src' if bundled.exists() else here.parent/'kernel'
        sources += [support/'compiler.c', support/'runtime.c']
    architectures=('i386','x86_64','armv7','arm64') if args.arch=='universal' else (args.arch,)
    images=[]
    with tempfile.TemporaryDirectory(prefix='permafrost-cc-') as temp:
        for architecture in architectures:
            base=args.base if args.base is not None else (0x42000000 if architecture in ('armv7','arm64')else 0x200000)
            if architecture in ('armv7','arm64'):
                from darwin import compile_object as compile_darwin,link_executable
                from macho import pack_segments
                objects=[]
                for index,source in enumerate(sources):
                    target=Path(temp)/('%s-unit%d.o'%(architecture,index))
                    if source.suffix=='.o':objects.append(source)
                    else:
                        compile_darwin(source,target,architecture,[include]+args.I,args.D)
                        objects.append(target)
                metadata,memory=link_executable(objects,Path(temp)/(architecture+'.linked'),architecture,base,args.entry)
                end=max(a+n for _,a,n in metadata['sections'])
                result=bytearray(memory[:end-base]);entry=metadata['entry']
                if args.format=='macho':result=pack_segments([(base,len(result),result)],entry,architecture)
                else:
                    delta=entry-base-(8 if architecture=='armv7'else 0)
                    bits=24 if architecture=='armv7'else 26
                    if delta&3 or not -(1<<(bits+1))<=delta<(1<<(bits+1)):
                        raise ValueError('flat ARM entry is out of branch range')
                    opcode=0xea000000 if architecture=='armv7'else 0x14000000
                    struct.pack_into('<I',result,0,opcode|((delta>>2)&((1<<bits)-1)))
                images.append(bytes(result));continue
            if architecture=='x86_64':
                from elf64 import Object,link
            else:
                from elf32 import Object,link
            objects=[]
            for index,source in enumerate(sources):
                target=Path(temp)/('%s-unit%d.o'%(architecture,index))
                if source.suffix=='.o':objects.append(Object(source.read_bytes()))
                else:
                    compile_object(source,target,[include]+args.I,args.D,architecture=architecture)
                    objects.append(Object(target.read_bytes()))
            result,symbols,_=link(objects,base=base,entry=args.entry)
            if args.format=='macho':result=pack(result,base,architecture=architecture)
            images.append(result)
        result=universal(images,architectures=architectures if args.format=='flat' else None) if len(images)>1 else images[0]
        args.o.parent.mkdir(parents=True,exist_ok=True)
        args.o.write_bytes(result)
        print('Linked %s: %d bytes, entry %s'%(args.arch,len(result),args.entry))



if __name__ == '__main__':
    try:
        main()
    except (ValueError, subprocess.CalledProcessError) as error:
        print('pf-cc: ' + str(error), file=sys.stderr)
        sys.exit(1)
