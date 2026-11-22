#!/usr/bin/env python3
"""Compare BIOS command log capture, clipping, and private register arguments.

Pooka's Free Software License. Log records are synthetic; no hardware is used.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect

def exercise(path,addresses,native):
 results=[]
 for lines in [[],[b'5'],[b'alpha',b'beta'],[b'x'*1023,b'last'],[b'WinterShell error: bad input',b'next']]:
  for start in [0,1,len(lines),len(lines)+1]:
   for capacity in [0,1,2,8,4096]:
    for prefix in [b'',b'existing']:
     for success in [0,1]:
      lib=Kernel(path.read_bytes(),addresses,native);c=lib.cpu;records=bytearray(max(1,len(lines))*0x402)
      for i,line in enumerate(lines):records[i*0x402:i*0x402+len(line)]=line;struct.pack_into('<H',records,i*0x402+0x400,len(line))
      c.mem_write(0x3000000,bytes(records));c.mem_write(0x215bc80,struct.pack('<II',0x3000000,len(lines)));c.mem_write(0x3100000,prefix+b'\0'+b'\xa5'*(4112-len(prefix)-1))
      lib.call('_command_output_append_log_range',0x3100000,capacity,start,success,result_bits=32);output=bytes(c.mem_read(0x3100000,4112));error=lib.call('_command_log_range_has_winterscript_error',start,result_bits=8);results.append((output,error))
 return results

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',required=True,type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};abi=json.loads(a.abi.read_text());mapping=json.loads(a.map.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference,native,True);s=exercise(a.source,source,False);assert any(x[1]for x in e),'error records were not exercised';assert e==s,[(i,x[0][:30],y[0][:30],x[1],y[1])for i,(x,y)in enumerate(zip(e,s))if x!=y][:8];print('BIOS command output:',len(e),'native log-copy, clipping, fallback, error-range and buffer-guard comparisons passed.')
