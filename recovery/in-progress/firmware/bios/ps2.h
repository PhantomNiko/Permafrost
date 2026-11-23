/* Polled PS/2 pointer packets for the retained BIOS bridge.
 * Pooka's Free Software License. */
#pragma once
#include <stdint.h>
#ifndef PF_PS2_INPUT
#define PF_PS2_INPUT input
#define PF_PS2_OUTPUT port
#endif
static unsigned pf_ps2_available, pf_ps2_used, pf_ps2_buttons;
static unsigned pf_ps2_width,pf_ps2_height;
static int pf_ps2_x,pf_ps2_y;
static uint8_t pf_ps2_packet[3];
static int pf_ps2_ready(void){
 unsigned tries=100000;
 while(tries--)if(!(PF_PS2_INPUT(0x64)&2))return 1;
 return 0;
}
static int pf_ps2_reply(unsigned *value){
 unsigned tries=100000;
 while(tries--)if(PF_PS2_INPUT(0x64)&1){*value=PF_PS2_INPUT(0x60);return 1;}
 return 0;
}
static int pf_ps2_command(unsigned command){
 unsigned reply;
 if(!pf_ps2_ready())return 0;PF_PS2_OUTPUT(0x64,0xd4);
 if(!pf_ps2_ready())return 0;PF_PS2_OUTPUT(0x60,command);
 return pf_ps2_reply(&reply)&&reply==0xfa;
}
static int pf_bios_ps2_pointer_init(void){
 unsigned configuration;
 pf_ps2_available=pf_ps2_used=pf_ps2_buttons=0;
 pf_ps2_width=pf_ps2_height=0;
 if(!pf_ps2_ready())return 0;PF_PS2_OUTPUT(0x64,0xa8);
 if(!pf_ps2_ready())return 0;PF_PS2_OUTPUT(0x64,0x20);
 if(!pf_ps2_reply(&configuration)||!pf_ps2_ready())return 0;
 PF_PS2_OUTPUT(0x64,0x60);
 if(!pf_ps2_ready())return 0;
 /* Poll auxiliary bytes without diverting the BIOS keyboard interrupt. */
 PF_PS2_OUTPUT(0x60,configuration&~0x22U);
 if(!pf_ps2_command(0xf6)||!pf_ps2_command(0xf4))return 0;
 pf_ps2_available=1;return 1;
}
static unsigned pf_bios_ps2_pointer_read(uint32_t *out){
 if(!out)return 0;
 for(unsigned i=0;i<8;i++)out[i]=0;
 if(!pf_ps2_available)return 0;
 unsigned changed=0;
 for(unsigned count=0;count<96;count++){
  unsigned status=PF_PS2_INPUT(0x64);
  if((status&0x21)!=0x21)break;
  unsigned value=PF_PS2_INPUT(0x60);
  if(!pf_ps2_used && !(value&8))continue;
  pf_ps2_packet[pf_ps2_used++]=(uint8_t)value;
  if(pf_ps2_used!=3)continue;
  pf_ps2_used=0;unsigned flags=pf_ps2_packet[0];
  pf_ps2_buttons=flags&3;changed=1;
  if(!(flags&0xc0)){
   int dx=(int)pf_ps2_packet[1]-((flags&0x10)?256:0);
   int dy=(int)pf_ps2_packet[2]-((flags&0x20)?256:0);
   out[4]+=(uint32_t)dx;out[5]-=(uint32_t)dy;
  }
 }
 if(changed){out[0]=2;out[1]=pf_ps2_buttons;}
 return changed;
}
static unsigned pf_bios_ps2_pointer_absolute(uint32_t *out,unsigned width,unsigned height){
 if(!out||!width||!height||width>8192||height>8192)return 0;
 if(width!=pf_ps2_width||height!=pf_ps2_height){
  pf_ps2_width=width;pf_ps2_height=height;pf_ps2_x=(int)width/2;pf_ps2_y=(int)height/2;
 }
 if(!pf_bios_ps2_pointer_read(out))return 0;
 pf_ps2_x+=(int32_t)out[4];pf_ps2_y+=(int32_t)out[5];
 if(pf_ps2_x<0)pf_ps2_x=0;if(pf_ps2_y<0)pf_ps2_y=0;
 if((unsigned)pf_ps2_x>=width)pf_ps2_x=(int)width-1;
 if((unsigned)pf_ps2_y>=height)pf_ps2_y=(int)height-1;
 out[0]=1;out[2]=(unsigned)pf_ps2_x;out[3]=(unsigned)pf_ps2_y;
 out[4]=out[5]=0;out[6]=width-1;out[7]=height-1;return 1;
}
