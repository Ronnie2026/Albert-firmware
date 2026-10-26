/* Firmware entry: 0x4812033c */

void FUN_ram_4812033c(undefined4 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (((uint)param_1 & 3) == 0) {
    puVar6 = param_1;
    do {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    } while (puVar6 != param_1 + 0x208);
    param_1[0x1f6] = 1;
    param_1[0x1f7] = 1;
    iVar2 = FUN_ram_4ff29cae();
    if (iVar2 == 2) {
      return;
    }
    puVar6 = &DAT_ram_4ff4e4b8 + iVar2 * 0x5ee;
  }
  else {
    puVar6 = param_1;
    do {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    } while (param_1 + 0x208 != puVar6);
    param_1[0x1f6] = 1;
    param_1[0x1f7] = 1;
    iVar2 = FUN_ram_4ff29cae();
    if (iVar2 == 2) {
      return;
    }
    puVar6 = &DAT_ram_4ff4e4b8 + iVar2 * 0x5ee;
    if (((uint)param_1 & 3) != 0) {
      puVar5 = param_1;
      do {
        uVar1 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        *(undefined1 *)puVar5 = uVar1;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      } while (&DAT_ram_4ff4ecd8 + iVar2 * 0x5ee != puVar6);
      goto LAB_ram_481203ae;
    }
  }
  puVar3 = puVar6 + 0x208;
  puVar5 = param_1;
  do {
    uVar4 = *puVar6;
    puVar6 = puVar6 + 1;
    *puVar5 = uVar4;
    puVar5 = puVar5 + 1;
  } while (puVar6 != puVar3);
LAB_ram_481203ae:
  (&DAT_ram_4ff4d81c)[iVar2] = (&DAT_ram_4ff4d81c)[iVar2] + -1;
  iVar2 = FUN_ram_4ff3c5d4();
  param_1[0x1f5] = iVar2 - param_1[500];
  return;
}


