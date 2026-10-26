/* Firmware entry: 0x480373e6 */

int FUN_ram_480373e6(ulong *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  char *local_40 [2];
  int iStack_38;
  byte bStack_31;
  char *apcStack_30 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_1 = 0;
  FUN_ram_4802a8a8(apcStack_30,"id");
  iVar8 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar8 + 0x1cc4) == 0) {
    FUN_ram_4802a59e(apcStack_30);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0;
  }
  puVar2 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
  uVar9 = 0;
  while( true ) {
    uVar9 = uVar9 + 1;
    iVar3 = FUN_ram_4802b18e(apcStack_30,*puVar2);
    if (iVar3 != 0) break;
    puVar2 = puVar2 + 2;
    if (*(uint *)(iVar8 + 0x1cc4) <= uVar9) {
      FUN_ram_4802a59e(apcStack_30);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
  }
  FUN_ram_4802a59e(apcStack_30);
  FUN_ram_4802a8a8(apcStack_30,"id");
  iVar4 = FUN_ram_4802b18e(apcStack_30,"plain");
  iVar1 = DAT_ram_4ff5cbe8;
  iVar8 = DAT_ram_4ff5cbdc;
  if ((iVar4 == 0) ||
     (iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar4 + 0xcc2) == '\0')) {
    iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(int *)(iVar4 + 0x1cc4) != 0) {
      puVar2 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
      uVar9 = 0;
      do {
        iVar5 = FUN_ram_4802b18e(apcStack_30,*puVar2);
        if (iVar5 != 0) {
          FUN_ram_4802a8a8(local_40,*(undefined4 *)(iVar1 + (iVar8 * 0x3a8 + uVar9) * 8 + 0xcc8));
          goto LAB_ram_4803754a;
        }
        uVar9 = uVar9 + 1;
        puVar2 = puVar2 + 2;
      } while (uVar9 < *(uint *)(iVar4 + 0x1cc4));
    }
    FUN_ram_4802a8a8(local_40,&DAT_ram_481df390);
LAB_ram_4803754a:
    FUN_ram_4802a59e(apcStack_30);
  }
  else {
    puVar7 = *(undefined1 **)(iVar4 + 0x43c);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_ram_481df390;
    }
    FUN_ram_4802a888(local_40,puVar7,*(undefined4 *)(iVar4 + 0x438));
    FUN_ram_4802a59e(apcStack_30);
  }
  if ((char)bStack_31 < '\0') {
    local_40[0] = (char *)local_40;
    if ((bStack_31 & 0x7f) != 0) goto LAB_ram_48037560;
  }
  else if ((local_40[0] != (char *)0x0) && (iStack_38 != 0)) {
LAB_ram_48037560:
    apcStack_30[0] = (char *)0x0;
    uVar6 = strtoul(local_40[0],apcStack_30,10);
    if ((apcStack_30[0] != (char *)0x0) && ((*apcStack_30[0] == '\0' && (uVar6 != 0)))) {
      *param_1 = uVar6;
      goto LAB_ram_480374ca;
    }
  }
  iVar3 = 0;
LAB_ram_480374ca:
  FUN_ram_4802a59e(local_40);
  return iVar3;
}


