"""Compare allocator forwarding and WMAP bounds; Pooka's Free Software License."""
from pathlib import Path
import argparse,sys,struct
sys.path[:0]=['tests','tools'];from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm_const import *
from unicorn.arm64_const import *
p=argparse.ArgumentParser();p.add_argument('--arch',required=True);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);args=p.parse_args();arch=args.arch;wide=arch in ['x86_64','arm64'];bits=64 if wide else 32;api={'x86_64':0x280800,'i386':0x280800,'armv7':0x40010800,'arm64':0x82010800}[arch];results=[]
for label,path in [('native',args.reference),('source',args.source)]:
 d=DLL(path,api_base=api,allocator_base=0x20000);c=d.cpu;events=[]
 def arguments(c,count):
  if arch=='i386':return struct.unpack('<'+'I'*count,c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,count*4))
  registers=[UC_X86_REG_RDI,UC_X86_REG_RSI]if arch=='x86_64'else[UC_ARM_REG_R0,UC_ARM_REG_R1]if arch=='armv7'else[UC_ARM64_REG_X0,UC_ARM64_REG_X1]
  return tuple(c.reg_read(r)for r in registers[:count])
 for slot,name,count in [(0x4c,'malloc',1),(0x50,'free',1),(0x54,'realloc',2)]:
  address=0x22000+slot*16;c.mem_write(address,b'\xc3'if arch in ['x86_64','i386']else struct.pack('<I',0xe12fff1e if arch=='armv7'else 0xd65f03c0))
  def hook(c,a,z,user):
   name,count=user;events.append((name,arguments(c,count)));c.reg_write(d.result,0x3320000 if name!='free'else 0)
  c.hook_add(UC_HOOK_CODE,hook,(name,count),begin=address,end=address)
 rows=[]
 for magic,version,length,available in [(0x50414d57,1,412,True),(0,1,412,True),(0x50414d57,0,412,True)]+[(0x50414d57,1,n,True)for n in [0,11,12,79,80,83,84,87,88]]+[(0x50414d57,1,412,False)]:
  c.mem_write(api,struct.pack('<III',magic,version,length))
  for slot in [0x4c,0x50,0x54]:c.mem_write(api+slot,struct.pack('<I',0x22000+slot*16 if available else 0))
  for size in [0,17,0x100000007 if wide else 0xfffffff7]:
   for name,values in [('malloc',(size,)),('free',(0 if size==0 else 0x3301000,)),('realloc',(0 if size==0 else 0x3301000,size))]:
    events.clear();value=d.call('_'+name,*values,result_bits=bits);rows.append((name,value if name!='free'else None,list(events)))
 results.append(rows)
assert results[0]==results[1],[(i,a,b)for i,(a,b)in enumerate(zip(*results))if a!=b][:6]
print(arch,'allocator pointer/size forwarding and WMAP availability match:',len(results[0]),'cases.',flush=True)
