/* Pooka's Free Software License. Native four-byte comparison helper. */
int recovered_2002120(const unsigned char *left,const unsigned char *right){
 for(unsigned i=0;i<4;i++)if(left[i]!=right[i])return (unsigned)left[i]-(unsigned)right[i];
 return 0;
}
