#!/usr/bin/env python3
"""Compare driver initialization, registration failures, and optional PCI discovery.

Pooka's Free Software License. Hardware callbacks are intercepted.
"""
import argparse
from pathlib import Path
from usb_xhci_driver import run

def compare(reference,source,pci_class=None,pci_identity=None):
 cases=[{},dict(registration=0),dict(controller=1),dict(size=12),dict(size=64),dict(magic=0),dict(enabled=False),dict(version=1)]
 if pci_class is not None:
  for identity in [pci_identity,(pci_identity&0xffff0000)|0xffff,0]:
   for multifunction in [False,True]:cases.append(dict(pci_device=True,multifunction=multifunction,pci_class=pci_class,pci_identity=identity))
 for i,kw in enumerate(cases):
  expected=run(reference,**kw);actual=run(source,**kw)
  assert expected==actual,(i,kw,expected[:3],actual[:3],len(expected[3]),len(actual[3]))
 print('Driver initialization:',len(cases),'native descriptor, API, registration, PCI and failure comparisons passed.')
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--pci-class',type=lambda x:int(x,0));p.add_argument('--pci-identity',type=lambda x:int(x,0));a=p.parse_args();assert (a.pci_class is None)==(a.pci_identity is None);compare(a.reference,a.source,a.pci_class,a.pci_identity)
