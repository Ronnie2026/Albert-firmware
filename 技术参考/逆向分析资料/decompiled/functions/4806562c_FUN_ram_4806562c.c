/* Firmware entry: 0x4806562c */

undefined4 FUN_ram_4806562c(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_4802b18e(param_3,"plain");
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_2 + 0x4c) + *(int *)(param_2 + 0x40) * 0x1d40;
    if (*(char *)(iVar3 + 0xcc2) != '\0') {
      puVar4 = *(undefined1 **)(iVar3 + 0x43c);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_ram_481df390;
      }
      FUN_ram_4802a888(param_1,puVar4,*(undefined4 *)(iVar3 + 0x438));
      return param_1;
    }
  }
  iVar6 = *(int *)(param_2 + 0x40);
  iVar3 = iVar6 * 0x1d40;
  iVar7 = *(int *)(param_2 + 0x4c);
  iVar5 = iVar7 + iVar3;
  if (*(int *)(iVar5 + 0x1cc4) != 0) {
    puVar1 = (undefined4 *)(iVar3 + 0xcc4 + iVar7);
    uVar2 = 0;
    do {
      iVar3 = FUN_ram_4802b18e(param_3,*puVar1);
      if (iVar3 != 0) {
        puVar4 = *(undefined1 **)(iVar7 + (iVar6 * 0x3a8 + uVar2) * 8 + 0xcc8);
        goto LAB_ram_480656ca;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 2;
    } while (uVar2 < *(uint *)(iVar5 + 0x1cc4));
  }
  puVar4 = &DAT_ram_481df390;
LAB_ram_480656ca:
  FUN_ram_4802a8a8(param_1,puVar4);
  return param_1;
}


