/* Shared Tayga command launcher; Pooka's Free Software License.
 * The reference utilities share this code and select a tool in initialized data.
 */
#include <stdint.h>
#include <stddef.h>
void __bzero(void *data,size_t count){unsigned char *bytes=data;while(count--)*bytes++=0;}
void bzero(void *data,size_t count){__bzero(data,count);}
void *memset(void *data,int value,size_t count){unsigned char *bytes=data;for(size_t i=0;i<count;i++)bytes[i]=(unsigned char)value;return data;}
#ifndef PF_TAYGA_TOOL_NAME
#define PF_TAYGA_TOOL_NAME "cat"
#endif
#if defined(__aarch64__)
#define PF_TOOL_API ((volatile uint32_t *)(uintptr_t)0x82010800)
#elif defined(__arm__)
#define PF_TOOL_API ((volatile uint32_t *)(uintptr_t)0x40010800)
#else
#define PF_TOOL_API ((volatile uint32_t *)(uintptr_t)0x6800)
#endif
static uintptr_t service(unsigned offset){volatile uint32_t *api=PF_TOOL_API;return api[0]==0x50414d57&&api[1]&&api[2]>=offset+4?api[offset/4]:0;}
static void log_line(const char *text){uintptr_t address=service(0x40);if(address)((uint32_t(*)(const char *))address)(text);}
int main(void){
 uint32_t status[111]={0},process[392]={0};char command[512],output[4096]={0},line[256];uintptr_t address=service(0x130);
 if(!address||!((uint32_t(*)(void *))address)(status)||!(status[2]&1)){log_line("tayga: subsystem is not running");return 1;}
 const char *selected=PF_TAYGA_TOOL_NAME;address=service(0x144);
 if(address&&((uint32_t(*)(void *))address)(process)&&(process[2]&2)&&((char *)process)[0x21e])selected=(char *)process+0x21e;
 unsigned i=0;while(i+1<sizeof command&&selected[i]){command[i]=selected[i];i++;}command[i]=0;
 address=service(0x138);if(!address)return 1;
 int failed=!((uint32_t(*)(const char *,char *,uint32_t))address)(command,output,sizeof output);
 if(!*output)return failed;
 unsigned length=0;while(output[length])length++;
 address=service(0x148);if(address&&((uint32_t(*)(uint32_t,const void *,uint32_t))address)(1,output,length))return failed;
 unsigned used=0;for(const char *p=output;;p++){
  if(*p=='\n'||!*p){line[used]=0;if(used)log_line(line);if(!*p)break;used=0;}
  else if(used+1<sizeof line)line[used++]=*p;
 }
 return failed;
}
