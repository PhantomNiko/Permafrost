#!/usr/bin/env python3
"""Compare recovered VM command startup, help, evaluation and exit with native code.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
from lua_command_fixture_110 import run_command


def exercise(reference, source, native_library, library, output, command):
    cases = [([], [], True), (['Monitor=true'], ['quit'], True),
             (['MONITOR=on'], [':help', 'quit'], True),
             (['Monitor=YES'], ['answer=6*7', 'print(answer)', 'quit'], True),
             (['Monitor=false'], [], False),
             (['Monitor=true', 'Monitor=false'], [], False)]
    for arguments, lines, active in cases:
        results = [run_command(reference, source, provider, which, output, arguments, lines, command=command)
                   for which, provider in enumerate([native_library, library])]
        assert results[0] == results[1], (arguments, lines, results)
        status, events = results[0]
        assert status == 1
        reads = [row for row in events if row[0] == 'read']
        assert bool(reads) == active, (arguments, events)
        if active:
            assert len(reads) == (len(lines) or 1)
        if lines and 'print(answer)' in lines:
            assert ('line', b'42') in events
        print(command + ' Monitor case passed:', arguments, lines, flush=True)
    print(command + ' Monitor: six native/source startup, help, input, execution and exit workflows passed.')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('command', choices=['rwby','winterscript'])
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--native-library', type=Path, required=True)
    parser.add_argument('--library', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    exercise(args.reference, args.source, args.native_library, args.library, args.output, args.command)
