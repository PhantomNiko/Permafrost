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
 headers=source.parent/'include'
 if not headers.is_dir():headers=source.parent.parent/'include'
 includes=[source/architecture,source/'private',headers,'sdk/include',source.parent/'tayga/include']
 for name,path in [('runtime',source/architecture/'runtime.c'),('state',source/architecture/'state.c'),('compiler',source/'compiler.c'),('memory',source/'memory.c'),('cpp',source/'cpp.cpp')]:
  obj=output/(name+'.o');compile_object(path,obj,architecture,includes,pic=True,extra_flags=['-w','-Wno-int-conversion','-fbracket-depth=2048']);objects.append(obj)
 compile_object(source/'crt.c',output/'crt1.o',architecture,includes,pic=True)
 archive=output/'libtayga.a';archive.unlink(missing_ok=True)
 environment=os.environ.copy();environment['ZERO_AR_DATE']='1'
 subprocess.run(['ar','rcs',str(archive),*[str(obj)for obj in objects]],check=True,env=environment)
 # Darwin ar retains host UID/GID even when ZERO_AR_DATE is enabled.
 binary=bytearray(archive.read_bytes());position=8
 if binary[:8]!=b'!<arch>\n':raise ValueError('invalid runtime archive')
 while position<len(binary):
  header=binary[position:position+60]
  if len(header)!=60 or header[58:60]!=b'`\n':raise ValueError('invalid archive member')
  size=int(header[48:58]);binary[position+16:position+28]=b'0'.ljust(12)
  binary[position+28:position+34]=b'0'.ljust(6);binary[position+34:position+40]=b'0'.ljust(6)
  binary[position+40:position+48]=b'100644'.ljust(8)
  position+=60+size+(size&1)
 if position!=len(binary):raise ValueError('invalid archive extent')
 archive.write_bytes(binary)
 return {'archive':archive,'startup':output/'crt1.o'}

if __name__=='__main__':
 bundled=Path(__file__).resolve().parents[1]/'usr/src/runtime'
 default_source=bundled if bundled.is_dir()else Path('recovery/in-progress/sdk/runtime')
 parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--source',type=Path,default=default_source);parser.add_argument('--output',type=Path,required=True);parser.add_argument('--arch',choices=ARCHITECTURES,required=True);args=parser.parse_args();result=build_runtime(args.source,args.output,args.arch);print('Built source SDK runtime for '+args.arch)
