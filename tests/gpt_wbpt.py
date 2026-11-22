#!/usr/bin/env python3
"""Validate whole-disk WBPT mirrors used by native installation tooling.

Pooka's Free Software License.
"""
from pathlib import Path
import struct,sys
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from gpt import make_disk,unpack_disk,replace_payload

def main():
 payload=bytearray(256*512);struct.pack_into('<4sHH',payload,65*512,b'WBPT',1,3)
 records=[(1,66,62,0,b'firmware'),(5,128,128,0,b'user data'),(0,0,0,0,b'')]
 for i,record in enumerate(records):struct.pack_into('<4I16s',payload,65*512+32+i*32,*record)
 esp=bytes(2048*512);disk=make_disk(esp,payload);first=2048+len(esp)//512
 assert unpack_disk(disk)==(esp,payload)
 assert disk[65*512:65*512+8]==payload[65*512:65*512+8]
 for i,(kind,start,sectors,flags,label)in enumerate(records):
  row=struct.unpack_from('<4I16s',disk,65*512+32+i*32)
  assert row==(kind,start+first if kind else start,sectors,flags,label.ljust(16,b'\0'))
 changed=bytearray(payload);changed[200*512:200*512+5]=b'hello'
 updated=replace_payload(disk,changed);assert unpack_disk(updated)==(esp,changed)
 assert updated[65*512:66*512]==disk[65*512:66*512]
 invalid=bytearray(payload);struct.pack_into('<I',invalid,65*512+36,257)
 try:make_disk(esp,invalid)
 except ValueError:pass
 else:raise AssertionError('out-of-range WBPT mirror accepted')
 print('GPT WBPT mirror: rebased records, unchanged nested payload, updates, and bounds passed.')

if __name__=='__main__':main()
