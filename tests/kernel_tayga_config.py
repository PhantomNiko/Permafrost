#!/usr/bin/env python3
"""Compare i386 Tayga configuration device arguments and value boundaries.

Pooka's Free Software License. Configuration reads are intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
CONFIGS=[b'',b'ramsize = 1572864\nswap_only = false\nroot_password =\nusername =\nuser_password =\n',b'username = example\nuser_password = test\n',b'username =\nuser_password =\n',b'username = \t\r\nuser_password = unused\n',b'ramsize=33554432\nswap_only=true\n',b'ramsize=not-a-number\n',b'root_password = sample\n',b'username = "example"\n',b'# comment\nunknown = value\n',b'username=example',b'username =\n',b'swap_only = false\n']
def exercise(binary,addresses,native):
 results=[]
 for device in [-1,0,4]:
  for text in CONFIGS:
   lib=Kernel(binary,addresses,native);c=lib.cpu;events=[];state=bytearray(200);struct.pack_into('<I',state,0,0x180000);state[100:105]=b'user\0';c.mem_write(0x20d9d50,bytes(state));c.mem_write(0x3003000,text+b'\0')
   def stat(c,a,z,u):
    sp=c.reg_read(UC_X86_REG_ESP);dev,path,out=struct.unpack('<3I',c.mem_read(sp+4,12));name=bytes(c.mem_read(path,64)).split(b'\0')[0];events.append((dev,name));c.mem_write(out,struct.pack('<3I',0x3003000 if text else 0,len(text),0));c.reg_write(lib.result,1);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
   a=addresses['_wm_kernel_program_stat_file_on_device'];c.hook_add(UC_HOOK_CODE,stat,begin=a,end=a);status=lib.call('_tayga_load_config_on_device_kernel',device&0xffffffff,result_bits=8);results.append((status,tuple(events),bytes(c.mem_read(0x20d9d50,200))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference.read_bytes(),native,True);s=exercise(a.source.read_bytes(),source,False);assert e==s,[(i,x,y)for i,(x,y)in enumerate(zip(e,s))if x!=y][:4];print('Tayga configuration:',len(e),'native device, empty value, whitespace, identity, password, boolean and numeric comparisons passed.')
