/* QEMU boot-keyboard transport; Pooka's Free Software License. */
/* Repeat deadlines use elapsed hardware-counter time, never queued timer ticks. */
#ifndef PF_USB_KEYBOARD_CLOCK
static uint64_t usb_keyboard_clock(void){
#if defined(__aarch64__)
 uint64_t counter,frequency;__asm__ volatile("mrs %0,cntvct_el0":"=r"(counter));__asm__ volatile("mrs %0,cntfrq_el0":"=r"(frequency));return frequency>=1000?counter/(frequency/1000):0;
#elif defined(__arm__)
 uint32_t low,high,frequency;__asm__ volatile("mrrc p15,1,%0,%1,c14":"=r"(low),"=r"(high));__asm__ volatile("mrc p15,0,%0,c14,c0,0":"=r"(frequency));return frequency>=1000?((uint64_t)low|((uint64_t)high<<32))/(frequency/1000):0;
#else
 return 0;
#endif
}
#define PF_USB_KEYBOARD_CLOCK usb_keyboard_clock
#endif
static unsigned usb_keyboard_repeat;
static uint64_t usb_keyboard_deadline;
static uint8_t usb_keyboard_previous[8];
static uint16_t usb_keyboard_keys[64];
static volatile unsigned usb_keyboard_head,usb_keyboard_tail;
static unsigned usb_keyboard_caps;
static void usb_keyboard_enqueue(uint16_t key){unsigned head=usb_keyboard_head,next=(head+1)&63;if(key&&next!=usb_keyboard_tail){usb_keyboard_keys[head]=key;__asm__ volatile("":::"memory");usb_keyboard_head=next;}}
static uint16_t usb_keyboard_translate(unsigned key,unsigned modifiers){
 unsigned shift=(modifiers&0x22)!=0,control=(modifiers&0x11)!=0;
 if(key>=4&&key<=29){unsigned c='a'+key-4;if(control)return c-'a'+1;return (shift^usb_keyboard_caps)?c-32:c;}
 if(key>=30&&key<=39)return (shift?"!@#$%^&*()":"1234567890")[key-30];
 if(key>=40&&key<=56)return (shift?"\r\033\b\t _+{}|~:\"~<>?":"\r\033\b\t -=[]\\#;'`,./")[key-40];
 if(key>=58&&key<=69)return (0x3b+key-58)<<8;
 switch(key){case 73:return 0x5200;case 74:return 0x4700;case 75:return 0x4900;case 76:return 0x5300;case 77:return 0x4f00;case 78:return 0x5100;case 79:return 0x4d00;case 80:return 0x4b00;case 81:return 0x5000;case 82:return 0x4800;case 84:return '/';case 85:return '*';case 86:return '-';case 87:return '+';case 88:return '\r';}
 if(key>=89&&key<=99)return "1234567890."[key-89];return 0;
}
static Status EFI_ABI usb_keyboard_report(void *data,uintptr_t length,void *opaque,uint32_t result){
 (void)opaque;if(result||!data||length<8)return 0;uint8_t *report=data;
 for(unsigned i=2;i<8;i++)if(report[i]&&report[i]<4)return 0;
 for(unsigned i=2;i<8;i++){unsigned key=report[i],seen=0;if(!key)continue;for(unsigned j=2;j<8;j++)seen|=usb_keyboard_previous[j]==key;for(unsigned j=2;j<i;j++)seen|=report[j]==key;if(seen)continue;if(key==57)usb_keyboard_caps^=1;else {usb_keyboard_enqueue(usb_keyboard_translate(key,report[0]));usb_keyboard_repeat=key;usb_keyboard_deadline=PF_USB_KEYBOARD_CLOCK()+500;}}
 unsigned held=0;for(unsigned i=2;i<8;i++)held|=report[i]==usb_keyboard_repeat;
 if(!held)usb_keyboard_repeat=0;
 copy(usb_keyboard_previous,report,8);return 0;
}
static uint16_t usb_keyboard_read(void){unsigned tail=usb_keyboard_tail;if(tail==usb_keyboard_head){uint64_t now=PF_USB_KEYBOARD_CLOCK();if(!usb_keyboard_repeat||now<usb_keyboard_deadline)return 0;usb_keyboard_deadline=now+33;return usb_keyboard_translate(usb_keyboard_repeat,usb_keyboard_previous[0]);}uint16_t key=usb_keyboard_keys[tail];usb_keyboard_tail=(tail+1)&63;return key;}
static void usb_keyboard_devices(void){
 uintptr_t count=0;void **handles=0;if(failed(services->handles(2,&usb_io_guid,0,&count,&handles)))return;
 for(uintptr_t i=0;i<count&&i<4096&&!usb_keyboard_available;i++){
  PFUSB *usb=0;uint8_t device[18]={0},interface[9]={0},endpoint[7]={0};
  if(failed(services->protocol(handles[i],&usb_io_guid,(void **)&usb))||!usb||!usb->device||!usb->interface||!usb->endpoint||!usb->async)continue;
  if(usb->device(usb,device)||usb->interface(usb,interface))continue;
  if(device[8]!=0x27||device[9]!=6||interface[5]!=3||interface[6]!=1||interface[7]!=1)continue;
  for(unsigned e=0;e<interface[4]&&e<16;e++){
   if(usb->endpoint(usb,e,endpoint)||!(endpoint[2]&0x80)||(endpoint[3]&3)!=3)continue;
   unsigned bytes=endpoint[4]|(unsigned)endpoint[5]<<8;if(bytes<8||bytes>64)continue;
   /* Stop the firmware keyboard driver before replacing its subscription.
      Its repeat timer and transfer context must be released together. */
   if(!services->disconnect || failed(((Status(EFI_ABI *)(void *,void *,void *))services->disconnect)(handles[i],0,0)))continue;
   if(!usb->async(usb,endpoint[2],1,2,bytes,usb_keyboard_report,0)){usb_keyboard_available=1;message("Firmware USB keyboard ready.\r\n");break;}
  }
 }
 services->free_pool(handles);
}
