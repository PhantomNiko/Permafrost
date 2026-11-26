/* Native WinterScript function registration forwarder.
 * Pooka's Free Software License. */
unsigned char recovered_20945c0(const char *name,uintptr_t function){
 uintptr_t provider=*(volatile uintptr_t *)(uintptr_t)0x25ebb40U;
 return provider?((unsigned char (*)(const char *,uintptr_t))*(uintptr_t *)(provider+0x50U))(name,function):0;
}
