#!/usr/bin/env python3
"""Compile C/C++ programs against a Permafrost SDK's recovered Tayga runtime.

Pooka's Free Software License. Requires the macOS host Clang toolchain.
"""
import argparse,tempfile
from pathlib import Path
from darwin import compile_object,link_dynamic_executable
from native import inspect

ARCHITECTURES=('i386','x86_64','armv7','arm64')

def build_program(sources,target,architecture,sdk,flags=(),libraries=None):
 sdk=Path(sdk);runtime=sdk/'usr/lib'/architecture
 for name in ['crt1.o','libtayga.a']:
  if not(runtime/name).is_file():raise ValueError('SDK is missing '+architecture+'/'+name)
 with tempfile.TemporaryDirectory(prefix='permafrost-sdk-')as temporary:
  objects=[]
  for i,source in enumerate(sources):
   source=Path(source)
   if source.suffix not in ['.c','.cpp','.cc','.cxx']:raise ValueError('expected a C or C++ source file')
   obj=Path(temporary)/(str(i)+'.o');private_map='-ffile-prefix-map='+str(source.parent.resolve())+'=.'
   compile_object(source,obj,architecture,[sdk/'usr/include'],pic=True,extra_flags=[private_map,*flags]);objects.append(obj)
  names={name for obj in objects for address,name in inspect(obj.read_bytes())[0]['symbols']}
  linker_flags=['-no_data_const']
  if '_main'not in names:
   candidates=names.intersection({'__Z4mainv','__Z4mainiPPc'})
   if len(candidates)==1:linker_flags+=['-alias',candidates.pop(),'_main']
  return link_dynamic_executable([runtime/'crt1.o',*objects,runtime/'libtayga.a'],target,architecture,libraries or {},entry='winterboot_tayga_c_entry',extra_flags=linker_flags)

def main():
 parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('sources',nargs='+',type=Path);parser.add_argument('-o','--output',type=Path,required=True);parser.add_argument('--arch',choices=ARCHITECTURES,default='i386');parser.add_argument('--sdk',type=Path,default=Path(__file__).resolve().parents[1]);parser.add_argument('--clang-arg',action='append',default=[]);parser.add_argument('--library',action='append',default=[],metavar='INSTALL_NAME=SOURCE_DYLIB');args=parser.parse_args();libraries={}
 for value in args.library:
  name,path=value.split('=',1);libraries[name]=Path(path)
 build_program(args.sources,args.output,args.arch,args.sdk,args.clang_arg,libraries);print('Built Tayga program for '+args.arch)

if __name__=='__main__':main()
