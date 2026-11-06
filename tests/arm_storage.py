#!/usr/bin/env python3
"""Compare ARM32 sector-transfer bounds and WFE3 commands with the reference.

Requires Unicorn. Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import struct
import subprocess
import tempfile
from integer_literals import Machine


def invoke(machine,address,*arguments):
    from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3,UC_ARM_REG_SP,UC_ARM_REG_LR
    for register,value in zip((UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3),arguments):
        machine.cpu.reg_write(register,value)
    machine.cpu.reg_write(UC_ARM_REG_SP,machine.stack);machine.cpu.reg_write(UC_ARM_REG_LR,machine.stop)
    machine.cpu.emu_start(address,machine.stop,count=2000000)
    from unicorn.arm_const import UC_ARM_REG_PC
    if machine.cpu.reg_read(UC_ARM_REG_PC)!=machine.stop:
        raise AssertionError("storage call did not return: %#x"%machine.cpu.reg_read(UC_ARM_REG_PC))
    return machine.cpu.reg_read(UC_ARM_REG_R0)&255


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source',type=Path);parser.add_argument('--source-map',type=Path,required=True)
    parser.add_argument('--reference',type=Path,required=True);parser.add_argument('--metadata',type=Path,required=True)
    args=parser.parse_args();metadata=json.loads(args.metadata.read_text());names={n:a for a,n in metadata['symbols']}
    # The original internal helper has no external ABI; retain its recorded entry.
    target=names['_wm_platform_read_drive_bytes'];setter=names['_wm_platform_set_loader_context'];mapping=json.loads(args.source_map.read_text())
    def source_address(address):return mapping.get('recovered_%x'%address,mapping.get('_recovered_%x'%address))
    machines=[Machine(args.reference.read_bytes(),target,False),Machine(args.source.read_bytes(),source_address(target),True)]
    with tempfile.TemporaryDirectory(prefix='permafrost-storage-')as temporary:
        root=Path(temporary);c=root/'bridge.c';c.write_text('unsigned main(unsigned *request){request[1]=1;return 1;}\n')
        output=root/'bridge.bin'
        subprocess.run(['python3','tools/cc.py',str(c),'--arch','armv7','--format','flat','--base','0x43013000','-o',str(output)],check=True,stdout=subprocess.DEVNULL)
        for machine in machines:
            machine.cpu.mem_map(0x10000,0x30000)
            machine.cpu.mem_write(0x43013000,output.read_bytes())
            context=bytearray(0x1ac0)
            for offset,value in {0:0x33454657,4:4,8:0x1ac0,0x28:1000,0x48:2048,0x114:0x43013000,0x118:0x43012000}.items():
                struct.pack_into('<I',context,offset,value)
            machine.cpu.mem_write(0x43010000,bytes(context))
            invoke(machine,setter if not machine.source else source_address(setter),0x43010000)
        # Exercise data copying and cache reads as well as the command packet.
        from unicorn import UC_HOOK_CODE
        pattern=bytes((i*37+(i>>9))&255 for i in range(1000*512))
        for machine in machines:
            def transfer(cpu,address,size,user):
                from unicorn.arm_const import UC_ARM_REG_R0
                request=cpu.reg_read(UC_ARM_REG_R0)
                words=struct.unpack('<7I',bytes(cpu.mem_read(request,28)))
                if words[0]==2:
                    first=(words[2]-2048)*512
                    cpu.mem_write(words[4],pattern[first:first+words[5]])
            machine.cpu.hook_add(UC_HOOK_CODE,transfer,begin=0x43013000,end=0x43013000)
        transfers=[(0x80,2,0x43016000,512),(0x80,3,0x43017000,117),
                   (0x80,100,0x43018000,2048),(0x80,2,0x43019000,1024)]
        for arguments in transfers:
            expected=pattern[arguments[1]*512:arguments[1]*512+arguments[3]]
            for machine in machines:
                status=invoke(machine,machine.address,*arguments)
                actual=bytes(machine.cpu.mem_read(arguments[2],arguments[3]))
                if not status or actual!=expected:
                    raise AssertionError(('source'if machine.source else'native',arguments,'transferred bytes differ'))
        cases=[(0x80,0,0x43016000,512),(0x80,999,0x43016000,512),
               (0x80,1000,0x43016000,512),(0x80,999,0x43016000,1024),
               (0x80,1,0,512),(0x80,1,0x43016000,0),
               (0x80,1,0x43016000,513),(0x82,1,0x43016000,512)]
        for arguments in cases:
            results=[]
            for machine in machines:
                machine.cpu.mem_write(0x43012000,bytes(64))
                status=invoke(machine,machine.address,*arguments)
                request=bytes(machine.cpu.mem_read(0x43012000,24))
                results.append((bool(status),request))
            if results[0]!=results[1]:raise AssertionError(repr(arguments)+': native/source transfer mismatch '+repr(results))
        if not invoke(machines[0],target,*cases[0]):raise AssertionError('reference fixture could not read its first sector')
    print('ARM32 storage: %d native/source command/bounds cases and four byte-transfer cases passed.'%len(cases))


if __name__=='__main__':main()
