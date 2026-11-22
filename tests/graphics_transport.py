#!/usr/bin/env python3
"""Compare ARM64 graphics MMIO, port I/O, DMA, and barrier API transport.

Pooka's Free Software License. Hardware services are intercepted.
"""
import argparse,struct
from pathlib import Path
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import *
SPECS={
 '_wm_kext_mmio_read_address':lambda api,a,o:[api,a,4,o],
 '_wm_kext_mmio_write_address':lambda api,a,o:[api,a,4,0x12345678],
 '_qemu_kext_mmio_read8':lambda api,a,o:[api,a,12,o],
 '_qemu_kext_mmio_read16':lambda api,a,o:[api,a,12,o],
 '_qemu_kext_mmio_read32':lambda api,a,o:[api,a,12,o],
 '_qemu_kext_mmio_write8':lambda api,a,o:[api,a,12,0xab],
 '_qemu_kext_mmio_write16':lambda api,a,o:[api,a,12,0xabcd],
 '_qemu_kext_mmio_write32':lambda api,a,o:[api,a,12,0x12345678],
 '_qemu_kext_io_read':lambda api,a,o:[api,a&0xffff,4,o],
 '_qemu_kext_io_write':lambda api,a,o:[api,a&0xffff],
 '_wm_kext_dma_address':lambda api,a,o:[api,0x2f2000,128,o],
 '_wm_kext_dma_sync':lambda api,a,o:[api],
 '_wm_kext_hardware_barrier':lambda api,a,o:[api],
}
def run(path,native_addresses):
 lib=DLL(path);assert lib.cpu_type==0x100000c;meta,_=inspect(path.read_bytes());symbols={n:a+lib.base for a,n in meta['symbols']};events=[];results=[]
 for name,address in native_addresses.items():lib.exports[name]=symbols.get(name,symbols.get('_recovered_%x'%(0x10000000+address)))
 def callback(slot):
  def hook(c,a,z,u):
   regs=[c.reg_read(r)for r in [UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3]];n=0 if slot==30 else 1 if slot==29 else 2 if slot==22 else 4 if slot==28 else 3;events.append((slot,tuple(regs[:n])));c.reg_write(lib.result,1)
   if slot==28:regs[2]=regs[3]
   if slot in [21,26,47,28]and 0x2f0000<=regs[2]<0x2f3000:c.mem_write(regs[2],struct.pack('<I',0x89abcdef))
  return hook
 for slot in [21,22,26,27,28,29,30,47,48]:
  a=0x18000+16*slot;lib.cpu.mem_write(a,struct.pack('<I',0xd65f03c0));lib.cpu.hook_add(UC_HOOK_CODE,callback(slot),begin=a,end=a)
 for name,args in SPECS.items():
  if name not in native_addresses:continue
  for size,magic,wide,available in [(208,0x54584b57,True,True),(208,0x54584b57,False,True),(128,0x54584b57,False,True),(80,0x54584b57,True,True),(208,0,True,True),(208,0x54584b57,True,False)]:
   for address in [0,0x120000,0x100120000]:
    api=0x2e0000;lib.cpu.mem_write(api,struct.pack('<3I',magic,1000000,size)+bytes(208-12));lib.cpu.mem_write(0x2f0000,b'\xa5'*32)
    if available:
     for slot in [21,22,26,27,28,29,30]+([47,48]if wide else[]):lib.cpu.mem_write(api+slot*4,struct.pack('<I',0x18000+16*slot))
    events.clear();status=lib.call(name,*args(api,address,0x2f0000),result_bits=32);results.append((name,size,magic,wide,available,address,None if name in ['_qemu_kext_io_write','_wm_kext_dma_sync','_wm_kext_hardware_barrier'] else status,tuple(events),bytes(lib.cpu.mem_read(0x2f0000,32))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--available-only',action='store_true');a=p.parse_args();m,_=inspect(a.reference.read_bytes());symbols={n:p for p,n in m['symbols']if n in SPECS};assert len(symbols)>5 if a.available_only else len(symbols)==len(SPECS);e=run(a.reference,symbols);s=run(a.source,symbols);assert e==s,[(x[:6],x[6:],y[6:])for x,y in zip(e,s)if x!=y];print('Graphics transport:',len(e),'native hardware-service, API-version, and unavailable-service comparisons passed.')
