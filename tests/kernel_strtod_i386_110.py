#!/usr/bin/env python3
"""Compare native i386 decimal parsing and x87 results; Pooka's Free Software License."""
from pathlib import Path
import json,struct,sys
import argparse
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'));from kernel_scalars import Kernel
from unicorn.x86_const import UC_X86_REG_FP0,UC_X86_REG_FPTAG,UC_X86_REG_FPSW,UC_X86_REG_FPCW
cases=['0','-0','1','-1','10','1000','805','-201','620','-76','1.75','0.5','.5','-.5','123.456','\t -123.5 tail','2e0','2e1','2e2','2e3','2e8','2e9','2e-1','2e-8','2e-9','123x','x','','+','1e','1e-','00.00','  .0','1e20','1e-20'];p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);args=p.parse_args();mapping=json.loads(args.map.read_text());results=[]
for label,path in [('native',args.reference),('source',args.source)]:
 lib=Kernel(Path(path).read_bytes(),{'parse':0x2003280 if label=='native'else mapping['recovered_2003280'],'_ws_errorf':0x4fe0000});rows=[]
 for text in cases:
  c=lib.cpu;c.reg_write(UC_X86_REG_FPTAG,0xffff);c.reg_write(UC_X86_REG_FPSW,0);c.reg_write(UC_X86_REG_FPCW,0x37f);c.mem_write(0x3000000,text.encode()+b'\0');c.mem_write(0x3001000,b'\xa5'*20);lib.call('parse',0x3000000,0x3001008,result_bits=32);top=(c.reg_read(UC_X86_REG_FPSW)>>11)&7;fp=c.reg_read(UC_X86_REG_FP0+top);raw=bytes(c.mem_read(0x3001000,20));assert raw[:8]==raw[12:]==b'\xa5'*8;rows.append((fp,int.from_bytes(raw[8:12],'little')-0x3000000))
 results.append(rows)
bad=[(text,n,s)for text,n,s in zip(cases,*results)if n!=s];print('DIFFERENCES',bad,flush=True);assert not bad;print('I386 decimal parser, x87 results and guarded end pointers match:',len(cases),'cases.',flush=True)
