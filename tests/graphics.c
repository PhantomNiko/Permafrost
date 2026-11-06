/* WMAP v13 framebuffer and window lifecycle integration.
 * Pooka's Free Software License. */
#include <permafrost.h>
#define CHECK(value) do{if(!(value)){pf_log("PF-GRAPHICS-FAIL %u",__LINE__);return 0;}}while(0)
static int equal(const char *a,const char *b){while(*a && *a==*b){a++;b++;}return *a==*b;}
int main(void){
    const pf_services *api=pf_api();
    struct pf_framebuffer_info frame={0};
    CHECK(api->framebuffer_info(&frame));
    CHECK(frame.bits_per_pixel==32);
    CHECK(frame.width && frame.height && frame.stride_bytes>=frame.width*4);
    CHECK(frame.address_low || frame.address_high);
    CHECK(api->video_vbe());
    CHECK(api->framebuffer_info(&frame));
    CHECK(api->hardware_threads()>=1);
    uint32_t id=api->window_create("SDK Window",2,1);
    CHECK(id);
    struct pf_window_info info={0};
    CHECK(api->window_query(id,&info));
    CHECK(info.id==id && info.width==2 && info.height==1);
    CHECK(equal(info.title,"SDK Window"));
    static const uint32_t pixels[]={0xffff0000,0xff00ff00};
    CHECK(api->window_update(id,"SDK Updated",pixels,2,1,8,0x112233));
    CHECK(api->window_query(id,&info));
    CHECK(api->window_configure(id,12,34,0,0));
    CHECK(api->window_query(id,&info));
    if(info.size!=8 || !info.pixels || info.x!=12 || info.y!=34)
        pf_log("PF-WINDOW-INFO size=%u address=%x x=%u y=%u",info.size,(uint32_t)info.pixels,(uint32_t)info.x,(uint32_t)info.y);
    CHECK(info.size==8 && info.pixels && info.x==12 && info.y==34);
    CHECK(equal(info.title,"SDK Updated"));
    CHECK(((const uint32_t *)pf_window_pixels(&info))[0]==pixels[0]);
    CHECK(((const uint32_t *)pf_window_pixels(&info))[1]==pixels[1]);
    CHECK(api->window_set_menus(id,"File|Open|Close","View|Zoom","Help|About"));
    CHECK(api->window_query(id,&info));
    CHECK(equal(info.menus[0],"File|Open|Close"));
    CHECK(api->window_menu_command(id,0,1));
    CHECK(api->window_query(id,&info));
    CHECK(info.menu_sequence && info.menu_group==0 && info.menu_item==1);
    CHECK(api->window_destroy(id));
    CHECK(!api->window_query(id,&info));
    CHECK(api->video_vga());
    pf_log("PF-GRAPHICS-PASS");return 1;
}
