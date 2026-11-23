#!/usr/bin/env python3
"""Compare ARM64 desktop theme, client pixels and script setting text.

Pooka's Free Software License. Imported UI and script services are fixtures.
"""
from pathlib import Path
import struct,sys,argparse,tempfile
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'));from native import inspect
from dylib import inspect as dynamic
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import *
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args();temporary=tempfile.TemporaryDirectory(prefix='permafrost-desktop-presentation-');results=[]
for index,path in enumerate([a.reference,a.source]):
 b=bytearray(path.read_bytes());struct.pack_into('<I',b,12,6);tmp=Path(temporary.name)/str(index);tmp.write_bytes(b);meta,_=inspect(b);lib=DLL(tmp,api_base=0x82010800,instruction_limit=100000000);c=lib.cpu;symbols={n:lib.base+a-meta['base']for a,n in meta['symbols']}
 calls=[]
 for stub in dynamic(b)['stubs']:
  if stub['name']not in ['_memcmp','_memcpy','_memset','___bzero','_bzero','_terror_ui_colour']:continue
  pc=lib.base+stub['address']-meta['base']
  def memory(cpu,pc,size,name):
   d,s,n=[cpu.reg_read(r)for r in [UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2]];result=d
   if name=='_memcmp':result=(bytes(cpu.mem_read(d,n))>bytes(cpu.mem_read(s,n)))-(bytes(cpu.mem_read(d,n))<bytes(cpu.mem_read(s,n)))
   elif name=='_memcpy':cpu.mem_write(d,bytes(cpu.mem_read(s,n)))
   elif name=='_terror_ui_colour':calls.append(d);result=(d*0x123456+0x112233)&0xffffff
   else:cpu.mem_write(d,bytes([s&255])*n if name=='_memset'else bytes(s))
   cpu.reg_write(UC_ARM64_REG_X0,result&0xffffffffffffffff)
  c.mem_write(pc,struct.pack('<I',0xd65f03c0));c.hook_add(UC_HOOK_CODE,memory,stub['name'],begin=pc,end=pc)
 if index:lib.exports['initialize']=symbols['_pf_app_initialize'];lib.call('initialize');state=lib.base+next(a for a,n in meta['data_symbols']if n=='_pf_module_state')-meta['base'];end=0x2336c
 else:state=lib.base;end=0
 def write(a,data):c.mem_write(state+a-end,data)
 lib.exports['draw']=symbols['_recovered_10010cc4']if index else lib.base+0x10cc4
 lib.exports['theme']=symbols['_recovered_10004be8']if index else lib.base+0x4be8
 outputs=[]
 for role in [0,1,2,3,4,5,6,7,8,9,10,15,16,255]:
  calls.clear();value=lib.call('theme',role,result_bits=32);outputs.append((value,list(calls)));assert calls==[role]
 for ww,wh,iw,ih,mode in [(40,30,40,30,0),(80,50,40,30,0),(100,60,40,30,1),(320,32,40,30,0)]:
  w,h=400,100;picture=bytes(v for y in range(ih)for x in range(iw)for v in [x*7%256,y*13%256,(x+y)*3%256,255]);c.mem_write(0x3100000,picture)
  record=bytearray(0x6cb0);record[0]=1;struct.pack_into('<I',record,8,mode);struct.pack_into('<I',record,0x10,6);struct.pack_into('<4I',record,0x5c,5,7,ww,wh);struct.pack_into('<Q',record,0x69f8,0x3100000);struct.pack_into('<I',record,0x6a00,len(picture));struct.pack_into('<4I',record,0x6a08,iw,ih,iw*4,0x112233);record[0x6a18]=0xc0;c.mem_write(0x3001000,bytes(record));write(0x2f0a8,struct.pack('<II',w,h));write(0x61328,struct.pack('<Q',0x3010000));c.mem_write(0x300fff0,b'\xa5'*16+bytes([42])*w*h*4+b'\xa5'*16);calls.clear();lib.call('draw',0x3001000);pixels=bytes(c.mem_read(0x300fff0,w*h*4+32));assert pixels[:16]==pixels[-16:]==b'\xa5'*16;outputs.append((pixels,list(calls)))
 lib.exports['format']=symbols['_recovered_1000aa60']if index else lib.base+0xaa60
 c.mem_write(0x82010808,struct.pack('<I',0x264));current=[1,0]
 def query(cpu,pc,size,data):
  out=cpu.reg_read(UC_ARM64_REG_X1);cpu.mem_write(out,struct.pack('<Q',current[0]|((current[1]&0xffffffff)<<32))+bytes(8)+struct.pack('<Q',0x3005000)+bytes(16));cpu.reg_write(UC_ARM64_REG_X0,current[0]!=0)
 c.mem_write(0x82010a04,struct.pack('<I',0x10030));c.mem_write(0x10030,struct.pack('<I',0xd65f03c0));c.hook_add(UC_HOOK_CODE,query,begin=0x10030,end=0x10030)
 c.mem_write(0x3001000,b'value\0');c.mem_write(0x3002000,b'default\0');c.mem_write(0x3005000,b'clear\0')
 cases=[(1,v)for v in [0,1,9,10,15,50,100,2147483647,-1,-42,-2147483648]]+[(0,0),(3,0),(5,0),(5,1)]
 for kind,value in cases:
  current[:]=[kind,value]
  for capacity in [0,1,2,4,64]:
   c.mem_write(0x3002ff0,b'\xa5'*16+bytes(80)+b'\xa5'*16);lib.call('format',0x3001000,0x3003000,capacity,0x3002000);out=bytes(c.mem_read(0x3002ff0,112));assert out[:16]==out[-16:]==b'\xa5'*16
   if kind==1 and capacity==64:assert out[16:].split(b'\0')[0]==str(value).encode(),(index,value,out)
   outputs.append(out)
 results.append(outputs)
assert results[0]==results[1],[(i,sum(a!=b for a,b in zip(n[0],s[0]))if isinstance(n[0],bytes)else(n,s))for i,(n,s)in enumerate(zip(*results))if n!=s]
temporary.cleanup()
print('ARM64 desktop: 14 theme roles, 4 guarded client rasters and 75 script-setting text cases match.')
