/* Firmware entry: 0x48042696 */

undefined8 FUN_ram_48042696(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint auStack_44 [4];
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((*(char *)(param_1 + 0x7c) == '\0') || (5 < param_2)) ||
     ((*(byte *)(param_1 + 0x14) >> (param_2 & 0x1f) & 1) == 0)) {
LAB_ram_480426b2:
    uVar5 = 0;
    uVar4 = 0;
    uVar9 = 0;
    uVar2 = 0;
    uVar11 = 0;
    goto LAB_ram_480426bc;
  }
  uVar8 = (uint)*(byte *)(param_1 + 0x10);
  uVar9 = (uint)*(byte *)(param_1 + 0x15);
  uVar2 = (uint)*(byte *)(param_1 + 0x16);
  uVar11 = (uint)*(byte *)(param_1 + 0x17);
  uVar12 = (uint)*(byte *)(param_1 + 0x12);
  if ((uVar8 == 1) || (uVar5 = uVar12, uVar8 == 4)) {
    uVar5 = uVar12 * 7 >> 3;
  }
  if (*(char *)(param_1 + 0x7c) == '\x01') {
    if (param_2 < 4) {
      uVar8 = 100;
      uVar4 = 100;
      if ((*(byte *)(param_1 + 0x7f) >> (param_2 & 0x1f) & 1) == 0) {
        uVar4 = uVar8;
        if (((*(byte *)(param_1 + 0x7e) >> (param_2 & 0x1f) & 1) == 0) ||
           (iVar6 = *(int *)(param_2 * 4 + param_1 + 0x90), 0xf9 < (uint)(param_3 - iVar6))) {
          uVar5 = 0;
        }
        else {
          uVar8 = (iVar6 - param_3) + 0xfa;
          if (uVar8 < 0xfa) {
            uVar5 = ((((uVar8 * -4 + 0x5dc) * uVar8 * 4 * uVar8 * 4 * 2) / 1000000) * uVar5 + 500) /
                    1000 & 0xff;
          }
        }
      }
    }
    else {
      uVar4 = 100;
      uVar5 = 0;
    }
  }
  else {
    uVar10 = param_3 - *(int *)(param_1 + 0x8c);
    if (*(char *)(param_1 + 0x13) == '\0') {
      uVar10 = (uVar10 * 4) / 5;
    }
    else if (*(char *)(param_1 + 0x13) == '\x02') {
      uVar10 = uVar10 * 5 >> 2;
    }
    auStack_44[0] = DAT_ram_48222f28;
    auStack_44[1] = DAT_ram_48222f2c;
    auStack_44[2] = DAT_ram_48222f30;
    auStack_44[3] = DAT_ram_48222f34;
    uStack_34 = DAT_ram_48222f38;
    uVar13 = auStack_44[uVar8];
    if (uVar13 <= uVar10) goto LAB_ram_480426b2;
    iVar6 = (uint)*(byte *)(param_1 + 0x80) * 6;
    pbVar3 = &DAT_ram_48222cf8 + iVar6;
    uVar1 = 0;
    uVar5 = 0;
    do {
      uVar4 = (uint)*pbVar3;
      pbVar3 = pbVar3 + 1;
      uVar7 = uVar5;
      if (((*(byte *)(param_1 + 0x14) >> (uVar4 & 0x1f) & 1) != 0) &&
         (*(char *)(uVar4 * 5 + param_1 + 0x18) != '\0')) {
        if (param_2 == uVar4) {
          uVar7 = uVar5 + 1 & 0xff;
          uVar1 = uVar5;
        }
        else {
          uVar7 = uVar5 + 1 & 0xff;
        }
      }
      uVar5 = uVar7;
    } while (&UNK_ram_48222cfe + iVar6 != pbVar3);
    uVar4 = 100;
    if (uVar7 == 0) {
      uVar5 = 0;
      goto LAB_ram_480426bc;
    }
    if (uVar8 == 0) {
      uVar5 = 0;
      if (uVar1 * 0xf0 <= uVar10) {
        iVar6 = uVar1 * -0xf0;
joined_r0x48042b56:
        uVar8 = uVar10 + iVar6;
        uVar5 = uVar12;
        if (uVar8 < 500) {
          uVar5 = ((((uVar8 * -2 + 0x5dc) * uVar8 * 2 * uVar8 * 2 * 2) / 1000000) * uVar12 + 500) /
                  1000 & 0xff;
        }
      }
LAB_ram_48042820:
      if ((uVar13 - 700 < uVar10) && (uVar13 - uVar10 < 700)) {
        uVar8 = ((uVar13 - uVar10) * 1000) / 700;
        uVar4 = (((uVar8 * uVar8 * (0x5dc - uVar8) * 2) / 1000000) * 100 + 500) / 1000 & 0xff;
        goto LAB_ram_4804288c;
      }
    }
    else {
      if (uVar8 == 2) {
        uVar5 = 0;
        if ((uVar1 * 0xf0 <= uVar10) &&
           (uVar8 = uVar10 + uVar1 * -0xf0, uVar5 = uVar12, uVar8 < 500)) {
          uVar5 = (((uVar8 * 2 * uVar8 * 2 * (uVar8 * -2 + 0x5dc) * 2) / 1000000) * uVar12 + 500) /
                  1000 & 0xff;
        }
        if (uVar10 < 0x8fc) {
          uVar8 = (uVar10 * 1000) / 0x8fc;
          uVar12 = ((0x5dc - uVar8) * uVar8 * uVar8 * 2) / 1000000;
          uVar8 = (uVar12 * 0x2b + 500) / 1000;
          uVar12 = (uVar12 * 0x52 + 500) / 1000 & 0xff;
        }
        else {
          uVar8 = 0x2b;
          uVar12 = 0x52;
        }
        uVar2 = uVar8 + uVar2;
        if (0xff < uVar2) {
          uVar2 = 0xff;
        }
        uVar12 = uVar12 + uVar11;
        uVar2 = uVar2 & 0xff;
        if (0xff < uVar12) {
          uVar12 = 0xff;
        }
        uVar11 = uVar12 & 0xff;
        goto LAB_ram_48042820;
      }
      if (uVar8 != 3) {
        if (uVar8 == 1) {
          if (uVar1 < uVar10 / 300) {
            uVar8 = (uVar12 * 0xf) / 100;
          }
          else {
            uVar8 = uVar12 & -(uint)(uVar1 == uVar10 / 300);
          }
          uVar5 = uVar12;
          if (uVar10 < uVar7 * 300) {
            uVar5 = uVar8;
          }
          goto LAB_ram_48042820;
        }
        if (uVar10 < 200) goto LAB_ram_48042b02;
        uVar8 = uVar10 - 200;
        if (uVar1 == uVar8 / 0x15e) {
          if (uVar7 * 0x15e <= uVar8) goto LAB_ram_48042b7a;
          uVar5 = uVar12;
          if (uVar8 % 0x15e != 0) {
            uVar5 = FUN_ram_4802f842(uVar12);
          }
LAB_ram_480429c2:
          if (uVar10 < 3000) goto LAB_ram_48042820;
        }
        else {
          uVar5 = 0;
          if (uVar8 < uVar7 * 0x15e) goto LAB_ram_480429c2;
LAB_ram_48042b7a:
          if (uVar10 < 3000) {
            uVar5 = uVar12 & -(uint)(3 < param_2);
            goto LAB_ram_48042820;
          }
        }
        uVar5 = uVar12;
        if (uVar10 - 3000 < 500) {
          uVar5 = FUN_ram_4802f842(uVar12,uVar10 - 3000,500);
        }
        goto LAB_ram_48042820;
      }
      if (499 < uVar10) {
        uVar5 = 0;
        if ((0x2ed < uVar10) && (uVar8 = uVar1 * 0xf0 + 0x2ee, uVar8 <= uVar10)) {
          iVar6 = -uVar8;
          goto joined_r0x48042b56;
        }
        goto LAB_ram_48042820;
      }
      if (3 < param_2) {
LAB_ram_48042b02:
        uVar5 = 0;
        goto LAB_ram_48042820;
      }
      uVar5 = (uint)*(byte *)(param_1 + param_2 + 0x81);
      if (uVar10 != 0) {
        uVar5 = FUN_ram_4802f842(uVar5);
        goto LAB_ram_48042820;
      }
    }
    uVar4 = 100;
  }
LAB_ram_4804288c:
  uVar5 = uVar5 & -(uint)(*(char *)(param_2 * 5 + param_1 + 0x18) != '\0');
LAB_ram_480426bc:
  return CONCAT44(uVar11,uVar5 & 0xff | uVar4 << 8 | uVar9 << 0x10 | uVar2 << 0x18);
}


