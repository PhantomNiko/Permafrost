#!/usr/bin/env python3
"""Compare 1.1 x64 volume reconciliation across storage rescans.

Pooka's Free Software License. Synthetic disk discovery exercises the complete
rescan reconciler, including unsigned physical disk IDs and changed identities.
"""
from pathlib import Path
import sys,json,struct
sys.path[:0]=['tests','tools'];from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
import argparse
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);a=p.parse_args()
r=a.reference.read_bytes();meta,_=inspect(r);assert meta['cpu']==0x1000007;names={n:x for x,n in meta['symbols']};mapping=json.loads(a.map.read_text())

for drive,changed in [(0x80,False),(0x81,False),(0xff,False),(0x40,False),(0x80,True)]:
 results=[]
 for native in [True,False]:
  address=lambda pc:pc if native else mapping['recovered_%x'%pc]
  lib=Kernel(r if native else a.source.read_bytes(),{'entry':address(0x20a2520),'_ws_errorf':0x4fe0000});c=lib.cpu;arena=[0x3800000];old=[]
  for i in range(3):
   d=bytearray(0x150);name=('Volume'+str(i)).encode();d[:len(name)]=name;struct.pack_into('<I',d,0x80,7+i);d[0x84]=drive;struct.pack_into('<II',d,0x8c,i*4096,100000-i*4096);struct.pack_into('<I',d,0xa0,i);struct.pack_into('<II',d,0x148,3,5-i);old.append(bytes(d))
  c.mem_write(0x3300000,b''.join(old));c.mem_write(0x25fbec8,struct.pack('<QQ',3,0x3300000));c.mem_write(0x261f1b0,struct.pack('<Q',3));c.mem_write(0x2132f78,struct.pack('<I',7));boot=bytearray(0x200);boot[0x68]=0x80;struct.pack_into('<I',boot,0x84,100000);c.mem_write(0x3000000,bytes(boot));c.mem_write(0x25fe8e0,struct.pack('<Q',0x3000000))
  def leave(n=0):
   sp=c.reg_read(UC_X86_REG_RSP);c.reg_write(UC_X86_REG_RIP,int.from_bytes(c.mem_read(sp,8),'little'));c.reg_write(UC_X86_REG_RSP,sp+8);c.reg_write(UC_X86_REG_RAX,n)
  def alloc(cpu,pc,size,user):
   n=c.reg_read(UC_X86_REG_RDI);p=arena[0];arena[0]=(p+n+31)&-16;assert arena[0]<0x4f00000;c.mem_write(p,bytes(n));leave(p)
  def probe(cpu,pc,size,user):
   rows=[]
   for i,data in enumerate(old):
    d=bytearray(data);struct.pack_into('<I',d,0x80,20+i);struct.pack_into('<I',d,0x14c,0)
    if changed and i==2:struct.pack_into('<I',d,0x8c,8193)
    rows.append(bytes(d))
   c.mem_write(0x3400000,b''.join(rows));c.mem_write(0x25fbec8,struct.pack('<QQ',len(rows),0x3400000));c.mem_write(0x261f1b0,struct.pack('<Q',len(rows)));leave()
  hooks=[(0x2006ba0,lambda *args:leave(1)),(0x201b1c0,lambda *args:leave()),(0x200ab60,lambda *args:leave()),(0x20d0a70,lambda *args:leave()),(0x201b290,lambda *args:leave()),(0x20f7cb0,probe),(0x20fc000,lambda *args:leave(1))]
  for name,fn in [('_malloc',alloc),('_free',lambda *args:leave())]:hooks.append((names[name],fn))
  for pc,fn in hooks:c.hook_add(UC_HOOK_CODE,fn,begin=address(pc),end=address(pc))
  status=lib.call('entry',result_bits=8);count,pointer=struct.unpack('<QQ',c.mem_read(0x25fbec8,16));data=bytes(c.mem_read(pointer,count*0x150));ids=[struct.unpack_from('<I',data,i*0x150+0x80)[0]for i in range(count)];assert status==1 and count==3 and ids[:2]==[7,8];assert (ids[2]!=9)if changed else(ids[2]==9);assert int.from_bytes(c.mem_read(0x2132f78,4),'little')==7;results.append((status,count,data))
 assert results[0]==results[1],(drive,changed)
print('x64 storage rescan: five native/source identifier, changed-identity, current-device and mounted-volume comparisons passed.')
