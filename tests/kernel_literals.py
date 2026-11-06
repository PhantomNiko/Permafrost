#!/usr/bin/env python3
"""Compare portable integer conversion with a native kernel reference.

Pooka's Free Software License. Requires Unicorn and a C compiler.
"""
import argparse
import ctypes
from pathlib import Path
import subprocess
import tempfile
from kernel_scalars import Kernel, inspect

CASES = [b'', b' ', b'\t\n\r 2 \v\f', b'0', b'2', b'-3', b'+4', b'--2',
         b'+', b'-', b'2147483647', b'2147483648', b'-2147483648',
         b'-2147483649', b'$240000', b'$80000000', b'-$80000000',
         b'0x7fffffff', b'0X7FFFFFFF', b'0x80000000', b'-0x80000000',
         b'$ffffffff', b'0xffffffff', b'0x', b'$', b'$g', b'1a', b'3.5',
         b'1e3', b'00012', b'12 3', b'\x012', b'2\x01', b'\x802',
         b'0'*254+b'2', b'0'*255+b'2', b'0'*256, b'9'*256,
         b'4294967295', b'4294967296', b'$100000000']


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    args = parser.parse_args()
    binary = args.reference.read_bytes()
    metadata, _ = inspect(binary)
    symbols = {name: address for address, name in metadata['symbols']}
    native = Kernel(binary, symbols, True)
    with tempfile.TemporaryDirectory(prefix='permafrost-literals-') as directory:
        root = Path(directory)
        source = root/'probe.c'
        source.write_text('#include "literals.h"\n'
                          'int probe(const char *text,int32_t *out)'
                          '{return pf_literal_integer(text,out);}\n'
                          'int probe_unsigned(const char *text,int32_t *out)'
                          '{return pf_literal_unsigned(text,(uint32_t *)out);}\n')
        library = root/'probe.dylib'
        subprocess.run(['cc', '-shared', '-fPIC', '-I', 'kernel', str(source),
                        '-o', str(library)], check=True)
        loaded = ctypes.CDLL(str(library))
        for name, export in [('probe','_ws_parse_int_literal'),
                             ('probe_unsigned','_parse_uint32_token')]:
            probe = getattr(loaded,name)
            probe.argtypes = [ctypes.c_char_p, ctypes.POINTER(ctypes.c_int32)]
            for text in CASES:
                native.cpu.mem_write(0x3000000, text+b'\0')
                native.cpu.mem_write(0x3001000, b'\x55'*4)
                status = native.call(export, 0x3000000, 0x3001000,
                                     result_bits=1)
                expected = int.from_bytes(native.cpu.mem_read(0x3001000, 4),
                                          'little', signed=True)
                value = ctypes.c_int32(0x55555555)
                actual = probe(text, ctypes.byref(value))
                if (actual, value.value) != (status, expected):
                    raise AssertionError('%r: native=%r source=%r' %
                                         (text, (status, expected), (actual, value.value)))
    print('%d native/source integer literal cases passed.' % (len(CASES)*2))


if __name__ == '__main__':
    main()
