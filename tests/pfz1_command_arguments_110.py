#!/usr/bin/env python3
"""Compare PFZ1 native argument validation and unavailable-filesystem behavior.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
from lua_command_fixture_110 import run_command


def exercise(reference, source, output):
    valid = ['Input=a', 'Output=b', 'Operation=Compress']
    cases = [[], ['--help'], ['unknown=value'], ['Input=a'],
             ['Input=a', 'Output=b'], valid,
             ['Input=a', 'Output=b', 'Operation=Extract'],
             ['Input=a', 'Output=b', 'Operation=invalid'],
             ['Input=', 'Output=b', 'Operation=Compress'],
             ['Input=a', 'Output=', 'Operation=Compress'],
             valid + ['Input=duplicate'], valid + ['Output=duplicate'],
             valid + ['Operation=Extract'],
             ['input=a', 'Output=b', 'Operation=Compress'],
             ['Input=' + 'a' * 1024, 'Output=b', 'Operation=Compress']]
    for arguments in cases:
        results = [run_command(reference, source, None, which, output, arguments,
                               command='pfz1', raw_console=True) for which in [0, 1]]
        assert results[0] == results[1], (arguments, results)
        assert results[0][0] == 1
        assert results[0][1], ('missing command diagnostic', arguments)
    print('PFZ1: fifteen native/source guarded argument and filesystem-boundary workflows passed.')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    exercise(args.reference, args.source, args.output)
