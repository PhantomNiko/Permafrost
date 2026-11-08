/* Pooka's Free Software License. Local source-library integration fixture. */
#include <permafrost/terror_ui.h>
void __bzero(void *destination, unsigned long length) {
    volatile unsigned char *bytes=destination; while(length--)*bytes++=0;
}
static volatile unsigned actions;
static void clicked(void *context) {(void)context; ++actions;}
int main(void) {
    TerrorUIWindow window={0};
    TerrorUIWindowSpec spec=terror_ui_window_spec("Permafrost source UI",440,240);
    if(!terror_ui_window_open(&window,&spec))return 1;
    while(!terror_ui_window_should_close(&window)) {
        TerrorUIInput input={0};terror_ui_input_poll(&window,&input);
        if(input.keyboard.q)break;
        TerrorUIView children[3];
        children[0]=terror_ui_view_text_scale(terror_ui_text("TerrorUI from C source"),2);
        children[1]=terror_ui_view_frame(terror_ui_rectangle(actions?0x36a060:0x508fc0),380,60);
        children[2]=terror_ui_button("Change colour",clicked,0);
        TerrorUIView root=terror_ui_view_padding(terror_ui_vstack(children,3,14),terror_ui_insets(16));
        terror_ui_window_render_view(&window,&root,&input);
        terror_ui_yield_frames(1);
    }
    terror_ui_window_close(&window);return 0;
}
