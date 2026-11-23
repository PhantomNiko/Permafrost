#!/usr/bin/env python3
"""Compare IA32 filesystem runtime admission, callback traffic and disk writes.

Pooka's Free Software License. Reference binaries and volume bytes are external
inputs. All writes affect an isolated in-memory disk copy.
"""
import argparse,hashlib,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from pfs import Image
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_EAX
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('disk',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args()
meta,_=inspect(a.reference.read_bytes());assert meta['cpu']==7;mapping=json.loads(a.map.read_text());raw=a.disk.read_bytes();image=Image(raw);original=raw[image.base:image.base+(image.total+2)*131072];results=[]
for native in [True,False]:
 lib=Kernel((a.reference if native else a.source).read_bytes(),{'entry':0x2057e30 if native else mapping['recovered_2057e30'],'_ws_errorf':0x4fe0000});lib.instruction_limit=500000000;c=lib.cpu;disk=bytearray(original);events=[]
 protected=[(0x3000000,0xd8),(0x3300000,0x20000),(0x3380000,0x20000),(0x3400000,16*0x790),(0x3500000,0x80000),(0x3600000,0x80000)]
 for address,length in protected:c.mem_write(address-16,b'\xa5'*16);c.mem_write(address+length,b'\xa5'*16)
 c.mem_write(0x3001000,struct.pack('<6I',0x3001500,0x3200000,0x3200010,0x3200020,len(disk),0));c.mem_write(0x3002000,struct.pack('<8I',0x3300000,0x3380000,0x3400000,0x3500000,16,0x3600000,17,0))
 for address in [0x3200000,0x3200010,0x3200020]:c.mem_write(address,b'\xc3')
 def io(c,pc,size,user):
  sp=c.reg_read(UC_X86_REG_ESP);context,low,high,buffer,count=struct.unpack('<5I',bytes(c.mem_read(sp+4,20)));assert context==0x3001500
  offset=low|(high<<32);success=offset+count<=len(disk);events.append((pc,offset,buffer,count,success))
  assert 0x3000000<=buffer and buffer+count<=0x4000000
  if success and pc==0x3200000:c.mem_write(buffer,bytes(disk[offset:offset+count]))
  if success and pc==0x3200010:disk[offset:offset+count]=bytes(c.mem_read(buffer,count))
  c.reg_write(UC_X86_REG_EAX,int(success))
 for address in [0x3200000,0x3200010]:c.hook_add(UC_HOOK_CODE,io,begin=address,end=address)
 def flush(c,pc,size,user):events.append(('flush',));c.reg_write(UC_X86_REG_EAX,1)
 c.hook_add(UC_HOOK_CODE,flush,begin=0x3200020,end=0x3200020)
 status=lib.call('entry',0x3000000,0x3001000,1,0,0,0,0x3002000,result_bits=32);assert status==0,(native,status)
 for address,length in protected:
  assert bytes(c.mem_read(address-16,16))==bytes(c.mem_read(address+length,16))==b'\xa5'*16,(native,hex(address),'workspace canary')
 mounted=bytearray(c.mem_read(0x3000000,0xd8))
 # Callback implementations move to the reconstructed C core.
 for offset,entry in [(48,0x204a440),(96,0x204a440),(144,0x20584d0)]:
  expected=entry if native else mapping['recovered_%x'%entry]
  assert struct.unpack_from('<I',mounted,offset)[0]==expected
  struct.pack_into('<I',mounted,offset,entry)
 results.append((status,events,hashlib.sha256(disk).digest(),bytes(mounted),bytes(c.mem_read(0x3400000,0x790))))
for index,(expected,actual)in enumerate(zip(*results)):
 assert expected==actual,(index, next(((i,expected[i],actual[i])for i in range(min(len(expected),len(actual)))if expected[i]!=actual[i]),None)if isinstance(expected,(bytes,list))else(expected,actual))
print('IA32 PFS runtime admission: %d native/source I/O operations, disk bytes, mounted state and workspace canaries match.'%len(results[0][1]))
