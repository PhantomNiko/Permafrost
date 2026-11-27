#!/usr/bin/env python3
"""Compare 1.1 Piet state with native string and imported-call ABIs.

Imported printf and unsigned division use host boundary oracles; console
rendering is covered separately by VM checks. Pooka's Free Software License.
"""
import struct
from pathlib import Path
import piet_library
from dll import DLL
from dylib import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2
from unicorn.arm64_const import UC_ARM64_REG_SP,UC_ARM64_REG_X0


class Library(DLL):
    def __init__(self,path,*args,**kwargs):
        super().__init__(path,*args,**kwargs)
        # IA32/x64 changed their string parameter namespace in this reference.
        for name in list(self.exports):
            previous=name.replace('ERKN2wm6stringE','ERKSs').replace('EON2wm6stringE','EOSs')
            if previous!=name:self.exports[previous]=self.exports[name]
        for entry in inspect(Path(path).read_bytes())['stubs']:
            name=entry['name']
            if name not in ('_printf','___udivsi3'):continue
            assert self.cpu_type in (12,0x100000c)
            address=self.base+entry['address']
            self.cpu.mem_write(address,struct.pack('<I',0xe12fff1e if self.cpu_type==12 else 0xd65f03c0))
            def imported(cpu,address,size,user,name=name):
                if name=='___udivsi3':
                    numerator=cpu.reg_read(UC_ARM_REG_R0);denominator=cpu.reg_read(UC_ARM_REG_R1)
                    assert denominator,'fixture divided by zero'
                    cpu.reg_write(UC_ARM_REG_R0,numerator//denominator)
                    return
                pointer=cpu.reg_read(UC_ARM_REG_R0 if self.cpu_type==12 else UC_ARM64_REG_X0)
                assert bytes(cpu.mem_read(pointer,5))==b'%lld\0'
                if self.cpu_type==12:
                    value=cpu.reg_read(UC_ARM_REG_R1)|(cpu.reg_read(UC_ARM_REG_R2)<<32)
                    if value&(1<<63):value-=1<<64
                else:value=struct.unpack('<q',cpu.mem_read(cpu.reg_read(UC_ARM64_REG_SP),8))[0]
                cpu.reg_write(self.result,len(str(value)))
            self.cpu.hook_add(UC_HOOK_CODE,imported,begin=address,end=address)


if __name__=='__main__':
    piet_library.DLL=Library
    piet_library.main()
