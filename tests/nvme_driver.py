#!/usr/bin/env python3
"""Compare NVMe driver registration, controller records, and PCI discovery.

Pooka's Free Software License. Hardware callbacks are intercepted.
"""
import argparse
from pathlib import Path
from usb_xhci_driver import run
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args();cases=[{},dict(registration=0),dict(controller=1),dict(size=12),dict(size=64),dict(magic=0),dict(enabled=False),dict(version=1),dict(pci_device=True),dict(pci_device=True,multifunction=True)]
 for i,kw in enumerate(cases):
  expected=run(a.reference,pci_class=0x01080200,pci_identity=0x00101b36,**kw);actual=run(a.source,pci_class=0x01080200,pci_identity=0x00101b36,**kw);assert expected==actual,(i,expected[:3],actual[:3],len(expected[3]),len(actual[3]))
 print('NVMe driver: ten native descriptor, initialization, controller, PCI scan, API, and failure comparisons passed.')
