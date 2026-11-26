/* Native WinterScript function registration forwarder.
 * Pooka's Free Software License. */
unsigned char recovered_8244a000(const char *name,uintptr_t function){
 uintptr_t provider=*(volatile uintptr_t *)(uintptr_t)0x827382b8U;
 return provider?((unsigned char (*)(const char *,uintptr_t))*(uintptr_t *)(provider+0x50U))(name,function):0;
}
