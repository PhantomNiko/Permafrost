/* Pooka's Free Software License. USB keyboard transitions and repeat timing. */
#include <assert.h>
#include <stdint.h>
static uint64_t now;
static uint64_t test_clock(void){return now;}
#define PF_USB_KEYBOARD_CLOCK test_clock
#include "../recovery/in-progress/firmware/loader.c"
static PFUSB usb;
static void *handles[1]={&usb};
static unsigned canceled,armed,freed;
static PFUSBCallback callback;
static Status EFI_ABI list(uint32_t kind,Guid *guid,void *key,uintptr_t *count,void ***out){assert(kind==2&&guid==&usb_io_guid&&!key);*count=1;*out=handles;return 0;}
static Status EFI_ABI protocol(void *handle,Guid *guid,void **out){assert(handle==&usb&&guid==&usb_io_guid);*out=&usb;return 0;}
static Status EFI_ABI release(void *pool){assert(pool==handles);freed++;return 0;}
static Status EFI_ABI device(PFUSB *self,void *out){assert(self==&usb);clear(out,18);((uint8_t *)out)[8]=0x27;((uint8_t *)out)[9]=6;return 0;}
static Status EFI_ABI interface(PFUSB *self,void *out){assert(self==&usb);uint8_t descriptor[9]={9,4,0,0,1,3,1,1,0};copy(out,descriptor,9);return 0;}
static Status EFI_ABI endpoint(PFUSB *self,uint8_t index,void *out){assert(self==&usb&&!index);uint8_t descriptor[7]={7,5,0x81,3,8,0,8};copy(out,descriptor,7);return 0;}
static Status EFI_ABI disconnect(void *handle,void *driver,void *child){assert(handle==&usb&&!driver&&!child);canceled++;return 0;}
static Status EFI_ABI subscribe(PFUSB *self,uint8_t ep,uint8_t create,uintptr_t interval,uintptr_t bytes,PFUSBCallback cb,void *opaque){assert(self==&usb&&ep==0x81&&!opaque);if(!create){assert(!interval&&!bytes&&!cb);canceled++;}else{assert(canceled==1&&interval==2&&bytes==8);callback=cb;armed++;}return 0;}
static void report(unsigned modifiers,unsigned key){uint8_t packet[8]={(uint8_t)modifiers,0,(uint8_t)key};assert(!callback(packet,8,0,0));}
int main(void){
 Services boot={.handles=list,.protocol=protocol,.free_pool=release,.disconnect=(void *)disconnect};System table={0};services=&boot;system_table=&table;
 usb=(PFUSB){.async=subscribe,.device=device,.interface=interface,.endpoint=endpoint};usb_keyboard_devices();assert(usb_keyboard_available&&canceled==1&&armed==1&&freed==1);
 report(0,31);assert(key_code()=='2'&&!key_code());report(0,31);assert(!key_code());now=499;assert(!key_code());now=500;assert(key_code()=='2'&&!key_code());now=5000;assert(key_code()=='2'&&!key_code());report(0,0);now=9000;assert(!key_code());
 report(2,46);assert(key_code()=='+');report(0,0);report(0,32);assert(key_code()=='3');report(0,0);report(0,40);assert(key_code()=='\r');report(0,0);
 report(0,57);report(0,0);report(0,4);assert(key_code()=='A');report(0,0);report(2,4);assert(key_code()=='a');report(0,0);report(1,6);assert(key_code()==3);report(0,0);report(0,82);assert(key_code()==0x4800);report(0,0);
 uint8_t bad[8]={0,0,1};callback(bad,8,0,0);assert(!key_code());bad[2]=4;callback(bad,7,0,0);callback(bad,8,0,1);assert(!key_code());
 for(unsigned i=0;i<70;i++){report(0,5);report(0,0);}for(unsigned i=0;i<63;i++)assert(key_code()=='B');assert(!key_code());return 0;
}
