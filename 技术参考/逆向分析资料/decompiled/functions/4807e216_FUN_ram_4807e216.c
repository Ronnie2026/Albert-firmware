/* Firmware entry: 0x4807e216 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_ram_4807e216(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined4 *puVar6;
  short sVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uStack_50;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == param_2) {
    return 1;
  }
  if (((DAT_ram_4ff6dd38 != param_1) || (DAT_ram_4ff6dd36 == '\0')) || (DAT_ram_4ff6dd35 == '\0')) {
    return 0;
  }
  puVar6 = &uStack_50;
  uStack_50._0_2_ = 0;
  memset((undefined2 *)((int)&uStack_50 + 2),0,0x3c);
  psVar5 = (short *)((int)&uStack_50 + 2);
  sVar7 = 5;
  do {
    *psVar5 = sVar7;
    sVar7 = sVar7 + 5;
    psVar5 = psVar5 + 1;
  } while (psVar5 != (short *)((int)&uStack_14 + 2));
  iVar1 = FUN_ram_4804210e(param_2,&uStack_50);
  if (iVar1 == 2) {
LAB_ram_4807e2ea:
    uVar2 = 0;
  }
  else {
    if (iVar1 == 0) {
      FUN_ram_480346c0(&uStack_50,param_3);
      iVar1 = FUN_ram_4807df90(param_2,&uStack_50);
      if (iVar1 == 0) goto LAB_ram_4807e2ea;
    }
    puVar8 = &DAT_ram_4ff5c484;
    DAT_ram_4ff6dd30 = param_2;
    do {
      uVar9 = puVar6[1];
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      uVar4 = puVar6[4];
      *puVar8 = *puVar6;
      puVar8[1] = uVar9;
      puVar8[2] = uVar2;
      puVar8[3] = uVar3;
      puVar8[4] = uVar4;
      puVar6 = puVar6 + 5;
      puVar8 = puVar8 + 5;
    } while (puVar6 != &uStack_14);
    *(undefined2 *)puVar8 = *(undefined2 *)puVar6;
    DAT_ram_4ff6dd34 = 1;
    uVar2 = 1;
  }
  return uVar2;
}


