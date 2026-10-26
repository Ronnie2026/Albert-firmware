/* Firmware entry: 0x48047f16 */

ulonglong FUN_ram_48047f16(char *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  int iVar17;
  byte bVar18;
  uint uVar19;
  undefined1 uStack_18;
  undefined1 uStack_17;
  byte bStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar9 = *(char *)((int)param_2 + 10);
  param_1[0x22] = (char)param_2[5];
  bVar5 = cVar9 == '\x01';
  cVar1 = param_1[5];
  if (*param_1 == '\0') {
    param_1[1] = bVar5;
    *param_1 = '\x01';
  }
  else if ((bool)param_1[1] != bVar5) {
    if (cVar1 == '\0') {
      if (param_1[6] != '\0') {
        uStack_17 = 0;
        uVar10 = 0;
        goto LAB_ram_48048004;
      }
      cVar9 = param_1[7];
      param_1[5] = '\0';
      param_1[9] = '\0';
      param_1[0xb] = '\0';
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      uStack_18 = 0;
      uStack_17 = 0;
      uVar10 = 0;
      if (cVar9 != '\0') goto LAB_ram_48048020;
    }
    else {
      uStack_17 = 1;
      if (param_1[10] == '\x01') {
        uStack_17 = 2;
        uVar10 = 2;
      }
      else {
        uVar10 = 2;
      }
LAB_ram_48048004:
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[9] = '\0';
      param_1[0xb] = '\0';
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
LAB_ram_48048020:
      uStack_18 = uVar10;
      param_1[0x38] = '\x03';
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    }
    param_1[1] = bVar5;
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    bStack_16 = 0;
    uStack_15 = 0;
    uStack_14 = 0;
    goto LAB_ram_480480c2;
  }
  if (param_1[0x19] != '\0') {
    if (cVar1 != '\0') {
      if ((char)param_2[1] == '\0') {
        param_1[2] = '\0';
        param_1[3] = '\0';
        param_1[4] = '\0';
        goto LAB_ram_4804805a;
      }
      goto LAB_ram_48047f50;
    }
LAB_ram_480480bc:
    uStack_18 = 0;
    uStack_17 = 0;
    bStack_16 = 0;
    uStack_15 = 0;
    uStack_14 = 0;
    goto LAB_ram_480480c2;
  }
  if ((char)param_2[1] != '\0') {
LAB_ram_48047f50:
    cVar2 = *(char *)((int)param_2 + 9);
    uVar15 = param_2[3];
    cVar3 = *(char *)((int)param_2 + 5);
    param_1[0x18] = cVar2;
    *(uint *)(param_1 + 0x1c) = uVar15;
    bVar7 = param_1[2];
    bVar18 = 0;
    if (cVar3 != '\0') {
      bVar18 = bVar7 ^ 1;
      bVar7 = 0;
    }
    if ((char)param_2[2] == '\0') {
      if (cVar2 == '\0') {
        param_1[2] = cVar3;
        param_1[3] = '\0';
        param_1[4] = '\0';
      }
      else {
        param_1[2] = cVar3;
        param_1[3] = '\0';
        param_1[4] = '\x01';
      }
      if (cVar1 != '\0') goto LAB_ram_48048102;
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[9] = '\0';
      goto LAB_ram_480480bc;
    }
    bVar16 = param_1[3] ^ 1;
    if (cVar2 == '\0') {
      param_1[2] = cVar3;
      param_1[4] = '\0';
      param_1[3] = '\x01';
      if (cVar1 != '\0') {
LAB_ram_48048102:
        if (*(char *)((int)param_2 + 6) == '\0') {
          cVar9 = '\x04';
        }
        else {
          cVar9 = '\x05';
          if (*(char *)((int)param_2 + 7) != '\0') {
            if (-1 < *param_2 - *(int *)(param_1 + 0xc)) {
              bStack_16 = param_1[0xb];
              param_1[7] = '\0';
              uStack_17 = 1;
              uStack_15 = (&DAT_ram_48222c8c)[bStack_16];
              uStack_14 = 0;
              if (param_1[10] == '\x01') {
                uStack_17 = 2;
                uStack_15 = 0;
                uStack_14 = (&DAT_ram_48222c8c)[bStack_16];
              }
              uStack_18 = 1;
              goto LAB_ram_480480c2;
            }
            goto LAB_ram_480480bc;
          }
        }
        param_1[0x38] = cVar9;
        uStack_18 = 0;
        uStack_17 = 0;
        bStack_16 = 0;
        uStack_15 = 0;
        uStack_14 = 0;
        param_1[7] = '\x01';
        goto LAB_ram_480480c2;
      }
      if (param_1[9] == '\x02') {
        param_1[6] = '\0';
        param_1[9] = '\0';
        param_1[0x20] = '\0';
        param_1[0x21] = '\0';
      }
      else if ((bVar7 != 0) && (param_1[9] == '\x01')) {
        param_1[6] = '\0';
        param_1[9] = '\0';
        if ((bVar18 != 0) || ((bVar16 != 0 && (cVar3 != '\0')))) goto LAB_ram_48047fae;
        goto LAB_ram_480480bc;
      }
      if ((bVar18 != 0) || ((bVar16 != 0 && (cVar3 != '\0')))) goto LAB_ram_48047fae;
LAB_ram_480483fc:
      if (param_1[6] == '\0') goto LAB_ram_480480bc;
      iVar11 = *param_2;
      iVar14 = iVar11 - *(int *)(param_1 + 0x10);
joined_r0x480483de:
      if (iVar14 < 0) goto LAB_ram_480480bc;
    }
    else {
      bVar4 = param_1[4];
      param_1[2] = cVar3;
      param_1[3] = '\x01';
      param_1[4] = '\x01';
      if (cVar1 != '\0') goto LAB_ram_48048102;
      uVar19 = uVar15 >> 0x10;
      uVar15 = uVar15 & 0xffff;
      if ((bVar7 == 0) || (param_1[9] != '\x01')) {
        if (bVar18 == 0) {
          if (bVar16 != 0) {
            if (cVar3 != '\0') goto LAB_ram_48047fae;
LAB_ram_48048204:
            iVar11 = *param_2;
            uVar6 = param_2[4];
            goto LAB_ram_4804820c;
          }
          if (cVar3 != '\0') goto LAB_ram_480483fc;
          if ((bVar4 ^ 1) != 0) goto LAB_ram_48048204;
          iVar11 = *param_2;
          if (param_1[6] == '\0') {
            uVar6 = param_2[4];
            goto LAB_ram_4804820c;
          }
LAB_ram_480483d4:
          iVar14 = iVar11 - *(int *)(param_1 + 0x10);
          goto joined_r0x480483de;
        }
LAB_ram_48047fae:
        iVar11 = *param_2;
      }
      else {
        uVar6 = uVar15;
        if (10000 < uVar15) {
          uVar6 = 10000;
        }
        if (uVar6 < 1000) {
          uVar6 = 1000;
        }
        uVar6 = (uVar6 + 0x32 & 0xffff) / 100;
        iVar11 = uVar6 * 100;
        uVar6 = uVar6 * 0x640000 >> 0x10;
        if (uVar19 < 1000) {
          iVar14 = 1000;
          uVar12 = 1000;
LAB_ram_48048358:
          iVar17 = iVar14;
          iVar8 = iVar11;
          if (uVar6 <= uVar12) {
            iVar17 = iVar11;
            iVar8 = iVar14;
            uVar12 = uVar6;
          }
        }
        else {
          iVar8 = 10000;
          iVar17 = iVar11;
          uVar12 = uVar6;
          if (uVar19 < 0x2711) {
            uVar12 = (uVar19 + 0x32) / 100;
            iVar14 = uVar12 * 100;
            uVar12 = uVar12 * 0x640000 >> 0x10;
            goto LAB_ram_48048358;
          }
        }
        uVar6 = param_2[4];
        iVar11 = *param_2;
        param_1[6] = '\x01';
        param_1[9] = '\x02';
        uVar12 = uVar12 + (uVar6 % ((iVar8 - iVar17) / 100 + 1U & 0xffff)) * 100;
        uVar13 = uVar12 & 0xffff;
        *(short *)(param_1 + 0x20) = (short)(uVar12 * 0x10000 >> 0x10);
        *(uint *)(param_1 + 0x10) = iVar11 + uVar13;
        if (bVar18 == 0) {
          if (bVar16 == 0) {
            iVar14 = -uVar13;
            if (cVar3 != '\0') goto joined_r0x480483de;
            if ((bVar4 ^ 1) == 0) goto LAB_ram_480483d4;
          }
          else if (cVar3 != '\0') goto LAB_ram_48047fb0;
LAB_ram_4804820c:
          if (10000 < uVar15) {
            uVar15 = 10000;
          }
          if (uVar15 < 1000) {
            uVar15 = 1000;
          }
          uVar15 = (uVar15 + 0x32 & 0xffff) / 100;
          iVar14 = uVar15 * 100;
          uVar15 = uVar15 * 0x640000 >> 0x10;
          if (uVar19 < 1000) {
            iVar17 = 1000;
            uVar12 = 1000;
LAB_ram_48048280:
            iVar8 = iVar14;
            if (uVar15 <= uVar12) {
              uVar12 = uVar15;
              iVar8 = iVar17;
              iVar17 = iVar14;
            }
          }
          else {
            iVar8 = 10000;
            uVar12 = uVar15;
            iVar17 = iVar14;
            if (uVar19 < 0x2711) {
              uVar19 = (uVar19 + 0x32) / 100;
              iVar17 = uVar19 * 100;
              uVar12 = uVar19 * 0x640000 >> 0x10;
              goto LAB_ram_48048280;
            }
          }
          param_1[6] = '\x01';
          param_1[9] = '\x02';
          uVar12 = (uVar6 % ((iVar8 - iVar17) / 100 + 1U & 0xffff)) * 100 + uVar12;
          uVar15 = uVar12 & 0xffff;
          *(uint *)(param_1 + 0x10) = iVar11 + uVar15;
          *(short *)(param_1 + 0x20) = (short)(uVar12 * 0x10000 >> 0x10);
          iVar14 = -uVar15;
          goto joined_r0x480483de;
        }
      }
LAB_ram_48047fb0:
      *(int *)(param_1 + 0x10) = iVar11;
      *(int *)(param_1 + 0x28) = iVar11;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      param_1[6] = '\x01';
      param_1[9] = '\x01';
    }
    if (*(char *)((int)param_2 + 6) == '\0') {
      cVar9 = '\x04';
    }
    else {
      if (*(char *)((int)param_2 + 7) != '\0') {
        if ((param_1[8] == '\0') || (299 < (uint)(iVar11 - *(int *)(param_1 + 0x14)))) {
          param_1[10] = bVar5;
          param_1[0xb] = '\0';
          *(int *)(param_1 + 0xc) = iVar11;
          param_1[6] = '\0';
          param_1[7] = '\0';
          param_1[9] = '\0';
          param_1[5] = '\x01';
          uStack_14 = cVar9 == '\x01';
          if ((bool)uStack_14) {
            uStack_17 = 2;
          }
          else {
            uStack_17 = 1;
          }
          uStack_15 = !(bool)uStack_14;
          bStack_16 = 0;
          uStack_18 = 1;
        }
        else {
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x14) + 300;
          uStack_18 = 0;
          uStack_17 = 0;
          bStack_16 = 0;
          uStack_15 = 0;
          uStack_14 = 0;
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
          param_1[0x38] = '\b';
        }
        goto LAB_ram_480480c2;
      }
      cVar9 = '\x05';
    }
    *(int *)(param_1 + 0x10) = iVar11 + 0xfa;
    param_1[0x38] = cVar9;
    uStack_18 = 0;
    uStack_17 = 0;
    bStack_16 = 0;
    uStack_15 = 0;
    uStack_14 = 0;
    param_1[7] = '\x01';
    goto LAB_ram_480480c2;
  }
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  if (cVar1 == '\0') {
    if (param_1[6] != '\0') {
      uStack_17 = 0;
      uStack_18 = 0;
      goto LAB_ram_48048068;
    }
    cVar9 = param_1[7];
    param_1[5] = '\0';
    param_1[9] = '\0';
    param_1[0xb] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    if (cVar9 != '\0') {
      uStack_17 = 0;
      uStack_18 = 0;
      goto LAB_ram_48048084;
    }
    uStack_18 = 0;
    uStack_17 = 0;
  }
  else {
LAB_ram_4804805a:
    uStack_17 = 1;
    uStack_18 = 2;
    if (param_1[10] == '\x01') {
      uStack_17 = 2;
    }
LAB_ram_48048068:
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[9] = '\0';
    param_1[0xb] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
LAB_ram_48048084:
    param_1[0x38] = '\x02';
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  bStack_16 = 0;
  uStack_15 = 0;
  uStack_14 = 0;
LAB_ram_480480c2:
  return (ulonglong)
         CONCAT14(uStack_14,CONCAT13(uStack_15,CONCAT12(bStack_16,CONCAT11(uStack_17,uStack_18))));
}


