#!/usr/bin/env python3
"""Compare Lua command missing-file handling through native library imports.

Controlled kernel output records the real entry-point status and text.
Pooka's Free Software License.
"""
import argparse
from pathlib import Path
from lua_command_fixture_110 import run_command


def exercise(reference, source, native_library, library, output):
    cases = [
        (['script=missing-fixture.lua', 'Monitor=false'], 'missing-fixture.lua'),
        (['SCRIPT=absent script.lua', 'Monitor=false'], 'absent script.lua'),
        (['script=ignored.lua', 'script=final.lua', 'Monitor=false'], 'final.lua'),
        (['script=', 'Monitor=false'], None),
    ]
    for arguments, missing in cases:
        results = []
        for which, provider in enumerate([native_library, library]):
            results.append(run_command(reference, source, provider, which, output, arguments))
        expected = (0, [('line', b'script failed: unable to open script file: ' + missing.encode())]) if missing else (1, [])
        assert results == [expected, expected], (arguments, results)
        print('Lua command missing-file case passed:', arguments, flush=True)
    print('Lua command: four native/source missing-file and empty-option workflows passed.')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--native-library', type=Path, required=True)
    parser.add_argument('--library', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    exercise(args.reference, args.source, args.native_library, args.library, args.output)
