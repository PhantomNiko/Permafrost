#!/usr/bin/env python3
"""Compile recovered guest C/C++ SDK headers with all architecture ABIs.

Pooka's Free Software License.
"""
from pathlib import Path
import subprocess,sys
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from darwin import TARGETS
for arch,target in TARGETS.items():
 for suffix in ['c','cpp']:
  command=['clang','--target='+target,'-ffreestanding','-nostdinc','-fsyntax-only','-Wno-incompatible-sysroot','-Irecovery/in-progress/sdk/tayga/include','-Irecovery/in-progress/sdk/include','tests/tayga_headers.'+suffix]
  command+=['-std=c11']if suffix=='c'else['-std=c++17','-fno-exceptions','-fno-rtti','-fno-threadsafe-statics']
  subprocess.run(command,check=True)
 print(arch+': source C/C++ headers, legacy includes, and ABI addresses passed.')
