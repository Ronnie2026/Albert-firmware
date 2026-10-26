/* Firmware entry: 0x48006f5e */

undefined4
FUN_ram_48006f5e(int param_1,uint *param_2,uint *param_3,uint *param_4,undefined4 param_5,
                undefined4 param_6,int *param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int aiStack_34 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = 5;
  if (param_1 < 6) {
    iVar2 = param_1;
  }
  *param_7 = 0;
  uVar1 = 0;
  if (0 < param_1) {
    do {
      uVar7 = 1 << (uVar1 & 0x1f);
      if (((((*param_2 & uVar7) != 0) || ((*param_3 & uVar7) != 0)) || ((uVar7 & *param_4) != 0)) &&
         (iVar3 = FUN_ram_4800c594(uVar1), iVar3 == 0)) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0x103;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < iVar2);
  }
  puVar4 = (undefined4 *)FUN_ram_4ff206d8(0x2c,0x1000);
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[5] = *param_2;
    uVar1 = param_2[1];
    puVar4[2] = param_2;
    puVar4[3] = param_3;
    puVar4[6] = uVar1;
    uVar1 = *param_3;
    puVar4[4] = param_4;
    *puVar4 = param_5;
    puVar4[7] = uVar1;
    uVar1 = param_3[1];
    puVar4[1] = param_6;
    puVar4[8] = uVar1;
    puVar4[9] = *param_4;
    puVar4[10] = param_4[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_4[1] = 0;
    *param_4 = 0;
    uVar5 = FUN_ram_4800c5cc();
    FUN_ram_4ff3ec14(uVar5,0xffffffff);
    if (0 < param_1) {
      uVar1 = puVar4[5];
      piVar9 = &DAT_ram_4ff5a000;
      uVar7 = 0;
      do {
        uVar8 = 1 << (uVar7 & 0x1f);
        if ((((uVar8 & uVar1) != 0) || ((puVar4[7] & uVar8) != 0)) || ((uVar8 & puVar4[9]) != 0)) {
          iVar3 = *piVar9;
          if (iVar3 == 0) {
            FUN_ram_4800c5b2(uVar7,FUN_ram_4800716a);
            iVar3 = *piVar9;
            uVar1 = puVar4[5];
          }
          *piVar9 = iVar3 + 1;
        }
        uVar7 = uVar7 + 1;
        piVar9 = piVar9 + 1;
      } while ((int)uVar7 < iVar2);
      uVar7 = 0;
      while( true ) {
        uVar8 = 1 << (uVar7 & 0x1f);
        if ((((uVar8 & uVar1) != 0) && (iVar3 = FUN_ram_4800b920(uVar7,aiStack_34), iVar3 == 0)) &&
           (aiStack_34[0] != 0)) {
          uVar5 = *puVar4;
          uVar6 = puVar4[1];
          *param_2 = *param_2 | uVar8;
          FUN_ram_4800ea68(uVar5,uVar6);
        }
        uVar7 = uVar7 + 1;
        if (iVar2 <= (int)uVar7) break;
        uVar1 = puVar4[5];
      }
    }
    FUN_ram_4ff3ec14(&DAT_ram_4ff47e24,0xffffffff);
    iVar2 = DAT_ram_4ff6daf4 + 1;
    iVar3 = FUN_ram_4ff208e6(DAT_ram_4ff6daf8,iVar2 * 4,0x1000);
    if (iVar3 != 0) {
      DAT_ram_4ff6daf8 = iVar3;
      *(undefined4 **)(iVar3 + DAT_ram_4ff6daf4 * 4) = puVar4;
      DAT_ram_4ff6daf4 = iVar2;
      FUN_ram_4ff3ee10(&DAT_ram_4ff47e24);
      FUN_ram_4800c5cc();
      FUN_ram_4ff3ee10();
      *param_7 = (int)puVar4;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    FUN_ram_4ff3ee10(&DAT_ram_4ff47e24);
    FUN_ram_4800c5cc();
    FUN_ram_4ff3ee10();
    thunk_FUN_ram_4ff209c6(puVar4);
  }
  return 0x101;
}


