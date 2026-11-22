#!/usr/bin/env python3
"""Compare x64 mounted-device reuse and remount decisions with native code.

Pooka's Free Software License. Mount and binding updates are intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *


def exercise(path,addresses,native):
 results=[]
 for drive in [0,1,127,128,255]:
  for mismatch in ['none','drive','base','kind','unmounted','absent']:
   for mount_status in [0,1]:
    lib=Kernel(path.read_bytes(),addresses,native);c=lib.cpu;events=[];record=bytearray(104);struct.pack_into('<4I',record,0,42,drive,2048,70000);struct.pack_into('<I',record,96,2);c.mem_write(0x216a9b6,b'\1');c.mem_write(0x216a9b8,struct.pack('<Q',1));c.mem_write(0x216a9c0,bytes(record));c.mem_write(0x2102800,struct.pack('<I',42));c.mem_write(0x215a894,bytes([mismatch!='unmounted']));c.mem_write(0x215a7dc,bytes([drive^int(mismatch=='drive')]));c.mem_write(0x215a7ec,struct.pack('<I',2048+int(mismatch=='base')));c.mem_write(0x215a7fc,struct.pack('<I',2+int(mismatch=='kind')))
    def finish(value):
     sp=c.reg_read(UC_X86_REG_RSP);c.reg_write(lib.result,value);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,8),'little'));c.reg_write(UC_X86_REG_RSP,sp+8)
    def mount(c,a,z,u):events.append(('mount',c.reg_read(UC_X86_REG_RDI),c.reg_read(UC_X86_REG_RSI)));finish(mount_status)
    def bindings(c,a,z,u):events.append(('bindings',));finish(0)
    for name,hook in [('_fs_load_device',mount),(binding_name,bindings)]:
     address=addresses[name];c.hook_add(UC_HOOK_CODE,hook,begin=address,end=address)
    status=lib.call('_storage_target_device_by_id',43 if mismatch=='absent'else 42,result_bits=8);results.append((status,events,bytes(c.mem_read(0x216a9c0,104)),bytes(c.mem_read(0x2102800,4))))
 return results


if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',required=True,type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();abi=json.loads(a.abi.read_text());binding_name=abi['205e230']['original'];m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference,native,True);s=exercise(a.source,source,False);assert e==s,[(i,x[:2],y[:2])for i,(x,y)in enumerate(zip(e,s))if x!=y][:8];print('Mounted-device cache:',len(e),'native drive-byte, partition, kind, mount, missing-device and reuse comparisons passed.')
