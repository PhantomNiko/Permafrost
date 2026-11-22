#!/usr/bin/env python3
"""Compare native CRT argument and environment delivery before compiler main.

Pooka's Free Software License. Kernel services are intercepted in the emulator.
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
 metadata,memory=inspect(reference.read_bytes());native={n:a for a,n in metadata['symbols']};sm,_=inspect(source.read_bytes());symbols={n:a for a,n in sm['symbols']}
 libs=load(reference,source,folder,library,cpu_model=UC_CPU_ARM64_MAX if metadata['cpu']==0x100000c else None);sessions=[]
 for index,lib in enumerate(libs):
  if index==0 and lib.cpu_type==12:
   end=next(a+n for k,a,n in metadata['sections']if k=='__text');lib.cpu.mem_write(end,memory[end-metadata['base']:])
  if index==0 and lib.cpu_type==0x1000007:
   # Static GOT entries need relocation in the diagnostic high mapping.
   for kind,address,length in metadata['sections']:
    if kind!='__got':continue
    for place in range(address,address+length,8):
     value=int.from_bytes(memory[place-metadata['base']:place-metadata['base']+8],'little')
     if metadata['base']<=value<metadata['end']:lib.cpu.mem_write(lib.base+place,struct.pack('<Q',lib.base+value))
  def mapped(name):return lib.base+(symbols['_recovered_%x'%(native[name]-metadata['base']+0x10000000)]if index else native[name])
  lib.exports['entry']=lib.base+symbols['_main']if index else mapped('_winterboot_tayga_c_entry');lib.exports['getenv']=mapped('_getenv')
  state={'events':[],'command':b'','available':True};sessions.append(state)
  def args(number,lib=lib):
   cpu=lib.cpu
   if lib.cpu_type==7:return struct.unpack('<'+'I'*number,bytes(cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP)+4,number*4)))
   registers=[UC_ARM_REG_R0,UC_ARM_REG_R1]if lib.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1]if lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI]
   return [cpu.reg_read(r)for r in registers[:number]]
  def finish(value=1,lib=lib):
   cpu=lib.cpu;cpu.reg_write(lib.result,value)
   if lib.cpu_type in [12,0x100000c]:cpu.reg_write(lib.pc,cpu.reg_read(UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_X30))
   else:
    reg=UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP;word=8 if lib.wide else 4;sp=cpu.reg_read(reg);pc=int.from_bytes(cpu.mem_read(sp,word),'little');cpu.reg_write(reg,sp+word);cpu.reg_write(lib.pc,pc)
  def info(cpu,address,size,user,lib=lib,state=state,args=args,finish=finish):
   state['events'].append('info');out=args(1)[0];record=bytearray(0x620);path=b'Tayga/usr/bin/snowflake';record[0x10d:0x10d+len(path)]=path;command=state['command'][:511];record[0x21e:0x21e+len(command)]=command;environment=b'MODE=debug\nPORT=3\n';record[0x41e:0x41e+len(environment)]=environment;cpu.mem_write(out,bytes(record));finish(int(state['available']))
  def main(cpu,address,size,user,lib=lib,state=state,args=args,finish=finish):
   count,pointers=args(2);assert count<=64;word=8 if lib.wide else 4;values=[]
   for i in range(count):
    p=int.from_bytes(cpu.mem_read(pointers+i*word,word),'little');values.append(bytes(cpu.mem_read(p,512)).split(b'\0')[0])
   state['events'].append(('main',tuple(values)));finish(17)
  def end(cpu,address,size,user,lib=lib,state=state):state['events'].append('end');cpu.reg_write(lib.pc,lib.stop);cpu.emu_stop()
  for entry,callback in [(0x12000,info),(mapped('_main'),main),(0x12100,end)]:lib.cpu.hook_add(UC_HOOK_CODE,callback,begin=entry,end=entry)
  if index==0 and lib.cpu_type==7:lib.cpu.hook_add(UC_HOOK_CODE,main,begin=native['_main'],end=native['_main'])
  for table in lib.api_tables:
   lib.cpu.mem_write(table,struct.pack('<III',0x50414d57,1000000,0x300));lib.cpu.mem_write(table+0x144,struct.pack('<I',0x12000));lib.cpu.mem_write(table+0x30,struct.pack('<I',0x12100))
 cases=[(True,b'snowflake --version'),(True,b'snowflake -o "hello world" main.cpp'),(True,b"snowflake 'single quote' --arch arm64"),(True,b'snowflake\t-S\nmain.cpp'),(True,b''),(True,b'snowflake'+b' x'*70),(False,b'ignored')]
 for available,command in cases:
  results=[]
  for lib,state in zip(libs,sessions):
   state.update(events=[],command=command,available=available)
   try:lib.call('entry')
   except AssertionError as error:raise AssertionError(('native' if lib is libs[0] else 'source',command,state['events']))from error
   events=tuple(state['events']);environment=[]
   for name in [b'MODE',b'PORT',b'MISSING']:
    lib.cpu.mem_write(0x2e0000,name+b'\0');pointer=lib.call('getenv',0x2e0000,result_bits=64 if lib.wide else 32);environment.append(bytes(lib.cpu.mem_read(pointer,128)).split(b'\0')[0]if pointer else None)
   results.append((events,environment))
  assert results[0]==results[1],(available,command,results)
 print('Snowflake CRT: %d native argument, quoting, limit, fallback, and environment comparisons passed.'%len(cases))

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.library,a.output)
