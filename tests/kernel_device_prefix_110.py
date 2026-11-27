#!/usr/bin/env python3
"""Compare volume-prefix parsing and preserved device names with the reference.

Pooka's Free Software License. Device lookup is a controlled fixture boundary.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RAX,UC_X86_REG_RSP,UC_X86_REG_RIP

CASES=[b'',b'plain',b'[Firmware\\1\\1]\\file',b'[boot\\1\\1]/file',
       b'[disk\\0]file',b'[a\\b]',b'[a\\b\\c\\d\\e\\f]',
       b'[a\\b\\c\\d\\e\\f\\g]',b'[a]',b'[]',b'[a\\]',b'[\\b]',
       b'[a b\\c]',b'[a-1_B\\C2]',b'[a\\b',b'[[a\\b]]file',
       b'['+b'x'*129+b']file']

def exercise(path,mapping=None):
 addresses={name:mapping['recovered_%x'%address] if mapping else address
            for name,address in [('parse',0x20a5cc0),('lookup',0x20e1fa0)]}
 addresses['_ws_errorf']=0x4fe0000
 lib=Kernel(path.read_bytes(),addresses);cpu=lib.cpu;events=[];reply=[3]
 def lookup(c,address,size,user):
  pointer=c.reg_read(UC_X86_REG_RSI)
  events.append((c.reg_read(UC_X86_REG_RDI)&0xffffffff,
                 bytes(c.mem_read(pointer,160)).split(b'\0')[0],
                 c.reg_read(UC_X86_REG_RDX)))
  c.reg_write(UC_X86_REG_RAX,reply[0]&0xffffffff)
  sp=c.reg_read(UC_X86_REG_RSP)
  target=int.from_bytes(c.mem_read(sp,8),'little')
  c.reg_write(UC_X86_REG_RSP,sp+8);c.reg_write(UC_X86_REG_RIP,target)
 cpu.hook_add(UC_HOOK_CODE,lookup,begin=addresses['lookup'],end=addresses['lookup'])
 rows=[]
 for text in CASES:
  for result in [-1,0,3]:
   for outputs in range(4):
    reply[0]=result;events.clear()
    cpu.mem_write(0x3000000,text+b'\0');cpu.mem_write(0x3001000,b'\xa5'*40)
    value=lib.call('parse',0x3000000,0x3001008 if outputs&1 else 0,
                   0x3001018 if outputs&2 else 0,result_bits=32)
    record=bytes(cpu.mem_read(0x3001000,40))
    assert record[:8]==record[32:]==b'\xa5'*8
    assert record[12:24]==b'\xa5'*12
    rows.append((value,record,list(events)))
 return rows

if __name__=='__main__':
 parser=argparse.ArgumentParser(description=__doc__)
 parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path)
 parser.add_argument('--map',type=Path,required=True);args=parser.parse_args()
 native=exercise(args.reference);source=exercise(args.source,json.loads(args.map.read_text()))
 differences=[(i,a,b)for i,(a,b)in enumerate(zip(native,source))if a!=b]
 assert not differences,differences[:5]
 assert any(row[2]==[(0xfffffffe,b'Firmware\\1\\1',128)]for row in native)
 print('Volume-prefix parsing, lookup arguments and optional outputs match: %d cases.'%len(native))
