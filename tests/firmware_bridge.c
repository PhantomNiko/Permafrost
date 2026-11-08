/* Pooka's Free Software License. WFE5 kernel/firmware command ABI fixture. */
#include <assert.h>
#include "../recovery/in-progress/firmware/loader.c"
static uintptr_t waited;
static uint32_t selected;
static uintptr_t relative_address=0x12345000,absolute_address=0x23456000;
static uint32_t context_words[PF_EFI_CONTEXT_BYTES/4];
static VideoInfo modes[2]={{.width=800,.height=600,.format=1,.stride=800},
                           {.width=1024,.height=768,.format=1,.stride=1024}};
static VideoMode mode={.maximum=2,.info=&modes[0],.framebuffer=UINT64_C(0x12345678000),.bytes=800*600*4};
static Video video;
static void *video_handles[1]={&video};
static RelativeState relative_packet;
static AbsoluteState absolute_packet;
static unsigned relative_ready,absolute_ready;
static unsigned deferred_relative,deferred_absolute,checked;
static unsigned key_ready,deferred_key;
static Key key_packet;
static Status EFI_ABI mock_key_read(Input *input,Key *out){
    (void)input;if(!key_ready)return 1;key_ready=0;*out=key_packet;return 0;
}
static Status EFI_ABI mock_check_event(void *event){
    checked++;
    if(event==(void *)(uintptr_t)0x43&&deferred_key){deferred_key=0;key_ready=1;return 0;}
    if(event==(void *)(uintptr_t)0x41&&deferred_relative){deferred_relative=0;relative_ready=1;return 0;}
    if(event==(void *)(uintptr_t)0x42&&deferred_absolute){deferred_absolute=0;absolute_ready=1;return 0;}
    return 1;
}
static Status EFI_ABI mock_relative_read(RelativePointer *device,RelativeState *out){
    (void)device;if(!relative_ready)return 1;
    relative_ready=0;*out=relative_packet;return 0;
}
static Status EFI_ABI mock_absolute_read(AbsolutePointer *device,AbsoluteState *out){
    (void)device;if(!absolute_ready)return 1;
    absolute_ready=0;*out=absolute_packet;return 0;
}
static Status EFI_ABI mock_stall(uintptr_t duration){waited=duration;return 0;}
static Status EFI_ABI mock_free(void *pool){(void)pool;return 0;}
static Status EFI_ABI mock_query(Video *v,uint32_t index,uintptr_t *size,VideoInfo **out){
    assert(v==&video&&index<2);*size=sizeof(VideoInfo);*out=&modes[index];return 0;
}
static Status EFI_ABI mock_set(Video *v,uint32_t index){
    assert(v==&video&&index<2);selected=index;mode.current=index;mode.info=&modes[index];mode.bytes=modes[index].width*modes[index].height*4;return 0;
}
static Status EFI_ABI mock_protocol(void *handle,Guid *guid,void **out){
    if(guid==&relative_guid){assert(handle==(void *)(uintptr_t)0x1000);*out=(void *)relative_address;return 0;}
    if(guid==&absolute_guid){assert(handle==(void *)(uintptr_t)0x2000);*out=(void *)absolute_address;return 0;}
    assert(handle==&video&&guid==&video_guid);*out=&video;return 0;
}
static Status EFI_ABI mock_handles(uint32_t kind,Guid *guid,void *key,uintptr_t *count,void ***out){
    static void *relative_handles[]={(void *)(uintptr_t)0x1000};
    static void *absolute_handles[]={(void *)(uintptr_t)0x2000};
    if(guid==&relative_guid||guid==&absolute_guid){assert(kind==2&&!key);*count=1;*out=guid==&relative_guid?relative_handles:absolute_handles;return 0;}
    assert(kind==2&&guid==&video_guid&&!key);*count=1;*out=video_handles;return 0;
}
int main(void){
    Services boot={.stall=mock_stall,.free_pool=mock_free,.protocol=mock_protocol,.handles=mock_handles,.check_event=mock_check_event};
    System system={0};services=&boot;system_table=&system;context=context_words;
    pointer_devices();
    assert(context[0x4d6]==1&&context[0x4d7]==1);
    assert(context[0x4d8]==0x12345000&&context[0x4e0]==0x23456000);
    assert(((uint64_t *)(context+0x4e8))[0]==relative_address);
    assert(((uint64_t *)(context+0x4f8))[0]==absolute_address);
    for(unsigned i=1;i<8;i++)assert(!context[0x4d8+i]&&!context[0x4e0+i]);
    pointer_devices();assert(relative_count==1&&absolute_count==1);
#if UINTPTR_MAX > UINT32_MAX
    relative_address=UINT64_C(0x12345678000);absolute_address=UINT64_C(0x23456789000);
    pointer_devices();assert(context[0x4d6]==1&&context[0x4d7]==1);
    assert(!context[0x4d8]&&!context[0x4e0]);
    assert((uintptr_t)relative_devices[0]==relative_address);
    assert((uintptr_t)absolute_devices[0]==absolute_address);
    assert(((uint64_t *)(context+0x4e8))[0]==relative_address);
    assert(((uint64_t *)(context+0x4f8))[0]==absolute_address);
#endif
    RelativePointer relative={.read=mock_relative_read};
    AbsoluteMode absolute_mode={.min_x=100,.min_y=200,.max_x=1100,.max_y=2200};
    AbsolutePointer absolute={.read=mock_absolute_read,.mode=&absolute_mode};
    relative_devices[0]=&relative;absolute_devices[0]=&absolute;
    relative_count=absolute_count=1;
    uint32_t pointer[8];
    relative_packet=(RelativeState){.x=5,.y=-3,.left=1};relative_ready=1;
    assert(pointer_read(pointer)==1);
    assert(pointer[0]==2&&pointer[1]==1&&pointer[2]==0&&pointer[3]==0);
    assert((int32_t)pointer[4]==5&&(int32_t)pointer[5]==-3);
    relative_packet=(RelativeState){0};relative_ready=1;
    absolute_packet=(AbsoluteState){.x=600,.y=1200,.buttons=2};absolute_ready=1;
    assert(pointer_read(pointer)==1);
    assert(pointer[0]==1&&pointer[1]==2&&pointer[2]==500&&pointer[3]==1000);
    assert(pointer[4]==0&&pointer[5]==0&&pointer[6]==1000&&pointer[7]==2000);
    relative_packet=(RelativeState){.x=7,.y=9,.left=1};relative_ready=absolute_ready=1;
    assert(pointer_read(pointer)==1);
    assert(pointer[0]==2&&pointer[1]==3&&pointer[2]==0&&pointer[3]==0);
    assert(pointer[4]==7&&pointer[5]==9);
    relative_packet=(RelativeState){0};relative_ready=1;
    assert(pointer_read(pointer)==1&&pointer[0]==2&&pointer[1]==0);
    assert(pointer_read(pointer)==0);
    relative.event=(void *)(uintptr_t)0x41;
    relative_packet=(RelativeState){.x=3,.y=4};deferred_relative=1;
    assert(pointer_read(pointer)==1&&checked==1);
    assert(pointer[0]==2&&pointer[4]==3&&pointer[5]==4);
    relative.event=0;absolute.event=(void *)(uintptr_t)0x42;
    deferred_absolute=1;
    assert(pointer_read(pointer)==1&&checked==2);
    assert(pointer[0]==1&&pointer[2]==500&&pointer[3]==1000);
    Input input={.read=mock_key_read,.event=(void *)(uintptr_t)0x43};
    system.input=&input;key_packet=(Key){.character='a'};deferred_key=1;
    assert(key_code()=='a'&&checked==3);
    assert(key_code()==0&&checked==4);
    key_packet=(Key){.scan=1};key_ready=1;assert(key_code()==0x4800);
    input.event=0;assert(key_code()==0&&checked==4);
    video.query=mock_query;video.set=mock_set;video.mode=&mode;
    uint32_t request[32]={4,0};request[6]=7;request[7]=33000;
    assert(dispatch(request)==1&&request[1]==1&&waited==33000);
    request[0]=8;request[7]=17;request[8]=1024;request[9]=768;request[11]=0x55aa;
    assert(dispatch(request)==1&&request[1]==1&&selected==1);
    assert(request[11]==0x55aa&&request[12]==0x45678000&&request[13]==0x123);
    assert(request[14]==1024*768*4&&request[15]==4096&&request[16]==1024&&request[17]==768&&request[18]==32);
    assert(request[19]==0xff0000&&request[20]==0xff00&&request[21]==0xff);
    assert(request[22]==16&&request[23]==8&&request[24]==0);
    return 0;
}
