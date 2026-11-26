#!/usr/bin/env python3
"""Compare native font metrics and resizing using generated TrueType fixtures.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
from dll import DLL
from ttf_library import fixture, floating


def exercise(path, api_base):
    outputs = []
    for curved in [False, True]:
        lib = DLL(path, api_base=api_base)
        cpu = lib.cpu
        font = fixture(curved)
        cpu.mem_write(0x3000000, font)
        bits = floating(lib, 24)
        args = (0x3000000, len(font)) + ((bits,) if lib.cpu_type in [7, 12] else ())
        handle = lib.call('__Z23wm_ttf_font_load_memoryPKvmf', *args, result_bits=64 if lib.wide else 32)
        assert handle
        for size in [8, 12, 24, 40, 72]:
            bits = floating(lib, size)
            lib.call('__Z18wm_ttf_font_resizePvf', handle, *((bits,) if lib.cpu_type in [7, 12] else ()))
            for text in [b'', b'A', b'AA', b'A\nA', b'A\n', b'\n', b'A\r\nA', b'?A', b'\xc3\xa9A', b'\x80A', b'\xc0\x80A', b'\xe2A', b'\xf0\x9f', b'\xffA']:
                cpu.mem_write(0x3001000, text + b'\0')
                cpu.mem_write(0x3002000, b'\xa5' * 80)
                result = lib.call('__Z19wm_ttf_font_metricsPvPKcP16WmTtfTextMetrics',
                                  handle, 0x3001000, 0x3002000, result_bits=8)
                record = bytes(cpu.mem_read(0x3002000, 80))
                assert record[64:] == b'\xa5' * 16
                outputs.append((result, record))
        lib.call('__Z16wm_ttf_font_freePv', handle)
    return outputs


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--api-base', type=lambda s: int(s, 0), required=True)
    args = parser.parse_args()
    native, actual = exercise(args.reference, args.api_base), exercise(args.source, args.api_base)
    assert native == actual, [i for i, (a, b) in enumerate(zip(native, actual)) if a != b]
    print('TrueType: 140 native font-size, metrics, multiline and missing-glyph records match.')
