#!/usr/bin/env python3
"""Build the recovered Tayga utility launchers from C source and a manifest.

Pooka's Free Software License. No reference executable is a build input.
"""
import argparse,json
from pathlib import Path
from darwin import compile_object,link_dynamic_executable

def build_tools(source,output,architectures=None):
 source,output=Path(source),Path(output);profile=json.loads((source/'profile.json').read_text());arches=architectures or profile['architectures'];results={}
 for arch in arches:
  if arch not in profile['architectures']:raise ValueError('unsupported utility architecture')
  for name in profile['tools']:
   if not name or any(c not in 'abcdefghijklmnopqrstuvwxyz0123456789-'for c in name):raise ValueError('invalid utility name')
   folder=output/arch/name;folder.mkdir(parents=True,exist_ok=True);obj=folder/'tool.o'
   compile_object(source/'tool.c',obj,arch,['sdk/include'],defines=['PF_TAYGA_TOOL_NAME='+json.dumps(name)],pic=True)
   results[arch,name]=link_dynamic_executable([obj],folder/name,arch,{})
 return results

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('source',type=Path);p.add_argument('output',type=Path);p.add_argument('--arch',action='append',choices=['i386','x86_64','armv7','arm64']);a=p.parse_args();built=build_tools(a.source,a.output,a.arch);print('Built %d source-only Tayga utility slices.'%len(built))
