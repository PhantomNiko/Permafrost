#!/usr/bin/env python3
"""Compare i386/ARM64 kernel formatting with native argument and buffer layouts.

Pooka's Free Software License. Binaries remain external test inputs.
"""
import argparse,json,struct,re
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path)
    parser.add_argument('--map',type=Path,required=True);args=parser.parse_args()
    metadata,_=inspect(args.reference.read_bytes());assert metadata['cpu'] in (7,0x100000c),'i386 or ARM64 required'
    wide=metadata['cpu']==0x100000c
    native={n:a for a,n in metadata['symbols']};entry=native['_vsnprintf'];mapping=json.loads(args.map.read_text())
    libraries=[Kernel(args.reference.read_bytes(),{'format':entry,'_ws_errorf':0x4fe0000}),
               Kernel(args.source.read_bytes(),{'format':mapping[('_' if wide else '')+'recovered_%x'%entry],'_ws_errorf':0x4fe0000})]
    cases=[];mask=(1<<64)-1
    for length in ['','hh','h','l','ll','z','t','j']:
        for conversion in ['u','x','X']:
            for value in [0,1,255,256,65535,65536,0x7fffffff,0xffffffff,0x100000000,0x123456789abcdef0,mask]:
                cases.append((('%'+length+conversion).encode(),[value],128))
        for conversion in ['d','i','I']:
            for value in [-1,0,7,-128,-129,-32768,-32769,-2147483648,2147483647,-(1<<63),mask>>1]:
                cases.append((('%'+length+conversion).encode(),[value&mask],128))
    for value in [0,0x82401234,0x123456789abcdef0,mask]:cases.append((b'%p',[value],128))
    for value in [0.0,-0.0,1.25,-7.125,0.1,1234.999999,1e-8]:
        cases.append((b'%f',[struct.unpack('<Q',struct.pack('<d',value))[0]],128))
    for capacity in [0,1,2,5,16,128]:
        for format,values in [(b'%s',[0x3006000]),(b'%.3s',[0x3006000]),(b'%.*s',[3,0x3006000]),
                              (b'%.*s',[-1&mask,0x3006000]),(b'%s',[0]),(b'%+-#012.9llx',[0x123456789abcdef0]),
                              (b'%*llu',[8,mask]),(b'%% %c %c',[65,255])]:cases.append((format,values,capacity))
    for index,(format,values,capacity)in enumerate(cases):
        outputs=[]
        for lib in libraries:
            lib.cpu.mem_write(0x3000000,format+b'\0'+bytes(32));lib.cpu.mem_write(0x3001000,b'\xa5'*160)
            if wide:arguments=struct.pack('<'+'Q'*len(values),*values)
            else:
                widths=[]
                for spec in re.finditer(rb'%(?!%)(?:[-+ #0]*)(\*|[0-9]*)(?:\.(\*|[0-9]*))?(hh|ll|[hlztjL])?([diIuxXcsfp])',format):
                    widths.extend([4]*sum(group==b'*'for group in spec.groups()[:2]))
                    widths.append(8 if spec[4]==b'f'or spec[3]in(b'll',b'j')else 4)
                assert len(widths)==len(values),(format,widths,values)
                arguments=b''.join(int(value&((1<<(width*8))-1)).to_bytes(width,'little')for value,width in zip(values,widths))
            lib.cpu.mem_write(0x3005000,arguments);lib.cpu.mem_write(0x3006000,b'fixture\0')
            result=lib.call('format',0x3001000,capacity,0x3000000,0x3005000,result_bits=32)
            outputs.append((result,bytes(lib.cpu.mem_read(0x3001000,160))))
        assert outputs[0]==outputs[1],(index,format,values,capacity,outputs)
    print('Kernel formatting: %d native/source cases preserve integer widths, pointers, fractions, precision and buffer canaries.'%len(cases))


if __name__=='__main__':main()
