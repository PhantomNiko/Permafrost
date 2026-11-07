#!/usr/bin/env python3
"""Preserve nested application bundles and long names in FAT32 user volumes.

Pooka's Free Software License.
"""
from pathlib import Path
import sys
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from fat import FAT32, make_fat32


def main():
    files={
        'ActivityMonitor.app/Contents/Permafrost/ActivityMonitor':bytes(range(256))*7,
        'ActivityMonitor.app/Contents/Info.plist':b'application metadata',
        'ActivityMonitor.app/Contents/Resources/empty':b'',
        'Images/snowy trees.png':b'image',
        'Images/冬.png':b'unicode name',
        'plain.txt':b'root file',
    }
    image=make_fat32(files,70000)
    volume=FAT32(image)
    actual={name:volume.read(cluster,size)for name,cluster,size in volume.entries(recursive=True)}
    if actual!=files:raise AssertionError('nested application contents differ')
    if {name for name,_,_ in volume.entries()}!={'plain.txt'}:
        raise AssertionError('directory children escaped into the root listing')
    for invalid in [{'A.app/file':b'a','a.app/FILE':b'b'},
                    {'file':b'a','file/child':b'b'},
                    {'../child/file':b'bad'}]:
        try:make_fat32(invalid,70000)
        except ValueError:pass
        else:raise AssertionError('invalid or colliding FAT32 tree accepted')
    print('Nested FAT32 bundles, Unicode names and file collisions verified.')


if __name__ == '__main__':
    main()
