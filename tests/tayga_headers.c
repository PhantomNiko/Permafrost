/* Pooka's Free Software License. Source SDK ABI and mixed-include checks. */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <permafrost/native_api.h>
#include <tayga/tayga_api.h>
#include <tayga/tayga_runtime.h>
#include <tayga/terror_ui.h>
_Static_assert(sizeof(WmBaremetalProgramApi)==412,"service table");
_Static_assert(sizeof(WmTaygaProcessInfo)==1568,"process information");
_Static_assert(sizeof(WmTaygaStatus)==444,"subsystem status");
#if defined(__aarch64__)
_Static_assert(WM_BAREMETAL_PROGRAM_API_PHYSICAL==0x82010800u,"ARM64 API");
#elif defined(__arm__)
_Static_assert(WM_BAREMETAL_PROGRAM_API_PHYSICAL==0x40010800u,"ARM32 API");
#else
_Static_assert(WM_BAREMETAL_PROGRAM_API_PHYSICAL==0x6800u,"x86 API");
#endif
uint32_t sdk_source_probe(WmTaygaProcessInfo *info){return tayga_process_info(info);}
