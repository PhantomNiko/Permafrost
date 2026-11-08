#!/usr/bin/env python3
"""Compare all eight ARM64 browser element draw branches with native pixels.

Pooka's Free Software License. Reference applications are test inputs only.
"""
import argparse,struct
from pathlib import Path
from desktop_calendar import load
from native import inspect

def exercise(reference,source,library,folder):
 libs=load(reference,source,folder,library);m,_=inspect(reference.read_bytes());names={n:a for a,n in m['symbols']+m['data_symbols']};sm,_=inspect(source.read_bytes());symbols={n:a for a,n in sm['symbols']+sm['data_symbols']};end=next(a+n for k,a,n in m['sections']if k=='__text');draw=names['_glacier_draw_page_elements'];width=names['__MergedGlobals']
 for index,l in enumerate(libs):
  assert l.cpu_type==0x100000c,'this fixture covers the recovered ARM64 switch'
  if index:l.exports['initialize']=l.base+symbols['_pf_app_initialize'];l.call('initialize')
  l.exports['draw']=l.base+(symbols['_recovered_%x'%(draw+0x10000000)]if index else draw);l.next=0x1800000
  globals=l.base+(symbols['_pf_module_state']+width-end if index else width);l.cpu.mem_write(globals,struct.pack('<II',128,128))
 count=0
 for kind in range(8):
  for scroll,fixed in [(0,0),(20,0),(100,0),(100,1)]:
   results=[]
   for l in libs:
    application=bytearray(0x210000);struct.pack_into('<Q',application,0x350,0x700000);l.cpu.mem_write(0x300000,bytes(application));doc=bytearray(0x55000);struct.pack_into('<I',doc,0x52c40,1);struct.pack_into('<I',doc,0x544cc,scroll)
    item=0x440;struct.pack_into('<5I',doc,item,kind,5,0,50,20);struct.pack_into('<I',doc,item+0x358,1);struct.pack_into('<I',doc,item+0x36c,fixed)
    l.cpu.mem_write(0x600000,bytes(doc));l.cpu.mem_write(0x700000,b'\x11\x22\x33\x44'*(128*128));l.call('draw',0x300000,0x600000)
    results.append(bytes(l.cpu.mem_read(0x700000,128*128*4)))
   assert results[0]==results[1],('element raster differs',kind,scroll,fixed)
   if kind in [3,4,5,6] and scroll==0:assert results[0]!=b'\x11\x22\x33\x44'*(128*128),('visible branch drew no pixels',kind)
   if scroll==100 and not fixed:assert results[0]==b'\x11\x22\x33\x44'*(128*128),('offscreen element was drawn',kind)
   count+=1
 print('Glacier drawing: %d native element-type, clipping, and fixed-position pixel comparisons passed.'%count)
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.library,a.output)
