/* BIOS bootstrap: load the C firmware, then enter it.
 * Pooka's Free Software License. */
__asm__(
 ".pushsection .pf.boot,\"ax\",@progbits\n.code16\n.Lboot:\n"
 "cli\nxorw %ax,%ax\nmovw %ax,%ds\nmovw %ax,%es\nmovw %ax,%ss\nmovw $0x7000,%sp\nsti\n"
 "movb %dl,(.Ldrive-.Lboot+0x7c00)\nmovw $(.Ldap-.Lboot+0x7c00),%si\n"
 "movb $0x42,%ah\nint $0x13\njc .Lfailed\n"
 "movb (.Ldrive-.Lboot+0x7c00),%dl\nljmp $0x800,$0\n"
 ".Lfailed:\ncli\nhlt\njmp .Lfailed\n"
 ".balign 4\n.Ldap:\n.byte 16,0\n.word 64,0,0x800\n.quad 1\n.Ldrive:\n.byte 0\n"
 ".org 510\n.word 0xaa55\n.popsection\n.code32\n"
);
