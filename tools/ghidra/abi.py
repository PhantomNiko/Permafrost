#!/usr/bin/env python3
"""Record every source definition's native entry, including multiline signatures.

Recovery utility. Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
from merge import definition_name


def collect(directory, metadata):
    names={address:name for address,name in metadata['symbols']}
    result={}
    for path in sorted(directory.glob('*.c')):
        if not all(c in '0123456789abcdef' for c in path.stem):continue
        name=definition_name(path.read_text())
        if name:
            address=int(path.stem,16)
            result[path.stem]={'symbol':name,'original':names.get(address,name)}
    return result


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source',type=Path)
    parser.add_argument('metadata',type=Path)
    parser.add_argument('output',type=Path)
    args=parser.parse_args()
    result=collect(args.source,json.loads(args.metadata.read_text()))
    args.output.write_text(json.dumps(result,indent=2)+'\n')
    print('Recorded %d source entry mappings'%len(result))
