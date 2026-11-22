#!/usr/bin/env python3
"""Validate the source SDK compiler after moving the bundle outside the repo.

Pooka's Free Software License. Requires macOS Clang and a generated SDK bundle.
"""
import argparse,shutil,subprocess,sys,tempfile
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect

def exercise(sdk):
 with tempfile.TemporaryDirectory(prefix='permafrost-portable-sdk-')as temporary:
  root=Path(temporary);bundle=root/'Portable.sdk';shutil.copytree(sdk,bundle)
  for archive in (bundle/'usr/lib').glob('*/libtayga.a'):
   data=archive.read_bytes();position=8;assert data[:8]==b'!<arch>\n'
   while position<len(data):
    header=data[position:position+60];assert len(header)==60 and header[58:60]==b'`\n'
    assert int(header[16:28])==0 and int(header[28:34])==0 and int(header[34:40])==0
    size=int(header[48:58]);position+=60+size+(size&1)
   assert position==len(data)
  # Rebuild a runtime from bundled C/C++ source with no repository includes.
  subprocess.run([sys.executable,str(bundle/'bin/pf-build-runtime'),'--arch','arm64','--output',str(bundle/'usr/lib/arm64')],cwd=root,check=True)
  for arch,cpu in [('i386',7),('x86_64',0x1000007),('armv7',12),('arm64',0x100000c)]:
   for suffix in ['c','cpp']:
    output=root/('sample-'+arch+'-'+suffix)
    subprocess.run([sys.executable,str(bundle/'bin/pf-tayga-cc'),'--arch',arch,str(bundle/'Examples'/('runtime.'+suffix)),'-o',str(output)],cwd=root,check=True)
    binary=output.read_bytes();metadata,_=inspect(binary);assert metadata['cpu']==cpu
    assert not any(value in binary for value in [str(root).encode(),str(Path.cwd()).encode()]),(arch,suffix)
 print('Portable SDK: C and C++ programs built for four CPUs without repository headers or embedded host paths.')
if __name__=='__main__':
 parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('sdk',type=Path);args=parser.parse_args();exercise(args.sdk)
