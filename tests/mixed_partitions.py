#!/usr/bin/env python3
"""Ensure filesystem updates preserve opaque volumes and partition locations.

Pooka's Free Software License.
"""
from pathlib import Path
import struct
import sys
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from wmfs import BASE, SECTOR, Image, make_disk, repack_image


def main():
    firmware={'kernel':b'firmware','Bundle.app':b'','Bundle.app/main':b'code','empty':b''}
    initial=make_disk(bytes(510)+b'\x55\xaa',bytes(64*512),firmware,
                      {'kernel':b'recovery'},{'file':b'user'},
                      sectors=8192,user_kind=2)
    disk=bytearray(initial)
    struct.pack_into('<H',disk,BASE*SECTOR+6,4)
    # Convert the growable user partition into a fixed span before adding swap.
    user=Image(initial,2).partitions[2]
    struct.pack_into('<I',disk,BASE*SECTOR+32+2*32+8,8192-user['start'])
    opaque=bytes(range(256))*32
    disk.extend(opaque)
    entry=BASE*SECTOR+32+3*32
    struct.pack_into('<4I',disk,entry,0x50535757,8192,len(opaque)//SECTOR,0)
    disk[entry+16:entry+30]=b'PermafrostSwap'
    reference=bytes(disk)
    for partition in range(3):
        changed=Image(reference,partition).files()|{'added':b'new contents'}
        actual=repack_image(reference,changed,partition)
        if len(actual)!=len(reference) or actual[:66*SECTOR]!=reference[:66*SECTOR]:
            raise AssertionError('partition map or boot area changed')
        for index,layout in enumerate(Image(reference).partitions):
            start=layout['start']*SECTOR
            end=start+layout['sectors']*SECTOR
            if index!=partition and actual[start:end]!=reference[start:end]:
                raise AssertionError('unselected partition changed')
        if Image(actual,partition).files()!=changed:
            raise AssertionError('selected filesystem contents differ')
        volume=Image(actual)
        root=(volume.base+volume.root_sector)*SECTOR
        for index,name in enumerate(Image(actual).files()):
            flags=struct.unpack_from('<I',volume.data,root+index*256+248)[0]
            if (flags==2)!=(name=='Bundle.app'):
                raise AssertionError('directory marker differs from an empty file')
    print('Mixed filesystem and opaque-volume updates preserve partition bytes.')


if __name__ == '__main__':
    main()
