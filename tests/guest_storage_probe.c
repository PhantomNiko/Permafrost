/* Pooka's Free Software License. Run only on disposable VM diagnostic disks. */
#include <permafrost/native_api.h>

static void report(const char *message)
{
    wm_program_host_log(message);
    wm_program_write(message);
    wm_program_write("\n");
}

int main(void)
{
    static const char path[] = "/Permafrost-persistence.txt";
    static const char payload[] = "Permafrost C SDK persistence probe\n";
    int32_t device = wm_program_current_device_id();
    WmBaremetalProgramFileInfo info = {0};
    if (device < 0) {
        report("STORAGE_PROBE_NO_CURRENT_DEVICE");
        return 4;
    }
    if (!wm_program_write_file_on_device(device, path, payload, sizeof(payload)-1)) {
        char error[128] = {0};
        report("STORAGE_PROBE_WRITE_FAILED");
        wm_program_last_error(error, sizeof(error));
        report(error);
        return 1;
    }
    if (!wm_program_stat_file_on_device(device, path, &info) ||
        !info.dataPhysical || info.size != sizeof(payload)-1) {
        report("STORAGE_PROBE_READ_FAILED");
        return 2;
    }
    const unsigned char *bytes = (const unsigned char *)(uintptr_t)info.dataPhysical;
    for (uint32_t i = 0; i < info.size; ++i) {
        if (bytes[i] != (unsigned char)payload[i]) {
            report("STORAGE_PROBE_BYTES_DIFFER");
            return 3;
        }
    }
    wm_program_free((void *)(uintptr_t)info.dataPhysical);
    report("STORAGE_PROBE_OK");
    return 0;
}
