/* Firmware entry: 0x4813630a */

undefined4 FUN_ram_4813630a(undefined4 param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined1 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar3 = (int *)FUN_ram_48134b36();
  if (piVar3 == (int *)0x0) {
LAB_ram_48136464:
    puVar2 = (undefined4 *)FUN_ram_4819bf88();
    *puVar2 = 9;
    return 0xffffffff;
  }
  if ((uint *)*piVar3 == (uint *)0x0) {
    FUN_ram_48134a50();
    goto LAB_ram_48136464;
  }
  uVar8 = *(uint *)*piVar3;
  piVar4 = (int *)FUN_ram_48134b36(param_1);
  if (piVar4 == (int *)0x0) {
LAB_ram_48136474:
    puVar2 = (undefined4 *)FUN_ram_4819bf88();
    *puVar2 = 9;
  }
  else {
    if (*piVar4 == 0) {
      FUN_ram_48134a50();
      goto LAB_ram_48136474;
    }
    puVar2 = &DAT_ram_4ff6c7f4;
    do {
      while ((int *)*puVar2 != piVar4) {
        puVar2 = puVar2 + 3;
        if (puVar2 == &DAT_ram_4ff6c86c) goto LAB_ram_481363a8;
      }
      uStack_3c = 0;
      uStack_24 = 0;
      iVar5 = *piVar4;
      local_50 = puVar2[2];
      uStack_38 = puVar2[1];
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2[1] = 0;
      puVar2 = puVar2 + 3;
      uStack_44 = 0;
      uStack_48 = 0;
      uStack_4c = 0;
      uStack_40 = 0;
      uStack_2c = 0;
      uStack_30 = 0;
      uStack_34 = 0;
      uStack_28 = 0;
      FUN_ram_4814f5ec(iVar5,&local_50,&uStack_38,1);
    } while (puVar2 != &DAT_ram_4ff6c86c);
LAB_ram_481363a8:
    FUN_ram_48134a50(piVar4);
  }
  piVar4 = (int *)FUN_ram_48134b36(param_1);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 != 0) {
      puVar2 = &DAT_ram_4ff6c6dc;
      do {
        while ((int *)*puVar2 != piVar4) {
          puVar2 = puVar2 + 7;
          if (puVar2 == &DAT_ram_4ff6c7f4) goto LAB_ram_48136428;
        }
        uStack_28 = *(undefined1 *)(puVar2 + 6);
        uVar1 = *(undefined1 *)(puVar2 + 1);
        *(undefined1 *)(puVar2 + 6) = 0;
        *(undefined1 *)(puVar2 + 1) = 0;
        uStack_24 = 6;
        iVar5 = *piVar4;
        uStack_34 = puVar2[3];
        uStack_30 = puVar2[4];
        uStack_2c = puVar2[5];
        uStack_38 = puVar2[2];
        *puVar2 = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[2] = 0;
        puVar2 = puVar2 + 7;
        FUN_ram_4814f642(iVar5,&uStack_38,uVar1,1);
      } while (puVar2 != &DAT_ram_4ff6c7f4);
LAB_ram_48136428:
      FUN_ram_48134a50(piVar4);
      goto LAB_ram_4813642e;
    }
    FUN_ram_48134a50();
  }
  puVar2 = (undefined4 *)FUN_ram_4819bf88();
  *puVar2 = 9;
LAB_ram_4813642e:
  iVar5 = FUN_ram_4814efe4(*piVar3);
  if (iVar5 == 0) {
    FUN_ram_48134f28(piVar3,(uVar8 & 0xf0) == 0x10);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0;
  }
  iVar6 = FUN_ram_481517ce();
  if (iVar6 != 0) {
    puVar2 = (undefined4 *)FUN_ram_4819bf88();
    uVar7 = FUN_ram_481517ce(iVar5);
    *puVar2 = uVar7;
  }
  FUN_ram_48134a50(piVar3);
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return 0xffffffff;
}


