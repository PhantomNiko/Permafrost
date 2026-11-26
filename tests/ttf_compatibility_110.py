#!/usr/bin/env python3
"""Compare the 1.1 TrueType public ABI for invalid fonts, alpha and missing glyphs.

Pooka's Free Software License. All font fixtures are generated locally.
"""
import argparse
from pathlib import Path
from ttf_library import decode, fixture


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--api-base', type=lambda value: int(value, 0), required=True)
    args = parser.parse_args()
    cases = [(font, b'A', 24, (12, 99, 231), 255)
             for font in [b'', bytes(12), b'not a font' + bytes(40)]]
    for curved in [False, True]:
        font = fixture(curved)
        cases += [(font, text, 24, (12, 99, 231), opacity)
                  for text in [b'A', b'A\n?', b'\xc3\xa9A']
                  for opacity in [0, 0.5, 1, 127.5, 255, 256]]
    for index, case in enumerate(cases):
        native = decode(args.reference, *case, api_base=args.api_base)
        source = decode(args.source, *case, api_base=args.api_base)
        assert native == source, ('TrueType public behavior differs', index)
    print('TrueType: 39 native invalid-font, missing-glyph, multiline and alpha cases match.')


if __name__ == '__main__':
    main()
