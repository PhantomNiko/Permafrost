/* Device tree insertion preserves the original path across byte tests.
 * Pooka's Free Software License. */
void recovered_40485814(const char *path,const char *label,const char *properties){
 uintptr_t table=*(volatile uint32_t *)0x40549008;
 volatile uint32_t *count=(volatile uint32_t *)0x40549004;
 if(!path || !*path || !table)return;
 uint32_t index=0,used=*count;
 for(;index<used;index++)if(!recovered_40402544((char *)(table+index*0x571),path))break;
 char *record;
 if(index==used){
  if((used>>8)>2)return;
  record=(char *)(table+used*0x571);*count=used+1;
  recovered_40401c1c(record,0,0x571);
  recovered_40404a88(record,0xf1,"%s",path);
 }else record=(char *)(table+index*0x571);
 if(label)recovered_40404a88(record+0x111,0x60,"%s",label);
 if(properties)recovered_40404a88(record+0x171,0x400,"%s",properties);
 recovered_4048597c(record);
}
