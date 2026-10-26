/* Firmware entry: 0x4813540c */

undefined4 FUN_ram_4813540c(undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  byte bStack_44;
  char cStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined2 uStack_3a;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar2 = (int *)FUN_ram_48134b36();
  if (piVar2 == (int *)0x0) {
LAB_ram_481354f8:
    puVar5 = (undefined4 *)FUN_ram_4819bf88();
    *puVar5 = 9;
    return 0xffffffff;
  }
  if (*piVar2 == 0) {
    FUN_ram_48134a50();
    goto LAB_ram_481354f8;
  }
  iVar3 = FUN_ram_4814f084(*piVar2,&uStack_54,&uStack_56,param_4);
  if (iVar3 != 0) {
    iVar4 = FUN_ram_481517ce();
    if (iVar4 != 0) {
      puVar5 = (undefined4 *)FUN_ram_4819bf88();
      uVar6 = FUN_ram_481517ce(iVar3);
      *puVar5 = uVar6;
    }
    FUN_ram_48134a50(piVar2);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0xffffffff;
  }
  if (((*(uint *)*piVar2 & 8) == 0) || (cStack_40 != '\0')) {
    if ((cStack_40 == '.') || (cStack_40 == '\x06')) goto LAB_ram_48135460;
    uStack_3b = 2;
    uStack_3a = FUN_ram_48137fc8(uStack_56);
    uStack_38 = uStack_54;
    uVar7 = *param_3;
    uVar9 = 0x10;
    uStack_34 = 0;
    uStack_30 = 0;
    uVar8 = 0x10;
    uVar1 = uVar9;
    if (uVar7 < 0x11) goto LAB_ram_48135494;
  }
  else {
    uStack_50 = 0;
    bStack_44 = 0;
    uStack_48 = uStack_54;
    uStack_54 = 0;
    uStack_4c = 0xffff0000;
    cStack_40 = '\x06';
LAB_ram_48135460:
    uStack_3b = 10;
    uStack_3a = FUN_ram_48137fc8(uStack_56);
    uStack_24 = (uint)bStack_44;
    uStack_2c = uStack_4c;
    uVar7 = *param_3;
    uStack_38 = 0;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_28 = uStack_48;
    uVar8 = 0x1c;
    uVar9 = uVar8;
    uVar1 = 0x1c;
    if (uVar7 < 0x1d) goto LAB_ram_48135494;
  }
  uVar7 = uVar1;
  *param_3 = uVar7;
  uVar9 = uVar8;
LAB_ram_48135494:
  uStack_3c = (undefined1)uVar9;
  FUN_ram_4ff45158(param_2,&uStack_3c,uVar7);
  FUN_ram_48134a50(piVar2);
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return 0;
}


