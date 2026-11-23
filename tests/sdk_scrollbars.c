/* Exercise public SDK declarations through the actual target C ABI.
 * Pooka's Free Software License. */
#include <permafrost/terror_ui.h>
#include <stddef.h>
_Static_assert(sizeof(TerrorUIScrollbarModel)==16,"scroll model ABI");
_Static_assert(sizeof(TerrorUIScrollbarLayout)==84,"scrollbar ABI");
_Static_assert(sizeof(TerrorUIScrollbarsLayout)==188,"scrollbars ABI");
_Static_assert(offsetof(TerrorUIScrollbarsLayout,vertical)==20,"vertical offset");
_Static_assert(offsetof(TerrorUIScrollbarsLayout,horizontal)==104,"horizontal offset");
int main(void){
 TerrorUIScrollbarModel vertical={0,100,25,10},horizontal={-10,50,0,12};
 struct {uint32_t before;TerrorUIScrollbarsLayout layout;uint32_t after;} guard;
 guard.before=0x12345678;guard.after=0x87654321;
 terror_ui_scrollbars_layout((TerrorUIRect){0,0,100,80},&vertical,&horizontal,&guard.layout);
 if(guard.before!=0x12345678||guard.after!=0x87654321)return 1;
 if(!guard.layout.hasVertical||!guard.layout.hasHorizontal)return 2;
 if(guard.layout.vertical.orientation!=0||guard.layout.horizontal.orientation!=1)return 3;
 if(guard.layout.vertical.bar.width!=12||guard.layout.vertical.bar.height!=68)return 4;
 if(guard.layout.horizontal.bar.width!=88||guard.layout.horizontal.bar.height!=12)return 5;
 int value=terror_ui_scrollbar_value_from_point(&guard.layout.vertical,&vertical,40,0);
 if(value<vertical.minimum||value>vertical.maximum)return 6;
 if(terror_ui_colour(TERROR_UI_COLOUR_TEXT)!=0x202020)return 7;
 return 0;
}
