#!/usr/bin/env python3
"""Build SDK C scrollbar calls and execute against native and recovered UI DLLs.

Pooka's Free Software License. Import stubs transfer control to the selected
library without changing target argument registers, stack or return address.
"""
import argparse
from pathlib import Path
import struct
import sys
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from darwin import compile_object,link_dynamic_executable
from dylib import inspect as dynamic
from native import inspect
from dll import DLL
from unicorn import UC_HOOK_CODE
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('architecture',choices=['i386','x86_64','armv7','arm64'])
p.add_argument('reference',type=Path);p.add_argument('source',type=Path)
p.add_argument('--out',type=Path,required=True)
a=p.parse_args();a.out.mkdir(parents=True,exist_ok=True)
obj=a.out/'sdk-scrollbars.o'
compile_object(Path('tests/sdk_scrollbars.c'),obj,a.architecture,
 ['recovery/in-progress/sdk/include','sdk/include'],pic=True)
fixture=link_dynamic_executable([obj],a.out/'sdk-scrollbars',a.architecture,
 {'/lib/TerrorUI.dylib':a.source})
blob=fixture.read_bytes();meta,memory=inspect(blob)
container=bytearray(blob);struct.pack_into('<I',container,12,6)
stubs=dynamic(container)['stubs'];base=0x18000000
for path in [a.reference,a.source]:
 lib=DLL(path,api_base={'i386':0x280800,'x86_64':0x280800,'armv7':0x40010800,'arm64':0x82010800}[a.architecture])
 c=lib.cpu;c.mem_map(base,(len(memory)+4095)&~4095);c.mem_write(base,memory)
 for stub in stubs:
  pc=base+stub['address']-meta['base'];target=lib.exports[stub['name']]
  c.hook_add(UC_HOOK_CODE,lambda cpu,pc,size,target:cpu.reg_write(lib.pc,target),target,begin=pc,end=pc)
 main=next(pc for pc,name in meta['symbols']if name=='_main')
 lib.exports['fixture']=base+main-meta['base']
 result=lib.call('fixture',result_bits=32)
 assert result==0,(str(path),'SDK C ABI check',result)
print('SDK scrollbar C declarations: target aggregate calls, layout guards, value mapping and theme enum match both libraries.')
