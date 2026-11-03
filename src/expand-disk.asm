; Permafrost 0.1 native utility. Pooka's Free Software License.
; The reference's public utility calls this fixed cdecl-compatible kernel entry.
bits 32
org 0x200000
    mov eax, 0x216df
    call eax
    ret
