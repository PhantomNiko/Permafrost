; Permafrost 0.2 native utility. Pooka's Free Software License.
bits 32
org 0x200000
    mov eax, 0x23b8c
    call eax
    ret
