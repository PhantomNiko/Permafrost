#!/usr/bin/env python3
"""Compare ARM64 desktop clock rectangle return registers and clipping.

Pooka's Free Software License. Reference executables are test inputs only.
"""
import argparse,struct
from pathlib import Path
from desktop_calendar import load
from native import inspect
from unicorn.arm64_const import UC_ARM64_REG_X1


def exercise(reference,source,library,folder):
 libs=load(reference,source,folder,library);metadata,_=inspect(source.read_bytes());state=next(a for a,n in metadata['data_symbols']if n=='_pf_module_state');init=next(a for a,n in metadata['symbols']if n=='_pf_app_initialize');libs[1].exports['initialize']=libs[1].base+init;libs[1].call('initialize');assert libs[0].cpu_type==0x100000c
 count=0
 for width in [160,320,800,1280]:
  for text in [b'',b'12:00am',b'Thursday January 1 12:00:00am',b'x'*200]:
   for outputs in [False,True]:
    results=[]
    for index,lib in enumerate(libs):
     lib.cpu.mem_write(lib.base+(0x18074 if index==0 else state+0x7f60),struct.pack('<i',width));address=0x2f0000;lib.cpu.mem_write(address,text+b'\0');lib.cpu.mem_write(address+512,b'\xff'*8)
     low=lib.call('_menuBarClockRectForText',address,address+512 if outputs else 0,address+516 if outputs else 0,result_bits=64);high=lib.cpu.reg_read(UC_ARM64_REG_X1);rect=struct.unpack('<4i',struct.pack('<QQ',low,high));values=bytes(lib.cpu.mem_read(address+512,8));results.append((rect,values));assert rect[0]+rect[2]==width and rect[0]>=242 and rect[1]==0 and rect[3]==24,(index,width,text,rect)
    assert results[0]==results[1],(width,text,outputs,results)
    count+=1
 print('ARM64 desktop clock: %d native/source returned rectangles, clipping and optional outputs match.'%count)


if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.library,a.output)
