#!/usr/bin/env python3
"""Compare the browser scripting module's observable basic entry interface.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
from dll import DLL


def execute(path, script, capacity=512, status_capacity=128, flags=1):
    lib = DLL(path, instruction_limit=10000000, poison_allocations=True, poison_stack=True)
    if script is not None:
        lib.cpu.mem_write(0x3000000, script.encode() + b'\0')
    output, status = 0x3001000, 0x3002000
    lib.cpu.mem_write(output, b'prefix\0' + b'\xa5' * 505)
    lib.cpu.mem_write(status, b'previous\0' + b'\xa5' * 119)
    result = lib.call('_winter_js_execute_basic', 0x3000000 if script is not None else 0,
                      output, capacity, status, status_capacity, flags, result_bits=32)
    return result, bytes(lib.cpu.mem_read(output, 512)), bytes(lib.cpu.mem_read(status, 128))


def event(path, script, handler, capacity, flags):
    lib = DLL(path, instruction_limit=10000000, poison_allocations=True, poison_stack=True)
    pointers = []
    for i, text in enumerate((script, handler, 'https://example.invalid/start?q=snow',
                               '<input id="q" value="snow"><p id="answer">old</p>')):
        pointer = 0x3000000 + i * 0x1000
        if text is not None:
            lib.cpu.mem_write(pointer, text.encode() + b'\0')
        pointers.append(pointer if text is not None else 0)
    outputs = (0x3010000, 0x3011000, 0x3012000)
    for pointer in outputs:
        lib.cpu.mem_write(pointer, b'previous\0' + b'\xa5' * 247)
    result = lib.call('_winter_js_execute_browser_event', *pointers,
                      outputs[0], capacity, outputs[1], capacity, outputs[2], capacity, flags,
                      stack_format='<QII' if lib.cpu_type == 0x100000c else None, result_bits=32)
    return result, tuple(bytes(lib.cpu.mem_read(pointer, 256)) for pointer in outputs)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    args = parser.parse_args()
    scripts = [None, '', 'var answer = 42;', 'document.write("hello");',
               'document.writeln("first"); document.write("second");',
               'document.body.innerHTML = "<b>hello</b>";',
               'document.body.textContent = "<b>hello</b>";',
               'console.log("hello");', 'alert("hello");',
               'document.body.insertAdjacentHTML("beforeend", "<p>hello</p>");',
               'document.write("a\\nb\\\"c");']
    count = 0
    for script in scripts:
        for capacity, status_capacity, flags in ((512, 128, 1), (8, 8, 1), (0, 0, 1), (512, 128, 0)):
            expected, actual = (execute(path, script, capacity, status_capacity, flags)
                                for path in (args.reference, args.source))
            assert actual == expected, (script, capacity, status_capacity, flags,
                                        tuple(x[:64] if isinstance(x, bytes) else x for x in expected),
                                        tuple(x[:64] if isinstance(x, bytes) else x for x in actual))
            count += 1
    for script, handler in ((None, None), (None, ''), (None, 'return false;'),
                            (None, 'location.href = "/next";'),
                            (None, 'document.write("clicked");'),
                            ('function go() { document.write("called"); }', 'go()'),
                            (None, 'location.href = location.href;'),
                            (None, 'location.href = "/search?q=" + document.getElementById("q").value;'),
                            (None, 'location.href = "/search?q=" + encodeURIComponent(document.getElementById("q").value);'),
                            (None, 'location.href = "/search?q=" + document.getElementById("q").value.toUpperCase();'),
                            (None, 'location.href = `/search?q=${document.getElementById("q").value}`;'),
                            (None, 'location.href = window.location.origin + "/next";'),
                            (None, 'document.getElementById("answer").textContent = "snow";'),
                            (None, 'console.log("clicked");')):
        for capacity, flags in ((256, 3), (8, 3), (256, 0), (0, 3)):
            expected, actual = (event(path, script, handler, capacity, flags)
                                for path in (args.reference, args.source))
            if handler == 'location.href = "/next";' and capacity == 256 and flags == 3:
                assert expected[0] == 16 and expected[1][0].split(b'\0')[0] == b'/next'
            if handler == 'document.write("clicked");' and capacity == 256 and flags == 3:
                assert expected[0] == 1 and expected[1][1].split(b'\0')[0] == b'clicked'
            assert actual == expected, ('browser event', script, handler, capacity, flags,
                                        expected[0], actual[0],
                                        tuple(x[:64] for x in expected[1]),
                                        tuple(x[:64] for x in actual[1]))
            count += 1
    print('Browser scripting: %d native/source execution, event and buffer-boundary cases passed.' % count)


if __name__ == '__main__':
    main()
