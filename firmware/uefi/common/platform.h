/* UEFI interfaces and the recovered Permafrost boot contract.
 * Interface reference: https://uefi.org/specs/UEFI/2.10/04_EFI_System_Table.html
 * Pooka's Free Software License. */
#pragma once
#include <stdint.h>
#include <stddef.h>
#if defined(__x86_64__)
#define EFI_ABI __attribute__((ms_abi))
#define OS_ABI __attribute__((sysv_abi))
#elif defined(__arm__)
#define EFI_ABI __attribute__((pcs("aapcs")))
#define OS_ABI
#else
#define EFI_ABI
#define OS_ABI
#endif
typedef uintptr_t Status;
typedef struct {uint32_t a;uint16_t b,c;uint8_t d[8];} Guid;
typedef struct {uint16_t scan,character;} Key;
struct Input;
struct Output;
typedef struct Input {void *reset;Status(EFI_ABI *read)(struct Input *,Key *);void *event;} Input;
typedef struct Output {void *reset;Status(EFI_ABI *write)(struct Output *,uint16_t *);void *other[8];} Output;
typedef struct {
    uint8_t header[24];void *raise_tpl,*restore_tpl;
    Status(EFI_ABI *allocate_pages)(uint32_t,uint32_t,uintptr_t,uint64_t *);
    Status(EFI_ABI *free_pages)(uint64_t,uintptr_t);
    Status(EFI_ABI *memory_map)(uintptr_t *,void *,uintptr_t *,uintptr_t *,uint32_t *);
    void *allocate_pool;Status(EFI_ABI *free_pool)(void *);
    void *create_event,*set_timer,*wait_event,*signal_event,*close_event,*check_event;
    void *install_protocol,*reinstall_protocol,*uninstall_protocol;
    Status(EFI_ABI *protocol)(void *,Guid *,void **);
    void *reserved,*register_notify,*locate_handle,*locate_path,*install_table;
    void *load_image,*start_image,*exit_image,*unload_image,*exit_services,*monotonic;
    Status(EFI_ABI *stall)(uintptr_t);
    Status(EFI_ABI *watchdog)(uintptr_t,uint64_t,uintptr_t,uint16_t *);
    void *connect,*disconnect,*open_protocol,*close_protocol,*protocol_info,*protocols;
    Status(EFI_ABI *handles)(uint32_t,Guid *,void *,uintptr_t *,void ***);
    void *locate_protocol;
} Services;
typedef struct {
    uint8_t header[24];void *vendor;uint32_t revision;
    void *input_handle;Input *input;void *output_handle;Output *output;
    void *error_handle;Output *error;void *runtime;Services *boot;
    uintptr_t table_count;void *tables;
} System;
typedef struct {
    uint32_t id;uint8_t removable,present,partition,readonly,caching,pad[3];
    uint32_t block_size,alignment;
#if !defined(__i386__)
    uint32_t pad_lba;
#endif
    uint64_t last;
} Media;
struct Block;
typedef struct Block {
    uint64_t revision;Media *media;
    Status(EFI_ABI *reset)(struct Block *,uint8_t);
    Status(EFI_ABI *read)(struct Block *,uint32_t,uint64_t,uintptr_t,void *);
    Status(EFI_ABI *write)(struct Block *,uint32_t,uint64_t,uintptr_t,void *);
    Status(EFI_ABI *flush)(struct Block *);
} Block;
typedef struct {uint32_t version,width,height,format,red,green,blue,reserved,stride;} VideoInfo;
typedef struct {uint32_t maximum,current;VideoInfo *info;uintptr_t info_size;uint64_t framebuffer;uintptr_t bytes;} VideoMode;
typedef struct Video Video;
struct Video {
    Status(EFI_ABI *query)(Video *,uint32_t,uintptr_t *,VideoInfo **);
    Status(EFI_ABI *set)(Video *,uint32_t);
    Status(EFI_ABI *blit)(Video *,uint32_t *,uint32_t,uintptr_t,uintptr_t,uintptr_t,uintptr_t,uintptr_t,uintptr_t,uintptr_t);VideoMode *mode;
};
typedef struct {int32_t x,y,z;uint8_t left,right,pad[2];} RelativeState;
typedef struct {uint64_t x,y,z;uint8_t left,right,pad[6];} RelativeMode;
typedef struct RelativePointer RelativePointer;
struct RelativePointer {
    Status(EFI_ABI *reset)(RelativePointer *,uint8_t);
    Status(EFI_ABI *read)(RelativePointer *,RelativeState *);
    void *event;RelativeMode *mode;
};
typedef struct {uint64_t x,y,z;uint32_t buttons,pad;} AbsoluteState;
typedef struct {uint64_t min_x,min_y,min_z,max_x,max_y,max_z;uint32_t attributes,pad;} AbsoluteMode;
typedef struct AbsolutePointer AbsolutePointer;
struct AbsolutePointer {
    Status(EFI_ABI *reset)(AbsolutePointer *,uint8_t);
    Status(EFI_ABI *read)(AbsolutePointer *,AbsoluteState *);
    void *event;AbsoluteMode *mode;
};
typedef struct {uint32_t type,pad;uint64_t base,virtual_address,pages,attributes;} Region;
#if defined(__arm__) || defined(__aarch64__)
#define SHARED_ADDRESS 0x40010000U
#define PROGRAM_ADDRESS 0x42000000U
#define KERNEL_ADDRESS 0x40400000U
#else
#define SHARED_ADDRESS 0x6000U
#define PROGRAM_ADDRESS 0x200000U
#define KERNEL_ADDRESS 0x2000000U
#endif
#if defined(__aarch64__)
#define CPU_TYPE 0x100000cU
#elif defined(__arm__)
#define CPU_TYPE 12U
#elif defined(__x86_64__)
#define CPU_TYPE 0x1000007U
#else
#define CPU_TYPE 7U
#endif
