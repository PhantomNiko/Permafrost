/* Native WinterScript function registration forwarder.
 * Pooka's Free Software License. */
unsigned char recovered_4048a730(const char *name,uintptr_t function){
 uintptr_t provider=*(volatile uintptr_t *)(uintptr_t)0x4065cc70U;
 return provider?((unsigned char (*)(const char *,uintptr_t))*(uintptr_t *)(provider+0x2cU))(name,function):0;
}
