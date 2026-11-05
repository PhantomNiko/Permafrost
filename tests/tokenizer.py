#!/usr/bin/env python3
"""Compare native and recovered token boundaries, quoting, and comments.

Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import struct
from integer_literals import Machine


def tokens(machine, text):
    status, count = machine.parse(text)
    if not status:
        return False, []
    if not 0 <= count < 1024:
        raise AssertionError('unbounded tokenizer output')
    wide = machine.cpu_type in (0x1000007, 0x100000c)
    width, code = (8, 'Q') if wide else (4, 'I')
    container = struct.unpack('<3'+code, bytes(machine.cpu.mem_read(machine.data+4096, 3*width)))
    result = []
    for index in range(count):
        address = struct.unpack('<'+code, bytes(machine.cpu.mem_read(container[2]+index*width, width)))[0]
        result.append(bytes(machine.cpu.mem_read(address, 1024)).split(b'\0')[0])
    return True, result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source', type=Path)
    parser.add_argument('--source-map', type=Path, required=True)
    parser.add_argument('--reference', type=Path, required=True)
    parser.add_argument('--metadata', type=Path, required=True)
    args = parser.parse_args()
    metadata = json.loads(args.metadata.read_text())
    address = next(a for a, n in metadata['symbols'] if n == '_ws_tokenize_line')
    mapping = json.loads(args.source_map.read_text())
    name = 'recovered_%x' % address
    source_address = mapping.get(name, mapping.get('_'+name))
    source = Machine(args.source.read_bytes(), source_address, True)
    reference = Machine(args.reference.read_bytes(), address, False)
    cases = ('', '  ', 'serial(2 + 3)', '2+3', 'a += 1', 'a <= b && c != d || e',
             'array[1] = {name: "ice"}', 'foo@@comment', '@@comment',
             '"@@inside" @@outside', '"escaped\\"quote"', "'single quoted'",
             '"unterminated', '"trailing escape\\', 'abc"def"',
             '\t\r\n\v\f one two ', 'a ** b ^ c / 2', '$200000 0x20 1.25',
             'a%=b ~=-1', '[]{}()<>!#%*+,-/:;=\\^')
    for text in cases:
        actual, expected = tokens(source, text), tokens(reference, text)
        if actual != expected:
            raise AssertionError(repr(text)+': source '+str(actual)+', native '+str(expected))
    print('Tokenization: %d native/source cases passed.' % len(cases))


if __name__ == '__main__':
    main()
