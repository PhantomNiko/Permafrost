#!/usr/bin/env python3
"""Compile current milestone public API layouts as C and C++ for every target.

Pooka's Free Software License.
"""
from pathlib import Path
import subprocess
import sys


def main():
    repository=Path(__file__).resolve().parents[1]
    sys.path.insert(0,str(repository/'tools'))
    from darwin import TARGETS
    headers=repository/'recovery/in-progress/sdk/include'
    if not headers.is_dir():headers=repository/'sdk/include'
    for architecture,target in TARGETS.items():
        for language in ('c','c++'):
            args=['clang','--target='+target,'-ffreestanding','-nostdinc','-fsyntax-only',
                  '-Wno-incompatible-sysroot','-x',language,'-I',str(headers),
                  '-I',str(repository/'sdk/include'),str(repository/'tests/sdk_headers.c')]
            if language=='c++':args+=['-D_Static_assert=static_assert','-std=c++17']
            subprocess.run(args,check=True,capture_output=True,text=True)
        print(architecture+': C/C++ service, window, framebuffer and TerrorUI layouts passed.')


if __name__=='__main__':main()
