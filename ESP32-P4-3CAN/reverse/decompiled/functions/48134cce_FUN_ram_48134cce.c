/* Firmware entry: 0x48134cce */

int FUN_ram_48134cce(uint param_1,int param_2,int param_3,int param_4,undefined4 *param_5,
                    undefined4 *param_6,undefined4 *param_7)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((int)param_1 < 0x37) {
    *param_5 = 0;
    param_5[1] = 0;
    *param_6 = 0;
    param_6[1] = 0;
    *param_7 = 0;
    param_7[1] = 0;
    return 0;
  }
  uVar10 = 0x36;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_5c = 0;
  iVar7 = 0;
LAB_ram_48134d10:
  if (param_2 != 0) goto LAB_ram_48134e0a;
  if (param_3 == 0) goto LAB_ram_48134e56;
LAB_ram_48134d18:
  do {
    if ((int)uVar10 < 0x40) {
      uVar3 = uVar10 & 0x1f;
      uVar6 = 1 << uVar3;
      do {
        if ((*(uint *)(param_3 + 4) & uVar6) != 0) goto LAB_ram_48134d36;
        if (param_4 == 0) {
          uVar10 = uVar10 + 1;
          if (param_1 == uVar10) goto LAB_ram_48134dbe;
          if (param_2 == 0) goto LAB_ram_48134d18;
        }
        else {
          if ((uVar6 & *(uint *)(param_4 + 4)) != 0) goto LAB_ram_48134d36;
          uVar10 = uVar10 + 1;
          if (param_1 == uVar10) goto LAB_ram_48134dbe;
          if (param_2 == 0) goto LAB_ram_48134ebe;
        }
LAB_ram_48134e0a:
        if ((int)uVar10 < 0x40) goto LAB_ram_48134e18;
        while( true ) {
          do {
            uVar10 = uVar10 + 1;
            if (param_1 == uVar10) goto LAB_ram_48134dbe;
          } while (0x3f < (int)uVar10);
LAB_ram_48134e18:
          uVar3 = uVar10 & 0x1f;
          uVar6 = 1 << uVar3;
          if ((*(uint *)(param_2 + 4) & uVar6) != 0) {
            uVar4 = FUN_ram_4814e762();
            iVar5 = FUN_ram_48134bb6(uVar10);
            if (iVar5 == 0) goto LAB_ram_48134e46;
            sVar1 = *(short *)(iVar5 + 8);
            sVar2 = *(short *)(iVar5 + 10);
            iVar9 = *(int *)(iVar5 + 4);
            sVar8 = *(short *)(iVar5 + 0xc);
            FUN_ram_4814e79e(uVar4);
            goto LAB_ram_48134d6a;
          }
          if (param_3 != 0) break;
          if ((param_4 != 0) && ((uVar6 & *(uint *)(param_4 + 4)) != 0)) {
            uVar4 = FUN_ram_4814e762();
            iVar5 = FUN_ram_48134bb6(uVar10);
            goto joined_r0x48134e42;
          }
        }
      } while( true );
    }
    uVar10 = uVar10 + 1;
  } while (param_1 != uVar10);
  goto LAB_ram_48134dbe;
LAB_ram_48134ebe:
  if (param_3 == 0) goto LAB_ram_48134e5c;
  goto LAB_ram_48134d18;
LAB_ram_48134e5c:
  if (0x3f < (int)uVar10) {
    uVar10 = uVar10 + 1;
    if (param_1 == uVar10) goto LAB_ram_48134dbe;
LAB_ram_48134e56:
    if (param_4 == 0) goto LAB_ram_48134ed4;
    goto LAB_ram_48134e5c;
  }
  uVar3 = uVar10 & 0x1f;
  if ((1 << uVar3 & *(uint *)(param_4 + 4)) == 0) {
    uVar10 = uVar10 + 1;
    if (param_1 == uVar10) goto LAB_ram_48134dbe;
    goto LAB_ram_48134e5c;
  }
LAB_ram_48134d36:
  uVar4 = FUN_ram_4814e762();
  iVar5 = FUN_ram_48134bb6(uVar10);
joined_r0x48134e42:
  if (iVar5 == 0) {
LAB_ram_48134e46:
    FUN_ram_4814e79e(uVar4);
    return -1;
  }
  sVar1 = *(short *)(iVar5 + 8);
  iVar9 = *(int *)(iVar5 + 4);
  sVar2 = *(short *)(iVar5 + 10);
  sVar8 = *(short *)(iVar5 + 0xc);
  FUN_ram_4814e79e(uVar4);
  if (param_2 != 0) {
    uVar6 = 1 << uVar3;
LAB_ram_48134d6a:
    if (((*(uint *)(param_2 + 4) & uVar6) != 0) && ((iVar9 != 0 || (0 < sVar1)))) {
      iVar7 = iVar7 + 1;
      uStack_5c = uStack_5c | uVar6;
    }
  }
  if (((param_3 != 0) && ((*(uint *)(param_3 + 4) & 1 << uVar3) != 0)) && (sVar2 != 0)) {
    iVar7 = iVar7 + 1;
    uStack_54 = uStack_54 | 1 << uVar3;
  }
  if (((param_4 != 0) && ((*(uint *)(param_4 + 4) & 1 << uVar3) != 0)) && (sVar8 != 0)) {
    iVar7 = iVar7 + 1;
    uStack_58 = uStack_58 | 1 << uVar3;
  }
  uVar10 = uVar10 + 1;
  FUN_ram_48134a50(iVar5);
  if (param_1 == uVar10) goto LAB_ram_48134dbe;
  goto LAB_ram_48134d10;
  while (uVar10 = uVar10 + 2, param_1 != uVar10) {
LAB_ram_48134ed4:
    if (param_1 == uVar10 + 1) break;
  }
LAB_ram_48134dbe:
  *param_5 = 0;
  param_5[1] = uStack_5c;
  *param_6 = 0;
  param_6[1] = uStack_54;
  *param_7 = 0;
  param_7[1] = uStack_58;
  if (-1 < iVar7) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/sockets.c",0x796,"lwip_selscan","nready >= 0")
  ;
}


