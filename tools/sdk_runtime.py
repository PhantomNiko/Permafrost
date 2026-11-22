#!/usr/bin/env python3
"""Build recovered guest C/C++ startup and runtime archives from source.

Pooka's Free Software License. Reference objects are never build inputs.
"""
import argparse,os,subprocess
from pathlib import Path
from darwin import compile_object

ARCHITECTURES=('i386','x86_64','armv7','arm64')

def build_runtime(source,output,architecture):
 source,output=Path(source),Path(output)
 if architecture not in ARCHITECTURES:raise ValueError('unsupported SDK runtime architecture')
 output.mkdir(parents=True,exist_ok=True);objects=[]
 includes=[source/architecture,source/'private',source.parent/'include','sdk/include',source.parent/'tayga/include']
 for name,path in [('runtime',source/architecture/'runtime.c'),('state',source/architecture/'state.c'),('compiler',source/'compiler.c'),('memory',source/'memory.c'),('cpp',source/'cpp.cpp')]:
  obj=output/(name+'.o');compile_object(path,obj,architecture,includes,pic=True,extra_flags=['-w','-Wno-int-conversion','-fbracket-depth=2048']);objects.append(obj)
 compile_object(source/'crt.c',output/'crt1.o',architecture,includes,pic=True)
 archive=output/'libtayga.a';archive.unlink(missing_ok=True)
 environment=os.environ.copy();environment['ZERO_AR_DATE']='1'
 subprocess.run(['ar','rcs',str(archive),*[str(obj)for obj in objects]],check=True,env=environment)
 return {'archive':archive,'startup':output/'crt1.o'}

if __name__=='__main__':
 parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--source',type=Path,default=Path('recovery/in-progress/sdk/runtime'));parser.add_argument('--output',type=Path,required=True);parser.add_argument('--arch',choices=ARCHITECTURES,required=True);args=parser.parse_args();result=build_runtime(args.source,args.output,args.arch);print('Built source SDK runtime for '+args.arch)
