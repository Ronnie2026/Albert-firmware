/* Firmware entry: 0x480b024a */

int FUN_ram_480b024a(undefined4 *param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 unaff_s8;
  byte *pbVar15;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  uint uStack_284;
  byte local_280 [20];
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  byte local_25c [4];
  byte abStack_258 [4];
  byte local_254 [16];
  byte local_244 [4];
  byte abStack_240 [524];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_1[9] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  memset(local_280,0,0x40);
  memset(abStack_240,0,0x200);
  iVar13 = 0x1000;
  if (*(int *)*param_1 == 0) {
    iVar14 = 0;
    uVar12 = 0;
    uVar6 = 1;
    goto joined_r0x480b0300;
  }
  uVar12 = 0;
  uVar11 = 0;
  iVar14 = 0;
  iVar2 = FUN_ram_4812e734(*(int *)*param_1,0x1000,local_280);
  if (iVar2 != 0) goto LAB_ram_480b0322;
  do {
    uStack_28 = unaff_s8;
    pbVar15 = local_280;
    pbVar7 = pbVar15;
    while (bVar1 = *pbVar7, pbVar7 = pbVar7 + 1, uVar6 = uVar11, unaff_s8 = uStack_28, bVar1 == 0xff
          ) {
      if (abStack_240 == pbVar7) goto joined_r0x480b0300;
    }
    pbVar7 = local_280;
    uVar8 = 0;
    uVar12 = 0;
    do {
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      uVar3 = uVar8 & 0x1f;
      uVar8 = uVar8 + 8;
      uVar12 = uVar12 | (uint)bVar1 << uVar3;
    } while (uVar8 != 0x20);
    if (uVar12 == 0x31535350) {
      pbVar7 = local_280 + 4;
      uVar8 = 0;
      uVar12 = 0;
      do {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        uVar3 = uVar8 & 0x1f;
        uVar8 = uVar8 + 8;
        uVar12 = uVar12 | (uint)bVar1 << uVar3;
      } while (uVar8 != 0x20);
      if (uVar12 != 1) goto LAB_ram_480b03c2;
      pbVar7 = local_244;
      uVar8 = 0;
      uVar12 = 0;
      do {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        uVar3 = uVar8 & 0x1f;
        uVar8 = uVar8 + 8;
        uVar12 = uVar12 | (uint)bVar1 << uVar3;
      } while (uVar8 != 0x20);
      if (uVar12 != 0xa43bc751) goto LAB_ram_480b03c2;
      uStack_2c = unaff_s9;
      pbVar7 = local_254;
      uVar8 = 0;
      uVar12 = 0;
      do {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        uVar3 = uVar8 & 0x1f;
        uVar8 = uVar8 + 8;
        uVar12 = uVar12 | (uint)bVar1 << uVar3;
      } while (uVar8 != 0x20);
      pbVar7 = local_280;
      uVar8 = 0xffffffff;
      do {
        iVar2 = 8;
        uVar8 = uVar8 ^ *pbVar7;
        do {
          iVar2 = iVar2 + -1;
          uVar8 = uVar8 >> 1 ^ -(uVar8 & 1) & 0xedb88320;
        } while (iVar2 != 0);
        pbVar7 = pbVar7 + 1;
      } while (local_254 != pbVar7);
      unaff_s9 = uStack_2c;
      if (~uVar8 == uVar12) {
        uStack_30 = unaff_s10;
        uStack_34 = unaff_s11;
        pbVar7 = local_25c;
        uVar12 = 0;
        uVar8 = 0;
        do {
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          uVar3 = uVar12 & 0x1f;
          uVar12 = uVar12 + 8;
          uVar8 = uVar8 | (uint)bVar1 << uVar3;
        } while (uVar12 != 0x20);
        pbVar7 = local_280 + 8;
        uVar12 = 0;
        uVar3 = 0;
        uVar4 = 0;
        do {
          bVar1 = *pbVar7;
          if ((int)(uVar12 - 0x20) < 0) {
            uVar9 = (uint)(byte)((bVar1 >> 1) >> (0x1f - uVar12 & 0x1f));
            uVar10 = (uint)bVar1 << (uVar12 & 0x1f);
          }
          else {
            uVar10 = 0;
            uVar9 = (uint)bVar1 << (uVar12 - 0x20 & 0x1f);
          }
          uVar3 = uVar3 | uVar10;
          uVar4 = uVar9 | uVar4;
          uVar12 = uVar12 + 8;
          pbVar7 = pbVar7 + 1;
        } while (uVar12 != 0x40);
        pbVar7 = local_280 + 0x10;
        uVar12 = 0;
        uVar9 = 0;
        do {
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          uVar10 = uVar12 & 0x1f;
          uVar12 = uVar12 + 8;
          uVar9 = uVar9 | (uint)bVar1 << uVar10;
        } while (uVar12 != 0x20);
        uStack_28c = uStack_264;
        uStack_288 = uStack_260;
        uStack_294 = uStack_26c;
        uStack_290 = uStack_268;
        if (uVar8 - 1 < 0x30000) {
          uVar12 = 1;
          unaff_s10 = uStack_30;
          unaff_s11 = uStack_34;
          if (uVar3 != 0 || uVar4 != 0) {
            uStack_284 = uVar9;
            uVar12 = FUN_ram_48075b92(&uStack_294);
            if (uVar12 == 0) goto LAB_ram_480b054e;
            uVar9 = 0;
            uVar10 = 0xffffffff;
            do {
              uVar5 = uVar8 - uVar9;
              uVar6 = uVar12;
              unaff_s8 = uStack_28;
              unaff_s9 = uStack_2c;
              unaff_s10 = uStack_30;
              unaff_s11 = uStack_34;
              if (*(int *)*param_1 == 0) goto joined_r0x480b0300;
              if (0x200 < uVar5) {
                uVar5 = 0x200;
              }
              iVar2 = FUN_ram_4812e734(*(int *)*param_1,iVar13 + 0x40 + uVar9,abStack_240);
              unaff_s8 = uStack_28;
              unaff_s9 = uStack_2c;
              unaff_s10 = uStack_30;
              unaff_s11 = uStack_34;
              if (iVar2 != 0) goto joined_r0x480b0300;
              uVar10 = FUN_ram_48078f8e(uVar10,abStack_240,uVar5);
              uVar9 = uVar9 + uVar5;
            } while (uVar9 < uVar8);
            uVar6 = 0;
            uVar9 = 0;
            do {
              pbVar7 = pbVar15 + 0x28;
              pbVar15 = pbVar15 + 1;
              uVar5 = uVar6 & 0x1f;
              uVar6 = uVar6 + 8;
              uVar9 = uVar9 | (uint)*pbVar7 << uVar5;
            } while (uVar6 != 0x20);
            uVar6 = uVar11;
            unaff_s8 = uStack_28;
            unaff_s9 = uStack_2c;
            unaff_s10 = uStack_30;
            unaff_s11 = uStack_34;
            if ((~uVar10 == uVar9) &&
               (((uint)param_1[7] < uVar4 || ((param_1[7] == uVar4 && ((uint)param_1[6] < uVar3)))))
               ) {
              param_1[1] = uStack_294;
              param_1[2] = uStack_290;
              param_1[3] = uStack_28c;
              param_1[4] = uStack_288;
              param_1[5] = uStack_284;
              param_1[6] = uVar3;
              param_1[8] = uVar8;
              param_1[7] = uVar4;
              param_1[9] = iVar14;
            }
          }
        }
        else {
LAB_ram_480b054e:
          uVar12 = 1;
          unaff_s8 = uStack_28;
          unaff_s9 = uStack_2c;
          unaff_s10 = uStack_30;
          unaff_s11 = uStack_34;
        }
      }
      else {
        uVar12 = 1;
      }
    }
    else {
LAB_ram_480b03c2:
      uVar12 = 1;
    }
joined_r0x480b0300:
    while( true ) {
      uVar11 = uVar6;
      if (iVar14 == 1) {
        if (uVar11 == 0) {
          if ((int)param_1[9] < 0) {
            return (uVar12 & 0x7f) << 1;
          }
          if (param_2 == 0) {
            return 4;
          }
          if (param_3 <= (uint)param_1[8]) {
            return 4;
          }
          if ((((*(int *)*param_1 != 0) &&
               (uVar12 = param_1[9] * 0x31000 + 0x1040, uVar12 < 0x63001)) &&
              ((uint)param_1[8] <= 0x63000 - uVar12)) &&
             (iVar13 = FUN_ram_4812e734(*(int *)*param_1,uVar12,param_2), iVar13 == 0)) {
            *(undefined1 *)(param_1[8] + param_2) = 0;
            return 1;
          }
        }
        return 3;
      }
      iVar14 = 1;
      if (*(int *)*param_1 == 0) {
        return 3;
      }
      iVar13 = iVar13 + 0x31000;
      iVar2 = FUN_ram_4812e734(*(int *)*param_1,iVar13,local_280);
      if (iVar2 == 0) break;
LAB_ram_480b0322:
      uVar6 = 1;
    }
  } while( true );
}


