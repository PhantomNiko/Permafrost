#!/usr/bin/env python3
"""Native decimal parsing, end pointers and float bits; Pooka's Free Software License."""
from pathlib import Path
import json,struct
from kernel_scalars import Kernel
from unicorn.x86_const import UC_X86_REG_XMM0
import argparse
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);args=p.parse_args()
cases=['0','-0','1','-1','10','1000','805','-201','620','-76','1.75','0.5','.5','-.5','123.456','\t -123.5 tail','2e0','2e1','2e2','2e3','2e8','2e9','2e-1','2e-8','2e-9','123x','x','','+','1e','1e-','00.00','  .0','1e20','1e-20'];results=[];mapping=json.loads(args.map.read_text())
for label,path in [('native',args.reference),('source',args.source)]:
 lib=Kernel(path.read_bytes(),{'parse':0x2004df0 if label=='native'else mapping['recovered_2004df0'],'_ws_errorf':0x4fe0000});rows=[]
 for text in cases:
  lib.cpu.mem_write(0x3000000,text.encode()+b'\0');lib.cpu.mem_write(0x3001000,b'\xa5'*24);lib.call('parse',0x3000000,0x3001008,result_bits=64);bits=lib.cpu.reg_read(UC_X86_REG_XMM0)&0xffffffffffffffff;raw=bytes(lib.cpu.mem_read(0x3001000,24));assert raw[:8]==raw[16:]==b'\xa5'*8;row=(bits,int.from_bytes(raw[8:16],'little')-0x3000000);rows.append(row)

 results.append(rows)
differences=[(t,n,s)for t,n,s in zip(cases,*results)if n!=s];print('DIFFERENCES',differences,flush=True);assert not differences;print('Kernel decimal parser matches:',len(cases),'cases.',flush=True)
