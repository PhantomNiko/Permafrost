#!/usr/bin/env python3
"""Compare command classification, including the ARM64 input-register ABI.

Pooka's Free Software License. Inputs are synthetic command strings.
"""
import argparse,json
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect

parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument('reference',type=Path)
parser.add_argument('source',type=Path)
parser.add_argument('--map',required=True,type=Path)
args=parser.parse_args()
metadata,_=inspect(args.reference.read_bytes())
assert metadata['cpu']==0x100000c
address=next(a for a,n in metadata['symbols'] if n=='_command_line_is_system_report_command')
mapping=json.loads(args.map.read_text())
libraries=[Kernel(args.reference.read_bytes(),{'entry':address,'_ws_errorf':0x4fe0000}),
           Kernel(args.source.read_bytes(),{'entry':mapping['_recovered_%x'%address],'_ws_errorf':0x4fe0000})]
cases=[None,b'',b'help',b'tundra',b'system',b'system-report-more',b'x'*128]
for command in [b'system-report',b'systemreport',b'system_report']:
 for value in [command,command.upper(),command.title()]:
  for prefix,suffix in [(b'',b''),(b' ',b''),(b'',b' '),(b'\t',b'\r\n'),(b'',b' argument')]:
   cases.append(prefix+value+suffix)
for command in cases:
 results=[]
 for library in libraries:
  library.cpu.mem_write(0x3000000,(command or b'')+b'\0'+b'\xa5'*32)
  result=library.call('entry',0 if command is None else 0x3000000,result_bits=8)
  results.append((result,bytes(library.cpu.mem_read(0x3000000,len(command or b'')+33))))
 assert results[0]==results[1],(command,results)
print('ARM64 report command: %d native/source classifications and input canaries match.'%len(cases))
