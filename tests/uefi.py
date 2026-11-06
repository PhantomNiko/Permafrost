#!/usr/bin/env python3
"""Boot a temporary UEFI guest and exercise startup, SDK services, or a VM."""
import argparse
import re
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
    parser.add_argument('--vars',type=Path)
    parser.add_argument('--resource-dir',type=Path)
    parser.add_argument('--sdk',type=Path,default=Path('build/Permafrost0.9.sdk'))
    parser.add_argument('--arch',choices=('i386','x86_64','armv7','arm64'),default='x86_64')
    parser.add_argument('--compiler',type=Path,help='use a source compiler instead of the SDK compiler')
    parser.add_argument('--vm',choices=('lua','rwby','winterscript'))
    parser.add_argument('--script',type=Path)
    parser.add_argument('--services',action='store_true')
    parser.add_argument('--graphics',action='store_true')
    parser.add_argument('--selftest',action='store_true')
    parser.add_argument('--serial-flag',type=lambda value:int(value,0))
    parser.add_argument('--timeout',type=float,default=90)
    parser.add_argument('--memory',type=int,help='guest RAM in MiB')
    parser.add_argument('--display-device',default='ramfb',choices=('ramfb','virtio-ramfb','virtio-gpu-pci'))
    parser.add_argument('--command',action='append',default=[],help='type a command at the actual console')
    parser.add_argument('--expect',action='append',default=[],help='require an exact serial output line')
    parser.add_argument('--screenshot',type=Path,help='save the guest display as PPM')
    args=parser.parse_args();arm=args.arch in ('armv7','arm64')
    if not arm and args.vars is None:parser.error('x86 checks require --vars')
    if arm and (args.vm or args.selftest):parser.error('ARM checks currently cover startup and SDK services')
    base=args.image.read_bytes();root_source=Path(__file__).parent
    with tempfile.TemporaryDirectory(prefix='permafrost-uefi-')as temporary:
        root=Path(temporary);files=Image(base,0).files()
        def compile(source,name,address):
            target=root/name
            defines=['-D','PF_TEST_SERIAL_FLAG='+hex(args.serial_flag)]if args.serial_flag is not None and name=='uart.bin'else[]
            subprocess.run([sys.executable,str(args.compiler or args.sdk/'bin/pf-cc'),str(source),*defines,'--runtime','--arch',args.arch,
                '--format','flat','--base',hex(address),'-o',str(target)],check=True,stdout=subprocess.DEVNULL)
            files[name]=target.read_bytes()
        program_base=0x42000000 if arm else 0x240000
        compile(root_source/('arm_uart.c'if arm else'uefi_uart.c'),'uart.bin',program_base)
        script='assert(runcode("/uart.bin",$%x)==1)\ndevice("mount",4,"FAT32")\ndevice("target",4)\n'%program_base
        marker='PF-UEFI-HARDWARE-PASS';script+='serial(2 + 3)\n'
        if arm:script+='assert(pfProbe(2 + 3))\n'
        if args.services:
            service_base=program_base+0x20000;module_base=program_base+0x40000
            compile(root_source/'services.c','services.bin',service_base)
            compile(Path('sdk/examples/native-module.c'),'native-module.bin',module_base)
            script+='assert(runcode("/native-module.bin",$%x)==1)\n'%module_base
            script+='assert(nativeExample["add"](17,25)==42)\n'
            script+='ok,message=pcall(nativeExample["add"],"bad",1)\nassert(not ok)\n'
            script+='assert(runcode("/services.bin",$%x)==1)\n'%service_base;marker='PF-SERVICES-PASS'
            # The test program lives on the mounted user volume.
        if args.selftest:
            text=Image(base,2).files()['winterscript-selftest.ws'].decode()
            text=text.replace('print("WinterScript self-test: PASS")','serial("PF-SELFTEST-PASS")')
            script+=text+'\n';marker='PF-SELFTEST-PASS'
        if args.graphics:
            graphics_base=program_base+0x60000
            compile(root_source/'graphics.c','graphics.bin',graphics_base)
            script+='assert(runcode("/graphics.bin",$%x)==1)\n'%graphics_base
            marker='PF-GRAPHICS-PASS'
        if args.script:script+=args.script.read_text()+'\n'
        if args.vm or args.command:script+='serial("PF-UEFI-READY")\n'
        else:script+=('print'if arm else'serial')+'("PF-UEFI-HARDWARE-PASS")\n'
        files['startup.ws']=script.encode();disk=repack_image(base,files)
        user=Image(disk,2).files()
        if args.services:
            for name in ('services.bin','native-module.bin'):user[name]=files[name]
        if args.graphics:user['graphics.bin']=files['graphics.bin']
        if args.vm:
            extension={'lua':'lua','rwby':'rb','winterscript':'ws'}[args.vm]
            source=root_source/('native-'+args.vm+'.'+extension)
            user['index.'+extension]=source.read_bytes()if source.exists()else b'assert(2+3*4==14)\nlocal n=0\nfor i=1,12 do n=n+i end\nassert(n==78)\nprint("PF-LUA-HARDWARE-PASS")\n'
            marker={'lua':'PF-LUA-HARDWARE-PASS','rwby':'PF-RWBY-PASS','winterscript':'PF-NATIVE-WS-PASS'}[args.vm]
        (root/'disk.img').write_bytes(repack_image(disk,user,2))
        if not arm:shutil.copyfile(args.vars,root/'vars.fd')
        serial=root/'serial.log';monitor=root/'monitor.sock'
        command=[str(args.qemu.resolve()),'-display','none','-serial','file:'+str(serial),
            '-monitor','unix:'+str(monitor)+',server=on,wait=off','-no-reboot']
        if arm:
            command+=['-machine','virt,accel=tcg','-cpu','cortex-a57'if args.arch=='arm64'else'cortex-a15',
                '-m',str(args.memory or 512),'-bios',str(args.firmware.resolve()),'-device',args.display_device,
                '-drive','if=none,id=pf_disk,format=raw,file='+str(root/'disk.img'),'-device','virtio-blk-pci,drive=pf_disk']
            if args.command:command+=['-device','qemu-xhci,id=pf_usb','-device','usb-kbd,bus=pf_usb.0']
        else:
            format='qcow2'if args.vars.read_bytes()[:4]==b'QFI\xfb'else'raw'
            command+=['-machine','q35,accel=tcg','-cpu','max','-m',str(args.memory or 256),
                '-drive','if=pflash,format=raw,readonly=on,file='+str(args.firmware.resolve()),
                '-drive','if=pflash,format='+format+',file='+str(root/'vars.fd'),
                '-drive','format=raw,file='+str(root/'disk.img')]
        if args.resource_dir:command+=['-L',str(args.resource_dir.resolve())]
        output='';sent=False
        with(root/'qemu.log').open('wb')as log:
            process=subprocess.Popen(command,stdout=log,stderr=log)
            try:
                deadline=time.monotonic()+args.timeout
                while time.monotonic()<deadline and process.poll()is None:
                    output=serial.read_text(errors='replace')if serial.exists()else''
                    complete=(bool(re.search(r'(?m)^(?:@ )*PF-CONSOLE-PASS\r?$',output))if args.command else marker in output)
                    if 'Synchronous Exception at'in output:
                        try:
                            with socket.socket(socket.AF_UNIX,socket.SOCK_STREAM)as control:
                                control.settimeout(2);control.connect(str(monitor));control.recv(4096)
                                control.sendall(b'info registers\n');registers=b''
                                while b'(qemu)'not in registers:
                                    try:chunk=control.recv(65536)
                                    except socket.timeout:break
                                    if not chunk:break
                                    registers+=chunk
                                print(registers.decode(errors='replace'),flush=True)
                        except OSError:pass
                        break
                    if complete or 'PF-GRAPHICS-FAIL'in output:break
                    if args.command and not sent and 'PF-UEFI-READY'in output:
                        keys={' ':'spc','+':'shift-equal','*':'shift-8','(':'shift-9',')':'shift-0','"':'shift-apostrophe','=':'equal','-':'minus','/':'slash','_':'shift-minus',',':'comma','.':'dot',':':'shift-semicolon',';':'semicolon'}
                        with socket.socket(socket.AF_UNIX,socket.SOCK_STREAM)as control:
                            control.settimeout(2);control.connect(str(monitor));control.recv(4096)
                            for line in args.command+['serial("PF-CONSOLE-PASS")']:
                                for char in line:
                                    key=keys.get(char,'shift-'+char.lower()if char.isupper()else char)
                                    control.sendall(('sendkey '+key+' 40\n').encode());time.sleep(.07);control.recv(8192)
                                control.sendall(b'sendkey ret 40\n');time.sleep(.25);control.recv(8192)
                        sent=True
                    if args.vm and not sent and 'PF-UEFI-READY'in output:
                        with socket.socket(socket.AF_UNIX,socket.SOCK_STREAM)as control:
                            control.settimeout(2);control.connect(str(monitor));control.recv(4096)
                            for key in [*args.vm,'ret']:
                                control.sendall(('sendkey '+key+'\n').encode());time.sleep(.1);control.recv(8192)
                        sent=True
                    time.sleep(.1)
                if args.screenshot and process.poll()is None:
                    args.screenshot.parent.mkdir(parents=True,exist_ok=True)
                    with socket.socket(socket.AF_UNIX,socket.SOCK_STREAM)as control:
                        control.settimeout(3);control.connect(str(monitor));control.recv(4096)
                        control.sendall(('screendump '+str(args.screenshot.resolve())+'\n').encode());time.sleep(.3);control.recv(8192)
            finally:
                if process.poll()is None:process.terminate()
                try:process.wait(timeout=5)
                except subprocess.TimeoutExpired:process.kill();process.wait()
        print(output)
        passed=bool(re.search(r'(?m)^(?:@ )*PF-CONSOLE-PASS\r?$',output))if args.command else marker in output
        if not passed:
            print((root/'qemu.log').read_text(errors='replace')[-3000:]);raise SystemExit('UEFI hardware check failed')
        results=output.split('PF-UEFI-READY',1)[-1]if args.command else output
        for expected in args.expect:
            if not re.search(r'(?m)^'+re.escape(expected)+r'\r?$',results):raise SystemExit('missing output line: '+expected)
        if ('PF-SDK-ARM-CALL-PASS'if arm else'PF-SDK-UEFI-CALL-PASS')not in output:raise SystemExit('native SDK service call marker missing')
        if arm and 'PF-SDK-ARM-VALUE-PASS'not in output:raise SystemExit('ARM callback value marker missing')
        if arm and 'PF-SDK-ARM-NATIVE-PASS'not in output:raise SystemExit('ARM native program marker missing')
        print('UEFI '+args.arch+' '+(args.vm or 'startup')+' check passed.')


if __name__=='__main__':main()
