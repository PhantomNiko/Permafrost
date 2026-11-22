#!/usr/bin/env python3
"""Build the current shared EFI loader. Pooka's Free Software License."""
import argparse
from pathlib import Path
from uefi_portable import build_loader

if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--arch',choices=('i386','x86_64','armv7','arm64'),default='x86_64')
    parser.add_argument('--out',type=Path,default=Path('build/uefi'))
    args=parser.parse_args();build_loader(args.out,args.arch)
