#!/usr/bin/env python3
"""Compare PNG writers across stored-block boundaries using the native decoder.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
from image_formats import library,inspect_image


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path)
    args=parser.parse_args()
    symbol='__ZN2wm3png19save_png_rgba8_fileEPKcPKhii'
    cases=((1,1),(3,2),(255,1),(128,129))
    for width,height in cases:
        pixels=bytes((i*37+(i>>8))&255 for i in range(width*height*4))
        for path in(args.reference,args.source):
            writer=library(path);writer.instruction_limit=1000000000
            writer.cpu.mem_write(0x3000000,b'fixture.png\0')
            writer.cpu.mem_write(0x3001000,pixels)
            assert writer.call(symbol,0x3000000,0x3001000,width,height)==1
            encoded=writer.files['fixture.png']
            for decoder in(args.reference,args.source):
                reader=library(decoder);reader.instruction_limit=1000000000
                kind,image=inspect_image(reader,encoded)
                assert kind==1 and image==(width,height,pixels),(width,height,str(path),str(decoder))
            for bad_width,bad_height in((0,height),(width,0),(-1,height),(width,-1)):
                assert writer.call(symbol,0x3000000,0x3001000,
                                   bad_width&0xffffffff,bad_height&0xffffffff)==0
    print('PNG writer: four dimensions, native/source cross-decoding and invalid dimensions passed.')


if __name__=='__main__':main()
