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

def system_register_views(source, registers):
    """Lower architectural register storage to explicit hardware accessors."""
    if not registers:
        return source
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
    source=re.sub(r'undefined1\s+(auVar\d+)\s*\[15\];',r'pf_u120 \1;',source)
    source=re.sub(r'\(undefined1\s+\[15\]\)', '(pf_u120)',source)
    names=re.findall(r'\b(?:uint128|undefined16|pf_u120)\s+(auVar\d+)\s*;',source)
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


def atomic_views(source):
    monitor_pattern=re.compile(r'(\w+)\s*=\s*\(bool\)\s*ExclusiveMonitorPass\(([^,]+),0x10\);\s*if\s*\(\1\)\s*\{\s*(_?DAT_[0-9a-f]+|\*\w+)\s*=\s*([^;]+);\s*(\w+)\s*=\s*ExclusiveMonitorsStatus\(\);\s*\}')
    while (monitor:=monitor_pattern.search(source)):
        success,address,target,value,status=monitor.groups()
        if target.startswith('*'):
            if address.strip()!=target[1:]:raise ValueError('exclusive pointer and store disagree')
        elif int(address,16)!=int(target.split('_')[-1],16):
            raise ValueError('exclusive address and store disagree')
        loads=list(re.finditer(r'\b(\w+)\s*=\s*'+re.escape(target)+r'\s*;',source[:monitor.start()]))
        if not loads:raise ValueError('exclusive store has no preceding load: '+target)
        expected=loads[-1][1]
        operation=('{ __typeof__('+target+') pf_exclusive_expected = '+expected+';\n'+
                   success+' = __atomic_compare_exchange_n(&('+target+'),&pf_exclusive_expected,'+
                   value+',0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);\n'+
                   status+' = '+success+' ? 0 : 1;\n}')
        source=source[:monitor.start()]+operation+source[monitor.end():]
    if 'ExclusiveMonitorPass('in source or 'ExclusiveMonitorsStatus('in source:
        raise ValueError('unreviewed ARM64 exclusive-memory operation')
    def replace(match):
        body=match[1].strip()
        if not body:return '__atomic_thread_fence(__ATOMIC_SEQ_CST);'
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
                if(match:=re.fullmatch(r'(_?DAT_[0-9a-f]+)\s*=\s*(.+)',line))]
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
    if 'hasExclusiveAccess('in source:raise ValueError('unreviewed exclusive-memory operation')
    source=re.sub(r'\bLOCK\(\);(.*?)\bUNLOCK\(\);',replace,source,flags=re.S)
    return re.sub(r'\bLOAcquire\(\);(.*?)\bLORelease\(\);',replace,source,flags=re.S)


def signature(source):
    before = source[:source.index('\n{')].strip()
    return re.sub(r'__(?:fastcall|cdecl|thiscall|regparm[0-9])\s+', '', re.sub(r'/\*.*?\*/', '', before, flags=re.S)).strip()


def rewrite_double_bits(source):
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
    # Native unsigned subtraction in ASCII range checks must remain unsigned
    # after C promotes an 8-bit input to int.
    narrow = r'\(byte\)\s*[A-Za-z_]\w*(?:\[[^]\n]+\])?'
    names = re.findall(r'\b(?:byte|uchar|uint8_t)\s+(\w+)', source)
    pointers = re.findall(r'\b(?:byte|uchar|uint8_t)\s*\*\s*(\w+)', source)
    if pointers:
        pointer_names='(?:'+'|'.join(map(re.escape,pointers))+')'
        narrow+=r'|\*\s*'+pointer_names+r'\b|\b'+pointer_names+r'\[[^]\n]+\]'
        narrow='(?:'+narrow+')'
    if names:
        narrow = '(?:' + narrow + r'|\b(?:' + '|'.join(map(re.escape,names)) + r')\b(?:\[[^]\n]+\])?)'
    value = '(' + narrow + r'\s*-\s*)(0x(?:30|41|61))\b(?![Uu])'
    source=re.sub(value,lambda m:m[1]+m[2]+'U',source)
    # Pointer casts can contain nested address arithmetic.
    pattern=r'\*\((?:byte|uchar|uint8_t)\s*\*\)\s*\('
    for match in reversed(list(re.finditer(pattern,source))):
        end=match.end();depth=1
        while depth:
            depth+=(source[end]=='(')-(source[end]==')');end+=1
        tail=re.match(r'\s*-\s*0x(?:30|41|61)\b(?![Uu])',source[end:])
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


def rewrite_scalar_storage(source):
    """Restore raw float views lost when an SSA slot is printed as a pointer."""
    source=rewrite_byte_ranges(source)
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
    integer_pointers=set(re.findall(r'\b(?:uint|int|undefined4|uint32_t|int32_t)\s*\*\s*(\w+)',source))
    for typename,name in floating_variables:
        if typename!='float':continue
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


def rewrite_array_words(source):
    s=source
    arrays=dict(re.findall(r'^  undefined1 (\w+) \[(8|16)\];',s,re.M))
    for name,size in arrays.items():
        if size!='8' or not re.fullmatch(r'auVar\d+',name):continue
        # Eight-byte SSA arrays model register values. A pointer cast reads
        # that value, rather than taking the address of its C storage.
        s=re.sub(r'\(([^()\n]+\*)\)\s*'+re.escape(name)+r'\b',
                 lambda m:'('+m[1]+')(uintptr_t)(*(uint64_t *)(void *)'+name+')',s)
    for name,size in arrays.items():
        typ='uint64_t'if size=='8'else'uint128'
        for other,width in arrays.items():
            if int(width)<int(size):continue
            s=re.sub(r'\b'+re.escape(name)+r'\s*=\s*'+re.escape(other)+r'\s*;',
                      name+' = (*('+typ+' *)(void *)'+other+');',s)
    for name,size in re.findall(r'^  undefined1 (\w+) \[(8|16)\];',s,re.M):
        if not re.search(r'\b'+name+r'\s*=',s):continue
        typ='uint64_t' if size=='8' else 'uint128'
        s=re.sub(r'\b'+name+r'(?=\s*=(?!=))', '(*('+typ+' *)(void *)'+name+')',s)
        s=re.sub(r'\((?:ulong|long|ulonglong|longlong|undefined8)\)'+name+r'\b(?!\s*\._)', '(*('+typ+' *)(void *)'+name+')',s)
    s=re.sub(r'\(undefined1\s+\[8\]\)','(uint64_t)',s)
    s=re.sub(r'\(undefined1\s*\(\*\)\s*\[16\]\)','(uint128 *)',s)
    return s


def rewrite_integer_vectors(source):
    """Retain byte access when vector SSA values become C integers."""
    pointers=re.findall(r'undefined1\s*\(\*\s*(\w+)\)\s*\[16\]',source)
    source=re.sub(r'undefined1\s*\((\*+)\s*(\w+)?\)\s*\[16\]',
                  lambda match:'uint128 '+match[1]+(match[2] or ''),source)
    for name in pointers:
        source=re.sub(r'\(\s*\*'+re.escape(name)+r'\s*\)\s*\[',
                      '((uint8_t *)(void *)'+name+')[',source)
        source=re.sub(r'\b'+re.escape(name)+r'\s*\[([^]\n]+)\]\s*\[',
                      lambda match:'((uint8_t *)(void *)&'+name+'['+match[1]+'])[',source)
        # Dereferencing a pointer to an array produces an array lvalue. In
        # an address cast that array decays back to its address, whereas a
        # vector assignment reads its sixteen bytes. Keep both operations.
        cast=r'\(([^()\n]+)\)\s*'+re.escape(name)+r'\s*\[([^]\n]+)\]'
        def indexed(match):
            if match[1].strip() in ('uint128','undefined16'):return match[0]
            return '('+match[1]+')(uintptr_t)('+name+'+('+match[2]+'))'
        source=re.sub(cast,indexed,source)
        cast=r'\(([^()\n]+)\)\s*\*'+re.escape(name)+r'\b'
        def decayed(match):
            if match[1].strip() in ('uint128','undefined16'):return match[0]
            return '('+match[1]+')(uintptr_t)'+name
        source=re.sub(cast,decayed,source)
        source=re.sub(r'(?<![\w])\*'+re.escape(name)+r'\b(?=\s*[+-])',
                      '((uint8_t *)(void *)'+name+')',source)
        source=re.sub(r'\b'+re.escape(name)+r'(?=\s*\*\s*(?:0x[0-9a-f]+|\d))',
                      '(uintptr_t)'+name,source)
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
    sources = {p.stem: p.read_text() for p in sorted(args.notes.glob('*.c')) if p.stem != 'recovered'}
    function_addresses={int(a,16) for a in sources.keys() | manual.keys()}
    def data_labels(text):
        text=re.sub(r'switchD_[0-9a-f]+::switchdataD_([0-9a-f]+)',r'DAT_\1',text)
        return re.sub(r'\b(_?)recovered_([0-9a-f]+)\b',
            lambda m:m[0] if int(m[2],16) in function_addresses else
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
    sources={a:system_register_views(vector_constant_loads(s),current.get('system_registers',{}))for a,s in sources.items()}
    if WIDE or current.get("integer_vector_128"):
        sources={a:rewrite_integer_vectors(s) for a,s in sources.items()}
        sources={a:rewrite_array_words(s)for a,s in sources.items()}
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
                if re.search(r'\b'+name+r' = \(double\)',source):
                    source=rewrite_double_assignments(source,name)
                    source=re.sub(r'\((double|float10)\)'+name+r'\b',r'(\1)pf_bits_double('+name+')',source)
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
                if other[0] in ('L','P'):other[1]=re.sub(r'\b'+re.escape(old)+r'\b',new,other[1])
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
        globals_used = sorted({row[1] for row in metadata if row[0] == 'G'} | set(volatile_views) | set(re.findall(r'\b(?:_?DAT|str|_LAB)_[0-9a-f]{8,16}\b|\b[a-zA-Z]*Ram[0-9a-f]{8,16}\b|\bram0x[0-9a-f]{8,16}\b|\bPTR_\w+_[0-9a-f]{8,16}\b', source)))
        preamble = ['#include "functions.h"']
        for name in globals_used:
            if not re.fullmatch(r'[A-Za-z_]\w*',name):continue
            packed_width=0
            if name.startswith('recovered_') and name.removeprefix('recovered_') in sources:
                continue
            number = global_addresses[name] if name in global_addresses else int(name[-8:], 16)
            if number in function_addresses and re.match(r'(?:thunk_)?(?:FUN_|recovered_)',name):
                continue
            kind = globals_by_address.get(number, 'uint:4')
            if name.startswith(('_DAT','ram0x')):
                kind = memory_types.get(number, (4, 'uint:4'))[1]
            typename = 'char[1]' if name.startswith('str_') else ctype(kind)
            if name in volatile_views:
                number,width=volatile_views[name]
                if width in(1,2,4,8,16):typename={1:'uint8_t',2:'uint16_t',4:'uint32_t',8:'uint64_t',16:'uint128'}[width]
                else:packed_width=width
            if name.startswith('PTR_str_'):typename='char *'
            if WIDE and name.startswith('_DAT') and typename in ('uint8_t[16]', 'byte[16]'):
                typename='uint128'
            if re.search(r'\(\*' + re.escape(name) + r'\)\(', source):
                typename = 'code *'
            location='0x%xU' % number
            if current.get('state_anchor') and current['state_base'] <= number < current['state_end']:
                location='((uintptr_t)%s + 0x%xU)' % (current['state_anchor'],number-current['state_base'])
            volatile=any(first<=number<last for first,last in current.get('volatile_ranges',[]))
            if packed_width:
                tags={3:('pf_uint24','pf_payload_bits'),5:('pf_uint40','pf_payload_bits'),6:('pf_uint48','pf_payload_bits'),7:('pf_uint56','pf_payload_bits'),12:('pf_uint96','pf_payload_bits')}
                tag,field=tags.get(packed_width,('pf_packed_'+str(packed_width),'payload'))
                expression='((%sstruct %s *)(%s))->%s'%('volatile 'if volatile else'',tag,location,field)
            else:expression=lvalue(typename,location,volatile)
            preamble += ['#undef ' + name, '#define %s %s' % (name,expression)]
        pointer_names = {row[1] for row in metadata if row[0] in ('G', 'L') and row[3].startswith(('P:', 'A:'))}
        pointer_names.update(re.findall(r'^  [\w ]+\*+\s*(\w+)(?:\s*\[.*?\])?;', source, re.M))
        locals_used = [row for row in metadata if row[0] == 'L']
        frame_size = max([32] + [-int(row[2]) + 16 for row in locals_used])
        # Native code can select adjacent fields with address OR operations.
        # Preserve the stack origin's alignment as well as relative offsets.
        frame_size = (frame_size + 15) & ~15
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
            macros.append('#define %s %s' % (name, lvalue(typename, 'frame + %d' % (frame_size + int(offset)))))
        stack_widths = {}
        for row in metadata:
            if row[0] == 'S':
                offset, width = int(row[2]), int(row[3])
                stack_widths[offset] = max(stack_widths.get(offset, 0), width)
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
        source = re.sub(r'__(?:fastcall|cdecl|thiscall|stdcall_softfp|regparm[0-9])\s+', '', source)
        pointer_fields = {(row[1], int(row[2])): int(row[3]) for row in metadata if row[0] == 'P'}
        field_occurrences = {}
        def partial_field(match):
            key = '%s._%s_%s_' % (match[1], match[2], match[3])
            occurrence = field_occurrences.get(key, 0) + 1
            field_occurrences[key] = occurrence
            value = 'PF_PART%s(%s, %s)' % (match[3], match[1], match[2])
            scale = pointer_fields.get((key, occurrence))
            if re.match(r'\s*=(?!=)',match.string[match.end():]):scale=None
            if scale:
                element = {1: 'uint8_t', 2: 'uint16_t', 4: 'uint32_t', 8: 'uint64_t'}.get(
                    scale, 'struct { uint8_t bytes[%d]; }' % scale)
                value = '((%s *)(uintptr_t)%s)' % (element, value)
            return value
        source = re.sub(r'\b(\w+(?:\[[^]\n]+\])?(?:(?:\.|->)\w+)*)\s*\.\s*_(\d+)_(\d+)_', partial_field, source)
        source = re.sub(r'switch\(([^\n]+)\)', r'switch((uintptr_t)(\1))', source)
        source = re.sub(r'case \([^)]*\*\)(0x[0-9a-f]+):', r'case \1:', source)
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
            for name in set(re.findall(r'\b(_local_[0-9a-f]+)\b',source)):
                source=re.sub(r'\b'+name+r'\b','(*(uint128 *)(void *)&'+name[1:]+')',source)
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
            source=rewrite_scalar_storage(source)
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
        source=rewrite_void_results(source,current.get('void_result_calls',[]),address)
        if address == '20f7c7' and source.count('LAB_0020f81e:') > 1:
            point=source.rfind('LAB_0020f81e:')
            source=source[:point]+source[point:].replace('LAB_0020f81e:', '', 1)
        if WIDE:source=packed_vector_views(source)
        if current.get('atomic_views'):
            try:source=atomic_views(source)
            except ValueError as error:raise ValueError(address+': '+str(error)) from error
        opening = source.index('\n{') + 2
        source = source[:opening] + '\n  unsigned char frame[%d] __attribute__((aligned(16))) = {0};\n' % (frame_size + 32) + source[opening:]
        (args.out / (address + '.c')).write_text('\n'.join(line.rstrip() for line in ('\n'.join(preamble + macros) + '\n' + source).splitlines()).rstrip() + '\n')
    for name, content in manual.items():
        (args.out / (name + '.c')).write_text(rewrite_void_results(content,current.get('void_result_calls',[]),name))


if __name__ == '__main__':
    main()
