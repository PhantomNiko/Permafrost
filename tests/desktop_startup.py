#!/usr/bin/env python3
"""Compare desktop graphics startup gates against the reference executable.

Pooka's Free Software License. Native executables are test inputs only.
"""
import argparse,struct
from pathlib import Path
from desktop_calendar import load
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *

class StartupReached(Exception):pass

def exercise(reference,source,library,output):
 count=0
 for mode,query,bpp,address,pitch in [(0,1,32,0x200000,640),(1,0,32,0x200000,640),(1,1,8,0x200000,160),(1,1,32,0,640),(1,1,32,0x200000,0),(1,1,16,0x200000,320),(1,1,24,0x200000,480),(1,1,32,0x200000,640)]:
  results=[]
  for index,lib in enumerate(load(reference,source,output,library)):
   assert lib.cpu_type==7,'This fixture exercises the i386 startup ABI.'
   cpu=lib.cpu;meta,_=inspect((source if index else reference).read_bytes());main=next(a for a,n in meta['symbols']if n=='_main'or n.endswith('_tundra_entry'));lib.exports['main']=lib.base+main;events=[]
   def args(n):return struct.unpack('<'+'I'*n,bytes(cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP)+4,n*4)))
   def finish(value):
    sp=cpu.reg_read(UC_X86_REG_ESP);cpu.reg_write(lib.result,value);cpu.reg_write(lib.pc,int.from_bytes(cpu.mem_read(sp,4),'little'));cpu.reg_write(UC_X86_REG_ESP,sp+4)
   def enter(c,a,z,u):events.append('enter');finish(mode)
   def info(c,a,z,u):
    dest,=args(1);cpu.mem_write(dest,struct.pack('<13I',address,0,pitch*100,pitch,160,100,bpp,8,16,8,8,8,0));events.append('query');finish(query)
   def leave(c,a,z,u):events.append('leave');finish(1)
   def log(c,a,z,u):
    p,=args(1);text=bytes(cpu.mem_read(p,100)).split(b'\0')[0].decode();events.append(text)
    if text=='tundra: framebuffer ready':raise StartupReached()
    finish(1)
   for number,(offset,hook)in enumerate([(0x14,enter),(0x7c,info),(0x18,leave),(0x40,log)]):
    target=0x19000+number*16;cpu.mem_write(target,b'\xc3');cpu.hook_add(UC_HOOK_CODE,hook,begin=target,end=target)
    for table in lib.api_tables:cpu.mem_write(table+offset,struct.pack('<I',target))
   reached=False
   try:lib.call('main',result_bits=32)
   except StartupReached:reached=True
   results.append((events,reached))
  assert results[0]==results[1],((mode,query,bpp,address,pitch),results)
  assert results[0][1]==bool(mode and query and address and pitch and bpp in [16,24,32]),results
  count+=1
 print('Desktop startup:',count,'native graphics gating, framebuffer formats and successful-entry comparisons passed.')

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.library,a.output)
