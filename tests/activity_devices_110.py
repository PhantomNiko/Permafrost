#!/usr/bin/env python3
"""Compare Activity Monitor device-buffer replacement and failure paths.

Pooka's Free Software License. Kernel device enumeration is a controlled service.
"""
import argparse
from pathlib import Path
import struct
import tempfile
from cube_render import diagnostic_reference
from dll import DLL
from native import inspect
from dylib import inspect as dynamic
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.x86_const import *


def run(path):
    with tempfile.TemporaryDirectory(prefix='permafrost-devices-') as directory:
        diagnostic=Path(directory)/'application'
        diagnostic_reference(path,diagnostic)
        metadata,_=inspect(diagnostic.read_bytes())
        arm=metadata['cpu']==12
        assert arm or metadata['cpu']==0x1000007
        api=0x40010800 if arm else 0x280800
        pointer_format='<I' if arm else '<Q'
        pointer_width=4 if arm else 8
        records_offset,selected_offset=(0x500,0x35c)if arm else(0x518,0x370)
        record_size,device_offset=(28,20)if arm else(40,28)
        entry=0x9c60 if arm else 0x71c0
        lib=DLL(diagnostic,api_base=api,poison_allocations=True)
        names={n:a for a,n in metadata['symbols']}
        if '_pf_app_initialize' in names:
            lib.exports['initialize']=lib.base+names['_pf_app_initialize'];lib.call('initialize')
        lib.exports['refresh']=lib.base+names.get('_recovered_%x'%(0x10000000+entry),entry)
        cpu=lib.cpu;state={};events=[];results=[]
        def arguments(count):
            registers=([UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]if arm else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8,UC_X86_REG_R9])
            values=[cpu.reg_read(r)for r in registers[:count]]
            if arm and count>4:values+=list(struct.unpack('<'+'I'*(count-4),cpu.mem_read(cpu.reg_read(UC_ARM_REG_SP),(count-4)*4)))
            return values
        def memory_import(c,a,n,name):
            d,s,z=arguments(3)
            if name in ('_bzero','___bzero'):c.mem_write(d,bytes(s))
            elif name=='_memset':c.mem_write(d,bytes([s&255])*z)
            else:c.mem_write(d,bytes(c.mem_read(s,z)))
            c.reg_write(lib.result,d)
        for stub in dynamic(diagnostic.read_bytes())['stubs']:
            if stub['name']not in ('_bzero','___bzero','_memset','_memcpy','_memmove'):continue
            address=lib.base+stub['address']-metadata['base']
            cpu.mem_write(address,struct.pack('<I',0xe12fff1e)if arm else b'\xc3')
            cpu.hook_add(UC_HOOK_CODE,memory_import,stub['name'],begin=address,end=address)
        def enumerate_devices(c,a,n,u):
            args=arguments(6)
            records,capacity,strings,space,count_out,bytes_out=args
            count,pool,failed=state['case']
            c.mem_write(count_out,struct.pack('<I',count));c.mem_write(bytes_out,struct.pack('<I',len(pool)))
            if records and capacity>=count and space>=len(pool):
                for index in range(count):
                    record=bytearray(record_size);struct.pack_into('<I',record,device_offset,7+index);c.mem_write(records+index*record_size,bytes(record))
                if pool:c.mem_write(strings,pool)
            events.append((bool(records),capacity,bool(strings),space,count,len(pool),failed))
            c.reg_write(lib.result,int(not failed or (failed==2 and not records)))
        def current_device(c,a,n,u):c.reg_write(lib.result,7)
        for slot,hook in [(0x1d0,enumerate_devices),(0xbc,current_device)]:
            address=0x18000+slot;cpu.mem_write(address,struct.pack('<I',0xe12fff1e)if arm else b'\xc3');cpu.hook_add(UC_HOOK_CODE,hook,begin=address,end=address);cpu.mem_write(api+slot,struct.pack('<I',address))
        cpu.mem_write(api,struct.pack('<III',0x50414d57,1100000,608))
        context=0x2e0000;cpu.mem_write(context,bytes(0x600));cpu.mem_write(context+selected_offset,struct.pack('<I',0xffffffff))
        cases=[(1,b'disk\0',False),(1,b'disk\0',False),(3,b'disk\0usb\0net\0',False),
               (2,b'longer device name\0',False),(0,b'',False),(4,b'new\0',True),
               (4,b'new\0',False),(6,b'failed fill\0',2),(1,b'a\0',False)]
        for case in cases:
            state['case']=case;events.clear()
            lib.call('refresh',context)
            pointers=struct.unpack('<2I'if arm else'<2Q',cpu.mem_read(context+records_offset,pointer_width*2))
            allocations=tuple((p,lib.allocs[p],bytes(cpu.mem_read(p,lib.allocs[p])))for p in pointers if p)
            results.append((bytes(cpu.mem_read(context,0x600)),tuple(events),allocations,tuple(sorted(lib.allocs.items()))))
        assert len(lib.allocs)==2
        return results


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path)
    args=parser.parse_args()
    expected=run(args.reference);actual=run(args.source)
    assert expected==actual,next((i,x,y)for i,(x,y)in enumerate(zip(expected,actual))if x!=y)
    print('Activity Monitor: nine device-buffer reuse, growth, replacement and failure workflows match.')
