/* Firmware entry: 0x480608e8 */

void FUN_ram_480608e8(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = param_1[0x14a];
  memset(param_1,0,0x528);
  param_1[1] = 1;
  memset(param_1 + 0x24,0,0x460);
  param_1[0x158] = 0;
  param_1[0x15a] = 0;
  param_1[0x15c] = 0;
  param_1[0x15e] = 0;
  param_1[0x159] = 0;
  param_1[0x15b] = 0;
  param_1[0x15d] = 0;
  param_1[0x15f] = 0;
  param_1[0x14a] = iVar1;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x178] = 0;
  param_1[0x17e] = 0;
  param_1[0x184] = 0;
  param_1[0x18a] = 0;
  param_1[0x179] = 0;
  param_1[0x17f] = 0;
  param_1[0x185] = 0;
  param_1[0x18b] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  *(undefined2 *)(param_1 + 0x177) = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  *(undefined2 *)(param_1 + 0x17c) = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  *(undefined2 *)(param_1 + 0x182) = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  *(undefined2 *)(param_1 + 0x188) = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  *(undefined2 *)(param_1 + 0x18e) = 0;
  memset(param_1 + 400,0,0x1e0);
  memset(param_1 + 0x208,0,0x1e0);
  *(undefined1 *)(param_1 + 0x280) = 0;
  FUN_ram_4ff45158(param_1,param_2,0x524);
  if ((((param_1[4] == 0 && param_1[5] == 0) && (param_1[6] == 0 && param_1[7] == 0)) &&
      (param_1[8] == 0 && param_1[9] == 0)) && ((char)param_1[0x22] == '\0')) {
    if ((char)param_1[0x12] == '\0') {
      if (param_1[2] != 0) {
        *(undefined1 *)((int)param_1 + 0x5db) = 1;
        *(undefined1 *)(param_1 + 0x177) = 1;
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      if ((((param_1[10] == 0) && (param_1[0x13c] == 0 && param_1[0x13d] == 0)) &&
          ((param_1[0x13e] == 0 && param_1[0x13f] == 0 &&
           ((param_1[0xc] == 0 && param_1[0xd] == 0 && (param_1[0xe] == 0 && param_1[0xf] == 0))))))
         && (param_1[0x10] == 0 && param_1[0x11] == 0)) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      *(undefined1 *)((int)param_1 + 0x5db) = 1;
      *(undefined1 *)(param_1 + 0x177) = 1;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    *(undefined1 *)((int)param_1 + 0x5db) = 1;
    *(undefined1 *)(param_1 + 0x177) = 1;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x5db) = 1;
    *(undefined1 *)(param_1 + 0x177) = 1;
    if ((char)param_1[0x12] == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
  }
  param_1[0x150] = param_1[0x17];
  *(undefined1 *)((int)param_1 + 0x5dd) = 1;
  if ((char)param_1[0x1e] == '\0') {
    *(undefined1 *)(param_1 + 0x1e) = 1;
    *param_1 = *param_1 + 1;
  }
  return;
}


