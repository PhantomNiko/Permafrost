/* Permafrost native formatted output, recovered from the kernel formatter.
 * Width and precision digits are skipped; floating output has six digits.
 * Pooka's Free Software License. */
#include <stdint.h>
#include <stddef.h>

struct pf_output { char *data; size_t capacity, stored; int count; };
static void emit(struct pf_output *out,char value) {
    if(out->capacity && out->stored+1<out->capacity)out->data[out->stored++]=value;
    out->count++;
}
static void text(struct pf_output *out,const char *value) {
    if(!value)value="(null)";
    while(*value)emit(out,*value++);
}
static void number(struct pf_output *out,uint32_t value,unsigned base,int upper) {
    char digits[32];unsigned count=0;
    do {unsigned digit=value%base;digits[count++]=(char)(digit<10?'0'+digit:(upper?'A':'a')+digit-10);value/=base;}while(value);
    while(count)emit(out,digits[--count]);
}
__attribute__((visibility("hidden")))
int pf_native_vsnprintf(char *buffer,size_t capacity,const char *format,void *arguments) {
    struct pf_output out={buffer,capacity,0,0};
    __builtin_va_list args;
#if defined(__x86_64__)
    __builtin_va_copy(args,*(__builtin_va_list *)arguments);
#else
    args=(__builtin_va_list)arguments;
#endif
    while(*format) {
        if(*format++!='%'){emit(&out,format[-1]);continue;}
        if(*format=='%'){emit(&out,*format++);continue;}
        while(*format>='0' && *format<='9')format++;
        if(*format=='.'){format++;while(*format>='0' && *format<='9')format++;}
        while(*format=='h'||*format=='l'||*format=='t'||*format=='z')format++;
        char conversion=*format;
        if(conversion)format++;
        switch(conversion) {
        case 's':text(&out,__builtin_va_arg(args,const char *));break;
        case 'c':emit(&out,(char)__builtin_va_arg(args,int));break;
        case 'd':case 'i':case 'I': {
            int32_t value=__builtin_va_arg(args,int);
            if(value<0){emit(&out,'-');number(&out,0U-(uint32_t)value,10,0);}
            else number(&out,(uint32_t)value,10,0);
            break;
        }
        case 'u':number(&out,__builtin_va_arg(args,unsigned),10,0);break;
        case 'x':case 'X':number(&out,__builtin_va_arg(args,unsigned),16,conversion=='X');break;
        case 'p':text(&out,"0x");number(&out,(uint32_t)(uintptr_t)__builtin_va_arg(args,void *),16,0);break;
        case 'f': {
            double value=__builtin_va_arg(args,double);
            if(value<0){emit(&out,'-');value=-value;}
            int32_t whole=(int32_t)value;
            number(&out,(uint32_t)whole,10,0);emit(&out,'.');
            double fraction=value-(double)whole;
            for(unsigned digit=0;digit<6;digit++) {
                fraction*=10.0;int32_t next=(int32_t)fraction;
                emit(&out,(char)('0'+next));fraction-=(double)next;
            }
            break;
        }
        default:emit(&out,'?');break;
        }
    }
    if(capacity)buffer[out.stored]=0;
    __builtin_va_end(args);
    return out.count;
}
