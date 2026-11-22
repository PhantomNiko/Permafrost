#!/usr/bin/env python3
"""Compare i386 menu-bar framebuffer pixels with the native desktop.

Pooka's Free Software License. The framebuffer and allocation are emulated.
"""
import argparse,struct
from pathlib import Path
from desktop_calendar import load
from native import inspect

def exercise(reference,source,library,output):
 original,_=inspect(reference.read_bytes());assert original['cpu']==7
 names={n:a for a,n in original['symbols']};metadata,_=inspect(source.read_bytes());symbols={n:a for a,n in metadata['symbols']+metadata['data_symbols']};state=next(a+n for kind,a,n in original['sections']if kind=='__text')
 for width in [200,800,1280]:
  results=[]
  for index,lib in enumerate(load(reference,source,output,library)):
   if index:
    lib.exports['initialize']=lib.base+symbols['_pf_app_initialize'];lib.call('initialize')
   base=lib.base+symbols['_pf_module_state']if index else state
   for address,value in [(0x181f104,width),(0x181f108,80),(0x181f2c0,0x200000)]:lib.cpu.mem_write(base+address-state,struct.pack('<I',value))
   lib.cpu.mem_write(0x200000,b'\xa5'*(width*80*4));lib.exports['menubar']=lib.base+(symbols['_recovered_1000c710']if index else names['_drawMenuBar']);lib.instruction_limit=100000000;lib.call('menubar');results.append(bytes(lib.cpu.mem_read(0x200000,width*80*4)))
  assert results[0]==results[1],(width,'menu-bar pixels differ',sum(a!=b for a,b in zip(*results)),results[0][:32].hex(),results[1][:32].hex())
 print('Desktop menu bar: three native framebuffer comparisons passed, including text and background.')

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.library,a.output)
