/* Pooka's Free Software License. Recovered ECX/EDX RGBA copy contract. */
unsigned int recovered_20262d0(const void *pixels,unsigned int width,unsigned int height,unsigned int size,unsigned int *out)
{
 if(!out)return 0;
 recovered_2001e00(out,0,24);
 if(!pixels || width>=0x40000000U || (unsigned long long)width*4U*height!=size)return 0;
 void *copy=recovered_2001650(size);
 if(!copy)return 0;
 recovered_2001b70(copy,pixels,size);
 out[0]=(unsigned int)(uintptr_t)copy;out[1]=0;out[2]=size;out[3]=width;out[4]=height;out[5]=width*4U;
 return 1;
}
