#!/usr/bin/env python3
"""Compare command classification against the reference kernel.

Pooka's Free Software License.
"""
import argparse,json
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect

CASES=[None,b'',b' ',b'\t\r\n',b'system report',b'sysinfo',b'help',b'Tayga.app',b'CompilerProbe.app',b'Tundra.app',b'TAYGA.APP',b'"Tayga.app"',b'path/Tayga.app',b'ls /root',b'echo hello',b'unknown.app',b'  Tundra.app\t',b'Tayga.app arg',b'/root/sdk-c',b'0']
def run(binary,addresses,native):
 lib=Kernel(binary,addresses,native);results=[]
 for name in ['_command_line_is_system_report_command','_command_line_is_host_app_command']:
  for value in CASES:
   for poison in [b'',b'--invalid\0']:
    lib.cpu.mem_write(0x3000000,(value or b'')+b'\0'+poison+bytes(1024))
    result=lib.call(name,0 if value is None else 0x3000000)
    results.append((name,value,poison,result))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',required=True,type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args()
 m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()}
 expected=run(a.reference.read_bytes(),native,True);actual=run(a.source.read_bytes(),source,False);assert expected==actual,[(e,s)for e,s in zip(expected,actual)if e!=s];print('Command classification: 80 native null, whitespace, application, argument, case, and terminator comparisons passed.')
