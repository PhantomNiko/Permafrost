#!/usr/bin/env python3
"""Recover referenced ARM literal-pool data into a source kernel profile.

Pooka's Free Software License. Used during recovery, never by normal builds.
"""
import argparse
import json
from pathlib import Path


def object_size(kind):
    if kind.startswith('P:'):return 4
    if kind.startswith('A:'):
        _,count,element=kind.split(':',2)
        return int(count)*object_size(element)
    return int(kind.rsplit(':',1)[1])


def recover(analysis,notes,profile_path):
    metadata=json.loads((analysis/'metadata.json').read_text())
    memory=(analysis/'memory.bin').read_bytes()
    profile=json.loads(profile_path.read_text())
    if profile['architecture']!='armv7':raise ValueError('expected an ARM32 source profile')
    functions={int(address,16)for address in profile['functions']}
    cells={};skipped=[]
    for path in sorted(notes.glob('*.tsv')):
        for line in path.read_text().splitlines():
            row=line.split('\t')
            if len(row)!=4 or row[0]!='G':continue
            address=int(row[2],16)
            if not profile['text_start']<=address<profile['text_end']:continue
            offset=address-metadata['base'];size=object_size(row[3])
            if size<0:
                tail=memory[offset:];end=tail.find(b'\0')
                if end<0:raise ValueError('unterminated inline string')
                size=end+1
            if not 0<=size<=4096 or offset<0 or offset+size>len(memory):
                raise ValueError('invalid inline object at %x'%address)
            if any(address<function+4 and function<address+size for function in functions):
                skipped.append(address);continue
            for index,value in enumerate(memory[offset:offset+size]):cells[address+index]=value
    patches={};previous=None
    for address,value in sorted(cells.items()):
        if previous is None or address!=previous+1:
            key='%x'%address;patches[key]=[]
        patches[key].append(value);previous=address
    profile['inline_data']=patches
    profile_path.write_text(json.dumps(profile,indent=2)+'\n')
    print('Recovered %d inline data bytes in %d ranges; skipped %d entry overlaps'%
          (len(cells),len(patches),len(set(skipped))))


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('analysis',type=Path);parser.add_argument('notes',type=Path)
    parser.add_argument('profile',type=Path)
    args=parser.parse_args();recover(args.analysis,args.notes,args.profile)
