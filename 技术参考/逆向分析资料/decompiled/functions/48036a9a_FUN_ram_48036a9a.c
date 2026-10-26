/* Firmware entry: 0x48036a9a */

int FUN_ram_48036a9a(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(auStack_30,param_1);
  iVar7 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar7 + 0x1cc4) == 0) {
    FUN_ram_4802a59e(auStack_30);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return param_2;
  }
  puVar2 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
  uVar8 = 0;
  while( true ) {
    uVar8 = uVar8 + 1;
    iVar3 = FUN_ram_4802b18e(auStack_30,*puVar2);
    if (iVar3 != 0) break;
    puVar2 = puVar2 + 2;
    if (*(uint *)(iVar7 + 0x1cc4) <= uVar8) {
      FUN_ram_4802a59e(auStack_30);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return param_2;
    }
  }
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802a8a8(auStack_30,param_1);
  iVar4 = FUN_ram_4802b18e(auStack_30,"plain");
  iVar1 = DAT_ram_4ff5cbe8;
  iVar7 = DAT_ram_4ff5cbdc;
  if ((iVar4 == 0) ||
     (iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar4 + 0xcc2) == '\0')) {
    iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(int *)(iVar4 + 0x1cc4) != 0) {
      puVar2 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
      uVar8 = 0;
      do {
        iVar5 = FUN_ram_4802b18e(auStack_30,*puVar2);
        if (iVar5 != 0) {
          FUN_ram_4802a8a8(auStack_40,*(undefined4 *)(iVar1 + (iVar7 * 0x3a8 + uVar8) * 8 + 0xcc8));
          goto LAB_ram_48036bbc;
        }
        uVar8 = uVar8 + 1;
        puVar2 = puVar2 + 2;
      } while (uVar8 < *(uint *)(iVar4 + 0x1cc4));
    }
    FUN_ram_4802a8a8(auStack_40,&DAT_ram_481df390);
  }
  else {
    puVar6 = *(undefined1 **)(iVar4 + 0x43c);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_ram_481df390;
    }
    FUN_ram_4802a888(auStack_40,puVar6,*(undefined4 *)(iVar4 + 0x438));
  }
LAB_ram_48036bbc:
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802b810(auStack_40);
  iVar7 = FUN_ram_4802b18e(auStack_40,"1");
  if ((iVar7 == 0) && (iVar7 = FUN_ram_4802b18e(auStack_40,&DAT_ram_481c3dec), iVar7 == 0)) {
    iVar3 = FUN_ram_4802b18e(auStack_40,"on");
  }
  FUN_ram_4802a59e(auStack_40);
  return iVar3;
}


