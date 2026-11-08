/* Recovered installer device and command behavior; Pooka's Free Software License. */
#pragma once
#include <stdint.h>
#include <stddef.h>
static void pf_install_copy(char *out,size_t capacity,const char *text){size_t i=0;if(!capacity)return;if(text)while(i+1<capacity&&text[i]){out[i]=text[i];i++;}out[i]=0;}
static void pf_install_append(char *out,size_t capacity,const char *text){size_t i=0;while(i+1<capacity&&out[i])i++;pf_install_copy(out+i,capacity-i,text);}
static void pf_install_uint(char *out,size_t capacity,uint32_t value){char digits[11],ordered[11];unsigned n=0,i=0;do{digits[n++]='0'+value%10;value/=10;}while(value);while(n)ordered[i++]=digits[--n];ordered[i]=0;pf_install_append(out,capacity,ordered);}
static uint32_t *pf_install_field(void *state,unsigned offset){return (uint32_t *)((uint8_t *)state+offset);}
static void pf_install_status(void *state,const char *text){pf_install_copy((char *)state+0xc7c,768,text);}
static void pf_install_status_line(void *state,const char *text){char *out=(char *)state+0xc7c;unsigned i=0;if(text)while(i<767&&text[i]&&text[i]!='\n'&&text[i]!='\r'){out[i]=text[i];i++;}out[i]=0;}
static uint32_t pf_install_execute(const char *command,char *output){
#if defined(__aarch64__)
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800;
#elif defined(__arm__)
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
#else
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
#endif
 if(api[0]!=0x50414d57||!api[1]||api[2]<0x9c||!api[0x98/4])return 0;
 return ((uint32_t(*)(const char *,char *,uint32_t))(uintptr_t)api[0x98/4])(command,output,4096);
}
static void pf_install_refresh(void *state){
 char output[4096]={0},line[192],status[96];unsigned count=0,used=0;
 if(!pf_install_execute("installer(\"list\")",output)){*pf_install_field(state,0xc60)=0;pf_install_status(state,*output?output:"INSTALLER DEVICE LIST FAILED");return;}
 for(unsigned position=0;;position++){
  unsigned char c=(unsigned char)output[position];
  if(!c||c=='\n'||used+1>191){
   line[used]=0;const char *prefix="INSTALLER DEVICE ";unsigned i=0;while(i<17&&line[i]==prefix[i])i++;
   if(i==17&&count<24){char *p=line+17;uint32_t id=0xffffffff;while(*p&&(*p<'0'||*p>'9'))p++;if(*p){id=0;while(*p>='0'&&*p<='9')id=id*10+(unsigned)(*p++-'0');}*pf_install_field(state,count*132)=id;pf_install_copy((char *)state+count*132+4,128,line+17);count++;}
   used=0;if(!c)break;
  }else line[used++]=(char)c;
 }
 *pf_install_field(state,0xc60)=count;if((int32_t)*pf_install_field(state,0xc64)>=(int32_t)count)*pf_install_field(state,0xc64)=count?count-1:0;
 if(!count){pf_install_status(state,"NO STORAGE DEVICES FOUND");return;}
 pf_install_copy(status,sizeof status,"FOUND ");pf_install_uint(status,sizeof status,count);pf_install_append(status,sizeof status," STORAGE DEVICES");pf_install_status(state,status);
}
static const char *pf_install_line_containing(const char *text,const char *needle){
 for(const char *line=text;;){const char *end=line;while(*end&&*end!='\n')end++;for(const char *p=line;p<end;p++){const char *a=p,*b=needle;while(a<end&&*b&&*a==*b){a++;b++;}if(!*b)return line;}if(!*end)return 0;line=end+1;}
}
static const char *pf_install_last_line(const char *text){const char *last=text,*line=text;for(const char *p=text;;p++){if(*p=='\n'||!*p){const char *end=p;while(end>line&&(end[-1]==' '||end[-1]=='\t'||end[-1]=='\r'))end--;if(end>line)last=line;if(!*p)return last;line=p+1;}}}
static void pf_install_run(void *state){
 static const char *const targets[]={"","generic","qemu-x64","qemu-x86","qemu-arm32","qemu-aa64","qemu-ppc32","qemu-ppc64","qemu-ppc32le","qemu-ppc64le","apple-macbook-2008","apple-macbook-pro-2008","apple-powerbook-g4","apple-powermac-g5","ibm-power720"};
 static const char *const formats[]={"universal","bios","uefi","uboot","openfirmware"};
 char command[320],output[4096]={0},saved[768];
 if(!*pf_install_field(state,0xc60)){pf_install_status(state,"SELECT A TARGET DEVICE FIRST");return;}
 ((uint8_t *)state)[0xf7c]=1;pf_install_status(state,"INSTALLING");
 uint32_t device=*pf_install_field(state,*pf_install_field(state,0xc64)*132),size=*pf_install_field(state,0xc70);
 pf_install_copy(command,sizeof command,"installer(\"apply\", ");pf_install_uint(command,sizeof command,(int32_t)device<0?0:device);
 pf_install_append(command,sizeof command,", \"");pf_install_append(command,sizeof command,formats[*pf_install_field(state,0xc6c)]);pf_install_append(command,sizeof command,"\", ");pf_install_uint(command,sizeof command,(int32_t)size<0?0:size);
 pf_install_append(command,sizeof command,", \"");pf_install_append(command,sizeof command,targets[*pf_install_field(state,0xc74)]);pf_install_append(command,sizeof command,"\", ");pf_install_uint(command,sizeof command,*pf_install_field(state,0xc78));pf_install_append(command,sizeof command,")");
 uint32_t result=pf_install_execute(command,output);const char *status;
 if(!result){status="INSTALL FAILED";if(*output){status=pf_install_line_containing(output,"WinterShell error:");if(!status)status=pf_install_line_containing(output,"INSTALL ERROR");if(!status)status=pf_install_last_line(output);}pf_install_status_line(state,status);((uint8_t *)state)[0xf7c]=0;return;}
 status="INSTALL COMPLETE";if(*output){status=pf_install_line_containing(output,"INSTALL COMPLETE");if(!status)status=pf_install_last_line(output);}pf_install_status_line(state,status);pf_install_copy(saved,sizeof saved,(char *)state+0xc7c);((uint8_t *)state)[0xf7c]=0;pf_install_refresh(state);pf_install_status(state,saved);
}
