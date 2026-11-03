/* Lua application host and interactive shell. Pooka's Free Software License.
 * The VM and standard libraries are linked from ../lua under Lua's license. */
#include <permafrost.h>
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
extern jmp_buf pf_lua_exit;
extern int pf_lua_status;

static void console(const char *text){fputs(text?text:"unknown error",stdout);}

static void *allocate(void *context,void *pointer,size_t old_size,size_t size){
 (void)context;(void)old_size;if(!size){free(pointer);return 0;}return realloc(pointer,size);
}
static int panic(lua_State *L){console("panic: ");console(lua_tostring(L,-1));fputc('\n',stdout);return 0;}
static int print(lua_State *L){int n=lua_gettop(L);for(int i=1;i<=n;++i){size_t size;const char *s=luaL_tolstring(L,i,&size);if(i>1)fputc('\t',stdout);fwrite(s,1,size,stdout);lua_pop(L,1);}fputc('\n',stdout);return 0;}
static void report(lua_State *L,const char *prefix){console(prefix);const char *s=lua_tostring(L,-1);console(s?s:"unknown error");console("\n");lua_settop(L,0);}
static int incomplete(lua_State *L,int status){if(status!=LUA_ERRSYNTAX)return 0;size_t n;const char *s=lua_tolstring(L,-1,&n);return s&&n>=5&&!strcmp(s+n-5,"<eof>");}
static void results(lua_State *L){int n=lua_gettop(L);if(n){lua_getglobal(L,"print");lua_insert(L,1);if(lua_pcall(L,n,0,0))report(L,"");}lua_settop(L,0);}
int main(void){
 if(setjmp(pf_lua_exit))return pf_lua_status;
 if(pf_api()->magic!=PF_API_MAGIC||pf_api()->version<1||pf_api()->size<72)return 1;
 lua_State *L=lua_newstate(allocate,0);if(!L){console("failed to create lua state\n");return 1;}
 lua_atpanic(L,panic);
 luaL_requiref(L,"_G",luaopen_base,1);lua_pop(L,1);
 luaL_requiref(L,"coroutine",luaopen_coroutine,1);lua_pop(L,1);
 luaL_requiref(L,"table",luaopen_table,1);lua_pop(L,1);
 luaL_requiref(L,"string",luaopen_string,1);lua_pop(L,1);
 luaL_requiref(L,"utf8",luaopen_utf8,1);lua_pop(L,1);
 luaL_requiref(L,"io",luaopen_io,1);lua_pop(L,1);
 luaL_requiref(L,"package",luaopen_package,1);lua_pop(L,1);
 luaL_requiref(L,"math",luaopen_math,1);lua_pop(L,1);
 lua_pushcfunction(L,print);lua_setglobal(L,"print");
 lua_getglobal(L,"package");lua_pushliteral(L,"?.lua;?/init.lua");lua_setfield(L,-2,"path");lua_pushliteral(L,"");lua_setfield(L,-2,"cpath");lua_pop(L,1);
 console("LUA FOR PERMAFROST\n");
 console("type Lua code at the Permafrost prompt and press Enter\n");
 console("type exit or press Esc on an empty prompt to leave\n");
 console("autoruns index.lua if it is present\nuse dofile(\"name.lua\") to run files from WMFS\n");
 console("Embedded Version:: Lua 5.4.8W\n");
 struct pf_blob file;
 if(pf_read_file("index.lua",&file)){
  int status=luaL_loadbuffer(L,file.data,file.size,"@index.lua");
  if(status)report(L,"autorun load failed: ");else{console("autorun: index.lua\n");if(lua_pcall(L,0,LUA_MULTRET,0))report(L,"autorun failed: ");else{results(L);console("autorun complete\n");}}
 }
 char line[512],chunk[4096],expression[4112];
 for(;;){
  chunk[0]=0;size_t used=0;int status=0;
  for(;;){
   fflush(stdout);line[0]=0;if(!pf_read_line(line,sizeof(line),used?">> ":"> ",0)){lua_close(L);pf_restore_console();return 1;}
   if(!used&&(!strcmp(line,"exit")||!strcmp(line,"quit")||!strcmp(line,".exit"))){lua_close(L);pf_restore_console();return 1;}
   if(!used&&(!strcmp(line,":help")||!strcmp(line,"help()"))){console("Lua code, =expression, dofile(\"name.lua\"), exit\n");break;}
   size_t n=strlen(line);if(used+n+2>sizeof(chunk)){console("input too large\n");break;}
   memcpy(chunk+used,line,n);used+=n;chunk[used++]='\n';chunk[used]=0;
   snprintf(expression,sizeof(expression),"return %s",chunk[0]=='='?chunk+1:chunk);
   status=luaL_loadbuffer(L,expression,strlen(expression),"=stdin");
   if(status){lua_pop(L,1);status=luaL_loadbuffer(L,chunk,used,"=stdin");}
   if(incomplete(L,status)){lua_pop(L,1);continue;}
   if(status)report(L,"");else if(lua_pcall(L,0,LUA_MULTRET,0))report(L,"");else results(L);
   break;
  }
 }
}
