/* Pooka's Free Software License. Recovered animated cube application. */
#include <permafrost/terror_ui.h>
#include "render.h"
void __bzero(void *destination,unsigned long count) {
    volatile uint8_t *out=destination;while(count--)*out++=0;
}
static int decimal(const char *text,uint32_t *out){
    uint32_t value=0;if(!text||*text<'0'||*text>'9')return 0;
    do {unsigned digit=(unsigned)(*text-'0');if(value>(UINT32_MAX-digit)/10)return 0;value=value*10+digit;++text;}while(*text>='0'&&*text<='9');
    if(*text)return 0;*out=value;return 1;
}
static const char *after(const char *text,const char *prefix){
    if(!text)return 0;while(*prefix){if(*text++!=*prefix++)return 0;}return text;
}
static uint32_t frame_limit(int argc,char **argv){
    uint32_t limit=720,value;for(int i=1;argv&&i<argc;i++){
        const char *tail=after(argv[i],"timeout_frames=");
        if(tail&&decimal(tail,&value)){limit=value?value:UINT32_MAX;continue;}
        tail=after(argv[i],"timeout_ms=");if(tail&&decimal(tail,&value)){limit=value?(uint32_t)(((uint64_t)value*1000+32999)/33000):UINT32_MAX;continue;}
        tail=after(argv[i],"timeout=");if(tail&&decimal(tail,&value)){uint64_t frames=((uint64_t)value*1000000+32999)/33000;limit=!value||frames>UINT32_MAX?UINT32_MAX:(uint32_t)frames;}
    }return limit;
}
int main(int argc,char **argv) {
    uint32_t limit=frame_limit(argc,argv);
    TerrorUIWindowSpec spec=terror_ui_window_spec("3D Demo",gCubeWindowWidth,gCubeWindowHeight);
    TerrorUIWindow window={0};spec.clearRgb=terror_ui_colour(0);spec.flags|=1;
    if(!terror_ui_window_open(&window,&spec))return 0;
    if(!window.pixels){terror_ui_window_close(&window);return 0;}
    gCubeWindowWidth=window.width;gCubeWindowHeight=window.height;
    WmBaremetalGpuInfo gpu={0};uint32_t useGpu=0;
    if(wm_program_gpu_info(&gpu)&&(gpu.flags&1)&&(gpu.caps&1))useGpu=(gpu.caps>>2)&1;
    for(uint32_t frame=0;frame<limit;frame++) {
        terror_ui_window_begin_frame(&window);
        WmBaremetalProgramAppWindowInfo info={0};
        if(!terror_ui_window_query(&window,&info)||terror_ui_window_info_requests_close(&info)||!terror_ui_window_sync_buffer(&window,&info))break;
        gCubeWindowWidth=window.width;gCubeWindowHeight=window.height;
        CubeVertex vertices[8];CubeFace faces[12];cube_project(frame,vertices);cube_faces(vertices,faces);
        if(useGpu) {
            WmBaremetalGpuCommand commands[13]={0};
            wm_baremetal_gpu_surface_rgba8888(&commands[0].target,window.pixels,window.width,window.height,window.width*4);
            commands[0].command=WM_BAREMETAL_GPU_COMMAND_CLEAR;commands[0].rgba=(terror_ui_colour(0)<<8)|255;
            for(unsigned i=0;i<12;i++) {
                commands[i+1].command=WM_BAREMETAL_GPU_COMMAND_FILL_TRIANGLE_2D;
                commands[i+1].target=commands[0].target;commands[i+1].rgba=faces[i].rgba;
                for(unsigned j=0;j<3;j++) {
                    CubeVertex point=vertices[faces[i].indices[j]];
                    commands[i+1].vertices[j]=(WmBaremetalGpuVertex2D){point.x,point.y,point.depth,faces[i].rgba};
                }
            }
            if(!wm_program_gpu_submit(commands,13)){useGpu=0;drawCubeCpu(window.pixels,vertices,faces);}
        }else drawCubeCpu(window.pixels,vertices,faces);
        cube_edges(window.pixels,vertices);
        terror_ui_window_present(&window,"3D Demo",window.pixels,window.width,window.height,window.width*4,terror_ui_colour(0));
        uint32_t key;while((key=wm_program_poll_key_ax())!=0) {
            if((key&0xff00)==0x100||(key&0xdf)==0x51||(key&0xff)==0x1b)goto close;
        }
        wm_program_wait_microseconds(33000);
    }
close:
    terror_ui_window_close(&window);return 1;
}
