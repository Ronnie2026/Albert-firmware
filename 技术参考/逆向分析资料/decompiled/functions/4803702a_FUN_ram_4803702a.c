/* Firmware entry: 0x4803702a */

bool FUN_ram_4803702a(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(auStack_30,"name");
  iVar7 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar7 + 0x1cc4) == 0) {
    FUN_ram_4802a59e(auStack_30);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return false;
  }
  puVar1 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
  uVar2 = 0;
  while( true ) {
    uVar2 = uVar2 + 1;
    iVar3 = FUN_ram_4802b18e(auStack_30,*puVar1);
    if (iVar3 != 0) break;
    puVar1 = puVar1 + 2;
    if (*(uint *)(iVar7 + 0x1cc4) <= uVar2) {
      FUN_ram_4802a59e(auStack_30);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return false;
    }
  }
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802a8a8(auStack_40,"name");
  iVar4 = FUN_ram_4802b18e(auStack_40,"plain");
  iVar3 = DAT_ram_4ff5cbe8;
  iVar7 = DAT_ram_4ff5cbdc;
  if ((iVar4 == 0) ||
     (iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar4 + 0xcc2) == '\0')) {
    iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(int *)(iVar4 + 0x1cc4) != 0) {
      puVar1 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
      uVar2 = 0;
      do {
        iVar5 = FUN_ram_4802b18e(auStack_40,*puVar1);
        if (iVar5 != 0) {
          FUN_ram_4802a8a8(auStack_30,*(undefined4 *)(iVar3 + (iVar7 * 0x3a8 + uVar2) * 8 + 0xcc8));
          goto LAB_ram_4803714a;
        }
        uVar2 = uVar2 + 1;
        puVar1 = puVar1 + 2;
      } while (uVar2 < *(uint *)(iVar4 + 0x1cc4));
    }
    FUN_ram_4802a8a8(auStack_30,&DAT_ram_481df390);
  }
  else {
    puVar6 = *(undefined1 **)(iVar4 + 0x43c);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_ram_481df390;
    }
    FUN_ram_4802a888(auStack_30,puVar6,*(undefined4 *)(iVar4 + 0x438));
  }
LAB_ram_4803714a:
  FUN_ram_4802ad2c(param_1,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802a59e(auStack_40);
  FUN_ram_4802b84a(param_1);
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    uVar2 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) == 0) goto LAB_ram_4803717e;
  }
  else if ((*param_1 == 0) || (uVar2 = param_1[2], uVar2 == 0)) {
LAB_ram_4803717e:
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return false;
  }
  return uVar2 < 0x19;
}


