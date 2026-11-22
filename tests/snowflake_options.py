#!/usr/bin/env python3
"""Compare Snowflake's native and recovered command-line option handling.

Pooka's Free Software License. No compilation or guest file I/O is performed.
"""
import argparse,struct
from pathlib import Path
from desktop_calendar import load
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.arm64_const import *
from unicorn.x86_const import *

def exercise(reference,source,library,folder):
 libs=load(reference,source,folder,library);metadata,memory=inspect(reference.read_bytes());native={n:a for a,n in metadata['symbols']};sm,_=inspect(source.read_bytes());symbols={n:a for a,n in sm['symbols']}
 name=next(n for n in native if n.startswith('__ZL15snow_parse_args'))
 sessions=[]
 for i,lib in enumerate(libs):
  if not i and lib.cpu_type==12:
   end=next(a+n for k,a,n in metadata['sections']if k=='__text');lib.cpu.mem_write(end,memory[end-metadata['base']:])
  if i:lib.exports['initialize']=lib.base+symbols['_pf_app_initialize'];lib.call('initialize')
  def address(name):return lib.base+(symbols['_recovered_%x'%(native[name]-metadata['base']+0x10000000)]if i else native[name])
  lib.exports['parse']=address(name);events=[];sessions.append(events)
  def log(cpu,address,size,user,lib=lib,events=events):
   if lib.cpu_type==7:pointer=int.from_bytes(cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP)+8,4),'little')
   else:pointer=cpu.reg_read(UC_ARM_REG_R1 if lib.cpu_type==12 else UC_ARM64_REG_X1 if lib.cpu_type==0x100000c else UC_X86_REG_RSI)
   events.append(bytes(cpu.mem_read(pointer,512)).split(b'\0')[0]);cpu.reg_write(lib.result,0)
   if lib.cpu_type in [12,0x100000c]:cpu.reg_write(lib.pc,cpu.reg_read(UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_X30))
   else:
    reg=UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP;sp=cpu.reg_read(reg);word=8 if lib.wide else 4;pc=int.from_bytes(cpu.mem_read(sp,word),'little');cpu.reg_write(reg,sp+word);cpu.reg_write(lib.pc,pc)
  entry=address('_fprintf');lib.cpu.hook_add(UC_HOOK_CODE,log,begin=entry,end=entry)
 cases=[[],['--help'],['--version'],['main.cpp'],['a.cpp','b.cpp','-o','app'],['-oapp'],['--arch','arm64'],['--arch=i386'],['-arch','x86_64'],['--format','macho'],['--format=elf'],['-S'],['-c'],['--emit-c'],['--run'],['-m32'],['-m64'],['--entry','start'],['--entry=start'],['--target','arm64'],['--target=arm64'],['--bad'],['-o'],['--arch'],['--format'],['-I','include','main.cpp'],['-D','VALUE=1','main.cpp'],['-O2','-g','hello.cpp'],['input%d.cpp'%i for i in range(128)],['input%d.cpp'%i for i in range(129)]]
 for arguments in cases:
  results=[]
  for lib,events in zip(libs,sessions):
   word=8 if lib.wide else 4;argv=0x2e0000;strings=0x2e1000;options=0x2f0000;events.clear()
   for index,value in enumerate(['snowflake']+arguments):
    lib.cpu.mem_write(strings,value.encode()+b'\0');lib.cpu.mem_write(argv+index*word,strings.to_bytes(word,'little'));strings+=len(value)+1
   lib.cpu.mem_write(options,b'\x5a'*0x500);status=lib.call('parse',len(arguments)+1,argv,options)
   length=0x438 if lib.wide else 0x228;data=bytes(lib.cpu.mem_read(options,length));cells=[]
   for offset in range(0,length,word):
    value=int.from_bytes(data[offset:offset+word],'little')
    # Normalize immutable string addresses after each application's relocation.
    try:
     text=bytes(lib.cpu.mem_read(value,512)).split(b'\0')[0]
     cells.append(('text',text)if value>0x10000 and text and all(32<=c<127 for c in text)else value)
    except Exception:cells.append(value)
   results.append((status,cells,tuple(events)))
  assert results[0]==results[1],(arguments,results)
 print('Snowflake options: %d native parsing, error, target, and input-limit comparisons passed.'%len(cases))

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.library,a.output)
