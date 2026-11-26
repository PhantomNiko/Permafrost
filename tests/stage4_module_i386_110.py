"""Compare IA32 Stage4 module behavior against controlled monitor services.
Pooka's Free Software License. This does not establish complete VM parity.
"""
from pathlib import Path
import sys,struct
sys.path[:0]=[str(Path(__file__).resolve().parent),str(Path(__file__).resolve().parents[1]/'tools')];from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm64_const import *
def exercise(path):
 lib=DLL(path,load_base=0x1000000,instruction_limit=10000000);cpu=lib.cpu;events=[];files={b'input.stage4':b'print 7*6\n'}
 def text(p):
  data=bytearray()
  while len(data)<65536:
   c=cpu.mem_read(p+len(data),1)[0]
   if not c:return bytes(data)
   data.append(c)
  raise AssertionError('unbounded text')
 def arg(i):return int.from_bytes(cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP)+4+4*i,4),'little')
 def leave(value):
  sp=cpu.reg_read(UC_X86_REG_ESP);ret=int.from_bytes(cpu.mem_read(sp,4),'little');cpu.reg_write(UC_X86_REG_ESP,sp+4);cpu.reg_write(lib.result,value);cpu.reg_write(lib.pc,ret)

 def lookup(c,a,z,u):events.append(('lookup',text(arg(0)),arg(1),arg(2)));leave(0x3008000)
 def register(c,a,z,u):events.append(('register',text(arg(0)),arg(1),arg(2)));leave(1)
 def service(c,a,z,u):
  slot=(a-0x18000)//16
  if slot in [8,36]:events.append(('log'if slot==8 else'list',text(arg(0))));leave(1);return
  path=text(arg(0))
  if slot==12:
   data=files.get(path,b'');cpu.mem_write(arg(1),data[:arg(2)]);cpu.mem_write(arg(3),struct.pack('<I',len(data)));events.append(('read',path,arg(2)));leave(int(path in files))
  elif slot==16:
   data=bytes(cpu.mem_read(arg(1),arg(2)));files[path]=data;events.append(('write',path,data));leave(1)
  elif slot in [20,24]:events.append(('remove'if slot==20 else'size',path));leave(1 if slot==20 else len(files.get(path,b'')))
  elif slot==28:events.append(('mkdir',path,arg(1)));leave(1)
  elif slot==32:
   count=arg(1);values=struct.unpack('<'+'i'*count,bytes(cpu.mem_read(arg(2),4*count))) if count else();events.append(('call',path,values));cpu.mem_write(arg(3),struct.pack('<Q',57));leave(1)
 context=bytearray(40);struct.pack_into('<III',context,0,0x444f4d4b,1100000,40);struct.pack_into('<I',context,36,0x19000);struct.pack_into('<I',context,20,0x19010);cpu.mem_write(0x3007000,bytes(context));monitor=bytearray(40);struct.pack_into('<II',monitor,0,1,40)
 for slot in range(8,40,4):
  target=0x18000+slot*16;struct.pack_into('<I',monitor,slot,target);cpu.hook_add(UC_HOOK_CODE,service,begin=target,end=target)
 cpu.mem_write(0x3008000,bytes(monitor));cpu.hook_add(UC_HOOK_CODE,lookup,begin=0x19000,end=0x19000);cpu.hook_add(UC_HOOK_CODE,register,begin=0x19010,end=0x19010)
 descriptor=lib.call('_winterboot_kmod_descriptor',result_bits=32);result=lib.call('_winterboot_kmod_init',0x3007000,descriptor,result_bits=32);assert result==1,(path,result,events);records=[('init',events.copy())]
 commands=[b'EVAL puts -19/3', b'EVAL puts 19/-3', b'EVAL puts -19/-3', b'EVAL puts -19%3', b'EVAL puts 19%-3', b'EVAL puts -19%-3', b'EVAL puts 2147483648+7', b'EVAL puts -2147483648/3', b'EVAL puts 0/0', b'EVAL puts 0%0', b'show apis', b'show modules', b'show tasks', b'show storage', b'!!', b'LOAD "missing.stage4"', b'KILL', b'EVAL puts 1+1', b'EVAL puts -7', b'EVAL puts 2*3+4', b'EVAL puts "snow"', b'EVAL puts true', b'EVAL puts false', b'EVAL puts nil', b'EVAL puts 18/3', b'EVAL puts 19%3', b'EVAL puts 2^5', b'EVAL puts 9==9', b'EVAL puts (1+2)*3', b'EVAL puts 1/0', b'EVAL puts "snow"+"fall"', b'EVAL puts 3<4', b'EVAL puts call("ticks")', b'x=42', b'puts x', b'LIST', b'EXEC', b'EVAL puts x', b'KILL', b'x=0', b'while x<3', b'puts x', b'x=x+1', b'end', b'EXEC', b'EVAL puts x', b'KILL', b'if 3<4', b'puts "yes"', b'else', b'puts "no"', b'end', b'EXEC', b'SAVE "saved.stage4"', b'KILL', b'LOAD "saved.stage4"', b'EXEC', b'LOAD "input.stage4"', b'LIST', b'EXEC', b'loadmodule "module.kmod"', b'loadext "driver.kext"', b'call ticks 1 2', b'run "app"', b'raw "blob"', b'KILL', b'LIST', b'HELP']
 for command in commands:
  events.clear();cpu.mem_write(0x3000000,command+b'\0');req=bytearray(40);struct.pack_into('<III',req,0,1,40,0x3000000);cpu.mem_write(0x3001000,bytes(req));status=lib.call('_winterboot_kmod_dispatch',16,0x50001,0x3001000,result_bits=32);records.append((command,status,events.copy()))
 return records
import argparse
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);args=p.parse_args()
n=exercise(args.reference);s=exercise(args.source);assert n==s,[(x,y)for x,y in zip(n,s)if x!=y]
assert (b'EXEC',1,[('log',b'42'),('log',b'\r\n')]) in n,'no actual stored variable execution'
assert any(row[0]==b'call ticks 1 2'and ('log',b'57')in row[2]for row in n[1:]),'no actual interface result'
assert any(row[0]==b'call ticks 1 2'and ('call',b'ticks',(1,2))in row[2]for row in n[1:]),'invalid native-width call arguments'
print('Stage4: initialization and %d native/source command workflows match.'%(len(n)-1))
