#!/usr/bin/env python3
"""Compare i386 bundle executable resolution with resident synthetic files.

Pooka's Free Software License. Boot-device reads, candidate-directory lookup, and allocation are intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
def exercise(binary,addresses,native):
 results=[]
 for platform in ['PolynyaOS','Permafrost']:
  for executable in ['Tayga','With Space']:
   for damaged in [False,True]:
    lib=Kernel(binary,addresses,native);c=lib.cpu;name='Sample.app';plist=('<plist><dict><key>CFBundleExecutable</key><string>'+executable+'</string></dict></plist>').encode()if not damaged else b'<plist/>';files=[(name,b'',2),(name+'/Contents/Info.plist',plist,0),(name+'/Contents/'+platform+'/'+executable,b'\xc3',0)];records=bytearray(272*len(files));data=0x3008000
    for i,(path,body,flags)in enumerate(files):
     offset=i*272;records[offset:offset+len(path)]=path.encode();struct.pack_into('<3I',records,offset+244,data,len(body),flags);records[offset+268]=1;c.mem_write(data,body or b'\0');data+=0x1000
    c.mem_write(0x3000000,bytes(records));context=bytearray(188);struct.pack_into('<4I',context,0,0,0,0,0);struct.pack_into('<I',context,56,5);context[184]=0;c.mem_write(0x2130724,bytes(context));c.mem_write(0x20d9d44,struct.pack('<I',7));c.mem_write(0x21408ec,bytes(4));cursor=[0x3100000];events=[]
    def finish(value):
     c.reg_write(lib.result,value);sp=c.reg_read(UC_X86_REG_ESP);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
    def malloc(c,a,z,u):
     size=int.from_bytes(c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,4),'little');p=cursor[0];cursor[0]+=((size+31)&-16);c.mem_write(p,bytes(size));finish(p)
    def zero(c,a,z,u):finish(0)
    def args(n):
     sp=c.reg_read(UC_X86_REG_ESP)
     if native:return [c.reg_read(UC_X86_REG_ECX),c.reg_read(UC_X86_REG_EDX)]+list(struct.unpack('<'+'I'*(n-2),bytes(c.mem_read(sp+4,4*(n-2)))))
     return list(struct.unpack('<'+'I'*n,bytes(c.mem_read(sp+4,4*n))))
    def text(p):return bytes(c.mem_read(p,241)).split(b'\0')[0]
    def fallback(c,a,z,u):
     path,out,size,allow,blocked,error=args(6);events.append(('fallback',text(path)));c.mem_write(out,struct.pack('<I',0x3009000));c.mem_write(size,struct.pack('<I',len(plist)));c.mem_write(0x3009000,plist);c.mem_write(blocked,b'\0');finish(1)
    def candidate(c,a,z,u):
     bundle,directory,base,out,error=args(5);values=tuple(text(p)for p in [bundle,directory,base]);events.append(('candidate',values))
     if text(directory)!=platform.encode():finish(0);return
     resolved=text(bundle)+b'/Contents/'+text(directory)+b'/'+text(base);c.mem_write(out,resolved+b'\0');finish(1)
    for symbol,callback in [('_malloc',malloc),('_free',zero),('_storage_copy_boot_fallback_file',fallback),('_app_bundle_try_executable_directory',candidate)]:
     a=addresses[symbol];c.hook_add(UC_HOOK_CODE,callback,begin=a,end=a)
    c.mem_write(0x3003000,name.encode()+b'\0');c.mem_write(0x3004000,bytes(241)+b'\xa5'*16);c.mem_write(0x3005000,bytes(160)+b'\xa5'*16);status=lib.call('_resolve_app_bundle_executable_path',0x3003000,0x3004000,0x3005000,result_bits=8);results.append((status,bytes(c.mem_read(0x3004000,257)),bytes(c.mem_read(0x3005000,176)),events))
    assert status==(not damaged),(native,platform,executable,damaged,status,results[-1][2][:80])
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',required=True,type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference.read_bytes(),native,True);s=exercise(a.source.read_bytes(),source,False);assert e==s,[(i,x,y)for i,(x,y)in enumerate(zip(e,s))if x!=y];print('App bundles: eight native platform, executable-name, malformed-plist, fallback, buffer, and guard comparisons passed.')
