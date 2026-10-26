/* Firmware entry: 0x48048e8a */

void FUN_ram_48048e8a(undefined1 *param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0xb) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  }
  *param_1 = 9;
  param_1[1] = (char)param_2;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  param_1[0x3e] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x19] = 0;
  param_1[0x39] = 1;
  if ((param_2 == 2) && (param_1[0x3f] == '\0')) {
    param_1[0x3f] = 1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    return;
  }
  return;
}


