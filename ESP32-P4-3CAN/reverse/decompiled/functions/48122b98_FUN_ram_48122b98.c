/* Firmware entry: 0x48122b98 */

void FUN_ram_48122b98(int param_1)

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
  if (*(uint *)(param_1 + 0xb8) == 0xffffffff) {
    return;
  }
  FUN_ram_481214a0(*(uint *)(param_1 + 0xb8) & 0xff,*(char *)(param_1 + 0xbc) == '\0');
  return;
}


