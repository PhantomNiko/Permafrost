#!/usr/bin/env python3
"""Share identical ordered replacement tables in recovery metadata.

Pooka's Free Software License. Translation order and replacement text are preserved.
"""
import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path


def compact(layout):
    translation = layout.get('translation', {})
    replacements = translation.get('source_replacements', {})
    encoded = {address: json.dumps(pairs, separators=(',', ':'))
               for address, pairs in replacements.items() if isinstance(pairs, dict)}
    counts = Counter(encoded.values())
    groups = translation.setdefault('source_replacement_groups', {})
    for address, value in encoded.items():
        if counts[value] < 2 or len(value) < 256:
            continue
        name = 'shared_' + hashlib.sha256(value.encode()).hexdigest()[:16]
        pairs = json.loads(value)
        if name in groups and list(groups[name].items()) != list(pairs.items()):
            raise ValueError('replacement group digest collision')
        groups[name] = pairs
        replacements[address] = name
    return layout


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('layout', type=Path)
    args = parser.parse_args()
    value = compact(json.loads(args.layout.read_text()))
    args.layout.write_text(json.dumps(value, indent=2) + '\n')
