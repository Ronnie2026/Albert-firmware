/* Firmware entry: 0x48036236 */

uint FUN_ram_48036236(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(auStack_30,param_1);
  iVar8 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar8 + 0x1cc4) == 0) {
    FUN_ram_4802a59e(auStack_30);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return param_2;
  }
  puVar1 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
  uVar2 = 0;
  while( true ) {
    uVar2 = uVar2 + 1;
    iVar3 = FUN_ram_4802b18e(auStack_30,*puVar1);
    if (iVar3 != 0) break;
    puVar1 = puVar1 + 2;
    if (*(uint *)(iVar8 + 0x1cc4) <= uVar2) {
      FUN_ram_4802a59e(auStack_30);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return param_2;
    }
  }
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802a8a8(auStack_30,param_1);
  iVar4 = FUN_ram_4802b18e(auStack_30,"plain");
  iVar3 = DAT_ram_4ff5cbe8;
  iVar8 = DAT_ram_4ff5cbdc;
  if ((iVar4 == 0) ||
     (iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar4 + 0xcc2) == '\0')) {
    iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(int *)(iVar4 + 0x1cc4) != 0) {
      puVar1 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
      uVar2 = 0;
      do {
        iVar5 = FUN_ram_4802b18e(auStack_30,*puVar1);
        if (iVar5 != 0) {
          FUN_ram_4802a8a8(auStack_40,*(undefined4 *)(iVar3 + (iVar8 * 0x3a8 + uVar2) * 8 + 0xcc8));
          goto LAB_ram_48036354;
        }
        uVar2 = uVar2 + 1;
        puVar1 = puVar1 + 2;
      } while (uVar2 < *(uint *)(iVar4 + 0x1cc4));
    }
    FUN_ram_4802a8a8(auStack_40,&DAT_ram_481df390);
  }
  else {
    puVar7 = *(undefined1 **)(iVar4 + 0x43c);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_ram_481df390;
    }
    FUN_ram_4802a888(auStack_40,puVar7,*(undefined4 *)(iVar4 + 0x438));
  }
LAB_ram_48036354:
  uVar2 = FUN_ram_4802b91c(auStack_40);
  FUN_ram_4802a59e(auStack_40);
  FUN_ram_4802a59e(auStack_30);
  uVar6 = 0xffff;
  if ((int)uVar2 < 0x10000) {
    uVar6 = uVar2 & (int)~uVar2 >> 0x1f;
  }
  return uVar6 & 0xffff;
}


