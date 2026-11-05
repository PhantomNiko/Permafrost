#!/usr/bin/env python3
"""Use the macOS host toolchain for freestanding x86 and ARM Mach-O code.

No hosted runtime or system libraries are linked. Pooka's Free Software License.
"""
import os
from pathlib import Path
import subprocess
from native import inspect
from macho import pack_segments

TARGETS = {'i386': 'i386-apple-macos10.6',
           'x86_64': 'x86_64-apple-macos10.15',
           'armv7': 'armv7-apple-ios7.0',
           'arm64': 'arm64-apple-ios12.0'}


def compile_object(source, target, architecture, includes=(), defines=(), extra_flags=(), pic=False):
    if architecture not in TARGETS:
        raise ValueError('unsupported Mach-O architecture')
    source, target = Path(source), Path(target)
    cpp = source.suffix in ('.cpp', '.cc', '.cxx')
    flags = ['--target=' + TARGETS[architecture], '-Oz', '-ffreestanding',
             '-fno-builtin', '-fno-stack-protector', '-fno-strict-aliasing',
             '-fwrapv', '-fno-delete-null-pointer-checks', '-nostdinc',
             '-fno-asynchronous-unwind-tables', '-fno-unwind-tables',
             '-Wno-incompatible-sysroot', '-fPIC' if pic else '-fno-pic',
             '-ffile-prefix-map=' + str(Path.cwd()) + '=.',
             '-fdebug-prefix-map=' + str(Path.cwd()) + '=.']
    if architecture == 'armv7':
        flags += ['-marm']
    if architecture == 'x86_64':
        flags += ['-mno-red-zone', '-fms-extensions']
    if cpp:
        flags += ['-std=c++17', '-fno-exceptions', '-fno-rtti', '-fno-threadsafe-statics']
    else:
        flags += ['-std=c11']
    for include in includes:
        flags += ['-I', str(include)]
    for define in defines:
        flags += ['-D', define]
    target.parent.mkdir(parents=True, exist_ok=True)
    command = [os.environ.get('CXX' if cpp else 'CC', 'clang++' if cpp else 'clang')]
    subprocess.run(command + flags + list(extra_flags) + ['-c', str(source), '-o', str(target)], check=True)


def link_executable(objects, target, architecture, base, entry='main'):
    if architecture not in TARGETS or base < 0x10000:
        raise ValueError('unsupported executable layout')
    target = Path(target)
    target.parent.mkdir(parents=True, exist_ok=True)
    subprocess.run([os.environ.get('PF_LD', 'ld'), '-arch', architecture, '-static',
                    '-pagezero_size', '0', '-no_uuid', '-e', '_' + entry,
                    '-segaddr', '__TEXT', hex(base), '-o', str(target)] +
                   [str(p) for p in objects], check=True)
    binary = target.read_bytes()
    metadata, memory = inspect(binary)
    # Remove the host linker's symbol/link-edit tables from the loadable image.
    # The source executable still supplies symbols for recovery diagnostics.
    return metadata, memory


def preload(objects, target, architecture, base, entry='main'):
    metadata, memory = link_executable(objects, target, architecture, base, entry)
    end = max(a + n for name, a, n in metadata['sections'] if name not in ('__LINKEDIT',))
    first = metadata['base']
    return pack_segments([(first, end - first, memory[:end - first])], metadata['entry'], architecture)
