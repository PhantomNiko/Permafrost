#!/usr/bin/env python3
"""Compare complete Snowflake lexer states and token boundaries with the reference.

Pooka's Free Software License. Inputs and output buffers are emulated memory.
"""
import argparse,struct
from pathlib import Path
from desktop_calendar import load
from native import inspect

def exercise(reference,source,library,folder):
 metadata,memory=inspect(reference.read_bytes());native={n:a for a,n in metadata['symbols']};sm,_=inspect(source.read_bytes());symbols={n:a for a,n in sm['symbols']};libs=load(reference,source,folder,library)
 for index,lib in enumerate(libs):
  if not index and lib.cpu_type==12:
   end=next(a+n for k,a,n in metadata['sections']if k=='__text');lib.cpu.mem_write(end,memory[end-metadata['base']:])
  if index:lib.exports['initialize']=lib.base+symbols['_pf_app_initialize'];lib.call('initialize')
  for public,match in [('init','snow_lexer_init'),('next','snow_lexer_next')]:
   name=next(n for n in native if match in n);lib.exports[public]=lib.base+(symbols['_recovered_%x'%(native[name]-metadata['base']+0x10000000)]if index else native[name])
 cases=[b'',b' ',b'\t\r\n',b'int main(){return 0;}',b'_abc a2 AbC typename namespace std::cout',b'0 1 42 2147483647 2147483648 4294967295',b'0x0 0x1234 0XABC 0xdeadbeef 0x 0xz',b'0b101 077 12.5 1e3 123u 42ULL',b'"hello" \'a\' \'\\n\' "a\\tb\\r\\n\\0z"',b'"\\x41\\x00\\xff" "\\xq1" "\\x1"',b'"unterminated',b"'",b'//comment\nalpha/* comment */beta',b'/* unterminated',b'/* a */ // b\n /* c */ foo',b'#define VALUE 7\n#if VALUE\n#endif',b'+ - * / % = ! < > & | ^ ~ ? : ; , . ( ) [ ] { }',b'++ -- += -= *= /= %= == != <= >= && || << >> <<= >>= -> ::',b'"escaped \\" quote"',b'"a""b" \'x\'\'y\'',b'a\v\fb',b'\x80\xff abc',b'a'*127+b' '+b'b'*128+b' '+b'c'*257,b'"'+b'z'*260+b'"',b'0xFFFFFFFFFFFFFFFF 999999999999999999999999999999999999999',b'//last line',b'a/*b*/c',b'"\\a\\b\\f\\v\\\\\\\'\\\""']
 count=0
 for text in cases:
  outputs=[]
  for lib in libs:
   pointer,lexer=0x2e0000,0x2f0000;word=8 if lib.wide else 4;lib.cpu.mem_write(pointer,text+b'\0'+bytes(8));lib.cpu.mem_write(lexer,b'\xa5'*160);lib.call('init',lexer,pointer);tokens=[]
   for unused in range(512):
    data=bytes(lib.cpu.mem_read(lexer,160 if lib.wide else 148));kind=int.from_bytes(data[word:word+4],'little');start=word+4;tail=144 if lib.wide else 140
    offsets=tuple(int.from_bytes(data[x:x+word],'little')-pointer for x in [0,tail,tail+word]);tokens.append((kind,data[start:start+128],data[start+128:tail],offsets))
    if kind==0 or (len(tokens)>1 and tokens[-1]==tokens[-2]):break
    lib.call('next',lexer)
   else:raise AssertionError(('lexer did not terminate','native' if lib is libs[0] else 'source',text,tokens[-1]))
   outputs.append(tokens)
  assert outputs[0]==outputs[1],(text,outputs)
  count+=len(outputs[0])
 print('Snowflake lexer: %d inputs and %d native token/state comparisons passed.'%(len(cases),count))
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.library,a.output)
