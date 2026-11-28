#!/usr/bin/env python3
"""Compare ARM64 virtio GPU submission across byte and ring-index wraps.

Pooka's Free Software License. DMA and device completions are intercepted.
"""
import argparse,json,struct
from pathlib import Path
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4


def exercise(reference,source,profile_path):
    profile=json.loads(profile_path.read_text());layout=json.loads(profile_path.with_name('recovery-layout.json').read_text());results=[]
    for native,path in [(True,reference),(False,source)]:
        lib=DLL(path);c=lib.cpu;m,_=inspect(path.read_bytes());symbols={n:lib.base+a-m['base']for a,n in m['symbols']+m['data_symbols']}
        anchor=0 if native else symbols['_pf_module_state']
        def data(offset):return lib.base+offset if native else anchor+0x10000000+offset-layout['translation']['state_base']
        lib.exports['submit']=symbols['_qemu_graphics_queue_submit'if native else '_recovered_10002688']
        api=0x2e0000;c.mem_write(api,struct.pack('<3I',0x54584b57,1100000,248)+bytes(248))
        events=[]
        def args():return[c.reg_read(r)for r in (UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4)]
        def dma(c,pc,size,user):
            requester,pointer,count,low,high=args();physical=0x210000 if pointer==data(0x8200)else 0x220000;assert pointer in [data(0x8200),data(0x8600)]
            c.mem_write(low,struct.pack('<I',physical));c.mem_write(high,bytes(4));c.reg_write(lib.result,1)
        def notify(c,pc,size,user):
            address,width,value,*_=args();assert (address,width,value)==(0x120000,2,0)
            old=struct.unpack('<H',c.mem_read(data(0x8572),2))[0];new=(old+1)&65535
            c.mem_write(data(0x8302),struct.pack('<H',new));c.mem_write(data(0x8304)+(old&7)*8,struct.pack('<II',0,24));c.mem_write(data(0x8600),struct.pack('<I',0x1100))
            events.append(struct.unpack('<H',c.mem_read(data(0x8102),2))[0]);c.reg_write(lib.result,1)
        def okay(c,pc,size,user):c.reg_write(lib.result,1)
        for slot,callback in [(28,dma),(29,okay),(30,okay),(48,notify)]:
            pc=0x18000+16*slot;c.mem_write(pc,struct.pack('<I',0xd65f03c0));c.hook_add(UC_HOOK_CODE,callback,begin=pc,end=pc);c.mem_write(api+slot*4,struct.pack('<I',pc))
        c.mem_write(data(0x8480),struct.pack('<Q',api));c.mem_write(data(0x84f8),struct.pack('<Q',0x120000));c.mem_write(data(0x85ac),struct.pack('<I',3))
        values=[]
        for index in (0,7,254,255,256,257,511,512,65534,65535):
            c.mem_write(data(0x8570),struct.pack('<HHI',index,index,1));c.mem_write(data(0x8000),bytes(4));c.mem_write(0x2f0000,bytes(4));events.clear()
            status=lib.call('submit',40,24,0x2f0000,result_bits=32);new=(index+1)&65535
            values.append((status,events.copy(),bytes(c.mem_read(0x2f0000,4)),bytes(c.mem_read(data(0x8400),32))))
            assert status==1 and events==[new],(native,index,status,events,new)
        results.append(values)
    assert results[0]==results[1],'GPU descriptor or response mismatch'
    print('ARM64 GPU queues: ten native/source submissions preserve DMA descriptors and 16-bit indices across 255, 511 and 65535.')


if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--profile',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.profile)
