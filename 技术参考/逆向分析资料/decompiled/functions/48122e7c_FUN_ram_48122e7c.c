/* Firmware entry: 0x48122e7c */

void FUN_ram_48122e7c(undefined1 *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0xc) != 0) {
    thunk_FUN_ram_4ff209c6();
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_ram_4ff209c6();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(uint *)(param_1 + 0xb8) != 0xffffffff) {
    FUN_ram_481214a0(*(uint *)(param_1 + 0xb8) & 0xff,param_1[0xbc] == '\0');
  }
  *param_1 = 0xc;
  return;
}


