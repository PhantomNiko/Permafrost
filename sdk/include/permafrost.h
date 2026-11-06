/* Permafrost 0.9 native ABI. Pooka's Free Software License. */
#ifndef PERMAFROST_H
#define PERMAFROST_H
#include <stdint.h>
#include <stddef.h>
#define PF_VERSION "0.9"
#define PF_API_MAGIC 0x50414d57U
#define PF_API_VERSION 13U
#if defined(__arm__) || defined(__aarch64__)
#define PF_NATIVE_LOAD_ADDRESS 0x42000000U
#define PF_API_ADDRESS 0x40010800U
#else
#define PF_NATIVE_LOAD_ADDRESS 0x200000U
#define PF_API_ADDRESS 0x6800U
#endif
#ifndef PF_KERNEL_BASE
#if defined(__arm__) || defined(__aarch64__)
#define PF_KERNEL_BASE 0x40400000U
#elif defined(__x86_64__)
#define PF_KERNEL_BASE 0x2000000U
#else
#define PF_KERNEL_BASE 0x2000000U
#endif
#endif
/* Callback records use native pointers; buffers are borrowed for the call. */
struct pf_native_value {
    uint32_t type;
    int32_t integer;
    float number;
    const char *text;
    const void *data;
    uint32_t size;
};
enum pf_value_type { PF_NOT=0,PF_INTEGER=1,PF_NUMBER=2,PF_TEXT=3,
                     PF_BYTES=4,PF_BOOLEAN=5,PF_POINTER=6 };
typedef int (*pf_native_callback)(const struct pf_native_value *,uint32_t,
    struct pf_native_value *,char *,uint32_t);
typedef void (*pf_thread_entry)(void *);
typedef uint8_t pf_status;
/* File/audio addresses are 32-bit. Image addresses use low/high words. */
/* Borrowed filesystem-cache view. Do not deallocate data; writes, deletion
 * or device changes can invalidate it. */
struct pf_blob { uint32_t data,size,attributes; };
struct pf_image { uint32_t data,address_high,size,width,height,stride_bytes; };
struct pf_audio { uint32_t data,size,sample_count,sample_rate,channels,bits_per_sample,frame_count; };
struct pf_font;
struct pf_framebuffer_info {
    uint32_t address_low,address_high,size,stride_bytes,width,height,bits_per_pixel;
    uint32_t red_mask,green_mask,blue_mask,red_shift,green_shift,blue_shift;
};
enum pf_pointer_flags { PF_POINTER_ABSOLUTE=1,PF_POINTER_RELATIVE=2 };
struct pf_pointer_info { uint32_t flags,buttons; int32_t x,y,wheel; uint32_t reserved,max_x,max_y; };
/* Window query records carry a 64-bit address on every CPU. */
struct __attribute__((packed,aligned(4))) pf_window_info {
    uint32_t id,owner;
    uint64_t pixels;
    uint32_t size,width,height,stride_bytes,background,flags;
    int32_t x,y;
    uint32_t menu_sequence,menu_group,menu_item;
    char title[64];
    char menus[3][160];
};
/* Fixed-width records recovered from the v13 service ABI. */
struct pf_device_info {
    char description[241],root_path[241];
    uint32_t sectors,flags,kind,id,format;
};
struct pf_hardware_info {
    uint32_t flags;
    char cpu_brand[96];
    uint32_t hardware_threads;
    uint64_t l1_cache_bytes,l2_cache_bytes,l3_cache_bytes;
    uint64_t detected_memory_bytes,heap_total_bytes,reserved_memory_bytes,heap_free_bytes;
};
enum pf_hardware_flags {PF_HARDWARE_CPUID=1,PF_HARDWARE_CACHE=2,PF_HARDWARE_MEMORY=4};
static inline void *pf_blob_data(const struct pf_blob *value) { return (void *)(uintptr_t)value->data; }
static inline void *pf_image_data(const struct pf_image *value) { return (void *)(uintptr_t)((uint64_t)value->data|((uint64_t)value->address_high<<32)); }
static inline void *pf_window_pixels(const struct pf_window_info *value) { return (void *)(uintptr_t)value->pixels; }
static inline void *pf_audio_data(const struct pf_audio *value) { return (void *)(uintptr_t)value->data; }
/* WMAP v13 is exactly 252 bytes. Decode its slots before native calls. */
struct pf_native_api {
    uint32_t magic,version,size;
    uint32_t expand_disk;
    uint32_t set_theme;
    uint32_t video_vbe;
    uint32_t video_vga;
    uint32_t night_mode;
    uint32_t console_theme;
    uint32_t putchar;
    uint32_t puts;
    uint32_t getkey;
    uint32_t restore_console;
    uint32_t read_file;
    uint32_t write_file;
    uint32_t delete_file;
    uint32_t log_text;
    uint32_t read_line;
    uint32_t register_native;
    uint32_t allocate;
    uint32_t deallocate;
    uint32_t reallocate;
    uint32_t load_image;
    uint32_t decode_image;
    uint32_t load_audio;
    uint32_t decode_audio;
    uint32_t load_font;
    uint32_t decode_font;
    uint32_t set_font_size;
    uint32_t render_font;
    uint32_t destroy_font;
    uint32_t framebuffer_info;
    uint32_t pointer_info;
    uint32_t list_directory;
    uint32_t rename_file;
    uint32_t create_directory;
    uint32_t launch_file;
    uint32_t thread_create;
    uint32_t execute_command;
    uint32_t thread_yield;
    uint32_t window_create;
    uint32_t window_update;
    uint32_t window_destroy;
    uint32_t window_list;
    uint32_t window_configure;
    uint32_t window_query;
    uint32_t hardware_threads;
    uint32_t current_device_id;
    uint32_t list_devices;
    uint32_t target_device;
    uint32_t stat_file_on_device;
    uint32_t list_directory_on_device;
    uint32_t write_file_on_device;
    uint32_t delete_file_on_device;
    uint32_t rename_file_on_device;
    uint32_t create_directory_on_device;
    uint32_t load_image_on_device;
    uint32_t load_font_on_device;
    uint32_t launch_file_on_device;
    uint32_t window_set_menus;
    uint32_t window_menu_command;
    uint32_t shutdown;
    uint32_t hardware_info;
};
struct pf_native_services {
    uint32_t magic,version,size;
    pf_status (* expand_disk)(void);
    pf_status (* set_theme)(uint32_t,uint32_t,uint32_t);
    pf_status (* video_vbe)(void);
    pf_status (* video_vga)(void);
    pf_status (* night_mode)(void);
    pf_status (* console_theme)(uint32_t,uint32_t,uint32_t);
    int (* putchar)(int);
    int (* puts)(const char *);
    uint16_t (* getkey)(void);
    pf_status (* restore_console)(void);
    pf_status (* read_file)(const char *,struct pf_blob *);
    pf_status (* write_file)(const char *,const void *,uint32_t);
    pf_status (* delete_file)(const char *);
    int (* log_text)(const char *);
    int (* read_line)(char *,uint32_t,const char *,int);
    pf_status (* register_native)(const char *, pf_native_callback);
    void *(* allocate)(uint32_t);
    void (* deallocate)(void *);
    void *(* reallocate)(void *,uint32_t);
    pf_status (* load_image)(const char *,struct pf_image *);
    pf_status (* decode_image)(const void *,uint32_t,struct pf_image *);
    pf_status (* load_audio)(const char *,uint32_t,struct pf_audio *);
    pf_status (* decode_audio)(const void *,uint32_t,uint32_t,struct pf_audio *);
    struct pf_font *(* load_font)(const char *,float);
    struct pf_font *(* decode_font)(const void *,uint32_t,float);
    void (* set_font_size)(struct pf_font *,float);
    pf_status (* render_font)(struct pf_font *,const char *,uint32_t,uint32_t,uint32_t,uint32_t,struct pf_image *);
    void (* destroy_font)(struct pf_font *);
    pf_status (*framebuffer_info)(struct pf_framebuffer_info *);
    pf_status (*pointer_info)(struct pf_pointer_info *);
    pf_status (*list_directory)(const char *,char *,uint32_t,uint32_t *);
    pf_status (*rename_file)(const char *,const char *);
    pf_status (*create_directory)(const char *);
    uint32_t (*launch_file)(const char *,uint32_t);
    uint32_t (*thread_create)(pf_thread_entry,void *,uint32_t);
    uint32_t (*execute_command)(const char *,char *,uint32_t);
    void (*thread_yield)(void);
    uint32_t (*window_create)(const char *,uint32_t,uint32_t);
    pf_status (*window_update)(uint32_t,const char *,const void *,uint32_t,uint32_t,uint32_t,uint32_t);
    pf_status (*window_destroy)(uint32_t);
    pf_status (*window_list)(struct pf_window_info *,uint32_t,uint32_t *);
    pf_status (*window_configure)(uint32_t,int32_t,int32_t,uint32_t,uint32_t);
    pf_status (*window_query)(uint32_t,struct pf_window_info *);
    uint32_t (*hardware_threads)(void);
    int32_t (*current_device_id)(void);
    pf_status (*list_devices)(struct pf_device_info *,uint32_t,uint32_t *);
    pf_status (*target_device)(int32_t);
    pf_status (*stat_file_on_device)(int32_t,const char *,struct pf_blob *);
    pf_status (*list_directory_on_device)(int32_t,const char *,char *,uint32_t,uint32_t *);
    pf_status (*write_file_on_device)(int32_t,const char *,const void *,uint32_t);
    pf_status (*delete_file_on_device)(int32_t,const char *);
    pf_status (*rename_file_on_device)(int32_t,const char *,const char *);
    pf_status (*create_directory_on_device)(int32_t,const char *);
    pf_status (*load_image_on_device)(int32_t,const char *,struct pf_image *);
    struct pf_font *(*load_font_on_device)(int32_t,const char *,float);
    pf_status (*launch_file_on_device)(int32_t,const char *,uint32_t);
    pf_status (*window_set_menus)(uint32_t,const char *,const char *,const char *);
    pf_status (*window_menu_command)(uint32_t,uint32_t,uint32_t);
    void (*shutdown)(void);
    pf_status (*hardware_info)(struct pf_hardware_info *);
};
typedef struct pf_native_services pf_services;
static inline const struct pf_native_api *pf_wire_api(void) { return (const struct pf_native_api *)(uintptr_t)PF_API_ADDRESS; }
static inline const struct pf_native_services *pf_api(void) {
    const struct pf_native_api *wire=pf_wire_api();
    static struct pf_native_services services;
    services.magic=wire->magic;services.version=wire->version;services.size=wire->size;
    services.expand_disk=(__typeof__(services.expand_disk))(uintptr_t)wire->expand_disk;
    services.set_theme=(__typeof__(services.set_theme))(uintptr_t)wire->set_theme;
    services.video_vbe=(__typeof__(services.video_vbe))(uintptr_t)wire->video_vbe;
    services.video_vga=(__typeof__(services.video_vga))(uintptr_t)wire->video_vga;
    services.night_mode=(__typeof__(services.night_mode))(uintptr_t)wire->night_mode;
    services.console_theme=(__typeof__(services.console_theme))(uintptr_t)wire->console_theme;
    services.putchar=(__typeof__(services.putchar))(uintptr_t)wire->putchar;
    services.puts=(__typeof__(services.puts))(uintptr_t)wire->puts;
    services.getkey=(__typeof__(services.getkey))(uintptr_t)wire->getkey;
    services.restore_console=(__typeof__(services.restore_console))(uintptr_t)wire->restore_console;
    services.read_file=(__typeof__(services.read_file))(uintptr_t)wire->read_file;
    services.write_file=(__typeof__(services.write_file))(uintptr_t)wire->write_file;
    services.delete_file=(__typeof__(services.delete_file))(uintptr_t)wire->delete_file;
    services.log_text=(__typeof__(services.log_text))(uintptr_t)wire->log_text;
    services.read_line=(__typeof__(services.read_line))(uintptr_t)wire->read_line;
    services.register_native=(__typeof__(services.register_native))(uintptr_t)wire->register_native;
    services.allocate=(__typeof__(services.allocate))(uintptr_t)wire->allocate;
    services.deallocate=(__typeof__(services.deallocate))(uintptr_t)wire->deallocate;
    services.reallocate=(__typeof__(services.reallocate))(uintptr_t)wire->reallocate;
    services.load_image=(__typeof__(services.load_image))(uintptr_t)wire->load_image;
    services.decode_image=(__typeof__(services.decode_image))(uintptr_t)wire->decode_image;
    services.load_audio=(__typeof__(services.load_audio))(uintptr_t)wire->load_audio;
    services.decode_audio=(__typeof__(services.decode_audio))(uintptr_t)wire->decode_audio;
    services.load_font=(__typeof__(services.load_font))(uintptr_t)wire->load_font;
    services.decode_font=(__typeof__(services.decode_font))(uintptr_t)wire->decode_font;
    services.set_font_size=(__typeof__(services.set_font_size))(uintptr_t)wire->set_font_size;
    services.render_font=(__typeof__(services.render_font))(uintptr_t)wire->render_font;
    services.destroy_font=(__typeof__(services.destroy_font))(uintptr_t)wire->destroy_font;
    services.framebuffer_info=(__typeof__(services.framebuffer_info))(uintptr_t)wire->framebuffer_info;
    services.pointer_info=(__typeof__(services.pointer_info))(uintptr_t)wire->pointer_info;
    services.list_directory=(__typeof__(services.list_directory))(uintptr_t)wire->list_directory;
    services.rename_file=(__typeof__(services.rename_file))(uintptr_t)wire->rename_file;
    services.create_directory=(__typeof__(services.create_directory))(uintptr_t)wire->create_directory;
    services.launch_file=(__typeof__(services.launch_file))(uintptr_t)wire->launch_file;
    services.thread_create=(__typeof__(services.thread_create))(uintptr_t)wire->thread_create;
    services.execute_command=(__typeof__(services.execute_command))(uintptr_t)wire->execute_command;
    services.thread_yield=(__typeof__(services.thread_yield))(uintptr_t)wire->thread_yield;
    services.window_create=(__typeof__(services.window_create))(uintptr_t)wire->window_create;
    services.window_update=(__typeof__(services.window_update))(uintptr_t)wire->window_update;
    services.window_destroy=(__typeof__(services.window_destroy))(uintptr_t)wire->window_destroy;
    services.window_list=(__typeof__(services.window_list))(uintptr_t)wire->window_list;
    services.window_configure=(__typeof__(services.window_configure))(uintptr_t)wire->window_configure;
    services.window_query=(__typeof__(services.window_query))(uintptr_t)wire->window_query;
    services.hardware_threads=(__typeof__(services.hardware_threads))(uintptr_t)wire->hardware_threads;
    services.current_device_id=(__typeof__(services.current_device_id))(uintptr_t)wire->current_device_id;
    services.list_devices=(__typeof__(services.list_devices))(uintptr_t)wire->list_devices;
    services.target_device=(__typeof__(services.target_device))(uintptr_t)wire->target_device;
    services.stat_file_on_device=(__typeof__(services.stat_file_on_device))(uintptr_t)wire->stat_file_on_device;
    services.list_directory_on_device=(__typeof__(services.list_directory_on_device))(uintptr_t)wire->list_directory_on_device;
    services.write_file_on_device=(__typeof__(services.write_file_on_device))(uintptr_t)wire->write_file_on_device;
    services.delete_file_on_device=(__typeof__(services.delete_file_on_device))(uintptr_t)wire->delete_file_on_device;
    services.rename_file_on_device=(__typeof__(services.rename_file_on_device))(uintptr_t)wire->rename_file_on_device;
    services.create_directory_on_device=(__typeof__(services.create_directory_on_device))(uintptr_t)wire->create_directory_on_device;
    services.load_image_on_device=(__typeof__(services.load_image_on_device))(uintptr_t)wire->load_image_on_device;
    services.load_font_on_device=(__typeof__(services.load_font_on_device))(uintptr_t)wire->load_font_on_device;
    services.launch_file_on_device=(__typeof__(services.launch_file_on_device))(uintptr_t)wire->launch_file_on_device;
    services.window_set_menus=(__typeof__(services.window_set_menus))(uintptr_t)wire->window_set_menus;
    services.window_menu_command=(__typeof__(services.window_menu_command))(uintptr_t)wire->window_menu_command;
    services.shutdown=(__typeof__(services.shutdown))(uintptr_t)wire->shutdown;
    services.hardware_info=(__typeof__(services.hardware_info))(uintptr_t)wire->hardware_info;
    return &services;
}
static inline int pf_expand_disk(void) { return pf_api()->expand_disk(); }
static inline int pf_night_mode(void) { return pf_api()->night_mode(); }
static inline int pf_set_theme(uint32_t bg,uint32_t fg,uint32_t attr) { return pf_api()->console_theme(bg,fg,attr); }
static inline int pf_putchar(int c) { return pf_api()->putchar(c); }
static inline int pf_puts(const char *s) { return pf_api()->puts(s); }
static inline uint16_t pf_getkey(void) { return pf_api()->getkey(); }
static inline int pf_restore_console(void) { return pf_api()->restore_console(); }
static inline int pf_read_file(const char *p,struct pf_blob *out) { return pf_api()->read_file(p,out); }
static inline int pf_write_file(const char *p,const void *data,uint32_t size) { return pf_api()->write_file(p,data,size); }
static inline int pf_delete_file(const char *p) { return pf_api()->delete_file(p); }
static inline int pf_log_text(const char *text) { return pf_api()->log_text(text); }
static inline int pf_read_line(char *out,uint32_t size,const char *prompt,int history) { return pf_api()->read_line(out,size,prompt,history); }
static inline int pf_register_native(const char *name,pf_native_callback function) { return pf_api()->register_native(name,function); }
static inline int pf_graphics_enter(void) { return pf_api()->video_vbe(); }
static inline int pf_graphics_leave(void) { return pf_api()->video_vga(); }
/* Format locally and use WMAP: no release-specific kernel address is needed.
 * Integer formats, strings, characters and zero-padded field widths are supported.
 */
static inline void pf_log(const char *format,...) {
    char text[512]; uint32_t used=0;
    __builtin_va_list args; __builtin_va_start(args,format);
    while(format && *format && used+1<sizeof(text)) {
        char c=*format++;
        if(c!='%') {text[used++]=c;continue;}
        char pad=' ';uint32_t width=0;
        if(*format=='0'){pad='0';++format;}
        while(*format>='0' && *format<='9') {if(width<512)width=width*10+(*format-'0');++format;}
        c=*format;if(c)++format;
        if(c=='s') {
            const char *value=__builtin_va_arg(args,const char *);
            if(!value)value="(null)";
            while(*value && used+1<sizeof(text))text[used++]=*value++;
        } else if(c=='c')text[used++]=(char)__builtin_va_arg(args,int);
        else if(c=='u'||c=='d'||c=='i'||c=='x'||c=='X'||c=='p') {
            uintptr_t value=c=='p'?(uintptr_t)__builtin_va_arg(args,void *):__builtin_va_arg(args,uint32_t);
            unsigned base=(c=='x'||c=='X'||c=='p')?16:10;char digits[32];unsigned count=0;
            int negative=(c=='d'||c=='i') && (int32_t)value<0;
            if(negative)value=(uintptr_t)(0U-(uint32_t)value);
            do {unsigned digit=value%base;value/=base;digits[count++]=(char)(digit<10?'0'+digit:(c=='X'?'A':'a')+digit-10);}while(value);
            if(negative && pad=='0' && used+1<sizeof(text))text[used++]='-';
            while(width>count+(unsigned)negative && used+1<sizeof(text)){text[used++]=pad;--width;}
            if(negative && pad!='0' && used+1<sizeof(text))text[used++]='-';
            while(count && used+1<sizeof(text))text[used++]=digits[--count];
        } else if(c)text[used++]=c;
    }
    text[used]=0;__builtin_va_end(args);pf_log_text(text);
}
static inline void *pf_malloc(uint32_t size) { return pf_api()->allocate(size); }
static inline void pf_free(void *pointer) { pf_api()->deallocate(pointer); }
static inline void *pf_realloc(void *pointer,uint32_t size) { return pf_api()->reallocate(pointer,size); }
static inline uint8_t pf_peek8(uintptr_t address) { return *(volatile uint8_t *)address; }
static inline void pf_poke8(uintptr_t address,uint8_t value) { *(volatile uint8_t *)address=value; }
#endif
