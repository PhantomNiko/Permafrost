#!/usr/bin/env python3
"""Compare x64 desktop file selection and pointer dispatch with native input.

Pooka's Free Software License. Desktop records and input frames are emulated.
"""
import argparse,struct
from pathlib import Path
from desktop_calendar import load
from native import inspect

def exercise(reference,source,library,output):
 original,_=inspect(reference.read_bytes());assert original['cpu']==0x1000007
 names={n:a for a,n in original['symbols']};metadata,_=inspect(source.read_bytes());symbols={n:a for a,n in metadata['symbols']+metadata['data_symbols']};state=next(a+n for kind,a,n in original['sections']if kind=='__text');frames=[]
 for index,lib in enumerate(load(reference,source,output,library)):
  c=lib.cpu
  if index:lib.exports['initialize']=lib.base+symbols['_pf_app_initialize'];lib.call('initialize')
  def global_address(fake):return lib.base+symbols['_pf_module_state']+(fake-0x10000000+original['base']-state)if index else lib.base+fake-0x10000000+original['base']
  def write(fake,value,wide=False):c.mem_write(global_address(fake),struct.pack('<Q'if wide else'<I',value))
  windows=0x3000000;order=0x3100000;dock=0x3200000;frame=0x3300000;entries=0x3400000
  c.mem_write(windows,bytes(20*0xda8));record=bytearray(0xda8);record[0:2]=b'\1\1';struct.pack_into('<I',record,0x14,1);struct.pack_into('<4i',record,0x58,64,56,500,330);struct.pack_into('<i',record,0x25c,7);struct.pack_into('<Q',record,0xaf0,entries);struct.pack_into('<II',record,0xaf8,4,0xffffffff);c.mem_write(windows,bytes(record));c.mem_write(order,bytes(80));c.mem_write(dock,bytes(18*300));data=bytearray(504*4)
  for i,name in enumerate([b'3D Demo.app',b'ActivityMonitor.app',b'Batagaika',b'Cancer.app']):
   start=i*504;data[start:start+len(name)]=name;data[start+241:start+241+len(name)]=name;struct.pack_into('<4I',data,start+488,2,2,7,0)
  c.mem_write(entries,bytes(data));write(0x10022368,windows,True);write(0x10022990,order,True);write(0x10022988,dock,True);write(0x10027194,1);write(0x10022170,800);write(0x10022174,600);write(0x10022178,0xffffffff);write(0x1002217c,0);write(0x10022180,0xffffffff)
  address=symbols['_recovered_10005880']if index else names['_handleInput'];lib.exports['input']=lib.base+address;lib.instruction_limit=100000000;steps=[]
  for buttons in [1,0]:
   state_frame=bytearray(0x70);struct.pack_into('<4I',state_frame,0x5c,128,242,buttons,0);c.mem_write(frame,bytes(state_frame));lib.call('input',frame);steps.append((bytes(c.mem_read(windows,0xda8)),bytes(c.mem_read(global_address(0x1002549c),0x1fc))))
  assert any(struct.unpack_from('<I',step[0],0xafc)[0]==3 for step in steps),('file was not selected',index,[step[0][0xafc:0xb08].hex()for step in steps])
  frames.append(steps)
 assert frames[0]==frames[1],[(i,sum(x!=y for x,y in zip(a[0],b[0])),a[0][0xafc:0xb08].hex(),b[0][0xafc:0xb08].hex())for i,(a,b)in enumerate(zip(*frames))if a!=b]
 print('Desktop pointer dispatch: native file selection, press/release state and drag records match.')

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.library,a.output)
