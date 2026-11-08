#!/usr/bin/env python3
"""Build the disposable guest storage probe using the recovered SDK headers.

Pooka's Free Software License. Never substitute this probe in release images.
"""
import argparse,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from darwin import compile_object,link_dynamic_executable

if __name__=='__main__':
 parser=argparse.ArgumentParser(description=__doc__)
 parser.add_argument('architecture',choices=['i386','x86_64','armv7','arm64'])
 parser.add_argument('--library',required=True,type=Path)
 parser.add_argument('--output',required=True,type=Path);args=parser.parse_args()
 args.output.mkdir(parents=True,exist_ok=True);obj=args.output/'probe.o'
 compile_object(Path('tests/guest_storage_probe.c'),obj,args.architecture,
                ['recovery/in-progress/sdk/include','sdk/include'],pic=True)
 print(link_dynamic_executable([obj],args.output/'StorageProbe',args.architecture,
       {'/lib/TerrorUI.dylib':args.library},entry='main'))
