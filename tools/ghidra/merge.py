#!/usr/bin/env python3
"""Consolidate translated functions, keeping their temporary macros isolated.

Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import re


DEFINITION = re.compile(r'(?:^|\n)(?:__attribute__\(\([^\n]*?\)\)\s*)?[\w\s*]*\b((?:thunk_)?(?:recovered_|FUN_)[0-9a-f]+)\s*\([^;{}]*\)\s*\{')

def definition_name(source):
    """Find a recovered definition, including a wrapped return-type line."""
    match=DEFINITION.search(source)
    return match[1] if match else None


def merge(directory, output, header, names=None, descriptions=None):
    names = names or {}
    def rename(text):
        return re.sub(r'\b[A-Za-z_]\w*\b', lambda m: names.get(m[0], m[0]), text)
    declaration = rename((directory / 'functions.h').read_text())
    declaration += '\n/* Original analysis identifiers for manual recovery units. */\n'
    declaration += ''.join('#define %s %s\n' % pair for pair in sorted(names.items()))
    header.write_text(declaration)
    parts = ['/* Permafrost recovered implementation; Pooka\'s Free Software License.\n'
             ' * Fixed entry addresses and original function boundaries are recorded\n'
             ' * separately in recovery metadata. */\n#include "' + header.name + '"\n']
    # Ghidra may export a tail thunk under its target's name. Compile the
    # target once; each original entry still has its own recorded ABI stub.
    definitions = {}
    for path in sorted(directory.glob('*.c')):
        name = definition_name(path.read_text())
        if name:
            if name not in definitions or int(path.stem, 16) == int(name.rsplit('_', 1)[1], 16):
                definitions[name] = path
    selected = set(definitions.values())
    for path in sorted(directory.glob('*.c')):
        if path not in selected:
            continue
        text = path.read_text().replace('#include "functions.h"\n', '')
        # A function address is a C symbol, not a memory word containing its
        # first machine instruction. Older analysis exports confused the two.
        text = re.sub(r'^#(?:define|undef)\s+(?:recovered_[0-9a-f]+|FUN_[0-9a-f]+)\b[^\n]*\n', '', text, flags=re.M)
        macros = re.findall(r'^#define\s+(\w+)', text, re.M)
        description = (descriptions or {}).get(path.stem)
        if description:
            parts.append('\n/* ' + description.replace('*/', '* /') + ' */\n')
        parts += ['\n' + rename(text), '\n' + ''.join('#undef %s\n' % names.get(name, name) for name in macros)]
    output.write_text(''.join(parts))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('directory', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--header', type=Path, required=True)
    parser.add_argument('--names', type=Path)
    args = parser.parse_args()
    merge(args.directory, args.output, args.header,
          json.loads(args.names.read_text()) if args.names else None)


if __name__ == '__main__':
    main()
