#!/usr/bin/env python3
"""Compare i386 FAT chain allocation, release, and sector payload writes.

Pooka's Free Software License. Heap and block-device transfers are intercepted.
"""
import argparse,json,struct,itertools
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
def exercise(path,addresses,native):
 results=[]
 cases=[]
 for kind in [3,4,5]:
  for op in ['allocate','free','write']:
   for amount in [0,1,2,3]:cases.append((kind,op,amount,False,False))
 for op in ['allocate','free','write']:
  for readonly,fail in [(True,False),(False,True)]:cases.append((5,op,2,readonly,fail))
 for kind,op,amount,readonly,fail in cases:
  l=Kernel(path.read_bytes(),addresses,native);c=l.cpu;events=[];fat=0x3008000;output=0x3009000;data=0x3010000;temp=0x3020000
  def put(a,v):c.mem_write(a,struct.pack('<I',v))
  for a,v in [(0x2130740,512),(0x2130744,1),(0x2130748,512),(0x2130758,readonly),(0x213075c,kind),(0x2130794,1),(0x2130798,1),(0x21307a4,fat),(0x21307a8,512),(0x21307ac,16),(0x21307b0,64)]:put(a,v)
  c.mem_write(0x21307dc,b'\1');c.mem_write(0x213073c,b'\x80');table=bytearray(512)
  def entry(cluster,value):
   if kind==5:struct.pack_into('<I',table,cluster*4,value)
   elif kind==4:struct.pack_into('<H',table,cluster*2,value&65535)
   else:
    offset=cluster+cluster//2;old=int.from_bytes(table[offset:offset+2],'little');new=(old&15)|(value<<4)if cluster&1 else(old&0xf000)|(value&4095);table[offset:offset+2]=(new&65535).to_bytes(2,'little')
  if op!='allocate':entry(2,3);entry(3,{3:0xfff,4:0xffff,5:0xfffffff}[kind])
  c.mem_write(fat,bytes(table));c.mem_write(output,b'\xa5'*16);c.mem_write(data,bytes(i%251 for i in range(2048)))
  def args(n,registers=False):
   sp=c.reg_read(UC_X86_REG_ESP)
   if registers and native:return [c.reg_read(UC_X86_REG_ECX),c.reg_read(UC_X86_REG_EDX)][:n]+list(struct.unpack('<'+'I'*max(n-2,0),c.mem_read(sp+4,4*max(n-2,0))))
   return list(struct.unpack('<'+'I'*n,c.mem_read(sp+4,4*n)))
  def finish(value):
   sp=c.reg_read(UC_X86_REG_ESP);c.reg_write(l.result,value);c.reg_write(l.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
  def alloc(c,a,z,u):events.append(('alloc',args(1)[0]));c.mem_write(temp,bytes(512));finish(temp)
  def free(c,a,z,u):events.append(('free',args(1)[0]));finish(0)
  def write(c,a,z,u):
   device,lba,pointer,size=args(4,True);events.append(('write',device,lba,bytes(c.mem_read(pointer,size))));finish(not fail)
  for name,fn in [('_wm_probe_heap_alloc',alloc),('_free',free),('_write_drive_bytes',write)]:a=addresses[name];c.hook_add(UC_HOOK_CODE,fn,begin=a,end=a)
  if op=='allocate':status=l.call('_fat_allocate_chain',amount,output,result_bits=8)
  elif op=='free':l.call('_fat_free_chain',2,result_bits=32);status=0
  else:status=l.call('_fat_write_chain_bytes',2,data,amount*251,amount,result_bits=8)
  results.append((status,events,bytes(c.mem_read(output,16)),bytes(c.mem_read(fat,512))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());n={name:p for p,name in m['symbols']};abi=json.loads(a.abi.read_text());mp=json.loads(a.map.read_text());s={v['original']:mp.get('_'+v['symbol'],mp.get(v['symbol']))for v in abi.values()};e=exercise(a.reference,n,True);actual=exercise(a.source,s,False);assert e==actual,[(i,x,y)for i,(x,y)in enumerate(zip(e,actual))if x!=y][:2];print('FAT chains:',len(e),'native FAT12/16/32 allocation, free, payload, readonly, failure and metadata comparisons passed.')
