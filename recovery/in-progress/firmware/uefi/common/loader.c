/* Permafrost source firmware: disk loading, WFE11 handoff, and live services.
 * Boot-context and command fields follow the current reference firmware and kernel.
 * Pooka's Free Software License. */
#include "platform.h"
#include "efi_context.h"
#include "service_context.h"
#include "pfs.h"
#include "pfz.h"
static System *system_table;
static Services *services;
static Block *disk;
static uint64_t payload_lba;
static uint32_t payload_sectors;
static struct pf_pfs boot_volume;
static uint8_t *pfs_scratch;
static uint32_t boot_starts[2],boot_lengths[2];
static uint32_t *context,*command;
static uint8_t *io_buffer;
static uint8_t sector[512] __attribute__((aligned(4096)));
static uint8_t map_buffer[65536] __attribute__((aligned(16)));
static Guid block_guid={0x964e5b21,0x6459,0x11d2,{0x8e,0x39,0,0xa0,0xc9,0x69,0x72,0x3b}};
static Guid video_guid={0x9042a9de,0x23dc,0x4a38,{0x96,0xfb,0x7a,0xde,0xd0,0x80,0x51,0x6a}};
static int failed(Status status){return (int)(status>>(sizeof(Status)*8-1));}
static void clear(void *data,size_t size){uint8_t *p=data;while(size--)*p++=0;}
static void copy(void *out,const void *in,size_t size){uint8_t *a=out;const uint8_t *b=in;while(size--)*a++=*b++;}
static uint32_t le32(const void *data){const uint8_t *p=data;return p[0]|(uint32_t)p[1]<<8|(uint32_t)p[2]<<16|(uint32_t)p[3]<<24;}
static uint64_t le64(const void *data){return le32(data)|(uint64_t)le32((const uint8_t *)data+4)<<32;}
static uint32_t be32(const void *data){const uint8_t *p=data;return (uint32_t)p[0]<<24|(uint32_t)p[1]<<16|(uint32_t)p[2]<<8|p[3];}
static int equal(const void *a,const void *b,size_t length){const uint8_t *p=a,*q=b;while(length--)if(*p++!=*q++)return 0;return 1;}
static int name_equal(const uint8_t *p,const char *name){for(unsigned i=0;i<240;i++){if(p[i]!=(uint8_t)name[i])return 0;if(!p[i])return 1;}return 0;}
static void message(const char *text){
    if(!system_table->output || !system_table->output->write)return;
    uint16_t buffer[160];unsigned n=0;
    while(*text && n<159)buffer[n++]=(uint8_t)*text++;
    buffer[n]=0;system_table->output->write(system_table->output,buffer);
}
static void *allocate_kind(size_t bytes,uint64_t address,unsigned kind){
    if(!bytes || bytes>0x40000000U)return 0;
    uint64_t location=address?address:0xffffffffU;
    Status status=services->allocate_pages(address?2:1,kind,(bytes+4095)/4096,&location);
    if(failed(status) || location>UINT32_MAX)return 0;
    return (void *)(uintptr_t)location;
}
static void *allocate(size_t bytes,uint64_t address){return allocate_kind(bytes,address,2);}
static int read_sectors(uint64_t lba,uint32_t count,void *out){
    if(!count || lba>disk->media->last || count-1>disk->media->last-lba)return 0;
    return !failed(disk->read(disk,disk->media->id,lba,(uintptr_t)count*512,out));
}
/* ReadBlocks destinations and lengths retain the firmware's alignment. */
static int pfs_disk_read(void *unused,uint64_t offset,void *destination,size_t count){
    (void)unused;uint8_t *out=destination;
    uint64_t sectors=disk->media->last+1;
    if(sectors>UINT64_MAX/512 || offset>sectors*512 || count>sectors*512-offset)return 0;
    while(count){
        size_t within=(size_t)(offset&511),used=65536-within;
        if(used>count)used=count;
        uint32_t blocks=(uint32_t)((within+used+511)/512);
        if(!read_sectors(offset/512,blocks,io_buffer))return 0;
        copy(out,io_buffer+within,used);out+=used;offset+=used;count-=used;
    }
    return 1;
}
static int find_payload(Block *candidate){
    disk=candidate;
    if(!candidate->media || !candidate->media->present || candidate->media->block_size!=512 ||
       candidate->media->last>=UINT32_MAX)return 0;
    uint64_t headers[7]={0,256,257,0,0,0,0};
    clear(boot_starts,sizeof(boot_starts));clear(boot_lengths,sizeof(boot_lengths));
    if(read_sectors(0,1,sector) && sector[510]==0x55 && sector[511]==0xaa){
        for(unsigned i=0;i<4;i++){
            const uint8_t *record=sector+446+i*16;
            uint32_t first=le32(record+8),count=le32(record+12);
            if(record[4]!=0x7f || !first || count<257 || first>candidate->media->last ||
               count-1>candidate->media->last-first)continue;
            headers[3+i]=(uint64_t)first+256;
            boot_starts[0]=first;boot_lengths[0]=count;
        }
    }
    for(unsigned i=0;i<7;i++){
        if(headers[i]>candidate->media->last || !read_sectors(headers[i],1,sector) ||
           !equal(sector,"PolynyaFS",9))continue;
        if(pf_pfs_open(&boot_volume,pfs_disk_read,0,headers[i]*512,pfs_scratch))continue;
        payload_lba=0;payload_sectors=(uint32_t)(candidate->media->last+1);return 1;
    }
    return 0;
}
static int select_disk(void){
    uintptr_t count=0;void **handles=0;
    if(failed(services->handles(2,&block_guid,0,&count,&handles)))return 0;
    int found=0;
    /* Prefer a whole disk so its partition handles cannot become extra targets. */
    for(unsigned pass=0;pass<2 && !found;pass++)for(uintptr_t i=0;i<count && i<4096;i++){
        Block *candidate=0;
        if(failed(services->protocol(handles[i],&block_guid,(void **)&candidate)) || !candidate || !candidate->media)continue;
        if((candidate->media->partition!=0)!=(pass!=0))continue;
        if(find_payload(candidate)){found=1;break;}
    }
    services->free_pool(handles);return found;
}
#include "disk_context.h"
struct Segment {uint64_t address,size,offset,used;};
static uint8_t *load_file(const char *name,size_t *size){
    struct pf_pfs_entry entry;
    if(pf_pfs_lookup(&boot_volume,name,&entry) || entry.kind!=1 || !entry.size || entry.size>0x8000000U)return 0;
    uint8_t *result=allocate((size_t)entry.size,0);
    if(!result)return 0;
    if(pf_pfs_read_file(&boot_volume,&entry,0,result,(size_t)entry.size)){
        services->free_pages((uintptr_t)result,((size_t)entry.size+4095)/4096);return 0;
    }
    *size=(size_t)entry.size;return result;
}
static uintptr_t load_thin(uint8_t *image,size_t size){
    if(size<28 || le32(image+4)!=CPU_TYPE)return 0;
    int wide=le32(image)==0xfeedfacf;
    if(!wide && le32(image)!=0xfeedface)return 0;
    uint32_t commands=le32(image+16),command_bytes=le32(image+20);size_t cursor=wide?32:28;
    if(commands>256 || command_bytes>size-cursor)return 0;
    struct Segment segments[32];unsigned segment_count=0;uint64_t end=KERNEL_ADDRESS;uintptr_t entry=0;
    for(uint32_t i=0;i<commands;i++){
        if(cursor+8>size)return 0;
        uint32_t kind=le32(image+cursor),bytes=le32(image+cursor+4);
        if(bytes<8 || bytes>size-cursor)return 0;
        if(kind==1 || kind==0x19){
            if(segment_count==32 || bytes<(kind==1?56U:72U))return 0;
            uint8_t *p=image+cursor+24;struct Segment *s=&segments[segment_count++];
            s->address=kind==1?le32(p):le64(p);s->size=kind==1?le32(p+4):le64(p+8);
            s->offset=kind==1?le32(p+8):le64(p+16);s->used=kind==1?le32(p+12):le64(p+24);
            if(s->address<KERNEL_ADDRESS || s->size>0x4000000 || s->address+s->size>UINT32_MAX ||
               s->used>s->size || s->offset>size || s->used>size-s->offset)return 0;
            if(end<s->address+s->size)end=s->address+s->size;
        }else if(kind==5){
            uint32_t flavor=le32(image+cursor+8);
            size_t pc=CPU_TYPE==7?56:CPU_TYPE==0x1000007?144:CPU_TYPE==12?76:272;
            if(bytes>=pc+4 && (flavor==1 || flavor==4 || flavor==6))entry=(uintptr_t)(wide?le64(image+cursor+pc):le32(image+cursor+pc));
        }
        cursor+=bytes;
    }
    if(!segment_count || entry<KERNEL_ADDRESS || entry>=end || end-KERNEL_ADDRESS>0x4000000)return 0;
    if(!allocate((size_t)(end-KERNEL_ADDRESS),KERNEL_ADDRESS))return 0;
    for(unsigned i=0;i<segment_count;i++){
        clear((void *)(uintptr_t)segments[i].address,(size_t)segments[i].size);
        copy((void *)(uintptr_t)segments[i].address,image+segments[i].offset,(size_t)segments[i].used);
    }
    return entry;
}
static uintptr_t load_kernel(uint8_t *file,size_t length){
    uint8_t *image=file;size_t size=length;
    if(size>=8 && be32(image)==0xcafebabe){
        uint32_t count=be32(image+4);int found=0;
        if(count>16 || 8+(uint64_t)count*20>size)return 0;
        for(uint32_t i=0;i<count;i++){
            uint8_t *record=image+8+i*20;uint32_t off=be32(record+8),bytes=be32(record+12);
            if(be32(record)==CPU_TYPE && off<=size && bytes<=size-off){image+=off;size=bytes;found=1;break;}
        }
        if(!found)return 0;
    }
    if(size>=16 && equal(image,"PFZ1",4)){
        size_t decoded_size=le32(image+4),written=0;
        if(!decoded_size || decoded_size>0x8000000U)return 0;
        uint8_t *decoded=allocate(decoded_size,0);
        if(!decoded)return 0;
        uintptr_t entry=0;
        if(!pf_pfz_unpack(image,size,decoded,decoded_size,&written) && written==decoded_size)
            entry=load_thin(decoded,written);
        services->free_pages((uintptr_t)decoded,(decoded_size+4095)/4096);
        return entry;
    }
    return load_thin(image,size);
}
static unsigned usb_keyboard_available;
static uint32_t usb_keyboard_read(void);
#include "keyboard_codes.h"
/* UEFI 2.10, section 12.2: Simple Text Input Ex supplies modifier state. */
typedef struct {Key key;uint32_t shifts;uint8_t toggles,padding[3];} ExtendedKey;
typedef struct ExtendedInput {void *reset;Status(EFI_ABI *read)(struct ExtendedInput *,ExtendedKey *);void *event,*set_state,*register_key,*unregister_key;} ExtendedInput;
static Guid extended_input_guid={0xdd9e7534,0x7762,0x4698,{0x8c,0x14,0xf5,0x85,0x17,0xa6,0x25,0xaa}};
static ExtendedInput *extended_input;
static unsigned extended_input_checked;
static uint32_t extended_modifiers;
static uint32_t key_code(void){
    if(usb_keyboard_available)return usb_keyboard_read();
    if(!extended_input_checked){
        extended_input_checked=1;
        if(system_table->input_handle&&services->protocol)services->protocol(system_table->input_handle,&extended_input_guid,(void **)&extended_input);
    }
    Key key={0};uint32_t modifiers=0;Status status;
    if(extended_input&&extended_input->read){
        ExtendedKey data={0};status=extended_input->read(extended_input,&data);
        if(status&&extended_input->event&&services->check_event&&!services->check_event(extended_input->event))status=extended_input->read(extended_input,&data);
        if(status)return 0;key=data.key;
        if(data.shifts&0x80000000U)modifiers=((data.shifts&3)?0x10000U:0)|((data.shifts&12)?0x20000U:0)|((data.shifts&0xc0)?0x40000U:0);
        if(!key.character&&!key.scan){uint32_t previous=extended_modifiers;extended_modifiers=modifiers;return previous!=modifiers?0x80000000U|modifiers:0;}
        extended_modifiers=modifiers;
    }else{
        if(!system_table->input||!system_table->input->read)return 0;
        Input *input=system_table->input;status=input->read(input,&key);
        if(status&&input->event&&services->check_event&&!services->check_event(input->event))status=input->read(input,&key);
        if(status)return 0;
    }
    if(key.character)return modifiers|(keyboard_character_scan(key.character)<<8)|key.character;
    static const uint8_t scans[]={0,0x48,0x50,0x4d,0x4b,0x47,0x4f,0x52,0x53,0x49,0x51};
    if(key.scan<sizeof(scans))return modifiers|((uint32_t)scans[key.scan]<<8);
    if(key.scan==0x17)return modifiers|0x011b;
    if(key.scan>=0xb&&key.scan<=0x14)return modifiers|((uint32_t)(0x3b+key.scan-0xb)<<8);
    if(key.scan==0x15||key.scan==0x16)return modifiers|((uint32_t)(0x57+key.scan-0x15)<<8);
    return 0;
}
static Guid relative_guid={0x31878c87,0x0b75,0x11d5,{0x9a,0x4f,0,0x90,0x27,0x3f,0xc1,0x4d}};
static Guid absolute_guid={0x8d59d32b,0xc655,0x4ae9,{0x9b,0x15,0xf2,0x59,0x04,0x99,0x2a,0x43}};
static RelativePointer *relative_devices[8];
static AbsolutePointer *absolute_devices[8];
static unsigned relative_count,absolute_count;
#include "usb_tablet.h"
#include "usb_keyboard.h"
static void pointer_devices(void){
    relative_count=absolute_count=0;
    Guid *guids[]={&relative_guid,&absolute_guid};
    for(unsigned kind=0;kind<2;kind++){
        uintptr_t count=0;void **handles=0;
        if(failed(services->handles(2,guids[kind],0,&count,&handles)))continue;
        for(uintptr_t i=0;i<count;i++){
            void *device=0;
            if(failed(services->protocol(handles[i],guids[kind],&device)) || !device)continue;
            if(!kind && relative_count<8)relative_devices[relative_count++]=device;
            if(kind && absolute_count<8)absolute_devices[absolute_count++]=device;
        }
        services->free_pool(handles);
    }
    /* WFE11 advertises pointer protocols before the kernel selects its input
       backend. Publish both the legacy 32-bit and full-width handle arrays. */
    context[0x4d6]=relative_count;context[0x4d7]=absolute_count;
    for(unsigned i=0;i<8;i++){
        uintptr_t relative=i<relative_count?(uintptr_t)relative_devices[i]:0;
        uintptr_t absolute=i<absolute_count?(uintptr_t)absolute_devices[i]:0;
        context[0x4d8+i]=relative<=UINT32_MAX?(uint32_t)relative:0;
        context[0x4e0+i]=absolute<=UINT32_MAX?(uint32_t)absolute:0;
        ((uint64_t *)(context+0x4e8))[i]=relative;
        ((uint64_t *)(context+0x4f8))[i]=absolute;
    }
}
static int32_t bounded_i32(int64_t value){
    if(value>2147483647)return 2147483647;
    if(value<(-2147483647-1))return (-2147483647-1);
    return (int32_t)value;
}
static uint32_t pointer_read(uint32_t *out){
    if(!out)return 0;
    if(usb_tablet_available)return usb_tablet_read(out);
    clear(out,32);uint32_t changed=0;
    for(unsigned i=0;i<relative_count;i++){
        RelativePointer *device=relative_devices[i];RelativeState state={0};
        if(!device->read)continue;
        Status status=device->read(device,&state);
        /* CheckEvent also runs EVT_NOTIFY_WAIT polling callbacks. It must
           receive the protocol's event, and must not block waiting for input.
           UEFI 2.10, Boot Services 7.1.6. */
        if(status && device->event && services->check_event &&
           !services->check_event(device->event))status=device->read(device,&state);
        if(status)continue;
        changed=1;out[0]|=2;out[1]|=(state.left!=0)|(uint32_t)(state.right!=0)<<1;
        /* WmBaremetalProgramPointerInfo reserves words 2/3 for absolute x/y
           and words 4/5 for relative dx/dy. Wheel data has no field here. */
        out[4]=(uint32_t)bounded_i32((int64_t)(int32_t)out[4]+state.x);
        out[5]=(uint32_t)bounded_i32((int64_t)(int32_t)out[5]+state.y);
    }
    for(unsigned i=0;i<absolute_count;i++){
        AbsolutePointer *device=absolute_devices[i];AbsoluteState state={0};
        if(!device->read)continue;
        Status status=device->read(device,&state);
        if(status && device->event && services->check_event &&
           !services->check_event(device->event))status=device->read(device,&state);
        if(status)continue;
        AbsoluteMode *mode=device->mode;
        uint64_t min_x=mode?mode->min_x:0,min_y=mode?mode->min_y:0;
        uint64_t max_x=mode?mode->max_x:0,max_y=mode?mode->max_y:0;
        if(max_x<min_x)min_x=0;if(max_y<min_y)min_y=0;
        if(state.x<min_x)state.x=min_x;if(state.y<min_y)state.y=min_y;
        if(max_x && state.x>max_x)state.x=max_x;
        if(max_y && state.y>max_y)state.y=max_y;
        /* Firmware can advertise both protocols for a tablet. An empty
           relative packet must not conceal its absolute position. */
        if(!(out[0]&2) || (!out[4]&&!out[5])){
            out[0]=(out[0]&~2U)|1;out[2]=(uint32_t)bounded_i32((int64_t)(state.x-min_x));
            out[3]=(uint32_t)bounded_i32((int64_t)(state.y-min_y));
            out[6]=max_x-min_x>UINT32_MAX?UINT32_MAX:(uint32_t)(max_x-min_x);
            out[7]=max_y-min_y>UINT32_MAX?UINT32_MAX:(uint32_t)(max_y-min_y);
        }
        out[1]|=state.buttons&3;changed=1;
    }
    return changed;
}
/* GOP PixelBltOnly devices (including virtio-ramfb) expose no linear video
 * memory. Keep a reserved BGRA surface and present it through GOP.Blt.
 * https://uefi.org/specs/UEFI/2.10/12_Protocols_Console_Support.html */
static Video *blt_video,*selected_video;
static uint32_t *blt_pixels;
static size_t blt_capacity;
static uintptr_t blt_width,blt_height;
static void video_present(void){
    if(blt_video && blt_pixels && blt_video->blit)
        blt_video->blit(blt_video,blt_pixels,2,0,0,0,0,blt_width,blt_height,blt_width*4);
}
static uint32_t video_present_rectangle(uint32_t x,uint32_t y,uint32_t width,uint32_t height){
    if(!blt_video || !blt_pixels || !blt_video->blit)return 1;
    int64_t left=(int32_t)x,top=(int32_t)y,right=left+width,bottom=top+height;
    if(left<0)left=0;if(top<0)top=0;
    if(right>(int64_t)blt_width)right=blt_width;
    if(bottom>(int64_t)blt_height)bottom=blt_height;
    if(left>=right || top>=bottom)return 0;
    return !failed(blt_video->blit(blt_video,blt_pixels,2,(uintptr_t)left,(uintptr_t)top,
        (uintptr_t)left,(uintptr_t)top,(uintptr_t)(right-left),(uintptr_t)(bottom-top),blt_width*4));
}
static void video_present_legacy(void){
    if(!context || !(context[PF_EFI_INPUT_CAPABILITIES/4]&PF_EFI_PRESENT_ACTIVE))video_present();
}
static unsigned bit_shift(uint32_t mask);
static int video_select(Video *video){
    if(!video || !video->mode || !video->mode->info)return 0;
    VideoMode *mode=video->mode;VideoInfo *info=mode->info;
    if(info->format>3 || !info->width || !info->height)return 0;
    uint64_t pixels=mode->framebuffer;uintptr_t bytes=mode->bytes,stride=info->stride;
    uint32_t format=info->format;
    if(format==3 || !pixels){
        if(!video->blit || info->width>8192 || info->height>8192)return 0;
        size_t needed=(size_t)info->width*info->height*4;
        if(needed>blt_capacity){
            uint32_t *next=allocate(needed,0);if(!next)return 0;
            if(blt_pixels)services->free_pages((uintptr_t)blt_pixels,(blt_capacity+4095)/4096);
            blt_pixels=next;blt_capacity=needed;clear(blt_pixels,needed);
        }
        blt_video=video;blt_width=info->width;blt_height=info->height;
        pixels=(uintptr_t)blt_pixels;bytes=needed;stride=info->width;format=1;
    }else{
        if(stride<info->width)return 0;
        blt_video=0;
    }
    context[PF_EFI_INPUT_CAPABILITIES/4]=(context[PF_EFI_INPUT_CAPABILITIES/4]&~(PF_EFI_PRESENT_SUPPORTED|PF_EFI_PRESENT_ACTIVE))|(blt_video?PF_EFI_PRESENT_SUPPORTED:0);
    context[0x13]=(uint32_t)pixels;context[0x192]=(uint32_t)(pixels>>32);
    context[0x14]=(uint32_t)bytes;context[0x15]=stride*4;
    context[0x16]=info->width;context[0x17]=info->height;context[0x18]=32;
    uint32_t red=info->red,green=info->green,blue=info->blue;
    if(format<2){red=format?0xff0000U:0xffU;green=0xff00;blue=format?0xffU:0xff0000U;}
    context[0x19]=red;context[0x1a]=green;context[0x1b]=blue;
    context[0x1c]=bit_shift(red);context[0x1d]=bit_shift(green);context[0x1e]=bit_shift(blue);
    return 1;
}
static void video_context(void);
static uint32_t video_change_one(Video *video,uint32_t *request){
    if(!video || !video->mode || !video->mode->info)return 0;
    uint32_t selected=video->mode->current;uint64_t distance=UINT64_MAX;unsigned found=0;
    if(request[8] && request[9]){
        if(!video->query || !video->set)return 0;
        for(uint32_t n=0;n<video->mode->maximum && n<4096;n++){
            uintptr_t size=0;VideoInfo *info=0;Status status=video->query(video,n,&size,&info);
            if(!failed(status) && info && size>=sizeof(VideoInfo) && info->format<=3 && info->width && info->height){
                uint64_t dx=info->width>request[8]?info->width-request[8]:request[8]-info->width;
                uint64_t dy=info->height>request[9]?info->height-request[9]:request[9]-info->height;
                if((!request[10] || request[10]==32 || !(request[11]&1)) &&
                   (!(request[11]&1) || (!dx && !dy)) && dx+dy<distance){
                    selected=n;distance=dx+dy;found=1;
                }
            }
            if(info)services->free_pool(info);
        }
        if(!found)return 0;
        if(selected!=video->mode->current && failed(video->set(video,selected)))return 0;
    }
    if(!video_select(video))return 0;selected_video=video;
    request[12]=context[0x13];request[13]=context[0x192];
    for(unsigned n=0;n<11;n++)request[14+n]=context[0x14+n];
    return 1;
}
static uint32_t video_change(uint32_t *request){
    if(selected_video)return video_change_one(selected_video,request);
    uintptr_t count=0;void **handles=0;uint32_t result=0;
    if(failed(services->handles(2,&video_guid,0,&count,&handles)))return 0;
    for(uintptr_t i=0;i<count && i<4096;i++){
        Video *video=0;
        if(!failed(services->protocol(handles[i],&video_guid,(void **)&video)) &&
           video_change_one(video,request)){result=1;break;}
    }
    services->free_pool(handles);return result;
}

static uint32_t dispatch(uint32_t *request){
    if(!request)return 0;
    uint32_t result=0;
    switch(request[0]){
    case 1:video_present_legacy();result=key_code();if(blt_video && !result)services->stall(16000);break;
    case 2:case 3:{
        Block *target=command_disk(request[6]);if(!disk_usable(target))break;
        uint64_t lba=request[2]|(uint64_t)request[3]<<32;
        uintptr_t bytes=request[5];void *buffer=(void *)(uintptr_t)request[4];
        if(!bytes || (bytes&511) || !buffer || lba>target->media->last || bytes/512-1>target->media->last-lba)break;
        if(request[0]==3 && (target->media->readonly || !target->write))break;
        Status status=request[0]==2?target->read(target,target->media->id,lba,bytes,buffer):target->write(target,target->media->id,lba,bytes,buffer);
        result=!failed(status);break;
    }
    case 7:if(request[4] && request[5]>=32)result=pointer_read((uint32_t *)(uintptr_t)request[4]);break;
    case 8:result=video_change(request);break;
    case 9:result=video_present_rectangle(request[8],request[9],request[10],request[11]);break;
    case 4:video_present_legacy();result=!failed(services->stall(request[7]));break;
    case 5:{Block *target=command_disk(request[6]);if(disk_usable(target))result=!target->flush || !failed(target->flush(target));break;}
    case 6:if(system_table->output && system_table->output->write && request[4])result=!failed(system_table->output->write(system_table->output,(uint16_t *)(uintptr_t)request[4]));break;
    }
    request[1]=result;return result;
}
static uint32_t OS_ABI bridge(uint32_t *request){
#if defined(__x86_64__) || defined(__i386__)
    __asm__ volatile("sti":::"memory");
    uint32_t result=dispatch(request);__asm__ volatile("cli":::"memory");return result;
#elif defined(__aarch64__) || defined(__arm__)
    FirmwareServiceContext kernel_context;
    if(!firmware_service_ready || !capture_service_context(&kernel_context))return dispatch(request);
    restore_service_context(&firmware_service);
    uint32_t result=dispatch(request);
    capture_service_context(&firmware_service);
    restore_service_context(&kernel_context);return result;
#else
    return dispatch(request);
#endif
}
static uintptr_t legacy_bridge(void){
    uintptr_t target=(uintptr_t)bridge;
    if(target<=UINT32_MAX)return target;
    uint8_t *entry=allocate_kind(4096,0,1);if(!entry)return 0;
#if defined(__aarch64__)
    /* The native context has a 32-bit call slot. Preserve it with a low
       entry that branches to the full-width, source-built EFI function. */
    ((uint32_t *)entry)[0]=0x58000050; /* ldr x16, literal at +8 */
    ((uint32_t *)entry)[1]=0xd61f0200; /* br x16 */
    *(uint64_t *)(entry+8)=target;
    __asm__ volatile("dc cvau,%0\ndsb ish\nic ivau,%0\ndsb ish\nisb"::"r"(entry):"memory");
#elif defined(__x86_64__)
    entry[0]=0x49;entry[1]=0xbb;*(uint64_t *)(entry+2)=target;
    entry[10]=0x41;entry[11]=0xff;entry[12]=0xe3; /* jmp r11 */
#else
    return 0;
#endif
    return (uintptr_t)entry;
}
static unsigned bit_shift(uint32_t mask){unsigned n=0;if(!mask)return 0;while(!(mask&1)){mask>>=1;n++;}return n;}
static void video_context(void){
    if(selected_video && video_select(selected_video))return;
    uintptr_t count=0;void **handles=0;Video *best=0;uint64_t area=0;
    if(!failed(services->handles(2,&video_guid,0,&count,&handles))){
        for(uintptr_t i=0;i<count && i<4096;i++){
            Video *video=0;
            if(failed(services->protocol(handles[i],&video_guid,(void **)&video)) || !video || !video->mode || !video->mode->info)continue;
            VideoInfo *info=video->mode->info;
            if(!info->width || !info->height || info->width>8192 || info->height>8192 || info->format>3)continue;
            if((info->format==3 || !video->mode->framebuffer)?!video->blit:info->stride<info->width)continue;
            uint64_t size=(uint64_t)info->width*info->height;
            if(size>area){best=video;area=size;}
        }
        services->free_pool(handles);
        if(video_select(best)){selected_video=best;return;}
    }
    Video *console=0;
    if(system_table->output_handle && !failed(services->protocol(system_table->output_handle,&video_guid,(void **)&console)))video_select(console);
}

/* WFE11 exposes the boot disk through cached physical-sector extents. */
static int prefetch_disk_context(void){
    /* Missing extents fall through to indexed EFI I/O. Keep large disks from
       exhausting the cache table or consuming the kernel's working memory. */
    uint32_t cached_sectors=payload_sectors;
    if(cached_sectors>262144U)cached_sectors=262144U;
    unsigned count=0;
    for(uint32_t offset=0;offset<cached_sectors;){
        uint32_t sectors=cached_sectors-offset;if(sectors>4096)sectors=4096;
        if(count>=255)return 0;
        void *buffer=allocate((size_t)sectors*512,0);
        if(!buffer || !read_sectors(payload_lba+offset,sectors,buffer))return 0;
        context[0x1a2+count]=(uint32_t)payload_lba+offset;
        context[0x2a2+count]=sectors;context[0x3a2+count]=(uintptr_t)buffer;
        count++;offset+=sectors;
    }
    void *header=allocate(64*512,0);
    if(!header || !read_sectors(0,64,header))return 0;
    context[0x1a2+count]=0;context[0x2a2+count]=64;
    context[0x3a2+count]=(uintptr_t)header;context[0x1a0]=count+1;
    return 1;
}
static int heap_context(void){
    uintptr_t size=sizeof(map_buffer),key=0,stride=0;uint32_t version=0;
    if(failed(services->memory_map(&size,map_buffer,&key,&stride,&version)) || stride<40)return 0;
    uint64_t free_bytes=0;
    for(size_t off=0;off+40<=size;off+=stride){Region *r=(Region *)(map_buffer+off);if(r->type==7)free_bytes+=r->pages*4096;}
    uint64_t reserve=free_bytes/8;if(reserve<0x1000000)reserve=0x1000000;
    if(free_bytes<=reserve+0x800000)return 0;
    uint64_t remaining=free_bytes-reserve,total=0,top=0;unsigned count=0;
    for(size_t off=0;off+40<=size && count<16 && remaining>=4096;off+=stride){
        Region *r=(Region *)(map_buffer+off);if(r->type!=7 || r->base>=0x100000000ULL)continue;
        uint64_t base=r->base,bytes=r->pages*4096;
        if(base<0x300000){uint64_t trim=0x300000-base;if(trim>=bytes)continue;base+=trim;bytes-=trim;}
        if(base+bytes>0x100000000ULL)bytes=0x100000000ULL-base;
        if(bytes>remaining)bytes=remaining&~4095ULL;
        if(bytes>0x30000000ULL)bytes=0x30000000ULL;
        if(!bytes || !allocate((size_t)bytes,base))continue;
        context[0x25+count]=(uint32_t)base;context[0x35+count]=(uint32_t)bytes;
        ((uint64_t *)(context+0x92))[count]=base;((uint64_t *)(context+0x112))[count]=bytes;
        total+=bytes;remaining-=bytes;if(top<base+bytes)top=base+bytes;count++;
    }
    context[0x24]=count;context[0x8f]=0x34364857;context[0x90]=count;
    context[0x1f]=(uint32_t)top;context[0x20]=(uint32_t)(top>>32);
    return total>=0x800000;
}
#if defined(__aarch64__)
/* Keep kernel command frames off the firmware's guarded boot-services stack. */
static uintptr_t kernel_stack_top;
#endif
static void enter(uintptr_t entry){
#if defined(__aarch64__) || defined(__arm__)
    firmware_service_ready=capture_service_context(&firmware_service);
#endif
#if defined(__x86_64__) || defined(__i386__)
    __asm__ volatile("cli;cld":::"memory");
#elif defined(__aarch64__)
    __asm__ volatile("msr daifset,#0xf\nmsr cntv_ctl_el0,xzr\nmsr cntp_ctl_el0,xzr\nisb":::"memory");
#else
    __asm__ volatile("cpsid if":::"memory");
    uint32_t control;
    __asm__ volatile("mrc p15,0,%0,c1,c0,2":"=r"(control));
    control|=0x00f00000U;
    __asm__ volatile("mcr p15,0,%0,c1,c0,2\nisb"::"r"(control):"memory");
    /* Thumb VMSR FPEXC,r0; keep the loader compiled without floating point. */
    __asm__ volatile("mov r0,#0x40000000\n.short 0xeee8,0x0a10":::"r0","memory");
#endif
#if defined(__x86_64__)
    __asm__ volatile("andq $-16,%%rsp; jmp *%0"::"r"(entry):"memory");
    __builtin_unreachable();
#elif defined(__i386__)
    __asm__ volatile("andl $-16,%%esp; jmp *%0"::"r"(entry):"memory");
    __builtin_unreachable();
#elif defined(__aarch64__)
    __asm__ volatile("mov sp,%1\nbr %0"::"r"(entry),"r"(kernel_stack_top):"memory");
    __builtin_unreachable();
#else
    ((void (*)(void))entry)();
#endif
    for(;;){
#if defined(__x86_64__) || defined(__i386__)
        __asm__ volatile("hlt");
#else
        __asm__ volatile("wfi");
#endif
    }
}
Status EFI_ABI pf_efi_entry(void *image,System *table){
    (void)image;if(!table || !table->boot)return (Status)-1;
    system_table=table;services=table->boot;
    if(services->watchdog)services->watchdog(0,0,0,0);
    message("Permafrost 1.1 source firmware\r\n");
    if(!allocate(4096,SHARED_ADDRESS) || !allocate(0x100000,PROGRAM_ADDRESS)){message("Shared memory reservation failed.\r\n");return (Status)-1;}
#if defined(__aarch64__)
    /* Older ARM64 tools share the ARM32 WMAP address. Reserve its page so
     * the kernel allocator cannot overwrite the compatibility table. */
    if(!allocate(4096,0x40010000U)){message("Legacy API reservation failed.\r\n");return (Status)-1;}
    clear((void *)0x40010000U,4096);
#endif
    clear((void *)(uintptr_t)SHARED_ADDRESS,4096);
    context=allocate(PF_EFI_CONTEXT_BYTES,0);command=allocate(4096,0);io_buffer=allocate(65536,0);pfs_scratch=allocate(PF_PFS_BLOCK_SIZE,0);
    if(!context || !command || !io_buffer || !pfs_scratch || !select_disk()){message("Permafrost disk not found.\r\n");return (Status)-1;}
    clear(context,PF_EFI_CONTEXT_BYTES);clear(command,4096);
    uint32_t *starts=boot_starts,*lengths=boot_lengths;
    size_t bytes=0;uintptr_t entry=0;
    uint8_t *kernel=load_file("Kernel/Permafrost.kernel",&bytes);
    if(kernel){entry=load_kernel(kernel,bytes);services->free_pages((uintptr_t)kernel,(bytes+4095)/4096);}
    if(!entry){message("Permafrost kernel could not be loaded.\r\n");return (Status)-1;}
    context[0]=0x33454657;context[1]=PF_EFI_CONTEXT_VERSION;context[2]=PF_EFI_CONTEXT_BYTES;
    context[3]=(uintptr_t)table;context[4]=(uintptr_t)services;context[9]=disk->media->id;
    context[10]=payload_sectors;context[11]=starts[0];context[12]=lengths[0];context[13]=starts[1];
    context[0x12]=(uint32_t)payload_lba;context[0x21]=(uint32_t)(disk->media->last+1);
    context[0x45]=legacy_bridge();context[0x46]=(uintptr_t)command;
    if(!context[0x45]){message("EFI bridge reservation failed.\r\n");return (Status)-1;}
    context[PF_EFI_BRIDGE_EXTENSION/4]=PF_EFI_BRIDGE_MAGIC;context[PF_EFI_BRIDGE_EXTENSION/4+1]=1;
    *(uint64_t *)((uint8_t *)context+PF_EFI_BRIDGE_POINTER)=(uintptr_t)bridge;
    context[10]=(uint32_t)(disk->media->last+1);
    disk_devices();
    /* The legacy WFE bridge remains live; the native kernel explicitly
     * supports retaining firmware services instead of retiring that bridge. */
    context[0x8c]=0x1001;
    context[0x8d]=(uintptr_t)io_buffer;context[0x8e]=65536;
    ((uint64_t *)(context+0x194))[0]=(uintptr_t)table;((uint64_t *)(context+0x194))[1]=(uintptr_t)services;
    ((uint64_t *)(context+0x194))[2]=(uintptr_t)table->output;((uint64_t *)(context+0x194))[3]=(uintptr_t)table->input;
    ((uint64_t *)(context+0x194))[4]=(uintptr_t)disk;((uint64_t *)(context+0x194))[5]=(uintptr_t)services->stall;
    video_context();
    if(selected_video){
        uint32_t preferred[25];clear(preferred,sizeof(preferred));
        preferred[8]=1280;preferred[9]=800;preferred[10]=32;preferred[11]=1;
        (void)video_change_one(selected_video,preferred);
    }
    pointer_devices();usb_tablet_devices();
#if defined(__arm__) || defined(__aarch64__)
    usb_keyboard_devices();
#endif
    context[PF_EFI_INPUT_CAPABILITIES/4]|=(usb_tablet_available || usb_keyboard_available)?PF_EFI_INPUT_USB_OWNED:0;
#if defined(__aarch64__)
    void *kernel_stack=allocate(0x200000,0);
    if(!kernel_stack){message("Kernel stack reservation failed.\r\n");return (Status)-1;}
    kernel_stack_top=(uintptr_t)kernel_stack+0x200000;
#endif
    if(!prefetch_disk_context() || !heap_context()){message("Permafrost heap reservation failed.\r\n");return (Status)-1;}
    *(volatile uint32_t *)(uintptr_t)(KERNEL_ADDRESS+16)=(uintptr_t)context;
    message("Starting Permafrost.\r\n");
    enter(entry);return 0;
}
