#!/usr/bin/env python3
"""Compare desktop directory refresh, filtering and service argument transport.

Pooka's Free Software License. Native executables are test inputs only.
"""
import argparse,struct
from pathlib import Path
from desktop_calendar import load
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm_const import *
from unicorn.arm64_const import *


def exercise(reference,source,library,folder):
 libs=load(reference,source,folder,library);results=[]
 for index,lib in enumerate(libs):
  cpu=lib.cpu;cpu.mem_map(0x10000000,0x2100000)
  record=0x2f0000;storage=0x10000000;wide=lib.wide;entries_offset=0xaf0 if wide else 0xaec;count_offset=0xaf8 if wide else 0xaf0
  if index:
   m,_=inspect(source.read_bytes());a=next(a for a,n in m['symbols']if n=='_pf_app_initialize');lib.exports['initialize']=lib.base+a;lib.call('initialize')
  state=bytearray(0xc00);struct.pack_into('<i',state,0x25c,7);struct.pack_into('<Q'if wide else'<I',state,entries_offset,storage);cpu.mem_write(record,bytes(state));events=[]
  def args(count):
   if lib.cpu_type==7:
    sp=cpu.reg_read(UC_X86_REG_ESP);return list(struct.unpack('<'+'I'*count,bytes(cpu.mem_read(sp+4,count*4))))
   registers=[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]if lib.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4]if lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8]
   out=[cpu.reg_read(r)for r in registers[:count]]
   if count>len(registers):out+=struct.unpack('<I',bytes(cpu.mem_read(cpu.reg_read(UC_ARM_REG_SP),4)))
   return out
  def finish(value):
   cpu.reg_write(lib.result,value)
   if lib.cpu_type in [7,0x1000007]:
    reg=UC_X86_REG_RSP if wide else UC_X86_REG_ESP;sp=cpu.reg_read(reg);w=8 if wide else 4;address=int.from_bytes(cpu.mem_read(sp,w),'little');cpu.reg_write(reg,sp+w)
   else:address=cpu.reg_read(UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_X30)
   cpu.reg_write(lib.pc,address)
  def listing(cpu,address,size,user):
   device,path,dest,capacity,count=args(5);events.append((device,bytes(cpu.mem_read(path,1)),dest,capacity));assert device==7 and dest==storage and capacity==0xff4b,(index,args(5));assert 0x1000<=count<0x5000000,('invalid count pointer',index,hex(count))
   for i,name in enumerate([b'beta.txt',b'alpha.txt',b'Nested/item.txt']):
    entry=bytearray(504);entry[:len(name)]=name;entry[241:241+len(name)]=name;struct.pack_into('<5I',entry,484,10,0,1,7,0);cpu.mem_write(dest+i*504,bytes(entry))
   cpu.mem_write(count,struct.pack('<I',3));finish(1)
  address=0x19000
  for table in lib.api_tables:cpu.mem_write(table+0xcc,struct.pack('<I',address))
  cpu.mem_write(address,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if lib.cpu_type in [12,0x100000c]else b'\xc3');cpu.hook_add(UC_HOOK_CODE,listing,begin=address,end=address)
  lib.instruction_limit=300000000
  if index==0 and lib.cpu_type==7:cpu.reg_write(UC_X86_REG_ECX,record);lib.call('_refreshDirectoryWindow')
  else:lib.call('_refreshDirectoryWindow',record)
  count=struct.unpack('<I',bytes(cpu.mem_read(record+count_offset,4)))[0];assert events and count==3,(index,count,events)
  results.append((bytes(cpu.mem_read(storage,count*504)),events))
 assert results[0]==results[1],'directory records or service arguments differ'
 print('Desktop directory: native/source root filtering, sorted records and five-argument service transport match.')


if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.library,a.output)
