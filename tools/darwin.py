#!/usr/bin/env python3
"""Use the macOS host toolchain for freestanding x86 and ARM Mach-O code.

No hosted runtime or system libraries are linked. Pooka's Free Software License.
"""
import os
import json
from pathlib import Path
import struct
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
    if architecture == 'i386':
        # Legacy firmware exposes x87 without enabling the SSE control bits.
        flags += ['-mstackrealign', '-mno-sse', '-mno-sse2', '-mno-mmx']
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


def link_dynamic_executable(objects, target, architecture, libraries, entry='main'):
    """Link guest DLL imports without depending on a macOS hosted runtime.

    Libraries maps guest install names to source-built thin dylibs. Text stubs
    describe their exports to the host linker, including libraries without a
    UUID. ARM executables use the reference's zero-based relocatable layout.
    """
    from dylib import inspect as inspect_library
    if architecture not in TARGETS:
        raise ValueError('unsupported executable architecture')
    target = Path(target)
    target.parent.mkdir(parents=True, exist_ok=True)
    platform = 'ios' if architecture in ('armv7', 'arm64') else 'macosx'
    base = 0 if platform == 'ios' else 0x1800000
    available = {'dyld_stub_binder'}
    command = [os.environ.get('PF_LD', 'ld'), '-arch', architecture, '-dylib',
               '-no_uuid', '-no_fixup_chains', '-no_adhoc_codesign',
               '-segaddr', '__TEXT', hex(base), '-install_name', '/PermafrostApp',
               '-o', str(target), '-L' + str(target.parent),
               '-undefined', 'dynamic_lookup']
    if not libraries:
        # Satisfy ld's platform bookkeeping without adding a hosted runtime.
        stub = ('--- !tapi-tbd-v3\narchs: [ ' + architecture + ' ]\nplatform: ' + platform +
                '\ninstall-name: /usr/lib/libSystem.B.dylib\nexports:\n'
                '  - archs: [ ' + architecture + ' ]\n    symbols: [ _pf_link_dummy ]\n...\n')
        (target.parent / 'libSystem.tbd').write_text(stub)
        command += ['-lSystem', '-dead_strip_dylibs']
    for index, (install_name, library) in enumerate(libraries.items()):
        metadata = inspect_library(Path(library).read_bytes())
        from macho import ARCHITECTURES
        if metadata['cpu'] != ARCHITECTURES[architecture][0]:
            raise ValueError('library architecture differs from executable')
        symbols = [item['name'] for item in metadata['exports']]
        available.update(symbols)
        label = 'PermafrostLink' + str(index)
        stub = ('--- !tapi-tbd-v3\narchs: [ ' + architecture + ' ]\nplatform: ' + platform +
                '\ninstall-name: ' + json.dumps(install_name) + '\nexports:\n'
                '  - archs: [ ' + architecture + ' ]\n    symbols: ' + json.dumps(symbols) + '\n...\n')
        (target.parent / ('lib' + label + '.tbd')).write_text(stub)
        command.append('-l' + label)
    subprocess.run(command + [str(obj) for obj in objects], check=True)
    binary = bytearray(target.read_bytes())
    unresolved = {item['name'] for item in inspect_library(binary)['imports']} - available
    if unresolved:
        raise ValueError('unresolved guest imports: ' + ', '.join(sorted(unresolved)))
    metadata, _ = inspect(binary)
    address = next(a for a, name in metadata['symbols'] if name == '_' + entry)
    header = 32 if architecture in ('x86_64', 'arm64') else 28
    count, size = struct.unpack_from('<II', binary, 16)
    position = header
    for _ in range(count):
        command, length = struct.unpack_from('<II', binary, position)
        if command == 0xd:  # LC_ID_DYLIB is invalid in MH_EXECUTE.
            end = header + size
            binary[position:end - length] = binary[position + length:end]
            binary[end - length:end] = bytes(length)
            count -= 1
            size -= length
            break
        position += length
    # The dylib linker omits the executable page-zero segment on all targets.
    # Add the reference loader's LC_MAIN entry in reserved header padding.
    if binary[header + size:header + size + 24] != bytes(24):
        raise ValueError('no reserved space for executable entry command')
    struct.pack_into('<I', binary, 12, 2)
    struct.pack_into('<II', binary, 16, count + 1, size + 24)
    struct.pack_into('<IIQQ', binary, header + size, 0x80000028, 24,
                     address - metadata['base'], 0)
    target.write_bytes(binary)
    return target
