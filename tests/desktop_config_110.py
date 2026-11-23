#!/usr/bin/env python3
"""Compare 1.1 desktop configuration values and appearance assignments.

Pooka's Free Software License. The imported string comparator is a fixture.
"""
import argparse,struct,sys,tempfile
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect
from dylib import inspect as dynamic
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm_const import *
from unicorn.arm64_const import *
p=argparse.ArgumentParser(description=__doc__);p.add_argument('architecture',choices=['i386','x86_64','armv7','arm64']);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args()
api={'i386':0x280800,'x86_64':0x280800,'armv7':0x40010800,'arm64':0x82010800}[a.architecture]
reference_meta,_=inspect(a.reference.read_bytes());names={n:x-reference_meta['base']for x,n in reference_meta['symbols']};text_end=next(x+n-reference_meta['base']for k,x,n in reference_meta['sections']if k=='__text');mode=0x2f0c8 if a.architecture=='arm64'else next(x-reference_meta['base']for x,n in reference_meta['data_symbols']if n=='_gDefaultWindowMode')

def exercise(path,source,folder):
 b=bytearray(path.read_bytes());struct.pack_into('<I',b,12,6);normalized=folder/('source'if source else'reference');normalized.write_bytes(b);m,_=inspect(b);lib=DLL(normalized,api_base=api);c=lib.cpu;arm=a.architecture.startswith('arm');wide=lib.wide
 functions={n:lib.base+x-m['base']for x,n in m['symbols']};ret=struct.pack('<I',0xd65f03c0 if wide else 0xe12fff1e)if arm else b'\xc3'
 def args():
  if a.architecture=='i386':return struct.unpack('<III',c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,12))
  regs=[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2]if arm and wide else[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2]if arm else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX];return[c.reg_read(r)for r in regs]
 def string(pointer):
  assert pointer>=4096 and pointer!=0xffffffff,('invalid config string',hex(pointer))
  return bytes(c.mem_read(pointer,0x3100)).split(b'\0')[0]
 for stub in dynamic(b)['stubs']:
  if stub['name']not in ['_strcmp','_memset','_memcpy','_bzero','___bzero']:continue
  pc=lib.base+stub['address']-m['base']
  def service(cpu,pc,size,name):
   first,second,count=args();result=first
   if name=='_strcmp':left,right=string(first),string(second);result=(left>right)-(left<right)
   elif name=='_memcpy':c.mem_write(first,bytes(c.mem_read(second,count)))
   else:c.mem_write(first,bytes([second&255])*count if name=='_memset'else bytes(second))
   c.reg_write(lib.result,result&((1<<(64 if wide else 32))-1))
  c.mem_write(pc,ret);c.hook_add(UC_HOOK_CODE,service,stub['name'],begin=pc,end=pc)
 if source:
  state=lib.base+next(x for x,n in m['data_symbols']if n=='_pf_module_state')-m['base'];bias=text_end;lib.exports['initialize']=functions['_pf_app_initialize'];lib.call('initialize')
 else:state=lib.base;bias=0
 for alias,name in [('unquote','_unquoteConfigValue'),('assign','_applyTundraConfigAssignment'),('paths','_tundraPathsEqual')]:lib.exports[alias]=functions['_recovered_%x'%(0x10000000+names[name])]if source else lib.base+names[name]
 def call(alias,*arguments):
  if a.architecture=='i386'and not source:
   for reg,value in zip([UC_X86_REG_ECX,UC_X86_REG_EDX],arguments):c.reg_write(reg,value)
   return lib.call(alias,result_bits=64 if wide else 32)
  return lib.call(alias,*arguments,result_bits=64 if wide else 32)
 outputs=[]
 values=[None,b'',b'plain',b' \t\rplain',b'"quoted value" tail',b' ""',b'"unterminated',b'\nline',b'"'+b'x'*0x3010+b'"']
 for value in values:
  if value is not None:c.mem_write(0x3001000,value+b'\0')
  outputs.append(string(call('unquote',0 if value is None else 0x3001000)))
 c.mem_write(0x3005000,b'TundraMode\0');c.mem_write(state+mode-bias,struct.pack('<I',0x1234))
 for value in [b'solid',b'clear',b'blur',b'refract',b' "clear"',b'\t"blur" ignored',b'unknown']:
  c.mem_write(0x3001000,value+b'\0');call('assign',0x3005000,0x3001000);outputs.append(int.from_bytes(c.mem_read(state+mode-bias,4),'little'))
 assert outputs[-7:]==[0,1,2,3,1,2,2],outputs[-7:]
 path_cases=[(None,None,1),(None,b'',1),(b'',b'\\\\',1),(b'a',b'a',1),(b'a',b'A',0),(b'a',b'ab',0),(b'\\a',b'a',1),(b'a\\\\b',b'a\\b',1),(b'a/b',b'a\\b',0),(b'a\\',b'a',0),(b'\\a\\b',b'\\\\a\\\\b',1),(b'folder name\\child',b'folder name\\child',1)]
 for left,right,expected in path_cases:
  if left is not None:c.mem_write(0x3001000,left+b'\0')
  if right is not None:c.mem_write(0x3005000,right+b'\0')
  result=call('paths',0 if left is None else 0x3001000,0 if right is None else 0x3005000)&255
  assert result==expected,(left,right,result,expected,source)
  outputs.append(result)
 return outputs
with tempfile.TemporaryDirectory(prefix='permafrost-desktop-config-')as folder:
 native=exercise(a.reference,False,Path(folder));source=exercise(a.source,True,Path(folder))
assert native==source
print('Desktop config: nine pointer-return/string cases, seven appearance assignments, and twelve path comparisons match.')
