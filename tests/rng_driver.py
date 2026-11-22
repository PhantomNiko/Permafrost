#!/usr/bin/env python3
"""Compare VirtIO RNG discovery, registration, and initialization failures.

Pooka's Free Software License. Hardware callbacks are intercepted.
"""
import argparse
from pathlib import Path
from usb_xhci_driver import run

def compare(reference,source):
 cases=[{},dict(registration=0),dict(controller=1),dict(size=12),dict(size=64),dict(magic=0),dict(enabled=False),dict(version=1)]
 for identity in [0x10051af4,0x10441af4,0x10041af4,0x1044ffff]:
  for multifunction in [False,True]:cases.append(dict(pci_device=True,multifunction=multifunction,pci_class=0x00ff0000,pci_identity=identity))
 for i,kw in enumerate(cases):
  expected=run(reference,**kw);actual=run(source,**kw)
  assert expected==actual,(i,kw,expected[:3],actual[:3],len(expected[3]),len(actual[3]))
 print('VirtIO RNG:',len(cases),'native descriptor, initialization, API, PCI scan, device identity and registration comparisons passed.')
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args();compare(a.reference,a.source)
