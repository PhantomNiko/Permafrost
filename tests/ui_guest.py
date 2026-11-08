#!/usr/bin/env python3
"""Build an interactive TerrorUI C fixture against a source-built guest DLL.

Pooka's Free Software License. Run the resulting executable beside the desktop
compositor to check rendering, pointer delivery and the colour-change callback.
"""
import argparse
from pathlib import Path
import sys


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('architecture', choices=('i386', 'x86_64', 'armv7', 'arm64'))
    parser.add_argument('library', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    repository = Path(__file__).resolve().parents[1]
    sys.path.insert(0, str(repository / 'tools'))
    from darwin import compile_object, link_dynamic_executable
    headers = repository / 'recovery/in-progress/sdk/include'
    if not headers.is_dir():
        headers = repository / 'sdk/include'
    obj = args.output.parent / 'ui-guest.o'
    compile_object(repository / 'tests/ui_guest.c', obj, args.architecture,
                   [headers, repository / 'sdk/include'], pic=True)
    link_dynamic_executable([obj], args.output, args.architecture,
                            {'/lib/TerrorUI.dylib': args.library})
    print(args.architecture + ': source TerrorUI guest program linked.')


if __name__ == '__main__':
    main()
