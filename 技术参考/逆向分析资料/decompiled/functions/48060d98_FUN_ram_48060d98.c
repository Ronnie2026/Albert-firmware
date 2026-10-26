/* Firmware entry: 0x48060d98 */

void FUN_ram_48060d98(int *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((char)param_1[0x12] != '\0') {
    param_1[0x150] = param_1[0x17];
    *(undefined1 *)((int)param_1 + 0x5dd) = 1;
    if ((char)param_1[0x1e] == '\0') {
      *(undefined1 *)(param_1 + 0x1e) = 1;
      *param_1 = *param_1 + 1;
    }
  }
  param_1[0x15c] = 0;
  param_1[0x15a] = 0;
  param_1[0x158] = 0;
  *(undefined1 *)(param_1 + 0x18a) = 0;
  *(undefined1 *)((int)param_1 + 0x629) = 0;
  *(undefined1 *)((int)param_1 + 0x62a) = 0;
  *(undefined1 *)((int)param_1 + 0x62b) = 0;
  *(undefined1 *)(param_1 + 0x18b) = 0;
  *(undefined1 *)((int)param_1 + 0x62d) = 0;
  *(undefined1 *)((int)param_1 + 0x62e) = 0;
  *(undefined1 *)((int)param_1 + 0x62f) = 0;
  *(undefined1 *)(param_1 + 0x18c) = 0;
  *(undefined1 *)((int)param_1 + 0x631) = 0;
  *(undefined1 *)((int)param_1 + 0x632) = 0;
  *(undefined1 *)((int)param_1 + 0x633) = 0;
  *(undefined1 *)(param_1 + 0x18d) = 0;
  *(undefined1 *)((int)param_1 + 0x635) = 0;
  *(undefined1 *)((int)param_1 + 0x636) = 0;
  *(undefined1 *)((int)param_1 + 0x637) = 0;
  *(undefined2 *)(param_1 + 0x18e) = 0;
  param_1[0x163] = 0;
  param_1[0x15d] = 0;
  param_1[0x15b] = 0;
  param_1[0x159] = 0;
  param_1[0x157] = 0;
  param_1[0x156] = 0;
  param_1[0x155] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  *(undefined1 *)((int)param_1 + 0x5d1) = 0;
  *(undefined2 *)((int)param_1 + 0x5d2) = 0;
  param_1[0x175] = 0;
  *(undefined2 *)(param_1 + 0x176) = 0;
  param_1[0x162] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  *(undefined1 *)(param_1 + 0x280) = 2;
  return;
}


