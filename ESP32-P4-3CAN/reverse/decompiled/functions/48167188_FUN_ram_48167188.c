/* Firmware entry: 0x48167188 */

undefined8 FUN_ram_48167188(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(uint *)(param_1 + 0x80) < 3) {
    return 0xffffffffffffffff;
  }
  *(undefined4 *)(param_1 + 0x80) = 4;
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 4);
  *(undefined4 *)(*(int *)(param_1 + 0x24) + 8) = 0xffffffff;
  do {
    puVar2 = (undefined4 *)FUN_ram_4819bf88();
    *puVar2 = 0;
    iVar3 = FUN_ram_48193310(*(undefined4 *)(param_1 + 0x1c),*puVar1,*(undefined4 *)(param_1 + 0x8c)
                             ,*(undefined4 *)(param_1 + 0x88));
    puVar1[1] = iVar3;
    if (iVar3 < 1) {
      iVar4 = -1;
      iVar6 = -1;
      if (iVar3 == 0) {
        uVar5 = FUN_ram_4ff44d14(0xffffffff,0xffffffff);
        FUN_ram_4ff44bf0(2,"HTTP_CLIENT","W (%lu) %s: Connection timed out before data was ready!\n"
                         ,uVar5,"HTTP_CLIENT");
        return 0xffffffffffff8ff9;
      }
      goto LAB_ram_481671e6;
    }
    FUN_ram_4818d63e(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),*puVar1);
  } while (*(uint *)(param_1 + 0x80) < 5);
  iVar3 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x80) = 6;
  iVar6 = *(int *)(iVar3 + 0x14);
  iVar4 = *(int *)(iVar3 + 0x10);
  if ((iVar6 < 1) && ((iVar6 != 0 || (iVar4 == 0)))) {
    *(undefined1 *)(iVar3 + 0x2c) = 1;
    return 0;
  }
LAB_ram_481671e6:
  return CONCAT44(iVar6,iVar4);
}


