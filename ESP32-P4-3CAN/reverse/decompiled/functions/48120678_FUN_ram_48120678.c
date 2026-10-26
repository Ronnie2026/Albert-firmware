/* Firmware entry: 0x48120678 */

void FUN_ram_48120678(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (((uint)param_1 & 3) == 0) {
    puVar3 = param_1;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (puVar3 != param_1 + 0x1b2);
  }
  else {
    puVar3 = param_1;
    do {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    } while (puVar3 != param_1 + 0x1b2);
  }
  fence();
  if (DAT_ram_4ff4d800 != 0) {
    puVar2 = &DAT_ram_4ff4d478;
    puVar3 = param_1;
    if (((uint)param_1 & 3) == 0) {
      do {
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
      } while (puVar2 != &DAT_ram_4ff4d7dc);
    }
    else {
      do {
        puVar4 = (undefined4 *)((int)puVar2 + 1);
        *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
        if (puVar4 == &DAT_ram_4ff4d7dc) break;
        puVar2 = (undefined4 *)((int)puVar2 + 2);
        *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)puVar4;
        puVar3 = (undefined4 *)((int)puVar3 + 2);
      } while (puVar2 != &DAT_ram_4ff4d7dc);
    }
  }
  fence();
  if (DAT_ram_4ff4d804 == 0) {
    return;
  }
  puVar3 = param_1 + 0xda;
  puVar2 = (undefined4 *)&DAT_ram_50109b38;
  if (((uint)puVar3 & 3) == 0) {
    do {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (puVar2 != (undefined4 *)0x50109e98);
  }
  else {
    do {
      puVar5 = (undefined1 *)((int)puVar2 + 1);
      *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
      if (puVar5 == (undefined1 *)0x50109e98) break;
      puVar2 = (undefined4 *)((int)puVar2 + 2);
      *(undefined1 *)((int)puVar3 + 1) = *puVar5;
      puVar3 = (undefined4 *)((int)puVar3 + 2);
    } while (puVar2 != (undefined4 *)0x50109e98);
  }
  param_1[0xd9] = 1;
  return;
}


