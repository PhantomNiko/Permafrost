#!/usr/bin/env python3
"""Compare Snowflake compilation through an in-memory guest file interface.

Pooka's Free Software License. Generated executables are comparison outputs only.
"""
import argparse,struct
from pathlib import Path
from desktop_calendar import load
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.arm64_const import *
from unicorn.x86_const import *

def exercise(reference,source,library,folder,native_only=False):
 metadata,memory=inspect(reference.read_bytes());native={n:a for a,n in metadata['symbols']};sm,_=inspect(source.read_bytes());symbols={n:a for a,n in sm['symbols']};libs=load(reference,source,folder,library);sessions=[]
 if native_only:libs=libs[:1]
 for index,lib in enumerate(libs):
  lib.instruction_limit=500000000;lib.cpu.mem_map(0x8000000,0x10000000)
  if not index and lib.cpu_type==12:
   lib.cpu.mem_write(0x1000,memory[0x1000:])
  if index:lib.exports['initialize']=lib.base+symbols['_pf_app_initialize'];lib.call('initialize')
  state={'next':0x8000000,'blocks':{},'files':{},'writes':[],'messages':[]};sessions.append(state)
  def mapped(name):return lib.base+(symbols['_recovered_%x'%(native[name]-metadata['base']+0x10000000)]if index else native[name])
  lib.exports['main']=mapped('_snowflake_main')
  def args(number,lib=lib):
   cpu=lib.cpu
   if lib.cpu_type==7:return struct.unpack('<'+'I'*number,bytes(cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP)+4,number*4)))
   registers=[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]if lib.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4,UC_ARM64_REG_X5]if lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8,UC_X86_REG_R9]
   return [cpu.reg_read(r)for r in registers[:number]]
  def finish(value=0,lib=lib):
   cpu=lib.cpu;cpu.reg_write(lib.result,value)
   if lib.cpu_type in [12,0x100000c]:cpu.reg_write(lib.pc,cpu.reg_read(UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_X30))
   else:
    reg=UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP;word=8 if lib.wide else 4;sp=cpu.reg_read(reg);pc=int.from_bytes(cpu.mem_read(sp,word),'little');cpu.reg_write(reg,sp+word);cpu.reg_write(lib.pc,pc)
  def allocate(size,lib=lib,state=state):
   assert 0<=size<=0x4000000,('allocation size',hex(size),hex(lib.cpu.reg_read(UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_X30))if lib.cpu_type in [12,0x100000c]else bytes(lib.cpu.mem_read(lib.cpu.reg_read(UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP),8 if lib.wide else 4)).hex());pointer=state['next'];state['next']=(pointer+max(size,1)+15)&-16;assert state['next']<0x18000000;state['blocks'][pointer]=size;return pointer
  def cstring(pointer,lib=lib):return bytes(lib.cpu.mem_read(pointer,4096)).split(b'\0')[0]
  def malloc(c,a,z,u,args=args,finish=finish,allocate=allocate):finish(allocate(args(1)[0]))
  def free(c,a,z,u,args=args,finish=finish,state=state):state['blocks'].pop(args(1)[0],None);finish()
  def realloc(c,a,z,u,args=args,finish=finish,allocate=allocate,state=state):
   old,size=args(2);pointer=allocate(size)
   if old:c.mem_write(pointer,bytes(c.mem_read(old,min(size,state['blocks'].get(old,0)))));state['blocks'].pop(old,None)
   finish(pointer)
  def read(c,a,z,u,args=args,finish=finish,allocate=allocate,state=state,lib=lib,cstring=cstring):
   path,length=args(2);data=state['files'].get(cstring(path))
   if data is None:finish(0);return
   pointer=allocate(len(data)+1);c.mem_write(pointer,data+b'\0');c.mem_write(length,len(data).to_bytes(8 if lib.wide else 4,'little'));finish(pointer)
  def write(c,a,z,u,args=args,finish=finish,state=state,cstring=cstring):
   path,pointer,length=args(3);assert length<=0x1000000;state['writes'].append((cstring(path),bytes(c.mem_read(pointer,length))));finish(1)
  fprintf_addresses=set()
  def message(c,a,z,u,args=args,finish=finish,state=state,cstring=cstring,fprintf_addresses=fprintf_addresses):
   values=args(2);pointer=values[1]if a in fprintf_addresses else values[0];state['messages'].append(cstring(pointer));finish(0)
  fprintf_addresses.add(mapped('_fprintf'))
  hooks=[('_malloc',malloc),('_free',free),('_realloc',realloc),('_printf',message),('_fprintf',message)]
  for match,callback in [('snow_read_file',read),('snow_write_file',write)]:hooks.append((next(n for n in native if match in n),callback))
  for name,callback in hooks:
   addresses=[mapped(name)]
   if not index and lib.cpu_type in [7,12]:addresses.append(native[name])
   if name=='_fprintf':fprintf_addresses.update(addresses)
   for address in addresses:lib.cpu.hook_add(UC_HOOK_CODE,callback,begin=address,end=address)
 cases=[(b'int main(){return 7;}',['--arch','arm64','-o','out']),(b'int main(){return 2+3*4;}',['--emit-c','-o','out.c']),(b'#define X 6\nint main(){return X*7;}',['--arch','i386','-o','out'])]
 cases.extend((text,['--arch',arch,'-o','out'])for arch in ['i386','x86_64','armv7','arm64']for text in [b'int main(){int x=3; for(int i=0;i<4;i++){x=x*2;} return x;}',b'int twice(int x){return x*2;} int main(){return twice(21);}',b'enum Values { FIRST=3, SECOND=9 }; int main(){return SECOND-FIRST;}',b'int main(){printf("hello %d\\n",7); return 0;}',b'int main(int argc,char **argv){return argc+2;}'])
 for text,options in cases:
  outputs=[]
  for lib,state in zip(libs,sessions):
   state.update(next=0x8000000,blocks={},files={b'main.cpp':text},writes=[],messages=[]);argv,strings=0x2e0000,0x2e1000;word=8 if lib.wide else 4
   for index,value in enumerate(['snowflake',*options,'main.cpp']):
    data=value.encode()+b'\0';lib.cpu.mem_write(strings,data);lib.cpu.mem_write(argv+index*word,strings.to_bytes(word,'little'));strings+=len(data)
   try:result=lib.call('main',len(options)+2,argv,result_bits=32)
   except AssertionError as error:raise AssertionError(('native'if lib is libs[0]else'source',text,state['messages']))from error
   assert result==0,(text,result,state['messages']);assert state['writes'],('no generated output',text,state['messages']);outputs.append(state['writes'])
  if not native_only and outputs[0]!=outputs[1]:
   for index,output in enumerate(outputs):
    for name,data in output:(folder/('native-output'if index==0 else'source-output')).write_bytes(data)
   raise AssertionError(('generated output differs',text,[(name,len(data))for output in outputs for name,data in output],next(((i,a,b)for i,(a,b)in enumerate(zip(outputs[0][0][1],outputs[1][0][1]))if a!=b),None)))
  print('Compiled',text,'outputs',[(name,len(data))for name,data in outputs[0]])
 print('Snowflake compilation: %d in-memory source compilation cases passed.'%len(cases))
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);p.add_argument('--native-only',action='store_true');a=p.parse_args();exercise(a.reference,a.source,a.library,a.output,a.native_only)
