#!/usr/bin/env python3
"""Compare recovered ARM64 HTML preparation and layout with the native browser.

Pooka's Free Software License. Reference executables are independent test inputs.
"""
import argparse
from pathlib import Path
import struct
from desktop_calendar import load
from native import inspect

CASES = [
    '<html><body><p>Hello Permafrost</p></body></html>',
    '<html><body><h1>Heading</h1><p>First paragraph.</p><p>Second paragraph.</p></body></html>',
    '<html><body><p><b>Bold</b> and <i>italic</i> text.</p></body></html>',
    '<html><body><ul><li>One</li><li>Two</li></ul></body></html>',
    '<html><body><p>Snow: 雪 ❄ and &amp; &lt; &gt; entities.</p></body></html>',
    '<html><body><div style="color:red">Red text</div></body></html>',
    '<html><body><table><tr><td>A</td><td>B</td></tr></table></body></html>',
    '<html><body><input value="Permafrost"><button>Go</button></body></html>',
]


def exercise(reference, source, library, output):
    native, _ = inspect(reference.read_bytes())
    assert native['cpu'] == 0x100000c, 'This fixture exercises the ARM64 browser.'
    names = {n: a for a, n in native['symbols']}
    built, _ = inspect(source.read_bytes())
    symbols = {n: a for a, n in built['symbols']}
    for number, html in enumerate(CASES):
        results = []
        for index, lib in enumerate(load(reference, source, output / str(number), library)):
            if index:
                lib.exports['initialize'] = lib.base + symbols['_pf_app_initialize']
                lib.call('initialize')
            for alias, name in [('prepare', '_glacier_prepare_html'), ('layout', '_glacier_layout_html')]:
                address = names[name] - native['base']
                lib.exports[alias] = lib.base + (symbols['_recovered_%x' %
                    (address + 0x10000000)] if index else address)
            lib.next = 0x1800000
            lib.cpu.mem_write(0x300000, bytes(0x6100))
            document = bytearray(0x30000)
            for offset, pointer in [(0x1110, 0x800000), (0x1118, 0x900000), (0x1120, 0xa00000)]:
                struct.pack_into('<Q', document, offset, pointer)
                lib.allocs[pointer] = 0x100000
                lib.cpu.mem_write(pointer, bytes(0x100000))
            lib.cpu.mem_write(0x600000, bytes(document))
            lib.cpu.mem_write(0x800000, html.encode() + b'\0')
            lib.call('prepare', 0x300000, 0x600000)
            runtime, context = struct.unpack('<QQ', lib.cpu.mem_read(0x601150, 16))
            assert runtime and context, (number, index, 'HTML scripting context missing')
            lib.call('layout', 0x300000, 0x600000)
            fields = bytearray(lib.cpu.mem_read(0x622ab0, 64))
            count = struct.unpack_from('<I', fields)[0]
            assert count < 1024, (number, index, 'unbounded layout')
            ordering = []
            for offset in [8, 24]:
                pointer = struct.unpack_from('<Q', fields, offset)[0]
                ordering.append(bytes(lib.cpu.mem_read(pointer, count * 4)) if count else b'')
                fields[offset:offset + 8] = bytes(8)
            buffers = tuple(bytes(lib.cpu.mem_read(p, 0x100000)) for p in [0x900000, 0xa00000])
            results.append((bytes(fields), tuple(ordering), buffers))
        assert results[0] == results[1], ('HTML layout mismatch', number)
        print('Glacier ARM64 HTML case %d passed.' % number, flush=True)
    print('Glacier ARM64: %d native/source HTML preparation and layout cases passed.' % len(CASES))


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--library', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    exercise(args.reference, args.source, args.library, args.output)
