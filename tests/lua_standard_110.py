#!/usr/bin/env python3
"""Compare standard-library behavior recovered from the 1.1 Lua reference.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
from vm_library import evaluate


CASES = [
    ('answer=math.floor(-2.5)', -3),
    ('answer=math.ceil(2.5)', 3),
    ('answer=math.abs(-19)', 19),
    ('answer=math.max(2,17,-1)', 17),
    ('answer=math.min(2,17,-1)', -1),
    ('answer=math.sqrt(81)', 9),
    ('answer=math.pow(3,4)', 81),
    ('answer=string.len("Permafrost")', 10),
    ('answer=#"snow"', 4),
    ('answer=#({3,5,8})', 3),
    ('answer=tonumber("17")', 17),
    ('answer=0; if 0 then answer=1 end', 1),
    ('answer=0; if "" then answer=1 end', 1),
    ('answer=0; if nil then answer=1 else answer=2 end', 2),
    ('answer=0; if 1==1.0 then answer=1 end', 1),
    ('answer=0; for i,v in ipairs({3,5,8}) do answer=answer+v end', 16),
    ('local t={1,2}; table.insert(t,9); answer=t[3]', 9),
    ('local t={1,2,9}; table.remove(t,2); answer=t[2]', 9),
    ('answer=string.byte("ABC",2)', 66),
    # Preserve the reference runtime's signed-remainder behavior.
    ('answer=-7%3', -1),
]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--api-base', type=lambda value: int(value, 0), required=True)
    args = parser.parse_args()
    for index, (code, expected) in enumerate(CASES):
        native = evaluate(args.reference, 'lua', code, args.api_base)
        actual = evaluate(args.source, 'lua', code, args.api_base)
        assert native == expected, ('reference', index, native, expected)
        assert actual == native, ('source', index, actual, native)
    print('Lua standard library: %d native/source comparisons passed.' % len(CASES))


if __name__ == '__main__':
    main()
