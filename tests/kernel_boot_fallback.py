#!/usr/bin/env python3
"""Compare firmware-volume fallback reads while a different volume is selected.

Pooka's Free Software License. Allocation and block reads are intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from wmfs import make_image,BASE
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *

def exercise(path,addresses,native):
 files={'Tayga.app':b'','Tayga.app/Contents':b'','Tayga.app/Contents/Info.plist':b'<plist><dict><key>CFBundleExecutable</key><string>Tayga</string></dict></plist>','Tayga.app/Contents/Permafrost':b'','Tayga.app/Contents/Permafrost/Tayga':b'\xca\xfe\xba\xbe'+bytes(range(64))};disk=make_image(bytes(510)+b'\x55\xaa',bytes(32768),files,4096+BASE)[BASE*512:];results=[]
 for name,binary_only,bundle in [(name,binary_only,False)for name in [b'Tayga.app/Contents/Info.plist',b'Tayga.app/Contents/Permafrost/Tayga',b'missing']for binary_only in [0,1]]+[(b'Tayga.app',0,True)]:
  lib=Kernel(path.read_bytes(),addresses,native);c=lib.cpu;cursor=[0x3200000];reads=[]
  def args(n,registers=False):
   sp=c.reg_read(UC_X86_REG_ESP)
   if native and registers:return [c.reg_read(UC_X86_REG_ECX),c.reg_read(UC_X86_REG_EDX)][:n]+list(struct.unpack('<'+'I'*(n-2),bytes(c.mem_read(sp+4,4*(n-2)))))
   return list(struct.unpack('<'+'I'*n,bytes(c.mem_read(sp+4,n*4))))
  def finish(value):
   sp=c.reg_read(UC_X86_REG_ESP);c.reg_write(lib.result,value);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
  def alloc(c,a,z,u):
   size=args(1)[0];assert size<0x1000000 and cursor[0]+size<0x4f00000,size;ptr=cursor[0];cursor[0]+=(max(size,1)+15)&~15;c.mem_write(ptr,bytes(max(size,1)));finish(ptr)
  def realloc(c,a,z,u):
   old,size=args(2);ptr=cursor[0];cursor[0]+=(max(size,1)+15)&~15;assert cursor[0]<0x4f00000;c.mem_write(ptr,bytes(max(size,1)));finish(ptr)
  def free(c,a,z,u):finish(0)
  def read(c,a,z,u):
   drive,sector,dest,size=args(4,True);assert drive==0x80 and 2048<=sector and (sector-2048)*512+size<=len(disk),(drive,sector,size);offset=(sector-2048)*512;c.mem_write(dest,disk[offset:offset+size]);reads.append((sector,size));finish(1)
  for symbol,hook in [('_malloc',alloc),('_realloc',realloc),('_free',free),('_wm_probe_heap_init',free),('_load_drive_bytes',read)]:
   a=addresses[symbol];c.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
  fs=bytearray(188);struct.pack_into('<I',fs,56,7);fs[184]=1;c.mem_write(0x2130724,bytes(fs));c.mem_write(0x20d9d44,struct.pack('<I',7));c.mem_write(0x21408ea,b'\1');c.mem_write(0x21408ec,struct.pack('<I',1));record=bytearray(96);struct.pack_into('<IIII',record,0,2,0x80,2048,4096);struct.pack_into('<I',record,28,1);record[32]=1;struct.pack_into('<II',record,88,1,1);c.mem_write(0x21408f0,bytes(record));c.mem_write(0x3000000,name+b'\0');c.mem_write(0x3001000,bytes(16));c.mem_write(0x3002000,b'\xa5'*160)
  if bundle:
   c.mem_write(0x3001000,bytes(260));status=lib.call('_resolve_app_bundle_executable_path',0x3000000,0x3001000,0x3002000,result_bits=8);payload=bytes(c.mem_read(0x3001000,241)).split(b'\0')[0]
  else:
   status=lib.call('_storage_copy_boot_fallback_file',0x3000000,0x3001000,0x3001004,binary_only,0x3001008,0x3002000,result_bits=8);ptr,size=struct.unpack('<II',bytes(c.mem_read(0x3001000,8)));payload=bytes(c.mem_read(ptr,size))if ptr and size else b''
  assert bytes(c.mem_read(0x2130724,188))==bytes(fs),'selected filesystem context was not restored'
  results.append((status,payload,bytes(c.mem_read(0x3001008,1))if not bundle else b'',bytes(c.mem_read(0x3002000,160)),reads))
 return results

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',required=True,type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference,native,True);s=exercise(a.source,source,False);assert e==s,[(i,x,y)for i,(x,y)in enumerate(zip(e,s))if x!=y];assert e[0][0]==1 and e[2][0]==1 and e[-1][1]==b'Tayga.app/Contents/Permafrost/Tayga',e;print('Boot fallback:',len(e),'native firmware-volume reads, binary filtering, missing paths and context comparisons passed.')
