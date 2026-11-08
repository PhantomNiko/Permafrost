#!/usr/bin/env python3
"""Build the recovered cube application from C against a source TerrorUI DLL.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import sys
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from darwin import compile_object,link_dynamic_executable


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('architecture',choices=('i386','x86_64','armv7','arm64'))
    p.add_argument('library',type=Path);p.add_argument('output',type=Path);a=p.parse_args()
    root=Path('recovery/in-progress/applications/cube');objects=[]
    for name in ['main','render']:
        obj=a.output.parent/(name+'.o');compile_object(root/(name+'.c'),obj,a.architecture,['recovery/in-progress/sdk/include','sdk/include'],pic=True);objects.append(obj)
    for helper in ['compiler','runtime']:
        obj=a.output.parent/(helper+'.o');compile_object(Path('kernel')/(helper+'.c'),obj,a.architecture,['sdk/include'],pic=True);objects.append(obj)
    link_dynamic_executable(objects,a.output,a.architecture,{'/lib/TerrorUI.dylib':a.library})
    print(a.architecture+': cube application linked from C.')


if __name__=='__main__':main()
