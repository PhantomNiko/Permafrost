#!/usr/bin/env python3
"""Boot a test copy under Bochs with its full BIOS, VGA BIOS and hardware."""
import argparse
from pathlib import Path
import subprocess
import sys
import tempfile
import time
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from wmfs import Image, make_image


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('image', type=Path)
    parser.add_argument('--bochs', required=True, type=Path)
    parser.add_argument('--bios', required=True, type=Path)
    parser.add_argument('--vgabios', required=True, type=Path)
    parser.add_argument('--timeout', type=float, default=45)
    parser.add_argument('--script', type=Path, help='run this script as startup on the test copy')
    parser.add_argument('--expect', default='PF-HARDWARE-PASS')
    parser.add_argument('--initialize-fpu', action='store_true', help='initialize x87 on the reference test copy')
    args = parser.parse_args()
    image = args.image.read_bytes()
    files = Image(image).files()
    if args.initialize_fpu:
        import struct
        name = next(name for name, content in files.items() if content[:4] == b'WMLP')
        kernel = bytearray(files[name])
        if kernel[0x10] != 0xfc:
            raise ValueError('unexpected reference entry layout')
        # Replace only the debug entry prefix; all reference C code stays intact.
        entry = b'\xdb\xe3\xfc\xe8' + struct.pack('<i', 0x23bb1 - 0x20018)
        entry += b'\xfa\xf4\xeb\xfc'
        kernel[0x10:0x23] = entry.ljust(0x13, b'\x90')
        files[name] = bytes(kernel)
    # A script on a test copy observes startup loading and the real UART driver.
    files['startup.ws'] = b'serial("PF-HARDWARE-BOOT")\nserial(2 + 3)\nserial("PF-HARDWARE-PASS")\n'
    if args.script:
        files['startup.ws'] = args.script.read_bytes()
    image = make_image(image[:512], image[512:65 * 512], files, max(2048, len(image) // 512))
    with tempfile.TemporaryDirectory(prefix='permafrost-hardware-') as temp:
        root = Path(temp)
        (root / 'disk.img').write_bytes(image)
        config = '\n'.join([
            'display_library: nogui', 'megs: 64',
            'romimage: file="%s"' % args.bios.resolve(),
            'vgaromimage: file="%s"' % args.vgabios.resolve(),
            'boot: disk', 'ata0-master: type=disk, path="disk.img", mode=flat, cylinders=0, heads=0, spt=0',
            'com1: enabled=1, mode=file, dev="serial.log"',
            'clock: sync=none, time0=0', 'log: bochs.log',
            'panic: action=fatal', 'error: action=report', 'info: action=report', 'debug: action=ignore',
            'mouse: enabled=0', 'cpu: ips=50000000', ''])
        (root / 'bochsrc').write_text(config)
        with (root / 'host.log').open('wb') as hostlog:
            process = subprocess.Popen([str(args.bochs.resolve()), '-q', '-f', 'bochsrc'],
                                       cwd=root, stdout=hostlog, stderr=hostlog, stdin=subprocess.DEVNULL)
            deadline = time.monotonic() + args.timeout
            output = ''
            try:
                while time.monotonic() < deadline and process.poll() is None:
                    serial = root / 'serial.log'
                    output = serial.read_text(errors='replace') if serial.exists() else ''
                    if args.expect in output:
                        break
                    time.sleep(0.1)
            finally:
                if process.poll() is None:
                    process.terminate()
                    try:
                        process.wait(timeout=5)
                    except subprocess.TimeoutExpired:
                        process.kill()
                        process.wait()
            print(output)
            if args.expect not in output or (not args.script and '\n5\n' not in output.replace('\r', '')):
                print((root / 'host.log').read_text(errors='replace')[-3000:])
                if (root / 'bochs.log').exists():
                    print((root / 'bochs.log').read_text(errors='replace')[-3000:])
                raise SystemExit('full BIOS/hardware boot test failed')
            print('Full BIOS/hardware startup test passed.')


if __name__ == '__main__':
    main()
