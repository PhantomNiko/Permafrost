# Permafrost 1.1 WinterShell module recovery

The x64 checkpoint builds from C and initialized, non-executable module data:

```sh
python3 tools/library_native.py recovery/in-progress/modules/wintershell/x86_64 build/wintershell-110/x86_64
```

`tests/wintershell_module_110.py` accepts a reference x64 kernel, reference
module and source-built module. It compares 28 statement workflows, 331 lexer
cases and seven public dispatch records. Cases cover unspaced arithmetic,
precedence, comparisons, integer division, exponentiation, strings, nested
values, assignments and error behavior. All use a reference kernel host.

The source retains the native three-argument public dispatch boundary and
explicit variadic error formatting. Reviewed repairs preserve string-builder
return values, integer-prefix buffer contents, operator-pair grouping and
float bit views. Float-valued host calls use typed function pointers.

Boolean expressions, float literals, broader statements and module lifecycle,
the remaining CPUs and integration with the C kernel still require recovery
or validation. This checkpoint does not establish complete VM parity.
Pooka's Free Software License applies.
