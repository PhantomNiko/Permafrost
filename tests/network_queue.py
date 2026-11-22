#!/usr/bin/env python3
"""Compare VirtIO network queue negotiation, DMA addresses, and register writes.

Pooka's Free Software License. Device and DMA services are intercepted.
"""
import argparse,struct
from pathlib import Path
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm_const import *
from unicorn.arm64_const import *
def exercise(path,address,native):
 lib=DLL(path);c=lib.cpu;meta,_=inspect(path.read_bytes());symbols={n:a+lib.base for a,n in meta['symbols']};target=symbols.get('_qemu_network_enable_queue',symbols.get('_recovered_%x'%(address+0x10000000)));lib.exports['enable']=target;events=[];results=[];api=0x2e0000;common=0x2f0000;base=0x2f2000;notify=0x2f3000;out=0x2f1000;descriptor=0x310000;avail=0x311000;used=0x312000
 def args(n):
  if lib.cpu_type==7:return list(struct.unpack('<'+'I'*n,c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,n*4)))
  regs=[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]if lib.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4]if lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8]
  values=[c.reg_read(r)for r in regs[:n]]
  if n>len(regs):values+=list(struct.unpack('<'+'I'*(n-len(regs)),c.mem_read(c.reg_read(UC_ARM_REG_SP),4*(n-len(regs)))))
  return values
 mode={}
 def callback(slot):
  def fn(c,a,z,u):
   if slot==28:
    v=args(5 if lib.cpu_type in[7,0x1000007]else 4);pointer=v[1];physical=((0x11223344+pointer)<<32 if mode['high']else 0)+pointer;events.append((slot,v[0],pointer,v[2]));c.mem_write(v[3],struct.pack('<I'if lib.cpu_type in[7,0x1000007]else'<Q',physical&0xffffffff if lib.cpu_type in[7,0x1000007]else physical))
    if lib.cpu_type in[7,0x1000007]:c.mem_write(v[4],struct.pack('<I',physical>>32))
    value=not mode['dma_fail']
   elif slot==29:events.append((slot,*args(3)));value=0
   elif slot in [26,47]:
    address,width,pointer=args(3);offset=address-base;value=1;v={0x18:mode['maximum'],0x1e:3,0x1c:int(not mode['enable_fail'])}.get(offset,0);events.append(('read',offset,width));c.mem_write(pointer,struct.pack('<I',v))
   else:
    address,width,value=args(3);events.append(('write',address-base,width,value));value=1
   c.reg_write(lib.result,value)
  return fn
 for slot in [26,27,28,29,47,48]:
  a=0x18000+slot*16;c.mem_write(a,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if lib.cpu_type in[12,0x100000c]else b'\xc3');c.hook_add(UC_HOOK_CODE,callback(slot),begin=a,end=a)
 for high,maximum,desired,dma_fail,enable_fail,null_common,null_out in [(False,16,8,False,False,False,False),(True,16,8,False,False,False,False),(False,0,8,False,False,False,False),(False,4,8,False,False,False,False),(False,16,8,True,False,False,False),(False,16,8,False,True,False,False),(False,16,8,False,False,True,False),(False,16,8,False,False,False,True)]:
  mode.update(high=high,maximum=maximum,dma_fail=dma_fail,enable_fail=enable_fail);c.mem_write(api,struct.pack('<3I',0x54584b57,1000000,208)+bytes(196))
  for slot in [26,27,28,29,47,48]:c.mem_write(api+slot*4,struct.pack('<I',0x18000+slot*16))
  record=bytearray(112);struct.pack_into('<2Q'if lib.wide else'<2I',record,0,base,notify);struct.pack_into('<I',record,48 if lib.wide else 32,4);c.mem_write(common,bytes(record));c.mem_write(avail,bytes(64));c.mem_write(used,bytes(128));c.mem_write(avail+2,struct.pack('<H',7));c.mem_write(used+2,struct.pack('<H',9));c.mem_write(out,b'\xa5'*32);events.clear();values=[api,0 if null_common else common,1,desired,descriptor,256,avail,64,used,128,0 if null_out else out]
  if native and lib.cpu_type==7:
   sp=0x4fe0000;c.reg_write(UC_X86_REG_ECX,values[0]);c.reg_write(UC_X86_REG_EDX,values[1]);c.reg_write(UC_X86_REG_ESP,sp);c.mem_write(sp,struct.pack('<10I',lib.stop,*values[2:]));c.emu_start(target,lib.stop,count=1000000);assert c.reg_read(lib.pc)==lib.stop;status=c.reg_read(lib.result)&255
  else:status=lib.call('enable',*values,result_bits=8,stack_format='<QI4xQ'if lib.cpu_type==0x100000c else None)
  results.append((status,tuple(events),bytes(c.mem_read(out,32))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args();m,_=inspect(a.reference.read_bytes());address=next(a for a,n in m['symbols']if n=='_qemu_network_enable_queue');e=exercise(a.reference,address,True);s=exercise(a.source,address,False);assert e==s,[(i,x,y)for i,(x,y)in enumerate(zip(e,s))if x!=y][:2];print('Network queues:',len(e),'native negotiation, 64-bit DMA, register pairs, synchronization, failures and guard comparisons passed.')
