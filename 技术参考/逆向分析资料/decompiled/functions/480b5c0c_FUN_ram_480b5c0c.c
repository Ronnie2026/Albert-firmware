/* Firmware entry: 0x480b5c0c */

/* WARNING: Type propagation algorithm not settling */

int FUN_ram_480b5c0c(undefined4 *param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 unaff_s8;
  byte *pbVar16;
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
  iVar2 = *(int *)*param_1;
  if (iVar2 == 0) {
    uVar14 = 0;
    uVar8 = 1;
    iVar2 = 0;
    unaff_s8 = unaff_s8;
    unaff_s9 = unaff_s9;
    unaff_s10 = unaff_s10;
    unaff_s11 = unaff_s11;
    goto LAB_ram_480b5cbe;
  }
  iVar13 = 0x1000;
  iVar15 = 0;
  uVar14 = 0;
  uVar12 = 0;
  do {
    iVar3 = FUN_ram_4812e734(iVar2,iVar13,local_280,0x40);
    iVar2 = iVar15;
    if (iVar3 == 0) {
      uStack_28 = unaff_s8;
      pbVar16 = local_280;
      pbVar9 = pbVar16;
LAB_ram_480b5cac:
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      uVar8 = uVar12;
      unaff_s8 = uStack_28;
      if (bVar1 == 0xff) break;
      pbVar9 = local_280;
      uVar10 = 0;
      uVar14 = 0;
      do {
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar4 = uVar10 & 0x1f;
        uVar10 = uVar10 + 8;
        uVar14 = uVar14 | (uint)bVar1 << uVar4;
      } while (uVar10 != 0x20);
      if (uVar14 == 0x31535350) {
        pbVar9 = local_280 + 4;
        uVar10 = 0;
        uVar14 = 0;
        do {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          uVar4 = uVar10 & 0x1f;
          uVar10 = uVar10 + 8;
          uVar14 = uVar14 | (uint)bVar1 << uVar4;
        } while (uVar10 != 0x20);
        if (uVar14 != 1) goto LAB_ram_480b5d80;
        pbVar9 = local_244;
        uVar10 = 0;
        uVar14 = 0;
        do {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          uVar4 = uVar10 & 0x1f;
          uVar10 = uVar10 + 8;
          uVar14 = uVar14 | (uint)bVar1 << uVar4;
        } while (uVar10 != 0x20);
        if (uVar14 != 0xa43bc751) goto LAB_ram_480b5d80;
        uStack_2c = unaff_s9;
        pbVar9 = local_254;
        uVar10 = 0;
        uVar14 = 0;
        do {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          uVar4 = uVar10 & 0x1f;
          uVar10 = uVar10 + 8;
          uVar14 = uVar14 | (uint)bVar1 << uVar4;
        } while (uVar10 != 0x20);
        pbVar9 = local_280;
        uVar10 = 0xffffffff;
        do {
          iVar3 = 8;
          uVar10 = uVar10 ^ *pbVar9;
          do {
            iVar3 = iVar3 + -1;
            uVar10 = uVar10 >> 1 ^ -(uVar10 & 1) & 0xedb88320;
          } while (iVar3 != 0);
          pbVar9 = pbVar9 + 1;
        } while (local_254 != pbVar9);
        unaff_s9 = uStack_2c;
        if (~uVar10 == uVar14) {
          uStack_34 = unaff_s11;
          uStack_30 = unaff_s10;
          pbVar9 = local_25c;
          uVar14 = 0;
          uVar10 = 0;
          do {
            bVar1 = *pbVar9;
            pbVar9 = pbVar9 + 1;
            uVar4 = uVar14 & 0x1f;
            uVar14 = uVar14 + 8;
            uVar10 = uVar10 | (uint)bVar1 << uVar4;
          } while (uVar14 != 0x20);
          pbVar9 = local_280 + 8;
          uVar14 = 0;
          uVar4 = 0;
          uVar5 = 0;
          do {
            bVar1 = *pbVar9;
            if ((int)(uVar14 - 0x20) < 0) {
              uVar7 = (uint)(byte)((bVar1 >> 1) >> (0x1f - uVar14 & 0x1f));
              uVar11 = (uint)bVar1 << (uVar14 & 0x1f);
            }
            else {
              uVar11 = 0;
              uVar7 = (uint)bVar1 << (uVar14 - 0x20 & 0x1f);
            }
            uVar4 = uVar4 | uVar11;
            uVar5 = uVar5 | uVar7;
            uVar14 = uVar14 + 8;
            pbVar9 = pbVar9 + 1;
          } while (uVar14 != 0x40);
          pbVar9 = local_280 + 0x10;
          uVar14 = 0;
          uVar7 = 0;
          do {
            bVar1 = *pbVar9;
            pbVar9 = pbVar9 + 1;
            uVar11 = uVar14 & 0x1f;
            uVar14 = uVar14 + 8;
            uVar7 = uVar7 | (uint)bVar1 << uVar11;
          } while (uVar14 != 0x20);
          uStack_28c = uStack_264;
          uStack_288 = uStack_260;
          uStack_294 = uStack_26c;
          uStack_290 = uStack_268;
          if (uVar10 - 1 < 0x30000) {
            uVar14 = 1;
            unaff_s10 = uStack_30;
            unaff_s11 = uStack_34;
            if (uVar4 != 0 || uVar5 != 0) {
              uStack_284 = uVar7;
              uVar14 = FUN_ram_48075b92(&uStack_294);
              if (uVar14 == 0) goto LAB_ram_480b5ef8;
              uVar11 = 0;
              uVar7 = 0xffffffff;
              while( true ) {
                uVar6 = uVar10 - uVar11;
                uVar8 = uVar14;
                unaff_s8 = uStack_28;
                unaff_s9 = uStack_2c;
                unaff_s10 = uStack_30;
                unaff_s11 = uStack_34;
                if (*(int *)*param_1 == 0) break;
                if (0x200 < uVar6) {
                  uVar6 = 0x200;
                }
                iVar3 = FUN_ram_4812e734(*(int *)*param_1,uVar11 + iVar13 + 0x40,abStack_240);
                unaff_s8 = uStack_28;
                unaff_s9 = uStack_2c;
                unaff_s10 = uStack_30;
                unaff_s11 = uStack_34;
                if (iVar3 != 0) break;
                uVar7 = FUN_ram_48078f8e(uVar7,abStack_240,uVar6);
                uVar11 = uVar11 + uVar6;
                if (uVar10 <= uVar11) {
                  uVar8 = 0;
                  uVar11 = 0;
                  do {
                    pbVar9 = pbVar16 + 0x28;
                    pbVar16 = pbVar16 + 1;
                    uVar6 = uVar8 & 0x1f;
                    uVar8 = uVar8 + 8;
                    uVar11 = uVar11 | (uint)*pbVar9 << uVar6;
                  } while (uVar8 != 0x20);
                  uVar8 = uVar12;
                  unaff_s8 = uStack_28;
                  unaff_s9 = uStack_2c;
                  unaff_s10 = uStack_30;
                  unaff_s11 = uStack_34;
                  if ((~uVar7 == uVar11) &&
                     (((uint)param_1[7] < uVar5 ||
                      ((param_1[7] == uVar5 && ((uint)param_1[6] < uVar4)))))) {
                    param_1[1] = uStack_294;
                    param_1[2] = uStack_290;
                    param_1[3] = uStack_28c;
                    param_1[4] = uStack_288;
                    param_1[5] = uStack_284;
                    param_1[7] = uVar5;
                    param_1[8] = uVar10;
                    param_1[6] = uVar4;
                    param_1[9] = iVar15;
                  }
                  break;
                }
              }
            }
          }
          else {
LAB_ram_480b5ef8:
            uVar14 = 1;
            unaff_s8 = uStack_28;
            unaff_s9 = uStack_2c;
            unaff_s10 = uStack_30;
            unaff_s11 = uStack_34;
          }
        }
        else {
          uVar14 = 1;
        }
      }
      else {
LAB_ram_480b5d80:
        uVar14 = 1;
      }
    }
    else {
      uVar8 = 1;
    }
LAB_ram_480b5cbe:
    iVar15 = 1;
    if (iVar2 == 1) {
      if (uVar8 != 0) {
        return 3;
      }
      if ((int)param_1[9] < 0) {
        return (uVar14 & 0x7f) << 1;
      }
      if (param_2 == 0) {
        return 4;
      }
      if (param_3 <= (uint)param_1[8]) {
        return 4;
      }
      uVar14 = param_1[9] * 0x31000 + 0x1040;
      if (*(int *)*param_1 == 0) {
        return 3;
      }
      if (0x63000 < uVar14) {
        return 3;
      }
      if (0x63000 - uVar14 < (uint)param_1[8]) {
        return 3;
      }
      iVar2 = FUN_ram_4812e734(*(int *)*param_1,uVar14,param_2);
      if (iVar2 != 0) {
        return 3;
      }
      *(undefined1 *)(param_1[8] + param_2) = 0;
      return 1;
    }
    iVar13 = 0x32000;
    iVar2 = *(int *)*param_1;
    uVar12 = uVar8;
    if (iVar2 == 0) {
      return 3;
    }
  } while( true );
  if (abStack_240 == pbVar9) goto LAB_ram_480b5cbe;
  goto LAB_ram_480b5cac;
}


