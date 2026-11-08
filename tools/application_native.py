#!/usr/bin/env python3
"""Build recovered guest applications from source and declared DLL interfaces.

Pooka's Free Software License. No reference executable is a build input.
"""
import argparse
import json
from pathlib import Path
from darwin import compile_object,link_dynamic_executable


def build_application(source,output,libraries):
    source,output=Path(source),Path(output)
    profile=json.loads((source/'profile.json').read_text())
    arch=profile['architecture'];output.mkdir(parents=True,exist_ok=True)
    headers=Path('recovery/in-progress/sdk/include')
    if not headers.is_dir():headers=Path('sdk/include')
    objects=[]
    for name in profile.get('sources',['runtime.c','state.c','entry.c']):
        path=source/name
        if path.parent!=source or path.suffix not in ('.c','.cpp','.cc','.cxx'):
            raise ValueError('application source must name a C or C++ file in its directory')
        obj=output/(path.stem+'.o')
        compile_object(path,obj,arch,[source,headers,'sdk/include','kernel'],pic=True,
                       extra_flags=['-w','-Wno-int-conversion','-fbracket-depth=2048'])
        objects.append(obj)
    return link_dynamic_executable(objects,output/profile['module'],arch,libraries,
                                   entry=profile.get('entry','main'))


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source',type=Path);parser.add_argument('output',type=Path)
    parser.add_argument('--library',action='append',default=[],metavar='INSTALL_NAME=SOURCE_DYLIB')
    args=parser.parse_args();libraries={}
    for item in args.library:
        install,path=item.split('=',1);libraries[install]=Path(path)
    print(build_application(args.source,args.output,libraries))


if __name__=='__main__':main()
