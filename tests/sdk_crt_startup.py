#!/usr/bin/env python3
"""Compare source SDK startup, process context, constructors, and finalizers.

Pooka's Free Software License. Kernel services run only in CPU emulation.
"""
import argparse,struct
from pathlib import Path
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.arm64_const import *
from unicorn.x86_const import *

def exercise(reference,source):
 libs=[DLL(p)for p in [reference,source]];sessions=[]
 for lib in libs:
  state={'events':[]};sessions.append(state)
  def args(number,lib=lib):
   c=lib.cpu
   if lib.cpu_type==7:return struct.unpack('<'+'I'*number,c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,number*4))
   registers=[UC_ARM_REG_R0,UC_ARM_REG_R1]if lib.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1]if lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI];return[c.reg_read(r)for r in registers[:number]]
  def finish(value=0,lib=lib):
   c=lib.cpu;c.reg_write(lib.result,value)
   if lib.cpu_type in [12,0x100000c]:c.reg_write(lib.pc,c.reg_read(UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_X30))
   else:
    reg=UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP;word=8 if lib.wide else 4;sp=c.reg_read(reg);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,word),'little'));c.reg_write(reg,sp+word)
  def text(p,lib=lib):return bytes(lib.cpu.mem_read(p,512)).split(b'\0')[0]
  def info(c,a,z,u,state=state,args=args,finish=finish):
   state['events'].append('info');record=bytearray(0x620);record[0x10d:0x10d+len(state['path'])]=state['path'];record[0x21e:0x21e+len(state['command'])]=state['command'];c.mem_write(args(1)[0],bytes(record));finish(int(state['available']))
  def prepare(c,a,z,u,lib=lib,state=state,args=args,text=text,finish=finish):
   context=args(1)[0];word=8 if lib.wide else 4;count=int.from_bytes(c.mem_read(context+0x620,4),'little');offset=0x628 if lib.wide else 0x624;exe=context+offset+64*word+512;state['events'].append(('prepare',count,text(exe)));finish()
  def main(c,a,z,u,lib=lib,state=state,args=args,text=text,finish=finish):
   argc,argv=args(2);assert argc<=64;word=8 if lib.wide else 4;values=tuple(text(int.from_bytes(c.mem_read(argv+i*word,word),'little'))for i in range(argc));state['events'].append(('main',values,argv==0));finish(17)
  def end(c,a,z,u,lib=lib,state=state):state['events'].append('end');c.reg_write(lib.pc,lib.stop);c.emu_stop()
  def yielded(c,a,z,u,state=state,finish=finish):state['events'].append('yield');finish()
  for address,callback in [(0x12000,info),(0x12100,end),(0x12200,yielded),(lib.exports['_main'],main),(lib.exports['_tayga_libc_prepare'],prepare)]:lib.cpu.hook_add(UC_HOOK_CODE,callback,begin=address,end=address)
  for name in ['_fixture_a','_fixture_b']:
   def callback(c,a,z,u,name=name,state=state,finish=finish):state['events'].append(name);finish()
   address=lib.exports[name];lib.cpu.hook_add(UC_HOOK_CODE,callback,begin=address,end=address)
  # Preserve null initializer slots while verifying yields count every slot.
  word=8 if lib.wide else 4;lib.cpu.mem_write(lib.exports['_init_data']+word,bytes(word));lib.cpu.mem_write(lib.exports['_term_data']+word,bytes(word))
  for table in lib.api_tables:
   lib.cpu.mem_write(table,struct.pack('<III',0x50414d57,1000000,0x300))
   for offset,address in [(0x144,0x12000),(0x30,0x12100),(0x9c,0x12200)]:lib.cpu.mem_write(table+offset,struct.pack('<I',address))
 cases=[(True,b'program a b',b'Tayga/usr/bin/program'),(True,b'program "two words" \'single quote\'',b'/bin/program'),(True,b'program\t-x\r\nlast',b'/program'),(True,b'',b''),(True,b'program'+b' x'*70,b'/program'),(False,b'ignored',b'/program')]
 for available,command,path in cases:
  results=[]
  for lib,state in zip(libs,sessions):
   state.update(events=[],available=available,command=command,path=path);lib.call('_winterboot_tayga_c_entry');results.append(state['events'])
  assert results[0]==results[1],(available,command,path,results)
  assert results[0].count('_fixture_a')==12 and results[0].count('_fixture_b')==10,results[0]
  assert results[0].count('yield')==2 and results[0][-1]=='end',results[0]
 print('SDK CRT: %d native process, quoting, constructor, finalizer, and yield comparisons passed.'%len(cases))
if __name__=='__main__':
 parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path);args=parser.parse_args();exercise(args.reference,args.source)
