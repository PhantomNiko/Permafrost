#!/usr/bin/env python3
"""Compare desktop configuration string return values with native code.

Pooka's Free Software License. Reference executables are test inputs only.
"""
import argparse
from pathlib import Path
from desktop_calendar import load
from native import inspect
from unicorn.x86_const import UC_X86_REG_ECX


def exercise(reference,source,library,folder):
 libs=load(reference,source,folder,library)
 for index,lib in enumerate(libs):
  if index:
   m,_=inspect(source.read_bytes());a=next(a for a,n in m['symbols']if n=='_pf_app_initialize');lib.exports['initialize']=lib.base+a;lib.call('initialize')
 cases=[b'',b'solid',b'  blur',b'\t\tclear',b'"blur"',b'  "solid" trailing',b'""',b'"unterminated',b'"a"b"',b'"'+b'a'*300+b'"']
 for text in cases:
  results=[]
  for index,lib in enumerate(libs):
   address=0x2f0000;lib.cpu.mem_write(address,text+b'\0')
   if index==0 and lib.cpu_type==7:lib.cpu.reg_write(UC_X86_REG_ECX,address);pointer=lib.call('_unquoteConfigValue',result_bits=32)
   else:pointer=lib.call('_unquoteConfigValue',address,result_bits=64 if lib.wide else 32)
   assert pointer,('missing config string result',index,text)
   value=bytearray()
   for i in range(305):
    byte=lib.cpu.mem_read(pointer+i,1)[0]
    if not byte:break
    value.append(byte)
   else:raise AssertionError('unbounded config string')
   results.append((bytes(value),pointer-address if address<=pointer<=address+len(text)else None))
  assert results[0]==results[1],(text,results)
 print('Desktop config: ten native/source whitespace, quoting, truncation and pointer-return cases passed.')


if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.library,a.output)
