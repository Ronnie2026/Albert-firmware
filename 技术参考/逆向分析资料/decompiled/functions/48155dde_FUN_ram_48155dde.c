/* Firmware entry: 0x48155dde */

void FUN_ram_48155dde(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 2;
    return;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    if ((*(byte *)(param_1 + 0x11) & 4) == 0) {
      FUN_ram_48155c50(param_1,0);
      *(undefined1 *)(param_1 + 0x10) = 6;
      return;
    }
    *(undefined1 *)(param_1 + 0x10) = 3;
  }
  return;
}


