/* Pooka's Free Software License. Current milestone SDK layout checks. */
#include <permafrost/terror_ui.h>
_Static_assert(WM_BAREMETAL_PROGRAM_API_VERSION == 1000000, "API version");
_Static_assert(sizeof(WmBaremetalProgramApi) == 412, "service table");
_Static_assert(sizeof(WmBaremetalProgramAppWindowInfo) == 632, "window query");
_Static_assert(offsetof(WmBaremetalProgramAppWindowInfo, contentSerial) == 20, "content serial");
_Static_assert(offsetof(WmBaremetalProgramAppWindowInfo, width) == 24, "window width");
_Static_assert(offsetof(WmBaremetalProgramAppWindowInfo, flags) == 40, "window flags");
_Static_assert(offsetof(WmBaremetalProgramAppWindowInfo, title) == 88, "window title");
_Static_assert(sizeof(WmBaremetalProgramAppWindowPointerInfo) == 28, "window pointer");
_Static_assert(sizeof(WmBaremetalProgramFramebufferInfo) == 52, "framebuffer");
_Static_assert(offsetof(WmBaremetalProgramFramebufferInfo, redBits) == 28, "red bits");
_Static_assert(offsetof(WmBaremetalProgramFramebufferInfo, greenBits) == 36, "green bits");
_Static_assert(sizeof(TerrorUIInput) == 44, "input");
_Static_assert(sizeof(TerrorUIEdgeInsets) == 16, "insets");
_Static_assert(sizeof(TerrorUIWindowSpec) == (sizeof(void *) == 8 ? 72 : 52), "window spec");
_Static_assert(sizeof(TerrorUIWindow) == (sizeof(void *) == 8 ? 848 : 832), "window state");
_Static_assert(sizeof(TerrorUIView) == (sizeof(void *) == 8 ? 88 : 72), "view");
_Static_assert(sizeof(TerrorUIApp) == (sizeof(void *) == 8 ? 112 : 76), "app");
#if defined(__aarch64__)
_Static_assert(WM_BAREMETAL_PROGRAM_API_PHYSICAL == 0x82010800U, "ARM64 API address");
#elif defined(__arm__)
_Static_assert(WM_BAREMETAL_PROGRAM_API_PHYSICAL == 0x40010800U, "ARM32 API address");
#else
_Static_assert(WM_BAREMETAL_PROGRAM_API_PHYSICAL == 0x6800U, "x86 API address");
#endif
