#!/usr/bin/env python3
"""Compare i386 PCI pointer-controller discovery and configuration records.

Pooka's Free Software License. PCI configuration I/O is intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE,UC_HOOK_INSN
from unicorn.x86_const import *

def exercise(path,addresses,native):
 results=[]
 for bus,device,function in [(0,0,0),(0,4,0),(1,3,2),(255,31,7),(0,32,0),(0,0,8)]:
  for identity in [0,0xffffffff,0x000d1b36]:
   for output in [False,True]:
    lib=Kernel(path.read_bytes(),addresses,native);c=lib.cpu;events=[];selected=[0];record=0x3000000;c.mem_write(record,b'\xa5'*56);registers={0:identity,4:0x00100007,8:0x0c033001,12:0x00800000,16:0xfebf0004,20:1,24:0x8101,28:0x8201,32:0x8301,36:0x8401}
    def write(c,port,size,value,u):selected[0]=value;events.append(('out',port,size,value))
    def read(c,port,size,u):events.append(('in',port,size));return registers.get(selected[0]&0xfc,0)
    c.hook_add(UC_HOOK_INSN,read,None,1,0,UC_X86_INS_IN);c.hook_add(UC_HOOK_INSN,write,None,1,0,UC_X86_INS_OUT);status=lib.call('_platform_qemu_pci_read_device',bus,device,function,record if output else 0,result_bits=8);results.append((status,bytes(c.mem_read(record,56)),events))
 lib=Kernel(path.read_bytes(),addresses,native);c=lib.cpu;events=[]
 def absent(c,a,z,u):
  sp=c.reg_read(UC_X86_REG_ESP)
  if native:bus,device=c.reg_read(UC_X86_REG_ECX)&255,c.reg_read(UC_X86_REG_EDX)&255;function,out=struct.unpack('<II',bytes(c.mem_read(sp+4,8)))
  else:bus,device,function,out=struct.unpack('<4I',bytes(c.mem_read(sp+4,16)))
  events.append((bus,device,function));c.reg_write(lib.result,0);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
 a=addresses['_platform_qemu_pci_read_device'];c.hook_add(UC_HOOK_CODE,absent,begin=a,end=a);c.hook_add(UC_HOOK_INSN,lambda c,p,z,u:0,None,1,0,UC_X86_INS_IN);lib.call('_platform_qemu_pointer_probe');results.append(events);assert len(events)>=256 and (0,31,0)in events and (7,31,0)in events,(native,len(events),events[:36])
 # A present xHCI device exercises command-register writes and MMIO records.
 lib=Kernel(path.read_bytes(),addresses,native);c=lib.cpu;events=[]
 def finish(value):
  sp=c.reg_read(UC_X86_REG_ESP);c.reg_write(lib.result,value);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
 def arguments(count):
  sp=c.reg_read(UC_X86_REG_ESP)
  if native:return [c.reg_read(UC_X86_REG_ECX),c.reg_read(UC_X86_REG_EDX)]+list(struct.unpack('<'+'I'*(count-2),bytes(c.mem_read(sp+4,4*(count-2)))))
  return list(struct.unpack('<'+'I'*count,bytes(c.mem_read(sp+4,4*count))))
 def device(c,a,z,u):
  bus,slot,function,out=arguments(4)
  if (bus,slot,function)!=(0,3,0):finish(0);return
  record=bytearray(40);record[:3]=bytes([bus,slot,function]);struct.pack_into('<HH',record,4,0x1b36,0x000d);record[8:11]=bytes([12,3,48]);struct.pack_into('<I',record,16,0x3100004);c.mem_write(out,bytes(record));finish(1)
 def mapping(c,a,z,u):
  pointer,size,high,out=arguments(4);events.append(('map',pointer,size,high));c.mem_write(out,struct.pack('<I',0x3100000));finish(1)
 for symbol,hook in [('_platform_qemu_pci_read_device',device),('_platform_runtime_map_mmio_window',mapping)]:
  a=addresses[symbol];c.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
 def read(c,p,z,u):events.append(('in',p,z));return 0
 def write(c,p,z,v,u):events.append(('out',p,z,v))
 c.hook_add(UC_HOOK_INSN,read,None,1,0,UC_X86_INS_IN);c.hook_add(UC_HOOK_INSN,write,None,1,0,UC_X86_INS_OUT);lib.call('_platform_qemu_pointer_probe');records=bytes(c.mem_read(0x21044f4,0x100));assert records[:4]==struct.pack('<I',1),(native,records.hex(),events);results.append((events,records))
 return results

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',required=True,type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference,native,True);s=exercise(a.source,source,False);assert e==s,[(i,x,y)for i,(x,y)in enumerate(zip(e,s))if x!=y][:2];print('PCI pointer discovery:',len(e)-2,'native configuration cases and',len(e[-2]),'native bus/device/function probes and present-controller MMIO/configuration writes match.')
