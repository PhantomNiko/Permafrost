/* Replay controller initialization and PS/2 packets without hardware access.
 * Pooka's Free Software License. */
#include <assert.h>
#include <stdint.h>
#include <string.h>
static unsigned bytes[256], statuses[256], head, tail, command, configuration;
static void feed(unsigned status,unsigned value){assert(tail<256);statuses[tail]=status;bytes[tail++]=value;}
static unsigned read_port(unsigned port){
 if(port==0x64)return head<tail?statuses[head]:0;
 assert(port==0x60&&head<tail);return bytes[head++];
}
static void write_port(unsigned port,unsigned value){
 if(port==0x64){command=value;if(value==0x20)feed(1,0x43);return;}
 assert(port==0x60);
 if(command==0x60)configuration=value;
 else {assert(command==0xd4&&(value==0xf6||value==0xf4));feed(0x21,0xfa);}
}
#define PF_PS2_INPUT read_port
#define PF_PS2_OUTPUT write_port
#include "../recovery/in-progress/firmware/bios/ps2.h"
int main(void){
 assert(pf_bios_ps2_pointer_init());assert(configuration==0x41);
 struct {uint32_t before,out[8],after;} result={0x12345678,{0},0x87654321};
 assert(!pf_bios_ps2_pointer_read(0));assert(!pf_bios_ps2_pointer_read(result.out));
 feed(0x21,0);feed(0x21,8);feed(0x21,1);
 assert(!pf_bios_ps2_pointer_read(result.out));
 feed(0x21,2);assert(pf_bios_ps2_pointer_read(result.out));
 assert(result.out[0]==2&&result.out[1]==0&&result.out[4]==1&&result.out[5]==(uint32_t)-2);
 feed(0x21,0x3b);feed(0x21,255);feed(0x21,254);
 assert(pf_bios_ps2_pointer_read(result.out));assert(result.out[1]==3);
 assert(result.out[4]==(uint32_t)-1&&result.out[5]==2);
 feed(0x21,0xc9);feed(0x21,99);feed(0x21,99);
 assert(pf_bios_ps2_pointer_read(result.out));assert(result.out[1]==1&&!result.out[4]&&!result.out[5]);
 feed(1,0x1e);unsigned saved=head;
 assert(!pf_bios_ps2_pointer_read(result.out));assert(head==saved);assert(read_port(0x60)==0x1e);
 feed(0x21,0x38);feed(0x21,255);feed(0x21,254);
 assert(pf_bios_ps2_pointer_absolute(result.out,100,50));
 assert(result.out[0]==1&&result.out[2]==49&&result.out[3]==27);
 assert(!result.out[4]&&!result.out[5]&&result.out[6]==99&&result.out[7]==49);
 assert(result.before==0x12345678&&result.after==0x87654321);
 return 0;
}
