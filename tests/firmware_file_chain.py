#!/usr/bin/env python3
"""Run firmware file-chain fixtures in an emulated target address space.

Pooka's Free Software License. No firmware or host memory is executed natively.
"""
import argparse,subprocess,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from darwin import compile_object,link_dynamic_executable
from dll import DLL
from cube_render import diagnostic_reference

def exercise(output):
 output.mkdir(parents=True,exist_ok=True);objects=[]
 for name,path in [('fixture','tests/firmware_file_chain.c'),('memory','kernel/runtime.c'),('compiler','kernel/compiler.c')]:
  obj=output/(name+'.o');compile_object(Path(path),obj,'arm64',['sdk/include'],pic=True,extra_flags=['-w','-fshort-wchar']);objects.append(obj)
 binary=link_dynamic_executable(objects,output/'file-chain','arm64',{},entry='pf_test_file_chain');diagnostic=output/'file-chain.dylib';diagnostic_reference(binary,diagnostic);lib=DLL(diagnostic,instruction_limit=1500000000);cases=lib.call('_pf_test_file_chain',result_bits=32);assert cases==21,cases;print('Firmware file chain: 21 contiguous, fragmented, partial, boundary, and failure cases passed.')
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.output)
