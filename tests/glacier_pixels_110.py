#!/usr/bin/env python3
"""Compare browser pixel blending, bounds and clip rectangles on every CPU.

Pooka's Free Software License. Native applications are independent test inputs.
"""
import argparse
from pathlib import Path
import struct
from desktop_calendar import load
from native import inspect
from unicorn.x86_const import UC_X86_REG_ECX, UC_X86_REG_EDX


DIMENSIONS = {'i386': 0x10133cb0, 'x86_64': 0x10125110,
              'armv7': 0x101380b8, 'arm64': 0x100ac118}


def exercise(reference, source, library, folder, arch):
    libs = load(reference, source, folder, library)
    native, _ = inspect(reference.read_bytes())
    original = {name: address for address, name in native['symbols']}
    built, _ = inspect(source.read_bytes())
    symbols = {name: address for address, name in built['symbols'] + built['data_symbols']}
    text_end = next(a + n for kind, a, n in native['sections'] if kind == '__text')
    blend = original['_glacier_blend_pixel']
    fill = original['_glacier_fill_rect']
    dimensions = DIMENSIONS[arch] - 0x10000000 + native['base']
    wide = arch in ['x86_64', 'arm64']
    width, height = 32, 24
    for index, lib in enumerate(libs):
        if index:
            lib.exports['initialize'] = lib.base + symbols['_pf_app_initialize']
            lib.call('initialize')
            dimension_address = lib.base + symbols['_pf_module_state'] + dimensions - text_end
            target = symbols['_recovered_%x' % (blend - native['base'] + 0x10000000)]
        else:
            dimension_address = lib.base + dimensions - native['base']
            target = blend - native['base']
            if native['base']:
                lib.cpu.mem_write(dimensions, struct.pack('<II', width, height))
        lib.cpu.mem_write(dimension_address, struct.pack('<II', width, height))
        lib.exports['blend'] = lib.base + target
        lib.exports['fill'] = lib.base + (symbols['_recovered_%x' % (fill - native['base'] + 0x10000000)] if index else fill - native['base'])
    clips = [None, (0, 0, 32, 24), (4, 3, 12, 10), (0, 0, 0, 0), (-3, -2, 7, 5)]
    positions = [(-1, 0), (0, -1), (0, 0), (4, 3), (15, 12), (31, 23), (32, 0), (0, 24)]
    initial = bytes((i * 37 + 11) & 255 for i in range(width * height * 4))
    count = 0
    for clip in clips:
        for x, y in positions:
            for alpha in [0, 1, 127, 128, 254, 255]:
                results = []
                for index, lib in enumerate(libs):
                    application = bytearray(0x6100)
                    struct.pack_into('<Q' if wide else '<I', application,
                                     0x390 if wide else 0x378, 0x700000)
                    if clip is not None:
                        application[0x582d if wide else 0x5811] = 1
                        struct.pack_into('<4i', application, 0x5830 if wide else 0x5814, *clip)
                    lib.cpu.mem_write(0x300000, bytes(application))
                    lib.cpu.mem_write(0x700000, initial)
                    arguments = [0x300000, x & 0xffffffff, y & 0xffffffff, 17, 103, 241, alpha]
                    if index == 0 and arch == 'i386':
                        lib.cpu.reg_write(UC_X86_REG_ECX, arguments[0])
                        lib.cpu.reg_write(UC_X86_REG_EDX, arguments[1])
                        lib.call('blend', *arguments[2:])
                    else:
                        lib.call('blend', *arguments)
                    results.append(bytes(lib.cpu.mem_read(0x700000, len(initial))))
                assert results[0] == results[1], (arch, clip, x, y, alpha)
                if alpha == 0:
                    assert results[0] == initial, 'transparent pixel changed framebuffer'
                count += 1
    pixel_cases = count
    rectangles = [(-5, -4, 10, 9), (0, 0, 1, 1), (0, 0, 32, 24),
                  (25, 20, 20, 20), (32, 0, 5, 5), (0, 24, 5, 5),
                  (2, 2, -1, 5), (2, 2, 5, -1), (2, 2, 0, 5),
                  (2, 2, 5, 0), (4, 3, 12, 10), (3, 2, 14, 12), (8, 6, 1, 1)]
    for clip in clips:
        for rectangle in rectangles:
            for colour in [0x11223300, 0x11223301, 0x1122337f, 0x112233ff]:
                results = []
                for index, lib in enumerate(libs):
                    application = bytearray(0x6100)
                    struct.pack_into('<Q' if wide else '<I', application,
                                     0x390 if wide else 0x378, 0x700000)
                    if clip is not None:
                        application[0x582d if wide else 0x5811] = 1
                        struct.pack_into('<4i', application, 0x5830 if wide else 0x5814, *clip)
                    lib.cpu.mem_write(0x300000, bytes(application))
                    lib.cpu.mem_write(0x700000, initial)
                    x, y, w, h = [v & 0xffffffff for v in rectangle]
                    if wide:
                        arguments = [0x300000, x | (y << 32), w | (h << 32), colour]
                    else:
                        arguments = [0x300000, x, y, w, h, colour]
                    if index == 0 and arch == 'i386':
                        lib.cpu.reg_write(UC_X86_REG_ECX, arguments[0])
                        lib.cpu.reg_write(UC_X86_REG_EDX, arguments[1])
                        lib.call('fill', *arguments[2:])
                    else:
                        lib.call('fill', *arguments)
                    results.append(bytes(lib.cpu.mem_read(0x700000, len(initial))))
                assert results[0] == results[1], (arch, clip, rectangle, hex(colour),
                    [(i, a, b) for i, (a, b) in enumerate(zip(*results)) if a != b][:12])
                count += 1
    print('Glacier %s: %d pixel and %d rectangle native/source comparisons passed.' %
          (arch, pixel_cases, count - pixel_cases))



if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('reference', type=Path)
    p.add_argument('source', type=Path)
    p.add_argument('--library', type=Path, required=True)
    p.add_argument('--output', type=Path, required=True)
    p.add_argument('--arch', choices=list(DIMENSIONS), required=True)
    a = p.parse_args()
    exercise(a.reference, a.source, a.library, a.output, a.arch)
