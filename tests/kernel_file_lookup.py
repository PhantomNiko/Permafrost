#!/usr/bin/env python3
"""Compare i386 path normalization and the private file-lookup result contract.

Pooka's Free Software License. Files are resident synthetic records.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect

def exercise(path,addresses,native):
 results=[]
 for name in [None,b'',b'Hello.txt',b'/Hello.txt',b'./Hello.txt',b'hello.txt',b'Folder/item.txt',b'Folder\\item.txt',b'/Folder/item.txt',b'missing',b'Folder//item.txt',b'../Hello.txt']:
  l=Kernel(path.read_bytes(),addresses,native);c=l.cpu;rows=bytearray(544)
  for i,s in enumerate([b'Hello.txt',b'Folder/item.txt']):rows[i*272:i*272+len(s)]=s
  c.mem_write(0x3000000,bytes(rows));fs=bytearray(188);struct.pack_into('<3I',fs,0,0x3000000,2,2);fs[184]=1;c.mem_write(0x2130724,bytes(fs));c.mem_write(0x3001000,(name or b'')+b'\0');results.append(l.call('_fs_find_file',0 if name is None else 0x3001000,result_bits=32))
 return results

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',required=True,type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference,native,True);s=exercise(a.source,source,False);assert e==s,(e,s);assert e[2]==0 and e[6]==1 and e[9]==0xffffffff,e;print('File lookup:',len(e),'native null, missing, case, separator, normalization and index-result comparisons passed.')
