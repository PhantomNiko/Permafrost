"""Compare region-aware 1.1 heap exports; Pooka's Free Software License."""
from pathlib import Path
import sys,struct,argparse
sys.path[:0]=['tests','tools'];from dll import DLL
p=argparse.ArgumentParser();p.add_argument('--arch',required=True);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);args=p.parse_args();api={'x86_64':0x280800,'i386':0x280800,'armv7':0x40010800,'arm64':0x82010800}[args.arch];wide=args.arch in ['x86_64','arm64'];ptr=8 if wide else 4;word='Q'if wide else'I';results=[]
for label,path in [('native',args.reference),('source',args.source)]:
 d=DLL(path,api_base=api,allocator_base=0x20000,instruction_limit=30000000);c=d.cpu;boot=api-0x800;c.mem_write(boot+0x238,struct.pack('<IIQQ',0x34364857,1,0x4000000,0x100000))if wide else c.mem_write(boot+0x8c,struct.pack('<III',1,0x4000000,0x100000));rows=[]
 def call(name,*values,bits=None):
  answer=d.call('_wm_probe_heap_'+name,*values,result_bits=bits or ptr*8);print(label,name,values,hex(answer),flush=True);return answer
 def stats():return(call('total_bytes',bits=32),call('free_bytes',bits=32),call('total_bytes64',bits=64),call('free_bytes64',bits=64))
 call('reset',bits=8);baseline=stats();rows.append(('baseline',baseline));assert baseline[0]>0
 a=call('alloc',17);b=call('alloc_below',33,0x4001000);z=call('alloc_range',65,0x4002000,0x4008000);assert a and b and z,(label,hex(a),hex(b),hex(z));assert z>=0x4002000 and z+65<=0x4008000;rows.append(('allocated',a,b,z,stats()));payload=bytes((i*37+11)&255 for i in range(17));c.mem_write(a,payload);q=call('realloc',a,129);assert q and bytes(c.mem_read(q,17))==payload,(label,q);rows.append(('resized',q,stats()));call('free',b,bits=8);call('free',z,bits=8);call('free',q,bits=8);rows.append(('released',stats()));assert stats()==baseline
 rows.append(('add',call('add_region',0x4200000,0x10000,bits=8),stats()));c.mem_write(0x3000000,b'\xa5'*16+struct.pack('<'+word*2,0x4400000,0x4500000)+b'\xa5'*16);c.mem_write(0x3001000,b'\xa5'*16+struct.pack('<'+word*2,0x10000,0x20000)+b'\xa5'*16);before=[bytes(c.mem_read(a,32+ptr*2))for a in [0x3000000,0x3001000]];rows.append(('add_many',call('add_regions',0x3000010,0x3001010,2,bits=8),stats()));assert before==[bytes(c.mem_read(a,32+ptr*2))for a in [0x3000000,0x3001000]]
 rows.append(('invalid',call('alloc_range',8,0x4008000,0x4002000),call('alloc_below',16,0x4000001),call('add_region',0x4600000,0,bits=8),call('add_regions',0,0,0,bits=8),stats()));call('reset',bits=8);rows.append(('reset',stats()));assert stats()==baseline
 for text,reject in [(b'permafrost',b'a'),(b'abc',b'xyz'),(b'',b'x'),(b'a b',b' ')]:
  c.mem_write(0x3010000,text+b'\0');c.mem_write(0x3011000,reject+b'\0');rows.append(('span',d.call('_strcspn',0x3010000,0x3011000,result_bits=ptr*8)))
 results.append(rows)
assert results[0]==results[1],(args.arch,results)
print(args.arch,'region registration, bounded allocation, resize, release and string spans match:',len(results[0]),'workflows.',flush=True)
