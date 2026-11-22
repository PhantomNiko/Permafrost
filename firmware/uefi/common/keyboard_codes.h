/* Permafrost keyboard wire values; Pooka's Free Software License. */
#pragma once
static uint32_t keyboard_usb_modifiers(unsigned bits){return ((bits&0x22)?0x10000U:0)|((bits&0x11)?0x20000U:0)|((bits&0x88)?0x40000U:0);}
static unsigned keyboard_letter_scan(unsigned letter){static const uint8_t scans[]={0x1e,0x30,0x2e,0x20,0x12,0x21,0x22,0x23,0x17,0x24,0x25,0x26,0x32,0x31,0x18,0x19,0x10,0x13,0x1f,0x14,0x16,0x2f,0x11,0x2d,0x15,0x2c};return letter<26?scans[letter]:0;}
static unsigned keyboard_usb_scan(unsigned key){
 if(key>=4&&key<=29)return keyboard_letter_scan(key-4);
 if(key>=30&&key<=39)return key-30+2;
 if(key>=40&&key<=56){static const uint8_t scans[]={0x1c,1,0xe,0xf,0x39,0xc,0xd,0x1a,0x1b,0x2b,0x56,0x27,0x28,0x29,0x33,0x34,0x35};return scans[key-40];}
 if(key>=58&&key<=67)return key-58+0x3b;
 if(key==68)return 0x57;if(key==69)return 0x58;
 switch(key){case 73:return 0x52;case 74:return 0x47;case 75:return 0x49;case 76:return 0x53;case 77:return 0x4f;case 78:return 0x51;case 79:return 0x4d;case 80:return 0x4b;case 81:return 0x50;case 82:return 0x48;case 84:return 0x35;case 85:return 0x37;case 86:return 0x4a;case 87:return 0x4e;case 88:return 0x1c;}
 if(key>=89&&key<=99){static const uint8_t scans[]={0x4f,0x50,0x51,0x4b,0x4c,0x4d,0x47,0x48,0x49,0x52,0x53};return scans[key-89];}return 0;
}
static unsigned keyboard_character_scan(unsigned c){
 if(c=='\r'||c=='\n')return 0x1c;if(c==27)return 1;if(c==8||c==127)return 0xe;if(c==9)return 0xf;
 if(c>='A'&&c<='Z')return keyboard_letter_scan(c-'A');if(c>='a'&&c<='z')return keyboard_letter_scan(c-'a');if(c>=1&&c<=26)return keyboard_letter_scan(c-1);
 static const char plain[]="1234567890-=[]\\;'`,./ ",shift[]="!@#$%^&*()_+{}|:\"~<>? ";static const uint8_t scans[]={2,3,4,5,6,7,8,9,10,11,0xc,0xd,0x1a,0x1b,0x2b,0x27,0x28,0x29,0x33,0x34,0x35,0x39};
 for(unsigned i=0;i<sizeof(scans);i++)if(c==(unsigned char)plain[i]||c==(unsigned char)shift[i])return scans[i];return 0;
}
