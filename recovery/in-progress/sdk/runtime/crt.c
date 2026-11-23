/* Recovered guest process startup; Pooka's Free Software License. */
#include <stdint.h>
#include <stddef.h>
extern int main(int,char **);
extern void *memset(void *,int,size_t);
extern int snprintf(char *,size_t,const char *,...);
extern void pf_rt_initialize(void);
extern void tayga_libc_prepare(void *) __attribute__((weak));
typedef void (*initializer)(void);
#define BOUNDS(segment,kind,tag) \
 extern initializer tag##_start[] __asm__("section$start$" segment "$" kind); \
 extern initializer tag##_end[] __asm__("section$end$" segment "$" kind)
BOUNDS("__DATA","__mod_init_func",data_init);
BOUNDS("__DATA_CONST","__mod_init_func",constant_init);
BOUNDS("__DATA","__mod_term_func",data_term);
BOUNDS("__DATA_CONST","__mod_term_func",constant_term);
static uintptr_t service(unsigned offset){
#if defined(__aarch64__)
 volatile uint32_t *api=(volatile uint32_t *)0x82010800U;
#elif defined(__arm__)
 volatile uint32_t *api=(volatile uint32_t *)0x40010800U;
#else
 volatile uint32_t *api=(volatile uint32_t *)0x280800U;
#endif
 return api[0]==0x50414d57U&&api[1]&&api[2]>=12&&api[2]>=offset+4?api[offset/4]:0;
}
static void yield(void){uintptr_t p=service(0x9c);if(p)((void(*)(void))p)();}
static void range(initializer *begin,initializer *end,int reverse){
 if(!begin||!end||(uintptr_t)begin>(uintptr_t)end)return;
 unsigned count=0;
 while(begin<end){initializer fn=reverse?*--end:*begin++;if(fn)fn();if(++count==8){yield();count=0;}}
}
static int space(unsigned char c){return c==' '||c=='\t'||c=='\n'||c=='\r';}
void winterboot_tayga_c_entry(void){
 struct {unsigned char info[0x620];int argc;char *argv[64];char command[512];char executable[241];} context;
 memset(&context,0,sizeof context);pf_rt_initialize();
 uintptr_t get_info=service(0x144);
 int available=get_info&&((uint32_t(*)(void *))get_info)(context.info);
 if(available){
  snprintf(context.command,sizeof context.command,"%s",context.info+0x21e);
  char *cursor=context.command;
  while(*cursor&&context.argc<64){
   while(space((unsigned char)*cursor))cursor++;
   if(!*cursor)break;
   char quote=(*cursor=='\''||*cursor=='"')?*cursor++:0;
   context.argv[context.argc++]=cursor;
   while(*cursor&&(quote?*cursor!=quote:!space((unsigned char)*cursor)))cursor++;
   if(*cursor)*cursor++=0;
  }
  snprintf(context.executable,sizeof context.executable,"%s",context.info[0x10d]?(char *)context.info+0x10d:"/");
  if(tayga_libc_prepare)tayga_libc_prepare(&context);
 }
 range(data_init_start,data_init_end,0);range(constant_init_start,constant_init_end,0);
 main(available?context.argc:0,available?context.argv:(char **)0);
 range(constant_term_start,constant_term_end,1);range(data_term_start,data_term_end,1);
 uintptr_t end=service(0x30);if(end)((void(*)(void))end)();
 for(;;)yield();
}
