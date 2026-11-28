#!/usr/bin/env python3
"""Compare native font generation geometry, numeric input and WBF pixels.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import random
import struct
from pfz1_command_codec_110 import loaded


def call(lib, name, *arguments):
    return lib.call(name, *arguments, result_bits=32,
                    **({'stack_format': '<Q'} if lib.cpu_type == 0x100000c and len(arguments) == 9 else {}))


def guard(lib, pointer, size, fill=0xa5):
    lib.cpu.mem_write(pointer, b'BEFORE!!' + bytes([fill]) * size + b'AFTER!!!')
    return pointer + 8


def guarded(lib, pointer, size):
    assert bytes(lib.cpu.mem_read(pointer - 8, 8)) == b'BEFORE!!'
    assert bytes(lib.cpu.mem_read(pointer + size, 8)) == b'AFTER!!!'
    return bytes(lib.cpu.mem_read(pointer, size))


def exercise(reference, source, output):
    libs = [loaded(reference, source, output, which) for which in [0, 1]]
    rng = random.Random(110)
    numbers = ['', '0', '1', '4294967295', '4294967296', '0xffffffff', '0x100000000',
               '0XFF', '  12\t', '-1', '+1', '0x', '12x', '1 2', '\n12', '12\n', '999999999999999999999999']
    numbers += [str(rng.randrange(0x100000000)) for _ in range(30)]
    for text in numbers:
        results = []
        for lib in libs:
            raw = text.encode() + b'\0'
            pointer = guard(lib, 0x3100000, len(raw))
            lib.cpu.mem_write(pointer, raw)
            target = guard(lib, 0x3110000, 4)
            status = call(lib, '_wm_fontgen_parse_uint32', pointer, target)
            assert guarded(lib, pointer, len(raw)) == raw
            results.append((status, guarded(lib, target, 4)))
        assert results[0] == results[1], ('numeric parser', text, results)
    geometries = [(16, 16, [8, 8, 0, 0, 0]), (8, 8, [8, 8, 255, 0, 1]),
                  (256, 256, [16, 16, 0, 0, 0]), (24, 16, [8, 8, 32, 2, 3])]
    for width, height, settings in list(geometries):
        for index, values in [(0, [0, 1, 32, 33]), (1, [0, 1, 32, 33]),
                              (2, [0, 255, 256]), (3, [0, 1, 2, 5]), (4, [0, 1, 255, 256, 257])]:
            for value in values:
                changed = list(settings)
                changed[index] = value
                geometries.append((width, height, changed))
    for width, height, settings in geometries:
        results = []
        for lib in libs:
            original = struct.pack('<5I', *settings)
            config = guard(lib, 0x3100000, 20)
            lib.cpu.mem_write(config, original)
            geometry = guard(lib, 0x3110000, 20)
            size = 8 if lib.wide else 4
            count = guard(lib, 0x3120000, size)
            status = call(lib, '_wm_fontgen_resolve_geometry', width, height, config, geometry, count)
            assert guarded(lib, config, 20) == original
            results.append((status, guarded(lib, geometry, 20), int.from_bytes(guarded(lib, count, size), 'little')))
        assert results[0] == results[1], ('geometry', width, height, settings, results)
    paths = ['', 'font.png', 'font', '.png', 'folder/font.png', 'folder\\font.png',
             'folder/part.name.png', 'folder/', '/', 'a' * 255 + '.png']
    path_checks = 0
    for text in paths:
        for capacity in [0, 20, 64, 4097]:
            results = []
            for lib in libs:
                raw = text.encode() + b'\0'
                pointer = guard(lib, 0x3100000, len(raw))
                lib.cpu.mem_write(pointer, raw)
                target = guard(lib, 0x3110000, capacity)
                status = call(lib, '_wm_fontgen_output_path', pointer, target, capacity)
                assert guarded(lib, pointer, len(raw)) == raw
                results.append((status, guarded(lib, target, capacity)))
            assert results[0] == results[1], ('output path', text, capacity, results)
            path_checks += 1
    pixel_checks = 0
    for width, height, settings in [(8, 8, [8, 8, 0, 0, 0]), (18, 6, [9, 3, 32, 0, 0]),
                                    (32, 16, [16, 8, 0, 1, 2]), (32, 32, [32, 32, 255, 0, 1])]:
        pixels = bytes(rng.randrange(256) for _ in range(width * height * 4))
        configs = [(len(pixels), width * 4, 8192), (len(pixels) - 1, width * 4, 8192),
                   (len(pixels), width * 4 - 1, 8192), (len(pixels), width * 4, 0)]
        for used, stride, capacity in configs:
            results = []
            for lib in libs:
                image = guard(lib, 0x3100000, len(pixels))
                lib.cpu.mem_write(image, pixels)
                config = guard(lib, 0x3110000, 20)
                raw = struct.pack('<5I', *settings)
                lib.cpu.mem_write(config, raw)
                target = guard(lib, 0x3120000, capacity)
                size = 8 if lib.wide else 4
                count = guard(lib, 0x3130000, size)
                status = call(lib, '_wm_fontgen_build_wbf', image, used, width, height,
                              stride, config, target, capacity, count)
                assert guarded(lib, image, len(pixels)) == pixels
                assert guarded(lib, config, 20) == raw
                results.append((status, int.from_bytes(guarded(lib, count, size), 'little'), guarded(lib, target, capacity)))
            assert results[0] == results[1], ('WBF pixels', width, height, used, stride, capacity, results)
            if used == len(pixels) and stride == width * 4 and capacity:
                assert results[0][0] == 0 and results[0][2][:4] == b'WBF1'
            else:
                assert results[0][0] != 0
            pixel_checks += 1
    print('fontgen: %d numeric, %d guarded geometry and %d WBF pixel/capacity and %d guarded output-path workflows passed.' %
          (len(numbers), len(geometries), pixel_checks, path_checks))


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    exercise(args.reference, args.source, args.output)
