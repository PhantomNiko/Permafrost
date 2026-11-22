#!/usr/bin/env python3
"""Check recovered mutable libc pointers against native application data.

Pooka's Free Software License. No host files or devices are used by the guest.
"""
import argparse
from pathlib import Path
from desktop_calendar import load
from native import inspect

def exercise(reference,source,library,folder):
 metadata,memory=inspect(reference.read_bytes());sm,_=inspect(source.read_bytes());libs=load(reference,source,folder,library);symbols={n:a for a,n in sm['symbols']};data={n:a for a,n in metadata['data_symbols']};sd={n:a for a,n in sm['data_symbols']};end=next(a+n for k,a,n in metadata['sections']if k=='__text');lib=libs[1];lib.exports['initialize']=lib.base+symbols['_pf_app_initialize'];lib.call('initialize');state=lib.base+sd['_pf_module_state'];word=8 if lib.wide else 4
 def source_pointer(place):return int.from_bytes(lib.cpu.mem_read(state+place-end,word),'little')
 for name in ['_stdin','_stdout','_stderr','_environ']:
  address=data[name];target=int.from_bytes(memory[address-metadata['base']:address-metadata['base']+word],'little');assert source_pointer(address)==state+target-end,(name,hex(source_pointer(address)),hex(state+target-end))
  if name!='_environ':assert bytes(lib.cpu.mem_read(state+target-end,24))==memory[target-metadata['base']:target-metadata['base']+24],name
 for i in range(3):
  address=data['_gFdTable']+i*word;target=int.from_bytes(memory[address-metadata['base']:address-metadata['base']+word],'little');assert source_pointer(address)==state+target-end,('descriptor',i)
 print('Snowflake libc state: standard stream objects, three descriptor slots, and the environment vector match native data.')
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.library,a.output)
