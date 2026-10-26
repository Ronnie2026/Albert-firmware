/* Firmware entry: 0x4813678a */

uint FUN_ram_4813678a(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                     uint param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined2 uStack_46;
  int aiStack_44 [6];
  undefined1 uStack_2c;
  char cStack_28;
  undefined2 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)FUN_ram_48134b36();
  if (piVar1 == (int *)0x0) {
LAB_ram_481368fa:
    puVar4 = (undefined4 *)FUN_ram_4819bf88();
    *puVar4 = 9;
    return 0xffffffff;
  }
  if ((uint *)*piVar1 == (uint *)0x0) {
    FUN_ram_48134a50();
    goto LAB_ram_481368fa;
  }
  uVar6 = *(uint *)*piVar1;
  if ((uVar6 & 0xf0) == 0x10) {
    FUN_ram_48134a50();
    uVar6 = FUN_ram_48136954(param_1,param_2,param_3,param_4);
    return uVar6;
  }
  if (0xffff < param_3) {
    puVar4 = (undefined4 *)FUN_ram_4819bf88();
    *puVar4 = 0x7a;
    FUN_ram_48134a50(piVar1);
    return 0xffffffff;
  }
  if (param_5 == 0) {
    if (param_6 != 0) goto LAB_ram_481367ee;
    aiStack_44[1] = 0;
    aiStack_44[0] = 0;
    uStack_46 = 0;
    if ((uVar6 & 8) == 0) {
      aiStack_44[2] = 0;
      cStack_28 = '\0';
      aiStack_44[5] = 0;
      aiStack_44[4] = 0;
      aiStack_44[3] = 0;
      uStack_2c = 0;
    }
    else {
      cStack_28 = '\x06';
      aiStack_44[2] = 0;
      aiStack_44[3] = 0;
      aiStack_44[4] = 0;
      aiStack_44[5] = 0;
      uStack_2c = 0;
    }
  }
  else {
    if ((((param_6 != 0x10) && (param_6 != 0x1c)) || ((*(byte *)(param_5 + 1) & 0xf7) != 2)) ||
       ((param_5 & 3) != 0)) {
LAB_ram_481367ee:
      iVar2 = FUN_ram_481517ce(0xfffffff0);
      if (iVar2 != 0) {
        puVar4 = (undefined4 *)FUN_ram_4819bf88();
        uVar5 = FUN_ram_481517ce(0xfffffff0);
        *puVar4 = uVar5;
      }
      goto LAB_ram_481367f8;
    }
    aiStack_44[1] = 0;
    aiStack_44[0] = 0;
    FUN_ram_4813476e(param_5,aiStack_44 + 2,&uStack_46);
  }
  uStack_24 = uStack_46;
  iVar2 = FUN_ram_4815181a(aiStack_44,param_3 & 0xffff);
  if (iVar2 == 0) {
    FUN_ram_4815188e(aiStack_44);
    iVar3 = FUN_ram_481517ce(0xffffffff);
    iVar2 = -1;
    if (iVar3 == 0) {
LAB_ram_481367f8:
      FUN_ram_48134a50(piVar1);
      return 0xffffffff;
    }
  }
  else {
    FUN_ram_4ff45158(*(undefined4 *)(aiStack_44[0] + 4),param_2,param_3);
    if (((cStack_28 == '\x06') && (aiStack_44[2] == 0 && aiStack_44[3] == 0)) &&
       (aiStack_44[4] == -0x10000)) {
      aiStack_44[2] = aiStack_44[5];
      cStack_28 = '\0';
    }
    iVar2 = FUN_ram_4814f3ec(*piVar1,aiStack_44);
    FUN_ram_4815188e(aiStack_44);
    iVar3 = FUN_ram_481517ce(iVar2);
    if (iVar3 == 0) goto LAB_ram_4813685e;
  }
  puVar4 = (undefined4 *)FUN_ram_4819bf88();
  uVar5 = FUN_ram_481517ce(iVar2);
  *puVar4 = uVar5;
LAB_ram_4813685e:
  FUN_ram_48134a50(piVar1);
  if (iVar2 == 0) {
    return param_3;
  }
  return 0xffffffff;
}


