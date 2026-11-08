/* Pooka's Free Software License. Scheduler image restoration ABI. */
ulong recovered_8243e714(char *process,ulong restore_foreground,ulong image_bytes)
{
    if (process) return recovered_82441580(process);
    if ((uint)restore_foreground) return (uchar)recovered_82441624(image_bytes);
    return 1;
}
