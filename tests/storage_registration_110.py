#!/usr/bin/env python3
"""Check block-provider registration pointers after source linking.

Pooka's Free Software License. PCI probing is intercepted; no hardware is used.
"""
import argparse,json,struct,sys
from pathlib import Path
sys.path[:0]=[str(Path(__file__).resolve().parent),str(Path(__file__).resolve().parents[1]/'tools')]
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4,UC_ARM64_REG_X30
from unicorn.x86_const import UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8,UC_X86_REG_RSP


def exercise(reference,source,profile_path):
    profile=json.loads(profile_path.read_text());layout=json.loads(profile_path.with_name('recovery-layout.json').read_text());start=layout['translation']['state_base']
    original,_=inspect(reference.read_bytes());names={n:a for a,n in original['symbols']};globals={n:a for a,n in original['data_symbols']}
    callbacks=['_qemu_block_drive_info','_qemu_block_read','_qemu_block_write','_qemu_block_flush','_qemu_provider_identity']
    count=0
    for flush in (False,True):
        for accepted in (False,True):
            results=[]
            for native,path in [(True,reference),(False,source)]:
                lib=DLL(path);c=lib.cpu;meta,_=inspect(path.read_bytes());symbols={n:lib.base+a-meta['base']for a,n in meta['symbols']+meta['data_symbols']}
                def address(name):
                    return symbols[name]if native else symbols['_recovered_%x'%(layout['base']+names[name])]
                anchor=0 if native else symbols['_pf_module_state']
                def data(name):return lib.base+globals[name]if native else anchor+layout['base']+globals[name]-start
                if not native:assert anchor%4096==profile['state_address_bias']
                def args(number):return[c.reg_read(r)for r in ([UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4]if lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8])[:number]]
                def finish(value):
                    c.reg_write(lib.result,value)
                    if lib.cpu_type==0x100000c:c.reg_write(lib.pc,c.reg_read(UC_ARM64_REG_X30))
                    else:
                        sp=c.reg_read(UC_X86_REG_RSP);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,8),'little'));c.reg_write(UC_X86_REG_RSP,sp+8)
                def pci(c,pc,size,user):
                    api,bus,device,function,out=args(5);found=bus==device==function==0
                    if found:c.mem_write(out,bytes(64))
                    finish(int(found))
                def visit(c,pc,size,user):
                    c.mem_write(data('_gQemuBlockControllerCount'),struct.pack('<I',1));c.mem_write(data('_gQemuBlockControllers')+0x98,struct.pack('<I',int(flush)));finish(1)
                events=[]
                def registered(c,pc,size,user):
                    pointer=args(1)[0];fields=struct.unpack('<12I',c.mem_read(pointer,48));assert fields[:2]==(3,1),fields
                    actual=[fields[2+i]|fields[7+i]<<32 for i in range(5)]
                    expected=[address(name)if name!='_qemu_block_flush'or flush else 0 for name in callbacks]
                    assert actual==expected,(native,profile['architecture'],actual,expected)
                    events.append('provider');finish(int(accepted))
                def node(c,pc,size,user):events.append('node');finish(1)
                def rollback(c,pc,size,user):events.append('rollback');finish(0)
                for pc,callback in [(address('_qemu_kext_read_pci_device'),pci),(address('_qemu_block_visit_pci'),visit),(address('_qemu_block_rollback_all'),rollback),(0x18000,node),(0x18100,registered)]:
                    if pc<0x20000:c.mem_write(pc,struct.pack('<I',0xd65f03c0)if lib.cpu_type==0x100000c else b'\xc3')
                    c.hook_add(UC_HOOK_CODE,callback,begin=pc,end=pc)
                api=0x2e0000;c.mem_write(api,struct.pack('<3I',0x54584b57,1100000,248)+bytes(248));
                for offset,value in [(0xc,0x18000),(0x5c,1),(0xd0,0x18100)]:c.mem_write(api+offset,struct.pack('<I',value))
                result=lib.call('_winterboot_kext_init',api,result_bits=32);assert result==int(accepted),(native,result)
                results.append(events)
            assert results[0]==results[1],results
            count+=1
    print(profile['architecture']+': four native/source storage registrations preserve all compiled callback addresses and rollback behavior.')


if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--profile',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.profile)
