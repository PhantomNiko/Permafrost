#!/usr/bin/env python3
"""Boot a temporary UEFI guest and exercise startup, SDK services, or a VM."""
import argparse
from pathlib import Path
import shutil
import socket
import subprocess
import sys
import tempfile
import time
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from wmfs import Image,repack_image


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('image',type=Path)
    parser.add_argument('--qemu',type=Path,required=True)
    parser.add_argument('--firmware',type=Path,required=True)
    parser.add_argument('--vars',type=Path,required=True)
    parser.add_argument('--resource-dir',type=Path)
    parser.add_argument('--sdk',type=Path,default=Path('build/Permafrost0.7.sdk'))
    parser.add_argument('--arch',choices=('i386','x86_64'),default='x86_64')
    parser.add_argument('--vm',choices=('lua','rwby','winterscript'))
    parser.add_argument('--script',type=Path)
    parser.add_argument('--services',action='store_true')
    parser.add_argument('--selftest',action='store_true')
    parser.add_argument('--serial-flag',type=lambda value:int(value,0))
    parser.add_argument('--timeout',type=float,default=90)
    args=parser.parse_args();base=args.image.read_bytes();root_source=Path(__file__).parent
    with tempfile.TemporaryDirectory(prefix='permafrost-uefi-')as temporary:
        root=Path(temporary);files=Image(base,0).files()
        def compile(source,name,address):
            target=root/name
            defines=['-D','PF_TEST_SERIAL_FLAG='+hex(args.serial_flag)]if args.serial_flag is not None and name=='uart.bin'else[]
            subprocess.run([sys.executable,str(args.sdk/'bin/pf-cc'),str(source),*defines,'--arch',args.arch,
                '--format','flat','--base',hex(address),'-o',str(target)],check=True,stdout=subprocess.DEVNULL)
            files[name]=target.read_bytes()
        compile(root_source/'uefi_uart.c','uart.bin',0x240000)
        script='assert(runcode("/uart.bin",$240000)==1)\ndevice("mount",4,"FAT32")\ndevice("target",4)\n'
        marker='PF-UEFI-HARDWARE-PASS';script+='serial(2 + 3)\n'
        if args.services:
            compile(root_source/'services.c','services.bin',0x240000)
            compile(Path('sdk/examples/native-module.c'),'native-module.bin',0x260000)
            script+='assert(runcode("/native-module.bin",$260000)==1)\n'
            script+='assert(nativeExample["add"](17,25)==42)\n'
            script+='ok,message=pcall(nativeExample["add"],"bad",1)\nassert(not ok)\n'
            script+='assert(runcode("/services.bin",$240000)==1)\n';marker='PF-SERVICES-PASS'
            # The test program lives on the mounted user volume.
        if args.selftest:
            text=Image(base,2).files()['winterscript-selftest.ws'].decode()
            text=text.replace('print("WinterScript self-test: PASS")','serial("PF-SELFTEST-PASS")')
            script+=text+'\n';marker='PF-SELFTEST-PASS'
        if args.script:script+=args.script.read_text()+'\n'
        if args.vm:script+='serial("PF-UEFI-READY")\n'
        else:script+='serial("PF-UEFI-HARDWARE-PASS")\n'
        files['startup.ws']=script.encode();disk=repack_image(base,files)
        user=Image(disk,2).files()
        if args.services:
            for name in ('services.bin','native-module.bin'):user[name]=files[name]
        if args.vm:
            extension={'lua':'lua','rwby':'rb','winterscript':'ws'}[args.vm]
            source=root_source/('native-'+args.vm+'.'+extension)
            user['index.'+extension]=source.read_bytes()if source.exists()else b'assert(2+3*4==14)\nlocal n=0\nfor i=1,12 do n=n+i end\nassert(n==78)\nprint("PF-LUA-HARDWARE-PASS")\n'
            marker={'lua':'PF-LUA-HARDWARE-PASS','rwby':'PF-RWBY-PASS','winterscript':'PF-NATIVE-WS-PASS'}[args.vm]
        (root/'disk.img').write_bytes(repack_image(disk,user,2));shutil.copyfile(args.vars,root/'vars.fd')
        serial=root/'serial.log';monitor=root/'monitor.sock'
        format='qcow2'if args.vars.read_bytes()[:4]==b'QFI\xfb'else'raw'
        command=[str(args.qemu.resolve()),'-machine','q35,accel=tcg','-cpu','max','-m','256',
            '-display','none','-serial','file:'+str(serial),'-monitor','unix:'+str(monitor)+',server=on,wait=off',
            '-drive','if=pflash,format=raw,readonly=on,file='+str(args.firmware.resolve()),
            '-drive','if=pflash,format='+format+',file='+str(root/'vars.fd'),
            '-drive','format=raw,file='+str(root/'disk.img'),'-no-reboot']
        if args.resource_dir:command+=['-L',str(args.resource_dir.resolve())]
        output='';sent=False
        with(root/'qemu.log').open('wb')as log:
            process=subprocess.Popen(command,stdout=log,stderr=log)
            try:
                deadline=time.monotonic()+args.timeout
                while time.monotonic()<deadline and process.poll()is None:
                    output=serial.read_text(errors='replace')if serial.exists()else''
                    if marker in output:break
                    if args.vm and not sent and 'PF-UEFI-READY'in output:
                        with socket.socket(socket.AF_UNIX,socket.SOCK_STREAM)as control:
                            control.settimeout(2);control.connect(str(monitor));control.recv(4096)
                            for key in [*args.vm,'ret']:
                                control.sendall(('sendkey '+key+'\n').encode());time.sleep(.1);control.recv(8192)
                        sent=True
                    time.sleep(.1)
            finally:
                if process.poll()is None:process.terminate()
                try:process.wait(timeout=5)
                except subprocess.TimeoutExpired:process.kill();process.wait()
        print(output)
        if marker not in output:
            print((root/'qemu.log').read_text(errors='replace')[-3000:]);raise SystemExit('UEFI hardware check failed')
        if 'PF-SDK-UEFI-CALL-PASS'not in output:raise SystemExit('native SDK service call marker missing')
        print('UEFI '+args.arch+' '+(args.vm or 'startup')+' check passed.')


if __name__=='__main__':main()
