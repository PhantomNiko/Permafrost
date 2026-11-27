#!/usr/bin/env python3
"""Compare native Type1 operand encodings; Pooka's Free Software License."""
from pathlib import Path
import json,struct
from kernel_font import FontKernel
from native import inspect
import argparse
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);args=p.parse_args();ref=args.reference.read_bytes();src=args.source.read_bytes();m,_=inspect(ref);names={n:a for a,n in m['symbols']};mapping=json.loads(args.map.read_text());cases=[bytes([v])for v in range(32,247)]+[bytes([v,w])for v in range(247,255)for w in [0,127,255]]+[b'\xff'+struct.pack('>i',v)for v in [-0x7fffffff,-65536,-1,0,1,65536,0x7fffffff]];results=[]
for label,binary in [('native',ref),('source',src)]:
 k=FontKernel(binary,None if label=='native'else mapping,names);d=k.library;c=k.cpu;d.exports['execute']=0x2091c40 if label=='native'else mapping['recovered_2091c40'];rows=[]
 for code in cases:
  code+=b'\x0b';c.mem_write(0x3100000,bytes(320));c.mem_write(0x3100008,struct.pack('<d',.08));c.mem_write(0x3101000,struct.pack('<QQQ',0x3102000,len(code),len(code)));c.mem_write(0x3102000,code);result=d.call('execute',0x3100000,0x3101000,0,result_bits=8);pointer,count,capacity=struct.unpack('<QQQ',c.mem_read(0x3100010,24));value=bytes(c.mem_read(pointer,count*8))if count else b'';rows.append((result,count,value));k.verify()
 results.append(rows)
bad=[(code.hex(),n,s)for code,n,s in zip(cases,*results)if n!=s];print('OPERAND DIFFERENCES',bad[:20],flush=True);assert not bad;print('Type1 operand decoding matches:',len(cases),'cases.',flush=True)
