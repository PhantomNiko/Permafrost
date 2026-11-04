/* Public WMAP v4 allocation, file and image service integration probe.
 * Pooka's Free Software License. */
#include <permafrost.h>
_Static_assert(sizeof(struct pf_native_api)==124,"WMAP wire layout");
_Static_assert(sizeof(struct pf_blob)==12,"file wire layout");
_Static_assert(sizeof(struct pf_image)==20,"image wire layout");
_Static_assert(sizeof(struct pf_native_value)==(__SIZEOF_POINTER__==8?40:24),"native callback layout");
#define CHECK(value) do {if(!(value)){pf_log("PF-SERVICE-FAIL %u",__LINE__);return 0;}}while(0)
static const uint8_t png[] = {
    137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,
    0,0,0,2,0,0,0,1,8,6,0,0,0,244,34,127,
    138,0,0,0,20,73,68,65,84,120,1,1,9,0,246,255,
    0,255,0,0,255,0,255,0,255,16,248,3,253,217,100,188,
    83,0,0,0,0,73,69,78,68,174,66,96,130,
};
int main(void) {
    const pf_services *api=pf_api();
    CHECK(api->magic==PF_API_MAGIC && api->version==4 && api->size==sizeof(struct pf_native_api));
    uint8_t *memory=api->allocate(32);
    CHECK(memory);
    for(unsigned i=0;i<32;++i)memory[i]=(uint8_t)(i*7);
    memory=api->reallocate(memory,64);
    CHECK(memory);
    for(unsigned i=0;i<32;++i)CHECK(memory[i]==(uint8_t)(i*7));
    api->deallocate(memory);
    static const char text[]="Permafrost";
    CHECK(pf_write_file("/api-service.tmp",text,sizeof(text)-1));
    struct pf_blob file={0};
    CHECK(pf_read_file("/api-service.tmp",&file));
    CHECK(file.size==sizeof(text)-1);
    for(unsigned i=0;i<file.size;++i)CHECK(((const char *)file.data)[i]==text[i]);
    api->deallocate(file.data);
    CHECK(pf_delete_file("/api-service.tmp"));
    CHECK(!pf_read_file("/api-service.tmp",&file));
    struct pf_image image={0};
    CHECK(api->decode_image(png,sizeof(png),&image));
    CHECK(image.data && image.width==2 && image.height==1 && image.size==8 && image.stride_bytes==8);
    const uint8_t *pixels=image.data;
    CHECK(pixels[0]==255 && pixels[1]==0 && pixels[2]==0 && pixels[3]==255);
    CHECK(pixels[4]==0 && pixels[5]==255 && pixels[6]==0 && pixels[7]==255);
    api->deallocate(image.data);
    CHECK(!api->decode_image(0,0,&image));
    pf_log("PF-SERVICES-PASS");
    return 1;
}
