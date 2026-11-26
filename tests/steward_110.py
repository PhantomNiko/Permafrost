#!/usr/bin/env python3
"""Compare Steward console, shell and CSV contracts with native code.

Pooka's Free Software License.
"""
from pathlib import Path
import sys,struct,itertools,argparse
sys.path[:0]=[str(Path(__file__).resolve().parent),str(Path(__file__).resolve().parents[1]/'tools')];from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm_const import *
from unicorn.arm64_const import *
def exercise(path,api):
 lib=DLL(path,api_base=api,allocator_base=0x20000);cpu=lib.cpu;wide=lib.wide;word=8 if wide else 4;events=[];state={'kind':3,'status':1,'value':b'snow'}
 for table in lib.api_tables:cpu.mem_write(table,struct.pack('<III',0x50414d57,1100000,608))
 def text(p):
  if not p:return None
  out=bytearray()
  while len(out)<8192:
   b=cpu.mem_read(p+len(out),1)[0]
   if not b:return bytes(out)
   out.append(b)
  raise AssertionError('unterminated test string')
 def args(count):
  if lib.cpu_type==7:return list(struct.unpack('<'+'I'*count,cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP)+4,count*4)))
  regs=[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]if lib.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3]if lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX]
  return [cpu.reg_read(r)for r in regs[:count]]
 def finish(value):
  cpu.reg_write(lib.result,value)
  if lib.cpu_type in [7,0x1000007]:
   reg=UC_X86_REG_RSP if wide else UC_X86_REG_ESP;sp=cpu.reg_read(reg);target=int.from_bytes(cpu.mem_read(sp,word),'little');cpu.reg_write(reg,sp+word)
  else:target=cpu.reg_read(UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_X30)
  cpu.reg_write(lib.pc,target)
 def hook(offset):
  def call(cpu,a,n,u):
   if offset==0x28:events.append(('write',text(args(1)[0])))
   elif offset==0x98:
    a=args(3);events.append(('script',text(a[0]),*a[1:]))
   else:
    a=args(2);events.append(('variable',text(a[0])));out=bytearray(40 if wide else 24);struct.pack_into('<I',out,0,state['kind']);at=16 if wide else 12;out[at:at+word]=(0x3300000).to_bytes(word,'little');cpu.mem_write(0x3300000,state['value']+b'\0');cpu.mem_write(a[1],bytes(out))
   finish(state['status'])
  return call
 for off in [0x28,0x98,0x204]:
  addr=0x18000+off*16;cpu.mem_write(api+off,struct.pack('<I',addr));cpu.hook_add(UC_HOOK_CODE,hook(off),begin=addr,end=addr)
 results=[]
 def string(p,value):
  if value is None:return 0
  cpu.mem_write(p,value+b'\0');return p
 for value in [None,b'',b'snow',b'first\nsecond']:
  events.clear();result=lib.call('_steward_console_write_line',string(0x3200000,value),result_bits=32);results.append(('console',value,result,tuple(events)))
 for name,value,status in itertools.product([None,b'',b'answer',b'_valid2',b'2bad',b'a-b',b'a'*317],[None,b'',b'snow',b'line\nquote"tab\t/slash\\',b'x'*260],[0,1,7]):
  state['status']=status;events.clear();result=lib.call('_steward_shell_set_string',string(0x3200000,name),string(0x3201000,value),result_bits=32);results.append(('set',name,value,status,result,tuple(events)))
 for name,capacity,kind,status in itertools.product([None,b'',b'answer'],[0,1,4,5,8],[0,1,3],[0,1,7]):
  state.update(kind=kind,status=status);events.clear();cpu.mem_write(0x3202000,b'\xa5'*96);result=lib.call('_steward_shell_get_string',string(0x3200000,name),0x3202000,capacity,result_bits=32);results.append(('get',name,capacity,kind,status,result,bytes(cpu.mem_read(0x3202000,96)),tuple(events)))
 tables=[None,b'',b'Name,Value\nsnow,42\nice,"two words"\n',b'a,b\r\n"c,d","e""f"\r\n',b'alpha,,gamma\n',b'"unterminated']
 selectors=[None,b'',b'Name',b'Value',b'snow',b'1',b'2',b'0',b'3',b'1.2']
 for table,selector,capacity in itertools.product(tables,selectors,[0,1,8,64]):
  cpu.mem_write(0x3202000,b'\xa5'*96);result=lib.call('_steward_csv_get_variable',string(0x3200000,table),string(0x3201000,selector),0x3202000,capacity,result_bits=32);results.append(('csv',table,selector,capacity,result,bytes(cpu.mem_read(0x3202000,96))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--api-base',type=lambda v:int(v,0),required=True);args=p.parse_args();n=exercise(args.reference,args.api_base);s=exercise(args.source,args.api_base)
 for i,(x,y)in enumerate(zip(n,s)):assert x==y,(i,x,y)
 assert n==s;print(f'Steward: {len(n)} native console, shell, CSV and output-guard comparisons match.')
