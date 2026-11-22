#!/usr/bin/env python3
"""Compare native file-window toolbar text and the pinned-path table.

Pooka's Free Software License. Drawing and framebuffer writes are intercepted.
"""
import argparse,struct
from pathlib import Path
from desktop_calendar import load
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *

class Finished(Exception):pass

def exercise(reference,source,library,output):
 old,_=inspect(reference.read_bytes());new,_=inspect(source.read_bytes());names={n:a for a,n in old['symbols']};symbols={n:a for a,n in new['symbols']+new['data_symbols']};state=next(a+n for k,a,n in old['sections']if k=='__text')
 for function,pinned in [(f,p)for f in ['100112e0','100104e0']for p in [False,True]]:
  results=[]
  for index,lib in enumerate(load(reference,source,output,library)):
   c=lib.cpu
   if index:lib.exports['initialize']=lib.base+symbols['_pf_app_initialize'];lib.call('initialize')
   base=lib.base+symbols['_pf_module_state']if index else state;record=0x2f0000;b=bytearray(0xb00)
   for off,v in [(0x58,64),(0x5c,56),(0x60,500),(0x64,332),(0x25c,4)]:struct.pack_into('<I',b,off,v)
   b[0x78:0x7d]=b'Docs\0';c.mem_write(record,bytes(b));c.mem_write(base+0x1ab0,bytes(0xdb0))
   if pinned:c.mem_write(base+0x1ab0,b'\1Tools\0')
   events=[]
   def ret(c,a,z,u):
    sp=c.reg_read(UC_X86_REG_ESP);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
   def text(c,a,z,u):
    sp=c.reg_read(UC_X86_REG_ESP);p=int.from_bytes(c.mem_read(sp+(12 if index else 4),4),'little');s=bytes(c.mem_read(p,256)).split(b'\0')[0].decode();events.append(s)
    if s.startswith('device '):raise Finished()
    ret(c,a,z,u)
   for original,recovered,callback in [('_drawTextN','1000ec70',text),('_fillRectAlpha','1000f370',ret),('_drawRect','1000efc0',ret)]:
    a=lib.base+(symbols['_recovered_'+recovered]if index else 0x1800000+int(recovered,16)-0x10000000);c.hook_add(UC_HOOK_CODE,callback,begin=a,end=a)
    if not index:
     a=0x1800000+int(recovered,16)-0x10000000;c.hook_add(UC_HOOK_CODE,callback,begin=a,end=a)
   lib.exports['file']=lib.base+(symbols['_recovered_'+function]if index else 0x1800000+int(function,16)-0x10000000)
   if not index:c.reg_write(UC_X86_REG_ECX,record)
   try:lib.call('file',*([record]if index else[]))
   except Finished:pass
   assert events and events[-1]=='device 4 /Docs',(function,index,events);results.append(events)
  assert results[0]==results[1],(pinned,results)
  assert results[0]==(['Tools']if pinned else[])+['device 4 /Docs'],results
 print('File-window toolbar: native pinned and empty toolbar text matches.')

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.library,a.output)
