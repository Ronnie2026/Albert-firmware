/* Firmware entry: 0x480f6a02 */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_480f6a02(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short *psVar6;
  undefined4 *puVar7;
  short sVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_50;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar9 = &local_50;
  local_50._0_2_ = 0;
  memset((undefined2 *)((int)&local_50 + 2),0,0x3c);
  psVar6 = (short *)((int)&local_50 + 2);
  sVar8 = 5;
  do {
    *psVar6 = sVar8;
    sVar8 = sVar8 + 5;
    psVar6 = psVar6 + 1;
  } while (psVar6 != (short *)((int)&uStack_14 + 2));
  iVar3 = FUN_ram_4804210e(param_1,&local_50);
  if (iVar3 != 2) {
    if (iVar3 == 0) {
      FUN_ram_480346c0(&local_50,param_2);
      uVar2 = FUN_ram_4807df90(param_1,&local_50);
      if (uVar2 == 0) goto LAB_ram_480f6ad6;
    }
    else {
      uVar2 = (uint)(iVar3 == 1);
    }
    uVar1 = (undefined1)uVar2;
    iVar3 = FUN_ram_480f66c0(&DAT_ram_4ff60e20,&local_50,0);
    if (iVar3 != 0) {
      if ((param_1 != DAT_ram_4ff6dd38) &&
         (DAT_ram_4ff47e5c = DAT_ram_4ff47e5c + 1, DAT_ram_4ff47e5c == 0)) {
        DAT_ram_4ff47e5c = 1;
      }
      puVar7 = &DAT_ram_4ff5c4c4;
      DAT_ram_4ff6dd38 = param_1;
      do {
        uVar11 = puVar9[1];
        uVar10 = puVar9[2];
        uVar4 = puVar9[3];
        uVar5 = puVar9[4];
        *puVar7 = *puVar9;
        puVar7[1] = uVar11;
        puVar7[2] = uVar10;
        puVar7[3] = uVar4;
        puVar7[4] = uVar5;
        puVar9 = puVar9 + 5;
        puVar7 = puVar7 + 5;
      } while (puVar9 != &uStack_14);
      *(undefined2 *)puVar7 = *(undefined2 *)puVar9;
      goto LAB_ram_480f6ada;
    }
  }
LAB_ram_480f6ad6:
  uVar1 = 0;
  iVar3 = 0;
LAB_ram_480f6ada:
  DAT_ram_4ff6dd35 = uVar1;
  DAT_ram_4ff6dd36 = (char)iVar3;
  return;
}


