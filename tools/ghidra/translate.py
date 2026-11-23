#!/usr/bin/env python3
"""Prepare recovered C for compilation while preserving observed stack layouts.

The output remains a low-level translation with address-based identifiers.
It requires review and execution tests; this tool does not certify correctness.
"""
import argparse
import json
from pathlib import Path
import re


WIDE = False

def rename_identifier(source, original, replacement):
    quoted=re.compile(r'("(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|//[^\n]*|/\*.*?\*/)',re.S)
    return ''.join(part if i%2 else re.sub(r'\b'+re.escape(original)+r'\b',replacement,part)
                   for i,part in enumerate(quoted.split(source)))

def signed_negative_hex(source):
    """Keep decompiler negative constants from unsigned 32-bit negation."""
    quoted=re.compile(r'("(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|//[^\n]*|/\*.*?\*/)',re.S)
    pattern=r'((?:[=(,:?{+*/%&|^<>!]|\breturn)\s*-\s*)(0x[89a-fA-F][0-9a-fA-F]{7})\b(?![uUlL])'
    return ''.join(part if i%2 else re.sub(pattern,r'\1\2LL',part)
                   for i,part in enumerate(quoted.split(source)))

def system_register_views(source, registers):
    """Lower architectural register storage to explicit hardware accessors."""
    if not registers:
        return source
    for name in registers:
        declaration,_=stack_declaration(source,name)
        if declaration:
            source=source[:declaration.start()]+source[declaration.end():]
    names='|'.join(re.escape(name) for name in registers)
    quoted=re.compile(r'("(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|//[^\n]*|/\*.*?\*/)',re.S)
    def code(text):
        def store(match):
            name=match[1]
            if registers[name]=='ro':
                raise ValueError('Write to read-only system register '+name)
            return 'pf_write_'+name+'('+match[2]+');'
        text=re.sub(r'(?<![.\w])('+names+r')\s*=(?!=)\s*([^;]+);',store,text)
        def load(match):
            name=match[0]
            if registers[name]=='wo':
                raise ValueError('Read from write-only system register '+name)
            return 'pf_read_'+name+'()'
        return re.sub(r'(?<![.\w])(?:'+names+r')\b',load,text)
    return ''.join(part if i%2 else code(part) for i,part in enumerate(quoted.split(source)))


def register_input_views(source, registers):
    """Initialize architectural inputs without changing later register reuse.

    Ghidra can merge a hardware-register read with a subsequently reused
    general register. Rewriting every assignment as a hardware write would
    invent control-register writes absent from the original instructions.
    """
    for name, accessor in registers.items():
        declaration, typename=stack_declaration(source,name)
        if declaration:
            remaining=source[:declaration.start()]+source[declaration.end():]
            if re.search(r'\b'+re.escape(name)+r'\s*=(?!=)',remaining):
                source=source[:declaration.start()]+declaration[0].rstrip('\n;')+' = ('+typename+')'+accessor+'();\n'+source[declaration.end():]
            else:
                # Keep conditional reads conditional: XGETBV and FPU state
                # instructions can fault before their feature/TS checks.
                source=re.sub(r'\b'+re.escape(name)+r'\b','(('+typename+')'+accessor+'())',remaining)
    return source


def descriptor_register_views(source):
    """Retain the upper descriptor-base bytes missing from scalar userop results."""
    pattern=re.compile(r'(\w+)\s*=\s*(GlobalDescriptorTableRegister|InterruptDescriptorTableRegister)\(\);')
    for number,match in reversed(list(enumerate(pattern.finditer(source)))):
        variable,operation=match.groups()
        following=source[match.end():]
        part=re.search(r'(uStack_([0-9a-f]+))\s*=\s*\(undefined([26])\)\((?:\((?:ulong|uint)\))?'+re.escape(variable)+r'\s*>>\s*0x10\);',following)
        if not part:raise ValueError('unreviewed descriptor-register result packing')
        offset,width=int(part[2],16),int(part[3])
        neighbor='uStack_'+format(offset-width,'x')
        if not re.search(r'\bundefined2\s+'+neighbor+r'\s*;',source):
            raise ValueError('descriptor base has no upper-word storage')
        temporary='pf_descriptor_'+str(number)
        replacement='uint128 '+temporary+' = '+operation+'();\n  '+variable+' = '+temporary+';\n  '+neighbor+' = (uint16_t)('+temporary+' >> '+str(16+width*8)+');'
        source=source[:match.start()]+replacement+source[match.end():]
    return source


def vector_constant_loads(source):
    # The decompiler prints a vector byte slice as pointer arithmetic on an
    # array-cast constant. It denotes bytes of the constant, not physical RAM.
    pattern=r'\*\(([A-Za-z_][A-Za-z_0-9\s]*\*+)\)\(\(undefined1\s+\[(8|16)\]\)(0x[0-9a-fA-F]+)\s*\+\s*\(undefined1\s+\[\2\]\)(0x[0-9a-fA-F]+)\)'
    def replace(match):
        count=int(match[2]);value=int(match[3],16);offset=int(match[4],16)
        if offset>=count or value>=(1<<(count*8)):
            raise ValueError('invalid constant vector slice')
        values=','.join(str(x)for x in value.to_bytes(count,'little'))
        storage='((union { uint64_t alignment; byte bytes[%d]; }){.bytes={%s}}).bytes'%(count,values)
        return '*(%s)(%s + %d)'%(match[1],storage,offset)
    return re.sub(pattern,replace,source)


def packed_vector_views(source):
    # SSA arrays denote register bits. Physical stack arrays retain their
    # byte storage: a _BitInt(96) object may occupy sixteen bytes in C.
    types={2:'uint16_t',3:'uint32_t',4:'uint32_t',8:'uint64_t',
           **{n:'pf_u'+str(n*8) for n in range(9,16)},16:'uint128',32:'uint256'}
    for width,typename in types.items():
        # Four/eight-byte SSA storage has already acquired explicit scalar
        # loads/stores in rewrite_array_words. Keep those backing arrays.
        if width not in (4,8):
            source=re.sub(r'undefined1\s+((?:auVar\d+|in_XMM\d+))\s*\['+str(width)+r'\];',
                          typename+r' \1;',source)
        source=re.sub(r'\(undefined1\s+\['+str(width)+r'\]\)', '('+typename+')',source)
    names=re.findall(r'\b(?:uint128|uint256|undefined16|pf_u\d+|uint\d+_t)\s+((?:auVar\d+|in_XMM\d+))\s*;',source)
    for name in set(names):
        source=re.sub(r'\b'+name+r'\[([^\]\n]+)\]',r'PF_PART1('+name+r',\1)',source)
    return source


def ctype(description):
    if description.startswith('P:'):
        return ctype(description[2:]) + ' *'
    if description.startswith('A:'):
        _, count, element = description.split(':', 2)
        return ctype(element) + '[' + count + ']'
    name, size = description.rsplit(':', 1)
    if name == 'void':
        return 'void'
    if name == 'string':
        return 'char[1]'
    if name == 'undefined':
        return 'uint8_t'
    if name.startswith('undefined'):
        return {'1': 'uint8_t', '2': 'uint16_t', '3': 'uint32_t',
                '4': 'uint32_t', '8': 'uint64_t'}.get(size, 'uint32_t')
    if name in ('char', 'bool', 'byte', 'ushort', 'uint', 'int', 'short', 'float', 'double', 'longdouble'):
        return ('long double' if WIDE else 'double') if name == 'longdouble' else name
    return {1: 'uint8_t', 2: 'uint16_t', 4: 'uint32_t', 8: 'uint64_t', 10: 'long double', 16: 'uint128'}.get(int(size), 'uint32_t')


def lvalue(typename, pointer, volatile=False):
    indirect = re.fullmatch(r'(.*?)\(\s*(\*+)\s*\)((?:\[\d+\])+)', typename)
    if indirect:
        return '(*(%s(%s%s*)%s)(%s))' % (indirect[1], indirect[2], ' volatile ' if volatile else '', indirect[3], pointer)
    match = re.fullmatch(r'(.*?)((?:\[\d+\])+)', typename)
    if match:
        return '(*(%s (*)%s)(%s))' % (match[1]+(' volatile'if volatile else''), match[2], pointer)
    if volatile:typename+=' volatile'
    return '(*(%s *)(%s))' % (typename, pointer)


def stack_declaration(source, name):
    """Locate a declaration without mistaking assignments for type names."""
    indirect = r'^  ([A-Za-z_][A-Za-z_0-9 \t*]*?)\s*\(\s*(\*+)\s*' + re.escape(name) + r'\s*\)\s*((?:\[\s*\d+\s*\]\s*)+);\n'
    match = re.search(indirect, source, re.M)
    if match:
        return match, match[1].strip() + '(' + match[2] + ')' + re.sub(r'\s', '', match[3])
    pattern = r'^  ([A-Za-z_][A-Za-z_0-9 \t*]*?)\b' + re.escape(name) + r'((?:\s*\[\s*\d+\s*\])*)\s*;\n'
    match = re.search(pattern, source, re.M)
    return (match, match[1].strip() + re.sub(r'\s', '', match[2])) if match else (None, None)


def atomic_views(source, exclusive_expected=None):
    # Explicit values are for reviewed instruction sequences whose load/guard
    # the decompiler moved across a label. Require the complete ordered list
    # of target/store pairs so stale annotations cannot silently apply.
    reviewed = iter(exclusive_expected) if exclusive_expected is not None else None
    # STXR produces the status and the conditional store in one instruction;
    # Ghidra can emit those two p-code effects in either order.
    source = re.sub(r'(ExclusiveMonitorPass\([^;]+;\s*if\s*\(\w+\)\s*\{\s*)'
                    r'(\w+\s*=\s*ExclusiveMonitorsStatus\(\);)\s*'
                    r'((_?DAT_[0-9a-f]+|\*\w+)\s*=\s*[^;]+;)',
                    r'\1\3\n\2', source)
    monitor_pattern=re.compile(r'(\w+)\s*=\s*\(bool\)\s*ExclusiveMonitorPass\(([^,]+),0x10\);\s*if\s*\(\1\)\s*\{\s*(_?DAT_[0-9a-f]+|\*\w+)\s*=\s*([^;]+);\s*(\w+)\s*=\s*ExclusiveMonitorsStatus\(\);\s*\}')
    while (monitor:=monitor_pattern.search(source)):
        success,address,target,value,status=monitor.groups()
        if target.startswith('*'):
            if address.strip()!=target[1:]:raise ValueError('exclusive pointer and store disagree')
        elif int(address,16)!=int(target.split('_')[-1],16):
            raise ValueError('exclusive address and store disagree')
        casts=r'(?:\([A-Za-z_][A-Za-z_0-9\s*]*\)\s*)*'
        loads=list(re.finditer(r'\b(\w+)\s*=\s*'+casts+re.escape(target)+r'\s*;',source[:monitor.start()]))
        if reviewed is not None:
            item = next(reviewed, None)
            if item is None or item['target'] != target or item['value'] != value.strip():
                raise ValueError('exclusive instruction annotation does not match store')
            expected = item['expected']
        elif loads:
            expected=loads[-1][1]
        elif re.fullmatch(re.escape(target)+r'\s*[+|&^]\s*[^;]+', value.strip()):
            # Folded exclusive read-modify-write. Both the comparison and the
            # new value must use the same observed word, even under contention.
            expected='__atomic_load_n(&('+target+'),__ATOMIC_RELAXED)'
            value=value.replace(target, 'pf_exclusive_expected')
        else:
            # The decompiler can fold an exclusive load used only by a
            # constant guard into the guard itself. Its failure arm clears the
            # monitor and leaves the acquisition path, so the store expects
            # the guarded value. Only the observed zero/one states are modeled.
            guard=(r'if\s*\(\s*'+re.escape(target)+
                   r'\s*!=\s*([01])\s*\)\s*\{\s*ClearExclusiveLocal\(\);\s*'
                   r'(?:goto\s+\w+|return(?:\s+[^;]+)?|break);')
            guards=list(re.finditer(guard,source[:monitor.start()]))
            if not guards:
                raise ValueError('exclusive store has no preceding load: '+target)
            expected=guards[-1][1]
        operation=('{ __typeof__('+target+') pf_exclusive_expected = '+expected+';\n'+
                   success+' = __atomic_compare_exchange_n(&('+target+'),&pf_exclusive_expected,'+
                   value+',0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);\n'+
                   status+' = '+success+' ? 0 : 1;\n}')
        source=source[:monitor.start()]+operation+source[monitor.end():]
    if reviewed is not None and next(reviewed, None) is not None:
        raise ValueError('unused exclusive instruction annotation')
    if 'ExclusiveMonitorPass('in source or 'ExclusiveMonitorsStatus('in source:
        raise ValueError('unreviewed ARM64 exclusive-memory operation')
    def replace(match):
        body=match[1].strip()
        if not body:return '__atomic_thread_fence(__ATOMIC_SEQ_CST);'
        unchanged=re.fullmatch(r'([^;=]+?)\s*=\s*\1\s*;',body)
        if unchanged:
            return '(void)__atomic_fetch_or(&('+unchanged[1]+'),0,__ATOMIC_SEQ_CST);'
        address_setup=re.fullmatch(r'((\w+)\s*=\s*\([A-Za-z_][A-Za-z_0-9\s]*\*+\s*\)[^;]+;)\s*(.*)',body,re.S)
        if address_setup and re.search(r'\*'+re.escape(address_setup[2])+r'\s*=',address_setup[3]):
            return address_setup[1]+'\n'+atomic_views('LOCK();'+address_setup[3]+'UNLOCK();')
        loaded_boolean=re.fullmatch(r'(\w+)\s*=\s*([^;]+);\s*'
                                    r'(\w+)\s*=\s*([^;]+?)\s*==\s*([^;]+?);\s*'
                                    r'if\s*\(\3\)\s*\{\s*\2\s*=\s*([^;]+);\s*\}'
                                    r'(?:\s*else\s*\{\s*(\w+)\s*=\s*\1;\s*\})?',body)
        if loaded_boolean:
            old,target,success,left,right,value,failure=loaded_boolean.groups()
            if left.strip()==old:expected=right
            elif right.strip()==old:expected=left
            else:raise ValueError('loaded atomic comparison does not use its observed value')
            return ('{ __typeof__('+target+') pf_atomic_expected = '+expected+';\n'+
                    success+' = __atomic_compare_exchange_n(&('+target+'),&pf_atomic_expected,'+
                    value+',0,__ATOMIC_SEQ_CST,__ATOMIC_SEQ_CST);\n'+
                    old+' = pf_atomic_expected;\n'+
                    ('if (!'+success+') '+failure+' = '+old+';\n' if failure else '')+'}')
        loaded_compare=re.fullmatch(r'(\w+)\s*=\s*([^;]+);\s*'
                                    r'if\s*\(\1\s*==\s*([^;]+?)\)\s*'
                                    r'\{\s*\2\s*=\s*([^;]+);\s*\}'
                                    r'(?:\s*else\s*\{([^{}]+)\})?',body)
        if loaded_compare:
            old,target,expected,value,failure=loaded_compare.groups()
            return ('{ __typeof__('+target+') pf_atomic_expected = '+expected+';\n'+
                    'int pf_atomic_success = __atomic_compare_exchange_n(&('+target+'),'+
                    '&pf_atomic_expected,'+value+',0,__ATOMIC_SEQ_CST,__ATOMIC_SEQ_CST);\n'+
                    old+' = pf_atomic_expected;\n'+
                    ('if (!pf_atomic_success) {'+failure+'}\n'if failure else'')+'}')
        conditional=re.fullmatch(r'if\s*\(([^;]+?)\s*==\s*([^;]+?)\)\s*'
                                 r'\{\s*([^;=]+?)\s*=\s*([^;]+);\s*\}',body)
        if conditional:
            left,right,target,value=conditional.groups()
            target=target.strip()
            if left.strip()==target:expected=right
            elif right.strip()==target:expected=left
            else:raise ValueError('conditional atomic comparison does not name its target')
            return ('{ __typeof__('+target+') pf_atomic_expected = '+expected+';\n'+
                    '(void)__atomic_compare_exchange_n(&('+target+'),&pf_atomic_expected,'+
                    value+',0,__ATOMIC_SEQ_CST,__ATOMIC_SEQ_CST);\n}')
        compare=re.fullmatch(r'(\w+)\s*=\s*([^;]+?)\s*==\s*([^;]+?);\s*'
                             r'if\s*\(\1\)\s*\{\s*([^;=]+?)\s*=\s*([^;]+);\s*\}'
                             r'(?:\s*else\s*\{\s*(\w+)\s*=\s*([^;]+);\s*\})?',body)
        if compare:
            success,left,right,target,value,old,old_value=compare.groups()
            target=target.strip()
            if left.strip()==target:expected=right
            elif right.strip()==target:expected=left
            else:raise ValueError('atomic comparison does not name its store target')
            tail=''
            if old:
                if not old_value.strip().endswith(target):
                    raise ValueError('unreviewed atomic failure result: '+old_value)
                cast=old_value.strip()[:-len(target)].strip()
                if cast and not re.fullmatch(r'\([A-Za-z_][A-Za-z_0-9\s*]*\)',cast):
                    raise ValueError('unreviewed atomic failure cast: '+cast)
                tail='if (!'+success+') '+old+' = '+cast+'pf_atomic_expected;\n'
            return ('{ __typeof__('+target+') pf_atomic_expected = '+expected+';\n'+
                    success+' = __atomic_compare_exchange_n(&('+target+'),&pf_atomic_expected,'+
                    value+',0,__ATOMIC_SEQ_CST,__ATOMIC_SEQ_CST);\n'+tail+'}')
        exchange=re.fullmatch(r'(\w+)\s*=\s*([^;]+?)\s*;\s*\2\s*=\s*([^;]+);',body)
        if exchange:
            old,target,value=exchange.groups()
            update=re.fullmatch(re.escape(old)+r'\s*([+|&^])\s*(.+)',value.strip())
            if update:
                operation={'+':'add','|':'or','&':'and','^':'xor'}[update[1]]
                return old+' = __atomic_fetch_'+operation+'(&('+target+'),'+update[2]+',__ATOMIC_SEQ_CST);'
            return old+' = __atomic_exchange_n(&('+target+'),'+value+',__ATOMIC_SEQ_CST);'
        update=re.fullmatch(r'([^;=]+?)\s*=\s*\1\s*([+|&^])\s*([^;]+);',body)
        if update:
            target,operator,value=update.groups()
            operation={'+':'add','|':'or','&':'and','^':'xor'}[operator]
            return '__atomic_fetch_'+operation+'(&('+target+'),'+value+',__ATOMIC_SEQ_CST);'
        statements=[line.strip()for line in body.split(';')if line.strip()]
        writes=[(index,match)for index,line in enumerate(statements)
                if(match:=re.fullmatch(r'(_?DAT_[0-9a-f]+|Ram[0-9a-f]+)\s*=\s*(.+)',line))]
        if len(writes)==1:
            index,write=writes[0];target,value=write.groups()
            old_names=[match[1]for line in statements[:index]
                       if(match:=re.fullmatch(r'(\w+)\s*=\s*'+re.escape(target),line))]
            operands='(?:'+ '|'.join(map(re.escape,[target]+old_names))+')'
            update=re.fullmatch(operands+r'\s*([+|&^])\s*(.+)',value)
            if update:
                operator,argument=update.groups()
                operation={'+':'add','|':'or','&':'and','^':'xor'}[operator]
                call='__atomic_fetch_'+operation+'(&('+target+'),'+argument+',__ATOMIC_SEQ_CST)'
                new='(__typeof__('+target+'))(pf_atomic_old '+operator+' ('+argument+'))'
            elif not any(re.search(r'\b'+re.escape(name)+r'\b',value)for name in old_names):
                call='__atomic_exchange_n(&('+target+'),'+value+',__ATOMIC_SEQ_CST)'
                new='(__typeof__('+target+'))('+value+')'
            else:raise ValueError('unreviewed atomic value: '+value)
            result=['{ __typeof__('+target+') pf_atomic_old = '+call+';']
            for position,line in enumerate(statements):
                if position==index:continue
                replacement='pf_atomic_old'if position<index else new
                result.append(re.sub(r'\b'+re.escape(target)+r'\b',lambda _:replacement,line)+';')
            return '\n'.join(result)+'\n}'
        raise ValueError('unreviewed atomic operation: '+body)
    def exclusive(match):
        prelude,flag,target,value=match.groups()
        statements=[line.strip()+';'for line in prelude.split(';')if line.strip()]
        load=''
        if statements and re.fullmatch(r'\w+\s*=\s*\*'+re.escape(target)+r'\s*;',statements[-1]):
            load=statements.pop()
        operation=atomic_views('LOCK();'+load+'*'+target+'='+value+';UNLOCK();')
        return '\n'.join(statements+[operation])
    def exclusive_global(match):
        prelude,flag,monitor,target,value=match.groups()
        if int(monitor,16)!=int(target.split('_')[-1],16):
            raise ValueError('exclusive monitor and global store disagree')
        return atomic_views('LOCK();'+prelude+target+'='+value+';UNLOCK();')
    source=re.sub(r'do\s*\{([^{}]*?)\b(\w+)\s*=\s*\(bool\)\s*hasExclusiveAccess\((0x[0-9a-f]+)\);\s*\}\s*while\s*\(!\2\);\s*(_?DAT_[0-9a-f]+)\s*=\s*([^;]+);',exclusive_global,source)
    source=re.sub(r'do\s*\{([^{}]*?)\b(\w+)\s*=\s*\(bool\)\s*hasExclusiveAccess\((\w+)\);\s*\}\s*while\s*\(!\2\);\s*\*\3\s*=\s*([^;]+);',exclusive,source)
    conditional_exclusive=re.compile(r'(\w+)\s*=\s*\(bool\)\s*hasExclusiveAccess\((0x[0-9a-f]+|\w+)\);\s*if\s*\(\1\)\s*\{\s*(_?DAT_[0-9a-f]+|\*\w+)\s*=\s*([^;]+);')
    while (operation:=conditional_exclusive.search(source)):
        flag,address,target,value=operation.groups()
        if target.startswith('*'):
            if target[1:]!=address:raise ValueError('exclusive pointer and conditional store disagree')
        elif int(address,16)!=int(target.split('_')[-1],16):
            raise ValueError('exclusive address and conditional store disagree')
        loads=list(re.finditer(r'\b(\w+)\s*=\s*(?:\([A-Za-z_][A-Za-z_0-9\s*]*\)\s*)*'+re.escape(target)+r'\s*;',source[:operation.start()]))
        if not loads:raise ValueError('conditional exclusive store has no preceding load')
        expected=loads[-1][1]
        replacement=('{ __typeof__('+target+') pf_exclusive_expected = '+expected+';\n'+
                     flag+' = __atomic_compare_exchange_n(&('+target+'),&pf_exclusive_expected,'+
                     value+',0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);\n}\nif ('+flag+') {')
        source=source[:operation.start()]+replacement+source[operation.end():]
    inverse_exclusive=re.compile(r'(\w+)\s*=\s*\(bool\)\s*hasExclusiveAccess\((0x[0-9a-f]+|\w+)\);\s*if\s*\(!\1\)\s*goto\s+(\w+);\s*(_?DAT_[0-9a-f]+|\*\w+)\s*=\s*([^;]+);')
    while (operation:=inverse_exclusive.search(source)):
        flag,address,label,target,value=operation.groups()
        if target.startswith('*'):
            if target[1:]!=address:raise ValueError('exclusive pointer and inverse store disagree')
        elif int(address,16)!=int(target.split('_')[-1],16):
            raise ValueError('exclusive address and inverse store disagree')
        guard=re.search(r'\b'+re.escape(label)+r':\s*(\w+)\s*=\s*'+re.escape(target)+r';\s*if\s*\(\1\s*!=\s*([01])\)\s*goto\s+\w+;\s*goto\s+\w+;',source)
        if not guard:raise ValueError('inverse exclusive store has no reviewed retry guard')
        expected=guard[2]
        replacement=('{ __typeof__('+target+') pf_exclusive_expected = '+expected+';\n'+
                     flag+' = __atomic_compare_exchange_n(&('+target+'),&pf_exclusive_expected,'+
                     value+',0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);\n}\nif (!'+flag+') goto '+label+';')
        source=source[:operation.start()]+replacement+source[operation.end():]
    if 'hasExclusiveAccess('in source:raise ValueError('unreviewed exclusive-memory operation')
    source=re.sub(r'\bLOCK\(\);(.*?)\bUNLOCK\(\);',replace,source,flags=re.S)
    return re.sub(r'\bLOAcquire\(\);(.*?)\bLORelease\(\);',replace,source,flags=re.S)


def signature(source):
    before = source[:source.index('\n{')].strip()
    return re.sub(r'__(?:fastcall|cdecl|thiscall|regparm[0-9])\s+', '', re.sub(r'/\*.*?\*/', '', before, flags=re.S)).strip()


def rewrite_double_bits(source):
    source=re.sub(r'\(double\)\(\((\w+) & 0xffffffff00000000\) \+ '
                  r'\(\1 & 0xffffffff\)\)',r'pf_bits_double(\1)',source)
    # Wrap balanced CONCAT/mask expressions rather than attempting to parse
    # their arbitrary nesting with a regular expression.
    pattern = r'\(double\)(?=(?:\(*CONCAT(?:17|26|35|44|53|62|71)\(|\(+pf_double_bits\())'
    for match in reversed(list(re.finditer(pattern, source))):
        start = match.end()
        opening = source.index('(', start)
        depth = 1
        end = opening + 1
        while depth:
            depth += (source[end] == '(') - (source[end] == ')')
            end += 1
        source = source[:match.start()] + 'pf_bits_double(' + source[start:end] + ')' + source[end:]
    return source


def rewrite_double_assignments(source, name):
    # A comma may end an assignment embedded in a condition. Only commas
    # inside balanced calls/parentheses belong to its right-hand expression.
    pattern = r'\b' + re.escape(name) + r' = \(double\)'
    for match in reversed(list(re.finditer(pattern, source))):
        start = match.end()
        depth = 0
        end = start
        while end < len(source):
            char = source[end]
            if not depth and char in ',;)]}':
                break
            depth += char in '(['
            depth -= char in ')]'
            end += 1
        source = (source[:match.start()] + name + ' = pf_double_bits((double)' +
                  source[start:end] + ')' + source[end:])
    return source


def rewrite_byte_ranges(source):
    # Native unsigned subtraction in ASCII and PFS kind ranges must remain
    # unsigned after C promotes an 8-bit input to int.
    narrow = r'\(byte\)\s*[A-Za-z_]\w*(?:\[[^]\n]+\])?'
    names = re.findall(r'\b(?:byte|uchar|uint8_t)\s+(\w+)', source)
    pointers = re.findall(r'\b(?:byte|uchar|uint8_t)\s*\*\s*(\w+)', source)
    if pointers:
        pointer_names='(?:'+'|'.join(map(re.escape,pointers))+')'
        narrow+=r'|\*\s*'+pointer_names+r'\b|\b'+pointer_names+r'\[[^]\n]+\]'
        narrow='(?:'+narrow+')'
    if names:
        narrow = '(?:' + narrow + r'|\b(?:' + '|'.join(map(re.escape,names)) + r')\b(?:\[[^]\n]+\])?)'
    value = '(' + narrow + r'\s*-\s*)(0x(?:30|41|61|5)|5)\b(?![Uu])'
    source=re.sub(value,lambda m:m[1]+m[2]+'U',source)
    # Pointer casts can contain nested address arithmetic.
    pattern=r'\*\((?:byte|uchar|uint8_t)\s*\*\)\s*\('
    for match in reversed(list(re.finditer(pattern,source))):
        end=match.end();depth=1
        while depth:
            depth+=(source[end]=='(')-(source[end]==')');end+=1
        tail=re.match(r'\s*-\s*(?:0x(?:30|41|61|5)|5)\b(?![Uu])',source[end:])
        if tail:
            position=end+tail.end();source=source[:position]+'U'+source[position:]
    return source


def rewrite_pointer_float_views(source,pointer_names,wide=False):
    for name in sorted(pointer_names,key=len,reverse=True):
        suffix=r'(?:\[[^]\n]+\])?)(?![\w\[]|->|\.)'
        source=re.sub(r'\(float\)('+re.escape(name)+suffix,
                      r'pf_bits_float((uintptr_t)\1)',source)
        if wide:
            source=re.sub(r'\(double\)('+re.escape(name)+suffix,
                          r'pf_bits_double((uintptr_t)\1)',source)
    return source


def rewrite_scalar_storage(source, pointer_types=()):
    """Restore raw float views lost when an SSA slot is printed as a pointer."""
    source=rewrite_byte_ranges(source)
    for name in re.findall(r'\b[A-Za-z_]\w*\s*\*+\s*(\w+)\b',source):
        source=re.sub(r'(?<![\w*])'+re.escape(name)+r'\b(?=\s*\*\s*(?:0x[0-9a-f]+|\d))',
                      '(uintptr_t)'+name,source)
    integers=set(re.findall(r'\b(?:uint|int|undefined4|uint32_t|int32_t)\s+(\w+)\s*;',source))
    converted=set()
    for match in reversed(list(re.finditer(r'\b(\w+)\s*=\s*(Vector(?:Signed|Unsigned)ToFloat)\(',source))):
        if match[1] not in integers:continue
        start=match.start(2);end=match.end();depth=1
        while depth:
            depth+=(source[end]=='(')-(source[end]==')');end+=1
        converted.add(match[1])
        source=source[:start]+'pf_float_bits((float)'+source[start:end]+')'+source[end:]
    for name in converted:
        source=re.sub(r'\(float\)\s*'+re.escape(name)+r'\b',
                      'pf_bits_float((uint32_t)'+name+')',source)
    floating_variables=re.findall(r'\b(float|double)\s+(\w+)\b(?!\s*\()',source)
    for typename,name in floating_variables:
        if typename=='double':
            # An upper-word extraction reads the IEEE representation. A
            # numeric conversion destroys the exponent and mantissa bits.
            source=re.sub(r'\((?:ulong|ulonglong|uint64_t)\)\s*'+re.escape(name)+
                          r'\b(?=\s*>>\s*(?:0x20|32)\b)',
                          'pf_double_bits('+name+')',source)
    for typename,name in list(re.findall(r'\b(float|double)\s*\*\s*(\w+)\b',source))+list(pointer_types):
        bits='pf_float_bits' if typename=='float' else 'pf_double_bits'
        source=re.sub(r'\(([^()\n]+\*)\)\s*\*'+re.escape(name)+r'\b',
                      lambda m:'('+m[1]+')(uintptr_t)'+bits+'(*'+name+')',source)
        source=re.sub(r'\(([^()\n]+\*)\)\s*('+re.escape(name)+r'\[[^]\n]+\])',
                      lambda m:'('+m[1]+')(uintptr_t)'+bits+'('+m[2]+')',source)
    integer_pointers=set(re.findall(r'\b(?:uint|int|undefined4|uint32_t|int32_t)\s*\*\s*(\w+)',source))
    for typename,name in floating_variables:
        if typename!='float':continue
        for pointer in integer_pointers:
            source=re.sub(r'(?<![\w])\*'+re.escape(pointer)+r'\s*=\s*'+re.escape(name)+r'\s*;',
                          '*'+pointer+' = pf_float_bits('+name+');',source)
        source=re.sub(r'\b(\w+)\s*\[([^]\n]+)\]\s*=\s*'+re.escape(name)+r'\s*;',
                      lambda m:m[1]+'['+m[2]+'] = pf_float_bits('+name+');'
                      if m[1] in integer_pointers else m[0],source)
    for typename,name in floating_variables:
        bits='pf_float_bits' if typename=='float' else 'pf_double_bits'
        source=re.sub(r'\(([^()\n]+\*)\)\s*'+re.escape(name)+r'\b',
                      lambda match:'('+match[1]+')(uintptr_t)'+bits+'('+name+')',source)
    source=re.sub(r'\(([^()\n]+\*)\)\s*(\w+(?:\[[^]\n]+\])?(?:(?:\.|->)\w+)*(?:\.|->)number)\b',
                  lambda match:'('+match[1]+')(uintptr_t)pf_float_bits('+match[2]+')',source)
    for match in reversed(list(re.finditer(r'\(([^()\n]+\*)\)\s*(Vector(?:Signed|Unsigned)ToFloat)\(',source))):
        start=match.start(2);end=match.end();depth=1
        while depth:
            depth+=(source[end]=='(')-(source[end]==')');end+=1
        source=source[:match.start()]+'('+match[1]+')(uintptr_t)pf_float_bits((float)'+source[start:end]+')'+source[end:]
    # A float output can share an integer-typed stack slot. Its later float
    # view reads the stored IEEE representation; casts of other integer
    # fields in the same aggregate still perform numeric conversion.
    float_outputs=set(re.findall(r'\(float\s*\*\)\s*&\s*(\w+)\b',source))
    for name in float_outputs:
        source=re.sub(r'\(float\)\s*'+re.escape(name)+r'\b(?!\s*[.\[])',
                      'pf_bits_float((uint32_t)'+name+')',source)
    # CONCAT reconstructs a register representation. A float cast printed
    # over that bit string must not perform a numeric integer conversion.
    for match in reversed(list(re.finditer(r'\(float\)\s*(?=\(?CONCAT[0-9]+\()',source))):
        start=match.end();opening=source.index('(',start);end=opening+1;depth=1
        while depth:
            depth+=(source[end]=='(')-(source[end]==')');end+=1
        # A zero-extended byte is also used for genuine byte-to-float
        # conversion, for example the numeric values returned by string.byte.
        if re.match(r'CONCAT31\(\s*0\s*,',source[start:end]):
            continue
        source=source[:match.start()]+'pf_bits_float('+source[start:end]+')'+source[end:]
    # These p-code helpers carry IEEE bits in an integer. A C numeric cast
    # would convert the representation rather than read the floating value.
    for match in reversed(list(re.finditer(r'\(double\)(NEON_[us]cvtf\()',source))):
        start=match.start(1);end=match.end();depth=1
        while depth:
            depth+=(source[end]=='(')-(source[end]==')');end+=1
        source=source[:match.start()]+'pf_bits_double('+source[start:end]+')'+source[end:]
    pattern=r'\(([^()\n]+\*)\)\s*\(float\)\s*'
    for match in reversed(list(re.finditer(pattern,source))):
        start=match.end()
        if source[start]!='(':
            continue
        depth=1;end=start+1
        while depth:
            depth+=(source[end]=='(')-(source[end]==')');end+=1
        source=source[:match.start()]+'('+match[1]+')(uintptr_t)pf_float_bits((float)'+source[start:end]+')'+source[end:]
    source=re.sub(r'(?m)(^\s*|[=+,?:|&(]\s*|\([^()]+\*\)\s*)\*PF_PART4\((\w+), (\d+)\)',
                  r'\1*(uint32_t *)(uintptr_t)PF_PART4(\2, \3)',source)
    source=rewrite_double_bits(source)
    source=re.sub(r'\bNAN\b(?!\s*\()', '__builtin_nanf("")', source)
    for name in re.findall(r'^  (?:undefined8|ulonglong) (\w+);',source,re.M):
        source=re.sub(r'NAN\('+name+r'\)',r'NAN(pf_bits_double('+name+'))',source)
    return source


def rewrite_array_words(source, precise=False):
    s=source
    arrays=dict(re.findall(r'^  undefined1 (\w+) \[(4|8|16)\];',s,re.M))
    for name,size in arrays.items():
        if precise or size!='8' or not re.fullmatch(r'auVar\d+',name):continue
        # Eight-byte SSA arrays model register values. A pointer cast reads
        # that value, rather than taking the address of its C storage.
        s=re.sub(r'\(([^()\n]+\*)\)\s*'+re.escape(name)+r'\b',
                 lambda m:'('+m[1]+')(uintptr_t)(*(uint64_t *)(void *)'+name+')',s)
    for name,size in arrays.items():
        typ={'4':'uint32_t','8':'uint64_t','16':'uint128'}[size]
        for other,width in arrays.items():
            if int(width)<int(size):continue
            s=re.sub(r'\b'+re.escape(name)+r'\s*=\s*'+re.escape(other)+r'\s*;',
                      name+' = (*('+typ+' *)(void *)'+other+');',s)
    for name,size in re.findall(r'^  undefined1 (\w+) \[(4|8|16)\];',s,re.M):
        if not re.search(r'\b'+name+r'\s*=',s):continue
        typ={'4':'uint32_t','8':'uint64_t','16':'uint128'}[size]
        s=re.sub(r'\b'+name+r'(?=\s*=(?!=))', '(*('+typ+' *)(void *)'+name+')',s)
        if not precise and (size=='8' or re.fullmatch(r'auVar\d+',name)):
            s=re.sub(r'\((?:ulong|long|ulonglong|longlong|undefined8)\)'+name+r'\b(?!\s*\._)', '(*('+typ+' *)(void *)'+name+')',s)
    s=re.sub(r'\(undefined1\s+\[(4|8)\]\)',lambda m:'('+('uint32_t'if m[1]=='4'else'uint64_t')+')',s)
    s=re.sub(r'\(undefined1\s*\(\*\)\s*\[16\]\)','(uint128 *)',s)
    return s


def exact_array_stores(source):
    """Write decompiler array values without widening physical stack storage."""
    arrays=dict(re.findall(r'^  undefined1 (\w+) \[(\d+)\];',source,re.M))
    # Register SSA values are handled separately; these are real byte arrays.
    for name,count in arrays.items():
        width=int(count)
        if not 1<=width<=16 or re.fullmatch(r'(?:auVar\d+|in_XMM\d+)',name):continue
        def store(match):
            value=match[1].strip()
            if value in arrays and int(arrays[value])>=width:
                value='PF_PART%d(%s,0)'%(width,value)
            dereference=re.match(r'^\*\(undefined1\s*\(\*\)\s*\[(\d+)\]\)',value)
            if dereference:
                size=int(dereference[1])
                scalar={1:'uint8_t',2:'uint16_t',4:'uint32_t',8:'uint64_t',16:'uint128'}.get(size)
                # Lower the memory operand itself: the remaining expression
                # can be an XOR or another rvalue whose address cannot be taken.
                value=('*('+scalar+' *)'+value[dereference.end():] if scalar else
                       'PF_PART%d(%s,0)'%(size,value))
            return 'PF_PART%d(%s,0) = %s;'%(width,name,value)
        source=re.sub(r'\b'+re.escape(name)+r'\s*=(?!=)\s*([^;]+);',store,source)
    # An explicit array dereference on an assignment copies N bytes. C arrays
    # are not assignable; use a bytewise copy, preserving overlap via a temp.
    pattern=r'\*\(undefined1\s*\(\*\)\s*\[(\d+)\]\)\(([^;]+?)\)\s*=\s*(\w+)\s*;'
    def indirect(match):
        width=int(match[1]);value=match[3]
        if value not in arrays or int(arrays[value])<width:return match[0]
        # Register arrays may subsequently become uint128 scalars. Taking the
        # object's address works for either representation and preserves bits.
        return '{ unsigned char pf_copy[%d]; __builtin_memcpy(pf_copy,&(%s),%d); __builtin_memcpy((%s),pf_copy,%d); }'%(width,value,width,match[2],width)
    return re.sub(pattern,indirect,source)


def array_bitwise_reads(source, arrays):
    # Apply after subpiece lowering; a slice is already a correctly sized
    # scalar lvalue and must not become a member of a PF_PART expression.
    for name,count in arrays.items():
        width=int(count)
        if not 1<=width<=16 or re.fullmatch(r'(?:auVar\d+|in_XMM\d+)',name):continue
        view='PF_PART%d(%s,0)'%(width,name)
        source=re.sub(r'\b'+re.escape(name)+r'\b(?=\s*[&|^])',view,source)
        source=re.sub(r'([|^~]\s*)\b'+re.escape(name)+r'\b(?![.\[])',lambda m:m[1]+view,source)
        source=re.sub(r'(\b\w+\s*&\s*)\b'+re.escape(name)+r'\b(?![.\[])',lambda m:m[1]+view,source)
        source=re.sub(r'(VectorBitwise(?:InsertIfTrue|InsertIfFalse|Select)\s*\(\s*)'+re.escape(name)+r'\b(?=\s*,)',
                      lambda m:m[1]+view,source)
    return source


def duplicate_return_labels(source):
    """Coalesce cloned switch exits only when every clone returns one constant."""
    labels=re.findall(r'^(\w+):',source,re.M)
    for label in set(labels):
        if labels.count(label)<2:continue
        matches=list(re.finditer(r'^'+re.escape(label)+r':\s*return\s+(0x[0-9a-f]+|[0-9]+);',source,re.M))
        if len(matches)!=labels.count(label) or len({m[1]for m in matches})!=1:
            raise ValueError('unreviewed duplicate label '+label)
        for match in reversed(matches[:-1]):
            source=source[:match.start()]+source[match.start():].replace(label+':','',1)
    return source


def aggregate_views(source, metadata):
    """Restore each aggregate access using its recorded p-code width."""
    widths={(r[1],int(r[2])):int(r[3]) for r in metadata if r[0]=='U'}
    offsets={r[1]:int(r[2]) for r in metadata if r[0]=='L'}
    stack={}
    for r in metadata:
        if r[0]=='S':stack[int(r[2])]=max(stack.get(int(r[2]),0),int(r[3]))
    parameters={}
    signature_text=source.split('\n{',1)[0]
    for alias in set(re.findall(r'\b_param_[0-9]+\b',source)):
        name=alias[1:]
        match=re.search(r'\b(byte|char|uchar|ushort|short|uint|int|undefined[124])\s+'+name+r'\b',signature_text)
        seen={width for (key,_),width in widths.items()if key==alias}
        if not match or seen!={4}:raise ValueError('unreviewed parameter aggregate '+alias)
        parameters[name]=(match[1],'pf_aggregate_'+name)
    counts={}
    def replace(match):
        alias=match[0];name=alias[1:]
        counts[alias]=counts.get(alias,0)+1
        if name in parameters:return parameters[name][1]
        width=widths.get((alias,counts[alias]),stack.get(offsets.get(name)))
        if width is None or not 1<=width<=16:raise ValueError('unknown aggregate width '+alias)
        return 'PF_PART%d(%s,0)'%(width,name)
    source=re.sub(r'\b_(?:local|auStack|uStack|param)_[0-9a-f]+\b',replace,source)
    if parameters:
        opening=source.index('\n{')+2
        signature_text,body=source[:opening],source[opening:]
        initial=[]
        for name,(typename,temporary)in parameters.items():
            body=rename_identifier(body,name,'(*('+typename+' *)(void *)&'+temporary+')')
            initial.append('  uint32_t '+temporary+' = (uint32_t)'+name+';')
        source=signature_text+'\n'+'\n'.join(initial)+'\n'+body
    return source


def physical_array_extent(typename, available, pointer_bytes):
    """A named stack view may span fields split into other decompiler locals."""
    match=re.fullmatch(r'(.+)\[(\d+)\]',typename)
    if not match or '['in match[1]:return typename
    element=match[1].strip()
    widths={'char':1,'byte':1,'uchar':1,'undefined1':1,'uint8_t':1,
            'short':2,'ushort':2,'undefined2':2,'uint16_t':2,
            'int':4,'uint':4,'float':4,'undefined4':4,'uint32_t':4,
            'long':pointer_bytes,'ulong':pointer_bytes,'uintptr_t':pointer_bytes,
            'longlong':8,'ulonglong':8,'double':8,'undefined8':8,'uint64_t':8,
            'uint128':16,'undefined16':16}
    width=pointer_bytes if '*'in element else widths.get(element)
    if width is None:return typename
    return element+'['+str(max(int(match[2]),available//width))+']'


def rewrite_array_values(source, metadata):
    views={(row[1],int(row[2])):int(row[3]) for row in metadata
           if row[0]=='Q' and row[1]!='-'}
    names={name for name,_ in views}
    counts={}
    def replace(match):
        name=match[0]
        if name not in names:return name
        counts[name]=counts.get(name,0)+1
        width=views.get((name,counts[name]))
        if match.string[match.end():].lstrip().startswith(('.', '[')):return name
        return 'PF_PART%d(%s, 0)'%(width,name) if width else name
    return re.sub(r'\b[A-Za-z_]\w*\b',replace,source)


def array_concat_reads(source):
    """CONCAT consumes register bits, including byte-array stack views."""
    arrays=set(re.findall(r'\bundefined1\s+(\w+)\s*\[\d+\]',source))
    for match in reversed(list(re.finditer(r'\bCONCAT([1-9])([1-9])\(',source))):
        start=match.end();depth=1;comma=None;end=start
        while depth and end<len(source):
            token=source[end]
            if token==',' and depth==1:comma=end
            depth+=(token=='(')-(token==')');end+=1
        if depth or comma is None:continue
        first=source[start:comma];last=source[comma+1:end-1]
        def bits(value,width):
            name=value.strip()
            return 'PF_PART%d(%s,0)'%(width,name)if name in arrays else value
        source=source[:start]+bits(first,int(match[1]))+','+bits(last,int(match[2]))+source[end-1:]
    return source


def rewrite_vector_pointers(source,width,typename):
    # An explicit pointer-to-array cast also decays after dereference when
    # followed by byte arithmetic. Preserve the address before scalarizing it.
    pattern=r'\*\(undefined1\s*\(\*\)\s*\['+str(width)+r'\]\)\('
    for match in reversed(list(re.finditer(pattern,source))):
        end=match.end();depth=1
        while depth and end<len(source):
            depth+=(source[end]=='(')-(source[end]==')');end+=1
        if depth:raise ValueError('unclosed array pointer expression')
        if re.match(r'\s*[+-]',source[end:]):
            source=source[:match.start()]+'(uint8_t *)('+source[match.end():end]+source[end:]
    pointers=re.findall(r'undefined1\s*\(\*\s*(\w+)\)\s*\['+str(width)+r'\]',source)
    byte_pointers=re.findall(r'\b(?:undefined1|uint8_t|char|byte)\s*\*\s*(\w+)\b',source)
    source=re.sub(r'undefined1\s*\((\*+)\s*(\w+)?\)\s*\['+str(width)+r'\]',
                  lambda match:typename+' '+match[1]+(match[2] or ''),source)
    for name in pointers:
        source=re.sub(r'\b'+re.escape(name)+r'\s*\[([^]\n]+)\]\s*\+',
                      lambda match:'((uint8_t *)(void *)&'+name+'['+match[1]+']) +',source)
        for target in byte_pointers:
            source=re.sub(r'\b'+re.escape(target)+r'\s*=\s*\*\s*'+re.escape(name)+r'\s*;',
                          target+' = (uint8_t *)(void *)'+name+';',source)
        # In byte arithmetic the dereferenced array decays to its address.
        # Reading its integer vector value instead would turn pixel bytes
        # into a pointer when processing a short PNG scanline.
        source=re.sub(r'(?<![\w*])\*\s*'+re.escape(name)+r'\s*\+',
                      '((uint8_t *)(void *)'+name+') +',source)
        source=re.sub(r'\(\s*\*'+re.escape(name)+r'\s*\)\s*\[',
                      '((uint8_t *)(void *)'+name+')[',source)
        source=re.sub(r'\b'+re.escape(name)+r'\s*\[([^]\n]+)\]\s*\[',
                      lambda match:'((uint8_t *)(void *)&'+name+'['+match[1]+'])[',source)
        # Dereferencing a pointer to an array produces an array lvalue. In
        # an address cast that array decays back to its address, whereas a
        # vector assignment reads its sixteen bytes. Keep both operations.
        cast=r'\(([^()\n]+)\)\s*'+re.escape(name)+r'\s*\[([^]\n]+)\]'
        def indexed(match):
            if match[1].strip() in (typename,'undefined'+str(width)):return match[0]
            return '('+match[1]+')(uintptr_t)('+name+'+('+match[2]+'))'
        source=re.sub(cast,indexed,source)
        cast=r'\(([^()\n]+)\)\s*\*'+re.escape(name)+r'\b'
        def decayed(match):
            if match[1].strip() in (typename,'undefined'+str(width)):return match[0]
            return '('+match[1]+')(uintptr_t)'+name
        source=re.sub(cast,decayed,source)
        source=re.sub(r'(?<![\w])\*'+re.escape(name)+r'\b(?=\s*[+-])',
                      '((uint8_t *)(void *)'+name+')',source)
        source=re.sub(r'\b'+re.escape(name)+r'(?=\s*\*\s*(?:0x[0-9a-f]+|\d))',
                      '(uintptr_t)'+name,source)
    return source


def rewrite_integer_vectors(source):
    """Retain byte access when vector SSA values become C integers."""
    source=re.sub(r'\(\*\(undefined1\s*\(\*\)\s*\[(?:16|32)\]\)([^()]+)\)\[([^]\n]+)\]',
                  r'((uint8_t *)(\1))[\2]',source)
    source=rewrite_vector_pointers(source,16,'uint128')
    source=rewrite_vector_pointers(source,32,'uint256')
    names=re.findall(r'undefined1 (auVar\d+) \[16\];',source)
    source=re.sub(r'undefined1 (auVar\d+) \[16\];',r'uint128 \1;',source)
    for name in names:
        source=re.sub(r'\b'+name+r'\s*\[',r'((uint8_t *)(void *)&'+name+')[',source)
    source=re.sub(r'undefined1\s+\[16\]\s+((?:recovered_|FUN_)[0-9a-f]+)',r'uint128 \1',source)
    source=re.sub(r'\(undefined1\s+\[16\]\)', '(uint128)',source)
    # The decompiler reads lanes through casts of a byte-array temporary.
    # Once that temporary is an integer vector, its value is not an address.
    widths={'byte':1,'uchar':1,'undefined1':1,'undefined2':2,
            'undefined4':4,'undefined8':8,'uint':4,'int':4,
            'uint32_t':4,'int32_t':4,'uint64_t':8,'int64_t':8}
    vectors=re.findall(r'\buint128\s+(auVar\d+)\b',source)
    for name in vectors:
        # Ghidra represents a duplicated 64-bit NEON operand by casting the
        # concatenated register value to an array. It does not read memory
        # at that value (for example, a multiplier consisting of four 33s).
        source=re.sub(r'\*\(\s*uint128\s*\*\s*\)\s*\(\s*'+name+
                      r'\s*<<\s*0x40\s*\|\s*'+name+r'\s*\)',
                      '('+name+' << 64 | '+name+')',source)
        pattern=(r'\*\(\s*('+ '|'.join(widths)+r')\s*\*\s*\)\s*'
                 r'(?:\(\s*'+name+r'\s*\+\s*\(uint128\)\s*'
                 r'(0x[0-9a-fA-F]+|\d+)\s*\)|'+name+r'\b)')
        def lane(match):
            width=widths[match[1]];offset=int(match[2],0)if match[2]else 0
            if offset+width>16:return match[0]
            return 'PF_PART%d(%s, %d)'%(width,name,offset)
        source=re.sub(pattern,lane,source)
    return source



def rewrite_void_results(source,callees,address):
    for callee in callees:
        name='recovered_'+callee
        if address==callee:continue
        for match in reversed(list(re.finditer(r'\b'+name+r'\(',source))):
            end=match.end();depth=1
            while depth:
                depth+=(source[end]=='(')-(source[end]==')');end+=1
            source=source[:match.start()]+'('+source[match.start():end]+', (uintptr_t)0)'+source[end:]
    return source


def call_argument_defaults(source,callees,address):
    """Restore reviewed implicit operands only at the recorded call arity."""
    for callee,arities in callees.items():
        if address==callee:continue
        for match in reversed(list(re.finditer(r'\brecovered_'+callee+r'\(',source))):
            end=match.end();depth=1;commas=0
            while depth and end<len(source):
                token=source[end]
                if token==',' and depth==1:commas+=1
                depth+=(token=='(')-(token==')');end+=1
            if depth:raise ValueError('unclosed reviewed call')
            count=commas+1 if source[match.end():end-1].strip()else 0
            extra=arities.get(str(count))
            if extra:
                source=source[:end-1]+(','if count else'')+','.join(extra)+source[end-1:]
    return source

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--layout', type=Path, required=True)
    parser.add_argument('--notes', type=Path, default=Path('build/decompiled'))
    parser.add_argument('--out', type=Path, default=Path('build/c-rewrite'))
    parser.add_argument('--manual', type=Path, default=None)
    args = parser.parse_args()
    layout = json.loads(args.layout.read_text())
    current = layout.get('translation', {})
    global WIDE
    WIDE = current.get('pointer_bytes', 4) == 8
    manual_root=args.manual or Path('kernel/manual')
    manual = {path.stem: path.read_text() for path in manual_root.glob('*.c')}
    args.out.mkdir(parents=True, exist_ok=True)
    sources = {p.stem: rename_identifier(p.read_text(),'frame','pf_argument_frame')
               for p in sorted(args.notes.glob('*.c')) if p.stem != 'recovered'}
    function_addresses={int(a,16) for a in sources.keys() | manual.keys()}
    def data_labels(text):
        labels=set(re.findall(r'(?m)^\s*(recovered_[0-9a-f]+):',text))
        text=re.sub(r'switchD_[0-9a-f]+\s*::\s*switchdataD_([0-9a-f]+)',r'DAT_\1',text)
        return re.sub(r'\b(_?)recovered_([0-9a-f]+)\b',
            lambda m:m[0] if m[0] in labels or int(m[2],16) in function_addresses else
                m[1]+'DAT_'+('%016x' if WIDE else '%08x')%int(m[2],16),text)
    sources={a:data_labels(s) for a,s in sources.items()}
    sources={a:re.sub(r'__stdcall_softfp\s+','',s)for a,s in sources.items()}
    if current.get('windows_types'):
        def windows_types(text):
            text=re.sub(r'\bunsigned long long\b','PF_MODEL_U64',text)
            text=re.sub(r'\blong long\b','PF_MODEL_I64',text)
            text=re.sub(r'\blong double\b','double',text)
            text=re.sub(r'\bunsigned long\b','uint32_t',text)
            text=re.sub(r'\b(?:ulong|long)\b',lambda m:'uint32_t' if m[0]=='ulong' else 'int32_t',text)
            text=re.sub(r'\bwchar_t\b','uint16_t',text)
            return text.replace('PF_MODEL_U64','unsigned long long').replace('PF_MODEL_I64','long long')
        sources={a:windows_types(s) for a,s in sources.items()}
    sources={a:system_register_views(vector_constant_loads(rewrite_byte_ranges(s)),current.get('system_registers',{}))for a,s in sources.items()}
    if current.get('register_inputs'):
        sources={a:register_input_views(s,current['register_inputs'])for a,s in sources.items()}
    if current.get('descriptor_register_views'):
        sources={a:descriptor_register_views(s)for a,s in sources.items()}
    sources={a:array_concat_reads(s)for a,s in sources.items()}
    if WIDE or current.get("integer_vector_128"):
        for address,source in sources.items():
            rows=[line.split('\t') for line in (args.notes/(address+'.tsv')).read_text().splitlines()]
            precise=any(row[0]=='Q' for row in rows)
            sources[address]=rewrite_array_words(rewrite_integer_vectors(
                exact_array_stores(rewrite_array_values(source,rows))),precise=precise)
    else:
        for address,source in sources.items():
            rows=[line.split('\t') for line in (args.notes/(address+'.tsv')).read_text().splitlines()]
            sources[address]=rewrite_array_values(source,rows)
    for stale in args.out.glob('*.c'):
        if stale.stem not in sources and stale.stem not in manual:stale.unlink()
    # Signature corrections must also reach declarations shared by callers.
    for address, source in sources.items():
        source=re.sub(r'\bin\b(?!\s*\()', 'pf_input',source)
        for original, replacement in current.get('source_replacements', {}).get(address, {}).items():
            if re.fullmatch(r'0x[0-9a-f]+',original):
                source=re.sub(r'\b'+original+r'\b',lambda _:replacement,source)
            else:
                source = source.replace(original, replacement)
        sources[address]=source
    floating={name:typ for text in sources.values() for typ,name in
              re.findall(r'\b(float|float10|double)\s+(?:__\w+\s+)?((?:recovered_|FUN_)[0-9a-f]+)\(',text)}
    header = ['/* Permafrost recovered source; Pooka\'s Free Software License. */', '#pragma once', '#include "support.h"']
    if current.get('float_slot_views'):
        header += ['#undef CONCAT44', '#define CONCAT44(a,b) (((uint64_t)PF_RAW32(a)<<32)|PF_RAW32(b))']
    service_types=sorted(set(re.findall(r'\bservice(?:_conflict\d+)?\b', '\n'.join(sources.values()))))
    header += ['typedef code '+name+';' for name in service_types]
    header+=current.get('declarations',[])
    function_aliases=set(re.findall(r'(?m)^#define\s+(\w+)\s+(?:recovered_|FUN_)[0-9a-f]+\s*$',
                                   '\n'.join(current.get('declarations',[]))))
    if current.get('state_anchor'):
        header.append('extern uint8_t '+current['state_anchor']+'[];')
    # A reused C unit need not have a fresh decompiler export. Its declaration
    # is still required by callers and by the library's exported entry aliases.
    declarations=dict(sources)
    declarations.update({a:s for a,s in manual.items() if a not in sources})
    for address,source in declarations.items():
        declaration=None
        if address in manual:
            match=re.search(r'(?m)^((?:__attribute__\(\([^\n]*?\)\)\s*)?[A-Za-z_][A-Za-z_0-9 \t*]*\brecovered_'+address+r'\s*\([^;{}]*\))\s*\{',manual[address])
            if match:declaration=match[1].strip()
        if declaration is None:
            declaration=signature(source)
        if current.get('ms_abi'):
            declaration='__attribute__((ms_abi)) '+declaration
        header.append(declaration + ';')
    (args.out / 'functions.h').write_text('\n'.join(header) + '\n')
    for address, source in sources.items():
        if address in manual:
            continue
        if current.get('float_slot_views'):
            # Merged variant storage can have a float declaration while its
            # integer and pointer branches access the same four raw bytes.
            arrays=re.findall(r'^  float (\w+)\s*\[\d+\];',source,re.M)
            floats=set(re.findall(r'^  float (\w+);',source,re.M))
            words=set(re.findall(r'\b(?:int|uint|undefined4)\s*\*+\s*(\w+)\b',source))
            for name in arrays:
                source=re.sub(r'\((int|uint|char|uchar|byte|short|ushort)\)('+name+r'\[[^]\n]+\])',
                              r'(\1)pf_float_bits(\2)',source)
                def stored_integer(match):
                    expression=match[2]
                    if re.search(r'\bfVar\d+\b',expression):return match[0]
                    return match[1]+' = pf_bits_float((uint32_t)('+expression+'));'
                source=re.sub(r'('+name+r'\[[^]\n]+\]) = \(float\)([^;]+);',stored_integer,source)
            for name in words:
                source=re.sub(r'\(float\)('+name+r'\[[^]\n]+\])',r'pf_bits_float((uint32_t)\1)',source)
                for value in floats:
                    source=re.sub(r'('+name+r'\[[^]\n]+\]) = '+value+r';',r'\1 = pf_float_bits('+value+');',source)
        if current.get('scalar_storage_views'):
            for name in re.findall(r'^  undefined8 (\w+);',source,re.M):
                for callee, kind in floating.items():
                    if kind != 'double':continue
                    source=re.sub(r'\b'+re.escape(name)+r' = '+re.escape(callee)+r'\(',
                                  name+' = (double)'+callee+'(',source)
                if re.search(r'\b'+name+r' = \(double\)',source):
                    source=rewrite_double_assignments(source,name)
                    source=re.sub(r'\((double|longdouble|float10)\)'+name+r'\b',r'(\1)pf_bits_double('+name+')',source)
                    if floating.get('recovered_'+address)=='double':
                        source=re.sub(r'\breturn '+name+r'\s*;', 'return pf_bits_double('+name+');',source)
                    source=source.replace('NAN('+name+')','NAN(pf_bits_double('+name+'))')
                    source=re.sub(r'\b'+name+r'(?=\s*(?:<=|>=|==|!=|<|>)\s*[+-]?\d+\.\d)',
                                  'pf_bits_double('+name+')',source)
        # Some SJLJ spill slots have an undefined merged declaration even
        # though every dereference uses a pointer. Restore the observed view.
        spill_types = {'23b42': 'byte *', '274d4': 'uint *',
                       '27b0d': 'uint *', '2aa50': 'uint *', '2e262': 'uint *'}
        if address in spill_types:
            source = source.replace('  undefined4 local_14;', '  ' + spill_types[address] + 'local_14;')
        if current.get('pointer_spills'):
            pointer_types = dict((name, typ) for typ, name in re.findall(
                r'\b((?:void|code|undefined[1248]?|int|uint|char|uchar|byte|ushort|long|ulong|uint64_t|uintptr_t)\s*\*+)\s*(\w+)\b', source))
            for name in re.findall(r'^  '+('undefined8' if WIDE else 'undefined4')+r' (local_[0-9a-f]+);', source, re.M):
                assigned = re.findall(r'\b'+re.escape(name)+r' = (\w+);', source)
                inherited = [pointer_types[value] for value in assigned if value in pointer_types]
                arithmetic = (current.get('pointer_spill_arithmetic') and inherited and
                              inherited[0] != 'void *' and
                              re.search(r'\b'+re.escape(name)+r' [+-] -?(?:0x)?\d', source))
                if arithmetic or re.search(r'(?<![\w])\*'+re.escape(name)+r'\b|\b'+re.escape(name)+r'\[', source):
                    views=re.findall(r'\b'+re.escape(name)+r' = \(([^()]+\*)\)',source)
                    view = views[0] if views and views[0]!='void *' else next((v for v in inherited if v!='void *'), ('uintptr_t *' if WIDE else 'uint *'))
                    source=source.replace('  '+('undefined8' if WIDE else 'undefined4')+' '+name+';', '  '+view+name+';')
        source=re.sub(r'\bs_[^\s,;()]+_([0-9a-f]{8,16})\b',lambda m:'str_'+m[1],source)
        metadata = [line.split('\t') for line in (args.notes / (address + '.tsv')).read_text().splitlines()]
        for row in metadata:
            if row[0]=='G':row[1]=data_labels(row[1])
            if row[0]=='G' and row[1].startswith('s_'):
                renamed='str_%08x'%int(row[2],16)
                source=source.replace(row[1],renamed);row[1]=renamed
        fields=set(re.findall(r'(?:\.|->)([A-Za-z][A-Za-z_0-9]*)',source))
        for row in metadata:
            if row[0]!='L' or row[1] not in fields:continue
            old=row[1];new='pf_local_'+old
            tokens=r'"(?:[^"\\]|\\.)*"|\x27(?:[^\x27\\]|\\.)*\x27|(?<![.>])\b'+re.escape(old)+r'\b'
            source=re.sub(tokens,lambda m:new if m[0]==old else m[0],source)
            for other in metadata:
                if other[0] in ('L','P','F'):other[1]=re.sub(r'\b'+re.escape(old)+r'\b',new,other[1])
        globals_by_address = {int(row[2], 16): row[3] for row in metadata if row[0] == 'G'}
        global_addresses = {row[1]: int(row[2], 16) for row in metadata if row[0] == 'G'}
        memory_types = {}
        for row in metadata:
            if row[0] == 'M':
                size, kind = row[3].split(':', 1)
                number = int(row[2], 16)
                if number not in memory_types or int(size) > memory_types[number][0]:
                    memory_types[number] = (int(size), kind)
        volatile_views={row[1]:(int(row[2],16),int(row[3]))for row in metadata if row[0]=='V'}
        volatile_types={row[1]:row[4]for row in metadata if row[0]=='V' and len(row)>4}
        globals_used = sorted({row[1] for row in metadata if row[0] == 'G'} | set(volatile_views) | set(re.findall(r'\b(?:_?DAT|str|_LAB|UNK)_[0-9a-f]{8,16}\b|\b[a-zA-Z]*Ram[0-9a-f]{8,16}\b|\bram0x[0-9a-f]{8,16}\b|\bPTR_\w+_[0-9a-f]{8,16}\b', source)))
        preamble = ['#include "functions.h"']
        for name in globals_used:
            if not re.fullmatch(r'[A-Za-z_]\w*',name):continue
            if name in function_aliases:continue
            packed_width=0
            if name.startswith('recovered_') and name.removeprefix('recovered_') in sources:
                continue
            number = global_addresses[name] if name in global_addresses else int(name[-8:], 16)
            if number in function_addresses and re.match(r'(?:thunk_)?(?:FUN_|recovered_)',name):
                continue
            kind = globals_by_address.get(number, 'uint:4')
            if name.startswith('UNK_'):
                kind=memory_types.get(number,(1,'undefined1:1'))[1]
            if name.startswith(('_DAT','ram0x')):
                kind = memory_types.get(number, (4, 'uint:4'))[1]
            typename = 'char[1]' if name.startswith('str_') else ctype(kind)
            if name in volatile_views:
                number,width=volatile_views[name]
                if width in(1,2,4,8,16):typename={1:'uint8_t',2:'uint16_t',4:'uint32_t',8:'uint64_t',16:'uint128'}[width]
                else:packed_width=width
                if name in volatile_types:
                    typename=ctype(volatile_types[name])
                elif name.startswith('dRam') and width==8:
                    typename='double'
                elif name.startswith('fRam') and width==4:
                    typename='float'
                elif name.startswith(('dRam','fRam')) and number in memory_types:
                    size,kind=memory_types[number]
                    if size==width and kind.startswith(('float:','double:')):typename=ctype(kind)
            if name.startswith('PTR_str_'):typename='char *'
            if WIDE and name.startswith('_DAT') and typename in ('uint8_t[16]', 'byte[16]'):
                typename='uint128'
            if re.search(r'\(\*' + re.escape(name) + r'\)\(', source):
                typename = 'code *'
            location='0x%xU' % number
            if current.get('state_anchor') and current['state_base'] <= number < current['state_end']:
                location='((uintptr_t)%s + 0x%xU)' % (current['state_anchor'],number-current['state_base'])
            literal=current.get('literal_data',{}).get(format(number,'x'))
            if literal is not None:
                payload=bytes.fromhex(literal)
                if not payload:raise ValueError('empty recovered literal')
                label='pf_literal_'+address+'_'+name
                preamble.append('static const unsigned char '+label+'[] __attribute__((aligned(16)))={'+','.join('0x%02x'%v for v in payload)+'};')
                location='(uintptr_t)'+label
            volatile=any(first<=number<last for first,last in current.get('volatile_ranges',[]))
            if packed_width:
                tags={3:('pf_uint24','pf_payload_bits'),5:('pf_uint40','pf_payload_bits'),6:('pf_uint48','pf_payload_bits'),7:('pf_uint56','pf_payload_bits'),12:('pf_uint96','pf_payload_bits')}
                tag,field=tags.get(packed_width,('pf_packed_'+str(packed_width),'payload'))
                expression='((%sstruct %s *)(%s))->%s'%('volatile 'if volatile else'',tag,location,field)
            else:expression=lvalue(typename,location,volatile)
            preamble += ['#undef ' + name, '#define %s %s' % (name,expression)]
        pointer_names = {row[1] for row in metadata if row[0] in ('G', 'L') and row[3].startswith(('P:', 'A:'))}
        pointer_names.update(re.findall(r'^  [\w ]+\*+\s*(\w+)(?:\s*\[.*?\])?;', source, re.M))
        if WIDE and current.get('scalar_storage_views'):
            carriers=set(re.findall(r'^  (?:undefined8|ulong|uint64_t) (\w+);',source,re.M))
            for _ in range(len(carriers)):
                added={name for name in carriers if any(value in pointer_names for value in
                       re.findall(r'\b'+re.escape(name)+r'\s*=\s*(?:\((?:undefined8|ulong|uint64_t|uintptr_t)\)\s*)?(\w+)\s*;',source))}
                if added<=pointer_names:break
                pointer_names.update(added)
        locals_used = [row for row in metadata if row[0] == 'L']
        frame_size = max([32] + [-int(row[2]) + 16 for row in locals_used])
        # Native code can select adjacent fields with address OR operations.
        # Preserve the stack origin's alignment as well as relative offsets.
        frame_size = ((frame_size + 15) & ~15)+current.get('stack_origin_bias',0)
        addressed_offsets = {int(x, 0) for x in re.findall(current.get('stack_register', 'register0x00000020' if WIDE else 'register0x00000010')+r'\s*\+\s*(-0x[0-9a-f]+)', source)}
        macros = []
        for row in locals_used:
            _, name, offset, kind = row
            # Distinct SSA temporaries can reuse a spill slot. Their C values
            # must remain independent; only named stack objects need aliases.
            if (re.fullmatch(r'[A-Za-z]+Var\d+', name)
                    and address not in current.get('stack_ssa_views', [])
                    and not (int(offset) in addressed_offsets and kind.startswith('P:'))):
                continue
            # Use the printed declaration's type, including its inferred array
            # extent; the stack offset preserves aliasing between adjacent fields.
            # An assignment mentioning the slot is not a declaration. Handle
            # pointer-to-array declarators before the ordinary array form.
            match, typename = stack_declaration(source, name)
            if not match:
                continue
            source = source[:match.start()] + source[match.end():]
            typename=physical_array_extent(typename,-int(offset),8 if WIDE else 4)
            macros.append('#define %s %s' % (name, lvalue(typename, 'frame + %d' % (frame_size + int(offset)))))
        stack_widths = {}
        for row in metadata:
            if row[0] == 'S':
                offset, width = int(row[2]), int(row[3])
                stack_widths[offset] = max(stack_widths.get(offset, 0), width)
        # Ghidra can split an eight-byte stack store into a seven-byte
        # array and its neighboring byte, naming the whole view with an
        # underscore. Preserve the recorded store width and shared frame.
        local_offsets = {row[1]: int(row[2]) for row in locals_used}
        source=aggregate_views(source,metadata)
        for name, raw in sorted(set(re.findall(r'\b(stack0x([0-9a-f]{8}(?:[0-9a-f]{8})?))\b', source))):
            offset=int(raw,16)
            bits=len(raw)*4
            if offset>=1<<(bits-1): offset-=1<<bits
            width = stack_widths.get(offset, 1)
            if width == 1:
                assigned = re.findall(r'\b'+re.escape(name)+r'\s*=\s*(\w+)\s*;', source)
                if any(value in pointer_names for value in assigned):
                    width = 8 if WIDE else 4
            if width not in (1, 2, 4, 8):
                width = 8 if WIDE else 4
            macros.append('#define %s (*(uint%d_t *)(frame + %d))'%(name,width*8,frame_size+offset))
        source = source.replace(current.get('stack_register', 'register0x00000020' if WIDE else 'register0x00000010'), '(uintptr_t)(frame + %d)' % frame_size)
        source = re.sub(r'__(?:fastcall|cdecl|thiscall|stdcall_softfp|regparm[0-9]|pf_format[13])\s+', '', source)
        pointer_fields = {(row[1], int(row[2])): int(row[3]) for row in metadata if row[0] == 'P'}
        floating_fields = {(row[1], int(row[2])): row[3] for row in metadata if row[0] == 'F'}
        signed_fields = {(row[1], int(row[2])): int(row[3]) for row in metadata if row[0] == 'I'}
        field_occurrences = {}
        def partial_field(match):
            key = '%s._%s_%s_' % (match[1], match[2], match[3])
            occurrence = field_occurrences.get(key, 0) + 1
            field_occurrences[key] = occurrence
            value = 'PF_PART%s(%s, %s)' % (match[3], match[1], match[2])
            floating = floating_fields.get((key, occurrence))
            if floating:
                if (floating, int(match[3])) not in (('float', 4), ('double', 8)):
                    raise ValueError('invalid floating field metadata')
                value = '(*(%s *)((uint8_t *)&(%s)+%s))' % (floating, match[1], match[2])
            scale = pointer_fields.get((key, occurrence))
            signed = signed_fields.get((key, occurrence))
            if re.match(r'\s*=(?!=)',match.string[match.end():]):
                scale = signed = None
            if signed:
                if signed not in (1, 2, 4, 8) or signed != int(match[3]):
                    raise ValueError('invalid signed field metadata')
                value = '((int%d_t)%s)' % (signed * 8, value)
            if scale:
                element = {1: 'uint8_t', 2: 'uint16_t', 4: 'uint32_t', 8: 'uint64_t'}.get(
                    scale, 'struct { uint8_t bytes[%d]; }' % scale)
                value = '((%s *)(uintptr_t)%s)' % (element, value)
            return value
        source = re.sub(r'\b(\w+(?:\[[^]\n]+\])?(?:(?:\.|->)\w+)*)\s*\.\s*_(\d+)_(\d+)_', partial_field, source)
        source=duplicate_return_labels(source)
        source = re.sub(r'switch\(([^\n]+)\)', r'switch((uintptr_t)(\1))', source)
        source = re.sub(r'case \([^)]*\*\)(0x[0-9a-f]+):', r'case \1:', source)
        source = signed_negative_hex(source)
        source = re.sub(r'\(float\)(\w+\[2\])', r'pf_bits_float((uint32_t)\1)', source)
        source = source.replace('ushort in_FPUControlWord;', 'ushort in_FPUControlWord = pf_fpu_control();')
        if not WIDE:
            for name in sorted(pointer_names,key=len,reverse=True):
                source=re.sub(r'\((longdouble|float10)\)('+re.escape(name)+r')\b',r'(\1)(uintptr_t)\2',source)
        # The decompiler's pointer/float casts are bit reinterpretations.
        source=rewrite_pointer_float_views(source,pointer_names,WIDE)
        if WIDE:
            source=re.sub(r'\(([^()\n]+\*)\)\(double\)(SUB\d+\([^()]*\))',r'(\1)(uintptr_t)pf_double_bits((double)\2)',source)
            source=re.sub(r'\(([^()\n]+\*)\)\(double\)(\w+)\b(?!\s*\()',r'(\1)(uintptr_t)pf_double_bits(\2)',source)
            source=re.sub(r'(\b\w+\s*=\s*)\(([^();\n]*\*)\)\s*(\(double\)[^;]+);',
                          r'\1(\2)(uintptr_t)pf_double_bits(\3);',source)
            pattern=r'\(([^()\n]+\*)\)(?=\s*\()'
            for match in reversed(list(re.finditer(pattern,source))):
                start=match.end()
                while source[start].isspace():start+=1
                end=start+1;depth=1
                while depth:
                    depth+=(source[end]=='(')-(source[end]==')');end+=1
                expression=source[start:end]
                floating_operand=re.search(r'\bdVar\d+\b',expression)
                integral_index=re.search(r'\((?:u?long(?:long)?|u?int|u?int64_t)\)\s*\(?\s*dVar\d+',expression)
                root=expression.lstrip('(').lstrip()
                pointer_expression=root.startswith('&') or any(re.match(re.escape(name)+r'\b',root) for name in pointer_names)
                if not pointer_expression and not re.match(r'(?:SUB|CONCAT)\d+',expression) and ('pf_bits_double(' in expression or (floating_operand and not integral_index)):
                    source=source[:match.start()]+'('+match[1]+')(uintptr_t)pf_double_bits('+expression+')'+source[end:]
            for name in sorted(set(re.findall(r'\bin_register_[0-9a-f]+\b',source))):
                if not re.search(r'^  \w+ '+name+r';',source,re.M):preamble.append('#define '+name+' ((uint64_t)0)')
                else:source=re.sub(r'(^  \w+ '+name+r');',r'\1 = 0;',source,flags=re.M)
            labels=set()
            def unique_label(match):
                label=match[1]
                if label in labels:return ''
                labels.add(label);return match[0]
            source=re.sub(r'^((?:LAB_|joined_r0x)[0-9a-f]+):',unique_label,source,flags=re.M)
        source = re.sub(r'\(([^()]+\*+)\)\(float\)\(int\)(\w+)',
                        r'(\1)(uintptr_t)pf_float_bits((float)(int)\2)', source)
        source = re.sub(r'\(([^()]+\*+)\)\(float\)(\w+)',
                        r'(\1)(uintptr_t)pf_float_bits((float)\2)', source)
        sjlj = current.get('sjlj')
        if sjlj and address != sjlj['register'] and ('recovered_'+sjlj['register']+'(') in source:
            register='recovered_'+sjlj['register']
            source=source.replace(register+'(', 'PF_SJLJ_CHECKPOINT(')
            word='uintptr_t' if WIDE else 'uint'
            slot=8 if WIDE else 10
            preamble.append('#define PF_SJLJ_CHECKPOINT(ctx) ('+register+'(('+word+' *)(ctx)), (('+word+' *)(ctx))['+str(slot)+']=(uintptr_t)pf_jump, __builtin_setjmp(pf_jump))')
            source=source.replace('\n{', '\n{\n  void *pf_jump[5];', 1)
        seed = current.get('random_state')
        if seed:
            source = source.replace('(float10)DAT_000' + seed, '(float10)(uint)DAT_000' + seed)
        # Eight-byte stack slots often alias two integer words and a double.
        for name in re.findall(r'^  (?:double|longdouble) (\w+);', source, re.M) + [row[1] for row in locals_used if row[3] in ('double:8', 'longdouble:8')]:
            source = re.sub(r'\(ulonglong\)\s*' + name + r'\b', 'pf_double_bits(' + name + ')', source)
        source = rewrite_double_bits(source)
        if current.get('scalar_storage_views'):
            pointer_types=[]
            for row in locals_used:
                kind=re.fullmatch(r'(?:P:|A:\d+:)(float:4|double:8)',row[3])
                if kind:pointer_types.append((kind[1].split(':')[0],row[1]))
            source=rewrite_scalar_storage(source,pointer_types)
            for name in re.findall(r'\bcode\s*\*\s*(\w+)\b',source):
                source=re.sub(r'\b'+re.escape(name)+r'\[',
                              '((uint8_t *)(uintptr_t)'+name+')[',source)
            source=source.replace('(code)','(uint8_t)')
            for match in reversed(list(re.finditer(r'\(([^()\n]+\*)\)\s*((?:recovered_|FUN_)[0-9a-f]+)\(',source))):
                if match[2] not in floating:continue
                start=match.start(2);end=match.end();depth=1
                while depth:
                    depth+=(source[end]=='(')-(source[end]==')');end+=1
                bits='pf_double_bits((double)' if WIDE and floating[match[2]]!='float' else 'pf_float_bits((float)'
                source=source[:match.start()]+'('+match[1]+')(uintptr_t)'+bits+source[start:end]+')'+source[end:]
        if address == '27b0d':
            source = source.replace('*PF_PART4(local_24, 0)', '*(uint32_t *)(uintptr_t)PF_PART4(local_24, 0)')
        if address == current.get('main'):
            source = re.sub(r'(_DAT_0000(?:62|64)[0-9a-f]{2} = )(?:recovered_|FUN_000)([0-9a-f]+);', lambda m: m[1] + '0x' + m[2] + ';', source)
            source = source.replace('(uint)local_580', 'pf_float_bits(local_580)')
            source = source.replace('(uint)local_584[0]', 'pf_float_bits(local_584[0])')
            if any(row[1]=='local_584' and row[3]=='float:4' for row in locals_used):
                source = source.replace('(uint)local_584', 'pf_float_bits(local_584)')
            source = source.replace('DAT_00073058 = uVar32;', 'DAT_00073058 = *(uint *)(frame + %d);' % (frame_size - 0xd88))
        if address == current.get('file_listing'):
            # The shared file/directory printf site omits the file branch's
            # size argument in the raw export. The reference pushes entry+0xf8.
            source = source.replace('recovered_307b4(pcVar41,DAT_0005e69c + iVar9);',
                'recovered_307b4(pcVar41,DAT_0005e69c + iVar9,*(uint *)(DAT_0005e69c + iVar9 + 0xf8));')
            source = source.replace('recovered_22362((char *)&local_37c,0x60,pcVar41);',
                'recovered_22362((char *)&local_37c,0x60,pcVar41,local_114);')
        if address == current.get('status_renderer', '29de2'):
            # One shared call site receives 2, 3 or 4 format arguments. Ghidra
            # exports only three; the four-string RAM status path also passes
            # the detected-memory string in local_60 (verified in disassembly).
            source = source.replace('pcVar9,local_40,local_100,pcVar10);',
                                    'pcVar9,local_40,local_100,pcVar10,local_60);')
        if address == current.get('error_logger'):
            source = source.replace('\n{', '\n{\n  __builtin_va_list args;', 1)
            source = source.replace('local_10 = &dStack00000010;', '__builtin_va_start(args, format);\n  local_10 = (double *)args;')
            source = re.sub(r'(recovered_21a8b\([^;]+;)', r'\1\n  __builtin_va_end(args);', source, count=1)
        source = re.sub(r'^(  (?:undefined\d*|int|uint|char|byte|ushort|ulonglong|longlong|float10|float|double)\s+\**(?:extraout_\w+|in_EAX|unaff_EBX));$',
                        r'\1 = 0;', source, flags=re.M)
        source=call_argument_defaults(source,current.get('call_argument_defaults',{}),address)
        source=rewrite_void_results(source,current.get('void_result_calls',[]),address)
        if address == '20f7c7' and source.count('LAB_0020f81e:') > 1:
            point=source.rfind('LAB_0020f81e:')
            source=source[:point]+source[point:].replace('LAB_0020f81e:', '', 1)
        if WIDE or current.get('integer_vector_128'):
            arrays=dict(re.findall(r'^  undefined1 (\w+) \[(\d+)\];',sources[address],re.M))
            source=array_bitwise_reads(source,arrays)
            source=packed_vector_views(source)
        if current.get('atomic_views'):
            try:source=atomic_views(source,current.get('exclusive_expected',{}).get(address))
            except ValueError as error:raise ValueError(address+': '+str(error)) from error
        opening = source.index('\n{') + 2
        source=rename_identifier(source,'frame','pf_stack_frame')
        source = source[:opening] + '\n  unsigned char pf_stack_frame[%d] __attribute__((aligned(16))) = {0};\n' % (frame_size + 32) + source[opening:]
        generated=re.sub(r'\bframe\b','pf_stack_frame','\n'.join(preamble + macros))
        (args.out / (address + '.c')).write_text('\n'.join(line.rstrip() for line in (generated + '\n' + source).splitlines()).rstrip() + '\n')
    for name, content in manual.items():
        content=call_argument_defaults(content,current.get('call_argument_defaults',{}),name)
        (args.out / (name + '.c')).write_text(rewrite_void_results(content,current.get('void_result_calls',[]),name))


if __name__ == '__main__':
    main()
