/* Establish flat protected mode before running the C firmware.
 * Pooka's Free Software License. */
__asm__(
 ".pushsection .pf.entry,\"ax\",@progbits\n.code16\n.globl pf_firmware_entry\npf_firmware_entry:\n"
 "cli\nxorw %ax,%ax\nmovw %ax,%ds\nmovw %ax,%es\nmovw %ax,%ss\nmovw $0x7000,%sp\n"
 "movb %dl,0x6068\ninb $0x92,%al\norb $2,%al\noutb %al,$0x92\n"
 "movl $pf_bios_gdtr,%eax\nlgdtl (%eax)\nmovl %cr0,%eax\norl $1,%eax\nmovl %eax,%cr0\n"
 "data32 ljmp $8,$.Lprotected\n.code32\n.Lprotected:\n"
 "movw $0x10,%ax\nmovw %ax,%ds\nmovw %ax,%es\nmovw %ax,%fs\nmovw %ax,%gs\nmovw %ax,%ss\n"
 "movl $0x70000,%esp\ncld\nfninit\ncall pf_firmware_main\n"
 ".Lhalt:\ncli\nhlt\njmp .Lhalt\n.popsection\n"
);
