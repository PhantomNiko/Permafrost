/* Test-only input queue for the OpenBIOS client interface.
 * Pooka's Free Software License. */
#include <permafrost.h>
#ifndef PF_KEYS
#define PF_KEYS "hello\r"
#endif
struct client_request {const char *service;uint32_t inputs,outputs,cells[12];};
typedef int (*client_entry)(struct client_request *);
static client_entry previous;
static const char keys[]=PF_KEYS;
static unsigned position;
static int same(const char *a,const char *b) {
    while(*a && *a==*b){++a;++b;}
    return *a==*b;
}
static int queued_client(struct client_request *request) {
    const char *s=request->service;
    if(s && same(s,"winterboot-poll-key") && request->inputs==0 && request->outputs &&
       position<sizeof(keys)-1) {
        unsigned c=(uint8_t)keys[position++];
        request->cells[0]=c=='\r'?0x1c0d:c==27?0x011b:c;
        return 0;
    }
    if(s && s[0]=='r' && s[1]=='e' && s[2]=='a' && s[3]=='d' && !s[4] &&
       request->inputs==3 && request->outputs && request->cells[2] &&
       position<sizeof(keys)-1) {
        *(char *)(uintptr_t)request->cells[1]=keys[position++];
        request->cells[3]=1;
        return 0;
    }
    return previous(request);
}
int main(void) {
    client_entry *entry=(client_entry *)(uintptr_t)0x20198;
    previous=*entry;
    *entry=queued_client;
    return 1;
}
