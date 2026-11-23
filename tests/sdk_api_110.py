#!/usr/bin/env python3
"""Compile and exercise the candidate 1.1 SDK's extended wire services.

Pooka's Free Software License. Service calls are isolated ABI fixtures.
"""
import struct,sys,tempfile,argparse,subprocess
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from darwin import compile_object,link_dynamic_executable,TARGETS
from native import inspect
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.arm64_const import *
from unicorn.x86_const import *
SOURCE='''#if defined(__i386__) || defined(__x86_64__)
#define WM_BAREMETAL_PROGRAM_API_PHYSICAL 0x280800u
#endif
#include <permafrost/terror_ui.h>
#include <stddef.h>
#ifdef __cplusplus
#define ASSERT static_assert
extern "C" {
#else
#define ASSERT _Static_assert
#endif
ASSERT(WM_BAREMETAL_PROGRAM_API_VERSION==1100000,"version");
ASSERT(sizeof(WmBaremetalProgramApi)==608,"table");
ASSERT(sizeof(TerrorUIScrollbarSnapshot)==(sizeof(void*)==8?48:40),"snapshot layout");
ASSERT(offsetof(TerrorUIScrollbarSnapshot,valid)==(sizeof(void*)==8?44:36),"snapshot validity");
ASSERT(offsetof(WmBaremetalProgramApi,wlanScanFn)==0x1b0,"WLAN");
ASSERT(offsetof(WmBaremetalProgramApi,wsGetVariableFn)==0x204,"script value");
ASSERT(offsetof(WmBaremetalProgramApi,readFileOnDeviceFn)==0x21c,"owned file");
ASSERT(offsetof(WmBaremetalProgramApi,terminalOpenFn)==0x23c,"terminal");
ASSERT(offsetof(WmBaremetalProgramApi,clipboardClearFn)==0x25c,"clipboard");
uint32_t probe_file(int32_t device,const char *path,WmBaremetalProgramFileInfo *out){return wm_program_read_file_on_device(device,path,out);}
uint32_t probe_script(int32_t device,const char *path){return wm_program_ws_run_file_on_device(device,path);}
#ifdef __cplusplus
}
#endif
'''
p=argparse.ArgumentParser(description=__doc__);p.add_argument('--headers',type=Path,default=Path('recovery/in-progress/sdk/include'));a=p.parse_args()
with tempfile.TemporaryDirectory(prefix='permafrost-sdk-api-')as directory:
 folder=Path(directory)
 for arch,target in TARGETS.items():
  outputs=[];wide=arch in ['x86_64','arm64'];arm=arch.startswith('arm');api=0x82010800 if arch=='arm64'else 0x40010800 if arm else 0x280800
  for language in ['c','cpp']:
   source=folder/('probe.'+language);source.write_text(SOURCE);obj=folder/(arch+'-'+language+'.o');compile_object(source,obj,arch,[a.headers,'sdk/include'],pic=True);binary=folder/(arch+'-'+language);link_dynamic_executable([obj],binary,arch,{},entry='probe_file');blob=bytearray(binary.read_bytes());struct.pack_into('<I',blob,12,6);binary.write_bytes(blob);m,_=inspect(blob);lib=DLL(binary,api_base=api);c=lib.cpu;functions={n:lib.base+x-m['base']for x,n in m['symbols']};lib.exports.update(file=functions['_probe_file'],script=functions['_probe_script']);events=[];reply=[0]
   def service(cpu,pc,size,kind):
    if arch=='i386':values=list(struct.unpack('<3I',cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP)+4,12)))
    else:values=[cpu.reg_read(r)for r in ([UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2]if arm and wide else[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2]if arm else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX])]
    values[0]&=0xffffffff;events.append((kind,values[:3 if kind=='file'else 2]));cpu.reg_write(lib.result,reply[0])
   for kind,pc in [('file',0x10030),('script',0x10040)]:c.mem_write(pc,struct.pack('<I',0xd65f03c0 if wide else 0xe12fff1e)if arm else b'\xc3');c.hook_add(UC_HOOK_CODE,service,kind,begin=pc,end=pc)
   c.mem_write(0x3001000,b'\\file\0');cases=[]
   for size,address in [(412,0x10030),(608,0),(608,0x10030)]:
    c.mem_write(api+8,struct.pack('<I',size));c.mem_write(api+0x21c,struct.pack('<I',address));c.mem_write(api+0x200,struct.pack('<I',0x10040 if address else 0))
    for device in [0,2,0xffffffff]:
     for value in [0,1]:
      reply[0]=value;events.clear();file=lib.call('file',device,0x3001000,0x3002000,result_bits=32);script=lib.call('script',device,0x3001000,result_bits=32);ready=size==608 and bool(address);assert file==script==(value if ready else 0);assert events==([('file',[device,0x3001000,0x3002000]),('script',[device,0x3001000])]if ready else[]);cases.append((file,script,list(events)))
   outputs.append(cases)
  assert outputs[0]==outputs[1];print(arch+': C/C++ 1.1 table layout and 36 service availability/argument/result checks passed.')
