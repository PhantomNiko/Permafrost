"""Selected translation retains dependencies and untouched units.
Pooka's Free Software License.
"""
from pathlib import Path
import subprocess
import sys
import tempfile
import json

root = Path(__file__).resolve().parents[1]
with tempfile.TemporaryDirectory() as directory:
    base = Path(directory)
    notes, units, manual = (base / name for name in ['notes', 'units', 'manual'])
    notes.mkdir(); manual.mkdir()
    for address, expression in [('10001000', 'recovered_10002000()'), ('10002000', '42')]:
        (notes / (address + '.c')).write_text('int recovered_' + address + '(void)\n{\n return ' + expression + ';\n}\n')
        (notes / (address + '.tsv')).write_text('')
    layout = base / 'layout.json'
    layout.write_text(json.dumps({'translation': {'pointer_bytes': 4}}))
    command = [sys.executable, str(root / 'tools/ghidra/translate.py'), '--layout', str(layout),
               '--notes', str(notes), '--out', str(units), '--manual', str(manual)]
    subprocess.run(command, check=True)
    untouched = (units / '10002000.c').read_bytes()
    (notes / '10001000.c').write_text('int recovered_10001000(void)\n{\n return recovered_10002000()+1;\n}\n')
    selected = base / 'selected.txt'
    selected.write_text('0x10001000\n')
    subprocess.run(command + ['--select', str(selected)], check=True)
    assert (units / '10002000.c').read_bytes() == untouched
    assert 'recovered_10002000()+1' in (units / '10001000.c').read_text()
    assert 'int recovered_10002000(void);' in (units / 'functions.h').read_text()
    assert 'DAT_10002000' not in (units / '10001000.c').read_text()
print('Selected translation preserves dependent declarations and unmodified units.')
