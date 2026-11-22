/* Storage configuration keeps all four register arguments and the stack flags.
 * Pooka's Free Software License. */
uint recovered_404df87c(uint read_cache,uint file_cache,uint directory_cache,uint retries,uint flags){
 uint values[5];
 values[0]=read_cache? (read_cache<0x8000?read_cache:0x8000):0x1000;
 values[1]=file_cache? (file_cache<0x8000?file_cache:0x8000):0x1000;
 values[2]=directory_cache? (directory_cache<0x8000?directory_cache:0x8000):0x1000;
 values[3]=retries<2?1:retries;values[4]=flags&3;
 *(volatile uint32_t *)0x404fe910=values[0];
 *(volatile uint32_t *)0x404fe914=values[1];
 *(volatile uint32_t *)0x404fe918=values[2];
 *(volatile uint32_t *)0x404fe91c=values[3];
 *(volatile uint32_t *)0x404fe920=values[4];
 recovered_40404cc0((int *)values);return 1;
}
