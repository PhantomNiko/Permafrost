/* Pooka's Free Software License. Recovered animated cube application. */
#include <permafrost/terror_ui.h>
#include "render.h"
void __bzero(void *destination,unsigned long count) {
    volatile uint8_t *out=destination;while(count--)*out++=0;
}
int main(void) {
    TerrorUIWindowSpec spec=terror_ui_window_spec("3D Demo",gCubeWindowWidth,gCubeWindowHeight);
    TerrorUIWindow window={0};spec.flags|=1;
    if(!terror_ui_window_open(&window,&spec))return 0;
    if(!window.pixels){terror_ui_window_close(&window);return 0;}
    gCubeWindowWidth=window.width;gCubeWindowHeight=window.height;
    WmBaremetalGpuInfo gpu={0};uint32_t useGpu=0;
    if(wm_program_gpu_info(&gpu)&&(gpu.flags&1)&&(gpu.caps&1))useGpu=(gpu.caps>>2)&1;
    for(uint32_t frame=0;frame<720;frame++) {
        WmBaremetalProgramAppWindowInfo info={0};
        if(!terror_ui_window_query(&window,&info)||terror_ui_window_info_requests_close(&info)||!terror_ui_window_sync_buffer(&window,&info))break;
        gCubeWindowWidth=window.width;gCubeWindowHeight=window.height;
        CubeVertex vertices[8];CubeFace faces[12];cube_project(frame,vertices);cube_faces(vertices,faces);
        if(useGpu) {
            WmBaremetalGpuCommand commands[13]={0};
            wm_baremetal_gpu_surface_rgba8888(&commands[0].target,window.pixels,window.width,window.height,window.width*4);
            commands[0].command=WM_BAREMETAL_GPU_COMMAND_CLEAR;commands[0].rgba=0x10131aff;
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
        terror_ui_window_present(&window,"3D Demo",window.pixels,window.width,window.height,window.width*4,0);
        uint32_t key;while((key=wm_program_poll_key_ax())!=0) {
            if((key&0xff00)==0x100||(key&0xdf)==0x51||(key&0xff)==0x1b)goto close;
        }
        wm_program_wait_microseconds(33000);
    }
close:
    terror_ui_window_close(&window);return 1;
}
