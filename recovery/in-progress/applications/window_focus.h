/* Pooka's Free Software License. */
#pragma once
#include <permafrost/terror_ui.h>

/* An idle, inactive application may not present another frame. Refresh its
 * cached record so activation and close requests can still reach the loop. */
static inline void pf_app_refresh_inactive_info(void *storage)
{
    TerrorUIWindow *window = (TerrorUIWindow *)storage;
    uint32_t flags;
    if (!window->frameInfoValid)
        return;
    __builtin_memcpy(&flags, window->frameInfo + 40, sizeof(flags));
    if (!(flags & 2u))
        window->frameInfoValid = 0;
}
