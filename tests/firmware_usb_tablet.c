/* Pooka's Free Software License. Firmware-owned QEMU USB tablet transport. */
#include <assert.h>
#include "../recovery/in-progress/firmware/loader.c"
static PFUSB usb;
static void *handles[1]={&usb};
static PFUSBCallback callback;
static unsigned armed,freed;
static Status EFI_ABI list(uint32_t kind,Guid *guid,void *key,uintptr_t *count,void ***out){
 assert(kind==2 && guid==&usb_io_guid && !key);*count=1;*out=handles;return 0;
}
static Status EFI_ABI protocol(void *handle,Guid *guid,void **out){
 assert(handle==&usb && guid==&usb_io_guid);*out=&usb;return 0;
}
static Status EFI_ABI release(void *pool){assert(pool==handles);freed++;return 0;}
static Status EFI_ABI device(PFUSB *self,void *out){
 assert(self==&usb);clear(out,18);((uint8_t *)out)[8]=0x27;((uint8_t *)out)[9]=6;return 0;
}
static Status EFI_ABI interface(PFUSB *self,void *out){
 assert(self==&usb);clear(out,9);((uint8_t *)out)[4]=1;((uint8_t *)out)[5]=3;return 0;
}
static Status EFI_ABI endpoint(PFUSB *self,uint8_t index,void *out){
 assert(self==&usb && !index);uint8_t descriptor[7]={7,5,0x81,3,8,0,8};copy(out,descriptor,7);return 0;
}
static Status EFI_ABI subscribe(PFUSB *self,uint8_t ep,uint8_t create,uintptr_t interval,uintptr_t bytes,PFUSBCallback cb,void *opaque){
 assert(self==&usb && ep==0x81 && create==1 && interval==2 && bytes==8 && !opaque);callback=cb;armed++;return 0;
}
int main(void){
 Services boot={.handles=list,.protocol=protocol,.free_pool=release};System table={0};services=&boot;system_table=&table;
 usb=(PFUSB){.async=subscribe,.device=device,.interface=interface,.endpoint=endpoint};
 usb_tablet_devices();assert(usb_tablet_available && armed==1 && freed==1);
 uint32_t out[8];uint8_t packet[6]={3,0x34,0x12,0x78,0x56,0};
 assert(callback(packet,5,0,0)==0 && !usb_tablet_read(out));
 assert(callback(packet,6,0,1)==0 && !usb_tablet_read(out));
 assert(callback(packet,6,0,0)==0 && usb_tablet_read(out));
 assert(out[0]==1 && out[1]==3 && out[2]==0x1234 && out[3]==0x5678 && out[6]==32767 && out[7]==32767);
 assert(!out[4] && !out[5] && !usb_tablet_read(out));
 for(unsigned i=0;i<40;i++){packet[1]=(uint8_t)i;callback(packet,6,0,0);}
 for(unsigned i=0;i<31;i++){assert(usb_tablet_read(out));assert(out[2]==(0x1200|i));}
 assert(!usb_tablet_read(out));return 0;
}
