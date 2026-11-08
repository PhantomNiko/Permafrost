/* Firmware-owned QEMU HID tablet transport; Pooka's Free Software License.
 * USB I/O call slots: UEFI USB I/O protocol, documented by edk2 UsbIo.h.
 */
typedef struct PFUSB PFUSB;
typedef Status(EFI_ABI *PFUSBCallback)(void *,uintptr_t,void *,uint32_t);
struct PFUSB {
 void *control,*bulk;
 Status(EFI_ABI *async)(PFUSB *,uint8_t,uint8_t,uintptr_t,uintptr_t,PFUSBCallback,void *);
 void *sync,*iso,*async_iso;
 Status(EFI_ABI *device)(PFUSB *,void *);
 void *configuration;
 Status(EFI_ABI *interface)(PFUSB *,void *);
 Status(EFI_ABI *endpoint)(PFUSB *,uint8_t,void *);
};
static Guid usb_io_guid={0x2b2f68d6,0x0cd2,0x44cf,{0x8e,0x8b,0xbb,0xa2,0x0b,0x1b,0x5b,0x75}};
static volatile unsigned usb_tablet_head,usb_tablet_tail;
static uint8_t usb_tablet_packets[32][6];
static unsigned usb_tablet_available;
static Status EFI_ABI usb_tablet_report(void *data,uintptr_t length,void *opaque,uint32_t result){
 (void)opaque;if(result || !data || length<6)return 0;
 unsigned head=usb_tablet_head,next=(head+1)&31;
 if(next==usb_tablet_tail)return 0;
 copy(usb_tablet_packets[head],data,6);__asm__ volatile("":::"memory");usb_tablet_head=next;return 0;
}
static void usb_tablet_devices(void){
 uintptr_t count=0;void **handles=0;
 if(failed(services->handles(2,&usb_io_guid,0,&count,&handles)))return;
 for(uintptr_t i=0;i<count && i<4096 && !usb_tablet_available;i++){
  PFUSB *usb=0;uint8_t device[18]={0},interface[9]={0},endpoint[7]={0};
  if(failed(services->protocol(handles[i],&usb_io_guid,(void **)&usb)) || !usb || !usb->device || !usb->interface || !usb->endpoint || !usb->async)continue;
  if(usb->device(usb,device) || usb->interface(usb,interface))continue;
  if(device[8]!=0x27 || device[9]!=6 || interface[5]!=3 || interface[7]!=0)continue;
  for(unsigned e=0;e<interface[4] && e<16;e++){
   if(usb->endpoint(usb,(uint8_t)e,endpoint) || !(endpoint[2]&0x80) || (endpoint[3]&3)!=3)continue;
   unsigned bytes=endpoint[4]|(unsigned)endpoint[5]<<8;
   if(bytes<6 || bytes>64)continue;
   if(!usb->async(usb,endpoint[2],1,2,bytes,usb_tablet_report,0)){
    usb_tablet_available=1;message("Firmware USB tablet ready.\r\n");break;
   }
  }
 }
 services->free_pool(handles);
}
static unsigned usb_tablet_read(uint32_t *out){
 unsigned tail=usb_tablet_tail;if(tail==usb_tablet_head)return 0;
 uint8_t packet[6];copy(packet,usb_tablet_packets[tail],6);usb_tablet_tail=(tail+1)&31;
 clear(out,32);out[0]=1;out[1]=packet[0]&3;out[2]=packet[1]|(unsigned)packet[2]<<8;out[3]=packet[3]|(unsigned)packet[4]<<8;out[6]=out[7]=32767;return 1;
}
