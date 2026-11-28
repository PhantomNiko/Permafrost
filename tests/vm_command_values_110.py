#!/usr/bin/env python3
"""Compare real VM console numeric and string output with native commands.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
from lua_command_fixture_110 import run_command


def exercise(command, reference, source, native_library, library, output):
    cases = [(['print(2.5)', 'quit'], b'2.500000'),
             (['answer=-19+7', 'print(answer)', 'quit'], b'-12'),
             (['print("permafrost")', 'quit'], b'permafrost'),
             (['print(0)', 'quit'], b'0'),
             (['print(2147483647)', 'quit'], b'2147483647')]
    for lines, expected in cases:
        results = [run_command(reference, source, provider, which, output,
                               ['Monitor=true'], lines, command=command)
                   for which, provider in enumerate([native_library, library])]
        assert results[0] == results[1], (lines, results)
        assert results[0][0] == 1
        assert ('line', expected) in results[0][1], (lines, results[0])
        print(command + ' console value case passed:', lines, flush=True)
    print(command + ': five native/source numeric and string console workflows passed.')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('command', choices=['rwby', 'winterscript'])
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--native-library', type=Path, required=True)
    parser.add_argument('--library', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    exercise(args.command, args.reference, args.source, args.native_library,
             args.library, args.output)
