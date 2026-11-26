#!/usr/bin/env python3
"""Compare x64 menu storage, window records and guards with the native kernel.

Pooka's Free Software License. Window records and scheduling are synthetic.
"""
from pathlib import Path
import sys,json,struct,random
sys.path[:0]=[str(Path(__file__).resolve().parent),str(Path(__file__).resolve().parents[1]/'tools')];from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
import argparse
parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path);parser.add_argument('--map',type=Path,required=True);args=parser.parse_args();native=args.reference;source=args.source;m,_=inspect(native.read_bytes());names={n:a for a,n in m['symbols']};mapping=json.loads(args.map.read_text())

def exercise(path,isnative):
 addresses=names if isnative else{n:mapping.get('recovered_%x'%a)for n,a in names.items()};addresses=dict(addresses,_ws_errorf=0x4fe0000);lib=Kernel(path.read_bytes(),addresses,isnative);cpu=lib.cpu
 def zero(cpu,a,z,u):
  sp=cpu.reg_read(UC_X86_REG_RSP);dest=int.from_bytes(cpu.mem_read(sp,8),'little');cpu.reg_write(UC_X86_REG_RSP,sp+8);cpu.reg_write(lib.pc,dest);cpu.reg_write(lib.result,0)
 for n in ['_scheduler_api_entry_checkpoint','_scheduler_preempt_checkpoint','_free']:
  a=addresses[n];cpu.hook_add(UC_HOOK_CODE,zero,begin=a,end=a)
 results=[];rng=random.Random(110)
 for count in [0,1,3]:
  record=bytearray(rng.randbytes(0x2a8*max(count,1)))
  for i in range(max(count,1)):
   base=i*0x2a8;record[base]=1;struct.pack_into('<I',record,base+4,i+17);struct.pack_into('<Q',record,base+0xa8,0x3007000);struct.pack_into('<Q',record,base+0xb8,0);record[base+0xc4:base+0xc4+0x1e0]=bytes(0x1e0)
  cpu.mem_write(0x3007000,b'Hex Editor\0');cpu.mem_write(0x3000000,bytes(record));cpu.mem_write(0x25fc418,struct.pack('<Q',count));cpu.mem_write(0x25fc420,struct.pack('<Q',0x3000000));cpu.mem_write(0x25fbf0c,bytes(8))
  for win in [0,17,18,19,99]:
   for values in [(b'Document|Quit',b'Clipboard|Cut|Copy|Paste',b'View'),(b'',b'',b''),(b'a'*200,b'b'*170,b'c'*161)]:
    for i,value in enumerate(values):cpu.mem_write(0x3004000+0x1000*i,value+b'\0')
    status=lib.call('_wm_kernel_program_app_window_set_menus',win,0x3004000,0x3005000,0x3006000,result_bits=32);cpu.mem_write(0x3008000,b'\xa5'*648);query=lib.call('_wm_kernel_program_app_window_query',win,0x3008000,result_bits=32);results.append((status,query,bytes(cpu.mem_read(0x3008000,648)),bytes(cpu.mem_read(0x3000000,len(record)))))
 return results
n=exercise(native,True);s=exercise(source,False)
assert any(x[1] and x[2][88:152].split(b'\0')[0]==b'Hex Editor'for x in n),'no actual title query'
assert all(x[2][632:]==b'\xa5'*16 for x in n),'query wrote past its wire record'
for i,(x,y)in enumerate(zip(n,s)):assert x==y,(i,x[:2],y[:2],x[2][88:200],y[2][88:200])
print('Kernel window menus:',len(n),'native/source set-menu, complete query records and guards match.')
