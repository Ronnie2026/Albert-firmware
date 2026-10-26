/* Firmware entry: 0x4807e2fa */

void FUN_ram_4807e2fa(undefined4 *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 2) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  DAT_ram_4ff6deec = (*(code *)*param_1)();
  fence();
  DAT_ram_4ff6dee8 = DAT_ram_4ff6dee8 + -1;
  DAT_ram_4ff6dee4 = DAT_ram_4ff6dee4 + 1;
  if (DAT_ram_4ff6dee0 < (uint)(DAT_ram_4ff6deec - param_1[1])) {
    DAT_ram_4ff6dee0 = DAT_ram_4ff6deec - param_1[1];
    return;
  }
  return;
}


