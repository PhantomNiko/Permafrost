/* Pooka's Free Software License. Guest C stdio integration example. */
#include <stdio.h>
#include <string.h>
int main(void){
 const char *path="/root/sdk-runtime-check.txt";
 const char payload[]="permafrost source runtime\n";
 char data[64]={0};
 FILE *file=fopen(path,"w");
 if(!file){printf("SDK FILE WRITE OPEN FAILED\n");return 1;}
 size_t written=fwrite(payload,1,sizeof(payload)-1,file);
 int closed=fclose(file);
 if(written!=sizeof(payload)-1||closed){printf("SDK FILE WRITE FAILED\n");return 2;}
 file=fopen(path,"r");
 if(!file){printf("SDK FILE READ OPEN FAILED\n");return 3;}
 size_t count=fread(data,1,sizeof(data),file);
 long position=ftell(file);
 int seek=fseek(file,0,SEEK_SET);
 char line[64]={0};char *readline=fgets(line,sizeof(line),file);
 closed=fclose(file);
 if(count!=sizeof(payload)-1||position!=(long)count||seek||!readline||closed||memcmp(data,payload,count)||strcmp(line,payload)){
  printf("SDK FILE ROUNDTRIP FAILED\n");return 4;
 }
 printf("SOURCE SDK FILE ROUNDTRIP %u\n",(unsigned)count);
 return 0;
}
