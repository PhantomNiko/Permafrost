#!/usr/bin/env python3
"""Compare WMFS32 rewrites and lazy reloads against the reference kernel.

Pooka's Free Software License. Allocation and block I/O are emulated.
"""
import argparse,json,struct,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect,slices,CPUS
from wmfs import Image,make_image
from unicorn import Uc,UC_ARCH_ARM,UC_ARCH_ARM64,UC_ARCH_X86,UC_MODE_ARM,UC_MODE_32,UC_MODE_64,UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.arm64_const import *
from unicorn.x86_const import *

# Native mounted-filesystem state: files, count, drive, bytes/sector,
# sectors/cluster, bytes/cluster, volume start/size, kind, valid, FAT geometry.
PROFILES={
 'arm64':dict(globals=[0x8266f188,0x8266f190,0x8266f1b4,0x8266f1b8,0x8266f1bc,0x8266f1c0,0x8266f1c4,0x8266f1c8,0x8266f1d4,0x8266f26c],geometry=[0x8266f1d8,0x8266f1dc,0x8266f1e0,0x8266f1f8],read=0x8243843c),
 'armv7':dict(globals=[0x40531718,0x4053171c,0x40531730,0x40531734,0x40531738,0x4053173c,0x40531740,0x40531744,0x40531750,0x405317d0],geometry=[0x40531754,0x40531758,0x4053175c,0x40531770],read=0x40408b48),
 'i386':dict(globals=[0x2130724,0x2130728,0x213073c,0x2130740,0x2130744,0x2130748,0x213074c,0x2130750,0x213075c,0x21307dc],geometry=[0x2130760,0x2130764,0x2130768,0x213077c],read=0x2009be0),
 'x86_64':dict(globals=[0x215a7b0,0x215a7b8,0x215a7dc,0x215a7e0,0x215a7e4,0x215a7e8,0x215a7ec,0x215a7f0,0x215a7fc,0x215a894],geometry=[0x215a800,0x215a804,0x215a808,0x215a820],read=0x200ac70)}

def run(binary,mapping=None,lazy=False,repeat=False):
 metadata,memory=inspect(binary);arch=next(n for n,c in CPUS.items()if c==metadata['cpu']);profile=PROFILES[arch];wide=arch in ['arm64','x86_64'];word=8 if wide else 4;arm=arch in ['armv7','arm64']
 cpu=Uc(UC_ARCH_ARM64 if arch=='arm64'else UC_ARCH_ARM if arm else UC_ARCH_X86,UC_MODE_ARM if arm else UC_MODE_64 if wide else UC_MODE_32)
 cpu.mem_map(0,0x5000000)
 if arm:cpu.mem_map(0x82000000 if wide else 0x40000000,0x8000000)
 if arch=='armv7':cpu.reg_write(UC_ARM_REG_C1_C0_2,15<<20);cpu.reg_write(UC_ARM_REG_FPEXC,1<<30)
 cpu.mem_write(metadata['base'],memory);names={n:a for a,n in metadata['symbols']}
 def target(entry):return entry if mapping is None else mapping.get('_recovered_%x'%entry,mapping.get('recovered_%x'%entry))
 # Exported symbols move in the replacement, so retain reference service addresses.
 native_symbols={'arm64':[0x82400744,0x82400748,0x824393dc,0x8242d680], 'armv7':[0x40400c70,0x40400d68,0x4046563c,0x40450dd0], 'i386':[0x2001650,0x2001710,0x2050b00,0x203e3a0], 'x86_64':[0x2000ad0,0x2000bb0,0x206cfd0,0x2058020]}[arch]
 pc=UC_ARM64_REG_PC if arch=='arm64'else UC_ARM_REG_PC if arm else UC_X86_REG_RIP if wide else UC_X86_REG_EIP;result=UC_ARM64_REG_X0 if arch=='arm64'else UC_ARM_REG_R0 if arm else UC_X86_REG_RAX if wide else UC_X86_REG_EAX;sp=UC_ARM64_REG_SP if arch=='arm64'else UC_ARM_REG_SP if arm else UC_X86_REG_RSP if wide else UC_X86_REG_ESP
 def args(number):
  if arch=='i386':return struct.unpack('<'+'I'*number,bytes(cpu.mem_read(cpu.reg_read(sp)+4,number*4)))
  regs=[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3]if arch=='arm64'else[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]if arm else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX];return[cpu.reg_read(r)for r in regs[:number]]
 def finish(value=1,pop=0):
  cpu.reg_write(result,value)
  if arm:cpu.reg_write(pc,cpu.reg_read(UC_ARM64_REG_X30 if wide else UC_ARM_REG_LR))
  else:
   stack=cpu.reg_read(sp);cpu.reg_write(pc,int.from_bytes(cpu.mem_read(stack,word),'little'));cpu.reg_write(sp,stack+word+pop)
 allocated=0x3400000;writes=[]
 def allocate(c,a,z,u):
  nonlocal allocated
  size=args(1)[0];assert size<0x1000000;pointer=allocated;allocated=(allocated+max(size,1)+15)&-16;c.mem_write(pointer,bytes(max(size,1)));finish(pointer)
 def release(c,a,z,u):finish()
 def write(c,a,z,u):
  drive,lba,pointer,size=args(4)
  if arch=='i386' and mapping is None:
   pointer,size=args(2);drive=cpu.reg_read(UC_X86_REG_ECX);lba=cpu.reg_read(UC_X86_REG_EDX)
  assert drive==0x81 and lba==2048,('native'if mapping is None else'source',drive,lba,pointer,size)
  writes.append(bytes(c.mem_read(pointer,size)));finish()
 for entry,callback in zip(native_symbols[:3],[allocate,release,write]):
  address=target(entry);cpu.hook_add(UC_HOOK_CODE,callback,begin=address,end=address)
 files={'alpha.bin':bytes(i%251 for i in range(5000)),'Permafrost':b'\xca\xfe\xba\xbe'+bytes((i*7)%251 for i in range(10000)),'empty':b''};boot=bytes(510)+b'\x55\xaa';original=make_image(boot,bytes(64*512),files,sectors=4096+65);filesystem=Image(original);volume=original[65*512:]
 def read(c,a,z,u):
  drive,lba,pointer,size=args(4);assert drive==0x81 and lba>=2048;offset=(lba-2048)*512;assert offset+size<=len(volume);c.mem_write(pointer,volume[offset:offset+size]);finish()
 address=target(profile['read']);cpu.hook_add(UC_HOOK_CODE,read,begin=address,end=address)
 entries=list(filesystem.entries());stride=0x118 if wide else 0x110;data_offset=0xf8 if wide else 0xf4;size_offset=data_offset+word;cluster_offset=size_offset+12;resident=cluster_offset+8;records=bytearray(stride*len(files))
 for i,(name,data)in enumerate(files.items()):
  offset=i*stride;records[offset:offset+len(name)]=name.encode();pointer=0x3200000+i*0x10000;cpu.mem_write(pointer,data or b'\0');records[offset+data_offset:offset+data_offset+word]=pointer.to_bytes(word,'little');struct.pack_into('<I',records,offset+size_offset,len(data));records[offset+resident]=1
 if lazy:
  for i,(name,cluster,size)in enumerate(entries):records[i*stride+data_offset:i*stride+data_offset+word]=bytes(word);struct.pack_into('<I',records,i*stride+cluster_offset,cluster);records[i*stride+resident]=0
 cpu.mem_write(0x3100000,bytes(records))
 for address,value,size in zip(profile['globals'],[0x3100000,len(files),0x81,512,8,4096,2048,65536,1,1],[word,word,1,4,4,4,4,4,4,1]):cpu.mem_write(address,value.to_bytes(size,'little'))
 for address,value in zip(profile['geometry'],[filesystem.fat_sector,filesystem.fat_sectors,filesystem.data_sector,filesystem.cluster_count+2]):cpu.mem_write(address,struct.pack('<I',value))
 def flush():
  cpu.reg_write(sp,0x4fe0000 if arm else 0x4fdfff8 if wide else 0x4fe0000)
  if arm:cpu.reg_write(UC_ARM64_REG_X30 if wide else UC_ARM_REG_LR,0x4ff0000)
  else:cpu.mem_write(cpu.reg_read(sp),(0x4ff0000).to_bytes(word,'little'))
  cpu.emu_start(target(native_symbols[3]),0x4ff0000,count=10000000);assert cpu.reg_read(pc)==0x4ff0000 and cpu.reg_read(result)&1,('native'if mapping is None else'source',lazy,hex(cpu.reg_read(pc)),hex(cpu.reg_read(result)),len(writes))
 flush();assert len(writes)==1
 try:assert Image(bytes(65*512)+writes[0]).files()==files,'WMFS rewrite changed file contents'
 except Exception as error:raise AssertionError(('native'if mapping is None else'source','invalid rewrite',len(writes[0]),writes[0][:48].hex(),list(Image(bytes(65*512)+writes[0]).entries())))from error
 if repeat:
  volume=writes[0]+bytes(len(volume)-len(writes[0]))
  for i in range(len(files)):cpu.mem_write(0x3100000+i*stride+data_offset,bytes(word));cpu.mem_write(0x3100000+i*stride+resident,b'\0')
  flush();assert len(writes)==2;assert Image(bytes(65*512)+writes[-1]).files()==files,'reloading after compaction changed file contents'
 return writes[0]
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);a=p.parse_args();source=a.source.read_bytes();cpu=inspect(source)[0]['cpu'];reference=slices(a.reference.read_bytes())[cpu];mapping=json.loads(a.map.read_text())
 for lazy in [False,True]:assert run(reference,lazy=lazy)==run(source,mapping,lazy)
 run(source,mapping,lazy=True,repeat=True);print('WMFS32: native metadata, cluster chains, file contents, and repeated lazy reload passed.')
