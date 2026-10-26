/* Firmware entry: 0x4812044c */

void FUN_ram_4812044c(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    if (param_2 == (undefined4 *)0x0) {
      iVar2 = FUN_ram_4ff29cae();
      if (iVar2 == 2) {
        return;
      }
      (&DAT_ram_4ff4d81c)[iVar2] = (&DAT_ram_4ff4d81c)[iVar2] + -1;
      FUN_ram_4ff3c5d4();
      return;
    }
LAB_ram_4812048a:
    if (((uint)param_2 & 3) == 0) {
      puVar5 = param_2;
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (puVar5 != param_2 + 0x208);
    }
    else {
      puVar5 = param_2;
      do {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      } while (puVar5 != param_2 + 0x208);
    }
    param_2[0x1f6] = 1;
    param_2[0x1f7] = 1;
    iVar2 = FUN_ram_4ff29cae();
    if (iVar2 == 2) {
      return;
    }
    if (param_1 == (undefined4 *)0x0) {
      uVar6 = iVar2 * 0x17b8;
      goto LAB_ram_48120502;
    }
  }
  else {
    if (((uint)param_1 & 3) == 0) {
      puVar5 = param_1;
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (puVar5 != param_1 + 0x325);
      param_1[0x321] = 1;
      param_1[0x322] = 1;
    }
    else {
      puVar5 = param_1;
      do {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      } while (puVar5 != param_1 + 0x325);
      param_1[0x321] = 1;
      param_1[0x322] = 1;
    }
    if (param_2 != (undefined4 *)0x0) goto LAB_ram_4812048a;
    iVar2 = FUN_ram_4ff29cae();
    if (iVar2 == 2) {
      return;
    }
  }
  uVar6 = -iVar2 & 0x17b8;
  puVar5 = (undefined4 *)((int)&DAT_ram_4ff4d824 + uVar6);
  if (((uint)param_1 & 3) == 0) {
    puVar4 = param_1;
    do {
      uVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar4 = uVar3;
      puVar4 = puVar4 + 1;
    } while (puVar5 != (undefined4 *)((int)&DAT_ram_4ff4e4b8 + uVar6));
  }
  else {
    puVar4 = param_1;
    do {
      uVar1 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      *(undefined1 *)puVar4 = uVar1;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    } while (puVar5 != (undefined4 *)((int)&DAT_ram_4ff4e4b8 + uVar6));
  }
  if (param_2 == (undefined4 *)0x0) {
    (&DAT_ram_4ff4d81c)[iVar2] = (&DAT_ram_4ff4d81c)[iVar2] + -1;
    iVar2 = FUN_ram_4ff3c5d4();
    param_1[800] = iVar2 - param_1[799];
    return;
  }
LAB_ram_48120502:
  puVar5 = (undefined4 *)((int)&DAT_ram_4ff4e4b8 + uVar6);
  if (((uint)param_2 & 3) == 0) {
    puVar4 = param_2;
    do {
      uVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar4 = uVar3;
      puVar4 = puVar4 + 1;
    } while (puVar5 != (undefined4 *)((int)&DAT_ram_4ff4ecd8 + uVar6));
  }
  else {
    puVar4 = param_2;
    do {
      uVar1 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      *(undefined1 *)puVar4 = uVar1;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    } while (puVar5 != (undefined4 *)((int)&DAT_ram_4ff4ecd8 + uVar6));
  }
  (&DAT_ram_4ff4d81c)[iVar2] = (&DAT_ram_4ff4d81c)[iVar2] + -1;
  iVar2 = FUN_ram_4ff3c5d4();
  if (param_1 != (undefined4 *)0x0) {
    param_1[800] = iVar2 - param_1[799];
  }
  if (param_2 != (undefined4 *)0x0) {
    param_2[0x1f5] = iVar2 - param_2[500];
  }
  return;
}


