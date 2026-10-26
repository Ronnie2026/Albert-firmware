/* Firmware entry: 0x48055424 */

undefined2 * FUN_ram_48055424(undefined2 *param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  byte bVar9;
  ushort *puVar10;
  uint uVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 uVar16;
  uint uVar17;
  ushort *puVar18;
  uint uVar19;
  undefined1 uVar20;
  uint uVar21;
  int iVar22;
  undefined1 uVar23;
  uint uVar24;
  undefined1 uVar25;
  uint uVar26;
  char cVar27;
  byte bVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  undefined1 uVar32;
  uint uVar33;
  uint uVar34;
  char cVar35;
  uint uVar36;
  uint uVar37;
  int iStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  ushort auStack_54 [2];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  ushort auStack_44 [8];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_2 + 0xac,0xffffffff);
  if ((*(char *)(param_2 + 0x89) != '\0') || ((uint)(param_3 - *(int *)(param_2 + 0x84)) < 0x32)) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    uVar12 = 0;
    iVar22 = 0;
    uVar16 = 0;
    uVar20 = 0;
    uVar8 = 0;
    goto LAB_ram_48055472;
  }
  *(int *)(param_2 + 0x84) = param_3;
  iVar22 = *(int *)(param_2 + 0x7c) + 1;
  if (iVar22 == 0) {
    iVar22 = 1;
  }
  *(int *)(param_2 + 0x7c) = iVar22;
  local_60 = 0;
  local_5c = 0;
  uStack_58 = 0;
  auStack_54[0] = 0;
  auStack_54[1] = 0;
  uVar1 = *(ushort *)(param_2 + 0xa4);
  uVar2 = *(ushort *)(param_2 + 0xa6);
  bVar9 = *(byte *)(param_2 + 0xa8);
  if (((*(char *)(param_2 + 0x38) == '\0') || (cVar6 = *(char *)(param_2 + 0x39), cVar6 == '\0')) ||
     (0xfa < (uint)(param_3 - *(int *)(param_2 + 0x34)))) {
    cVar6 = '\0';
    uVar37 = 0;
    if ((*(char *)(param_2 + 100) != '\0') &&
       (cVar6 = '\0', uVar37 = 0, *(char *)(param_2 + 0x65) != '\0')) {
      cVar6 = '\0';
      uVar37 = (uint)((uint)(param_3 - *(int *)(param_2 + 0x60)) < 0x1f5);
    }
  }
  else {
    uVar37 = 0;
    if ((*(char *)(param_2 + 100) != '\0') && (uVar37 = 0, *(char *)(param_2 + 0x65) != '\0')) {
      uVar37 = (uint)((uint)(param_3 - *(int *)(param_2 + 0x60)) < 0x1f5);
    }
    local_60 = *(undefined4 *)(param_2 + 0x28);
    local_5c = *(undefined4 *)(param_2 + 0x2c);
    uStack_58 = *(undefined4 *)(param_2 + 0x30);
  }
  local_50 = 0;
  local_4c = 0;
  uStack_48 = 0;
  auStack_44[0] = 0;
  auStack_44[1] = 0;
  uVar24 = (uint)*(byte *)(param_2 + 0x6c);
  uVar25 = (undefined1)((uint)iVar22 >> 8);
  uVar23 = (undefined1)((uint)iVar22 >> 0x10);
  uVar7 = (undefined1)((uint)iVar22 >> 0x18);
  uVar21 = 0;
  if (((*(char *)(param_2 + 0x4c) == '\0') ||
      (uVar17 = (uint)*(byte *)(param_2 + 0x4d), uVar17 == 0)) ||
     (0xfa < (uint)(param_3 - *(int *)(param_2 + 0x48)))) {
    if (uVar24 != 0) {
      if (*(char *)(param_2 + 0x6d) == '\0') {
        if (cVar6 == '\0') goto LAB_ram_48055ade;
        uVar26 = 0;
        if (uVar37 == 0) {
          iVar31 = *(int *)(param_2 + 0xa0);
          uVar13 = (uint)*(byte *)(param_2 + 0x9f);
          uVar29 = 0;
          if (*(char *)(param_2 + 0x97) != '\0') goto LAB_ram_48055bf6;
          uVar24 = 0;
          uVar26 = 0;
          if (uVar13 != 0) {
            uVar13 = 0;
            goto LAB_ram_48055648;
          }
          goto LAB_ram_480559b6;
        }
LAB_ram_48055664:
        uVar17 = 0;
LAB_ram_48055668:
        puVar18 = (ushort *)&local_60;
        bVar28 = 0;
        puVar10 = puVar18;
        do {
          uVar3 = *puVar10;
          puVar10 = puVar10 + 1;
          if ((uVar3 != 0) && (uVar3 != 0x1ff)) {
            bVar28 = bVar28 + 1;
          }
        } while (puVar10 != auStack_54);
        if (bVar28 < bVar9) {
LAB_ram_48055b08:
          uVar29 = 0xffffffff;
          iStack_6c = 0;
        }
        else {
          uVar29 = 0;
          cVar35 = '\0';
          puVar10 = puVar18;
          do {
            uVar3 = *puVar10;
            if ((uVar3 != 0) && (cVar27 = cVar35 + '\x01', uVar3 != 0x1ff)) {
              if (uVar3 == 1) {
LAB_ram_48055cee:
                uVar29 = 2;
                iStack_6c = 3;
                goto LAB_ram_480556d8;
              }
              cVar35 = cVar27;
              if (uVar3 != 500) {
                if (uVar3 <= uVar1) goto LAB_ram_48055cee;
                if (uVar3 <= uVar2) {
                  uVar29 = 1;
                }
              }
            }
            puVar10 = puVar10 + 1;
          } while (puVar10 != (ushort *)&local_5c);
          if (cVar35 == '\0') goto LAB_ram_48055b08;
          iStack_6c = uVar29 + 1;
        }
LAB_ram_480556d8:
        bVar28 = 0;
        puVar10 = puVar18;
        do {
          uVar3 = *puVar10;
          puVar10 = puVar10 + 1;
          if ((uVar3 != 0) && (uVar3 != 0x1ff)) {
            bVar28 = bVar28 + 1;
          }
        } while (auStack_54 != puVar10);
        uVar36 = 0;
        if (bVar9 <= bVar28) {
          iVar31 = 0;
          cVar35 = '\0';
          puVar10 = puVar18;
          do {
            uVar3 = puVar10[2];
            if ((uVar3 != 0) && (cVar27 = cVar35 + '\x01', uVar3 != 0x1ff)) {
              if (uVar3 == 1) {
LAB_ram_48055ce8:
                uVar36 = 3;
                goto LAB_ram_48055748;
              }
              cVar35 = cVar27;
              if (uVar3 != 500) {
                if (uVar3 <= uVar1) goto LAB_ram_48055ce8;
                if (uVar3 <= uVar2) {
                  iVar31 = 1;
                }
              }
            }
            puVar10 = puVar10 + 1;
          } while (puVar10 != (ushort *)&local_5c);
          uVar36 = 0;
          if (cVar35 != '\0') {
            uVar36 = iVar31 + 1;
          }
        }
LAB_ram_48055748:
        bVar28 = 0;
        puVar10 = puVar18;
        do {
          uVar3 = *puVar10;
          puVar10 = puVar10 + 1;
          if ((uVar3 != 0) && (uVar3 != 0x1ff)) {
            bVar28 = bVar28 + 1;
          }
        } while (auStack_54 != puVar10);
        if (bVar28 < bVar9) {
LAB_ram_48055b96:
          uVar5 = 0xffffffff;
          iVar30 = 0;
        }
        else {
          uVar5 = 0;
          cVar35 = '\0';
          do {
            uVar3 = puVar18[4];
            if ((uVar3 != 0) && (cVar27 = cVar35 + '\x01', uVar3 != 0x1ff)) {
              if (uVar3 == 1) {
LAB_ram_48055d00:
                uVar5 = 2;
                iVar30 = 3;
                goto LAB_ram_480557ae;
              }
              cVar35 = cVar27;
              if (uVar3 != 500) {
                if (uVar3 <= uVar1) goto LAB_ram_48055d00;
                if (uVar3 <= uVar2) {
                  uVar5 = 1;
                }
              }
            }
            puVar18 = puVar18 + 1;
          } while (puVar18 != (ushort *)&local_5c);
          iVar30 = uVar5 + 1;
          if (cVar35 == '\0') goto LAB_ram_48055b96;
        }
LAB_ram_480557ae:
        if (uVar17 != 0) goto LAB_ram_480557b6;
        uVar4 = 0;
        uVar24 = 0;
        uVar11 = 0;
        uVar17 = 0;
        goto LAB_ram_4805590e;
      }
      uVar26 = (uint)((uint)(param_3 - *(int *)(param_2 + 0x68)) < 0x1f5);
      if ((cVar6 != '\0') && (uVar37 != 0)) goto LAB_ram_48055664;
      iVar31 = *(int *)(param_2 + 0xa0);
      if (*(char *)(param_2 + 0x97) == '\0') {
        if (*(char *)(param_2 + 0x9f) == '\0') goto LAB_ram_48055ed6;
        if ((uint)(param_3 - iVar31) < 0x1f5) goto LAB_ram_48055f5e;
        uVar24 = 0;
        goto LAB_ram_480559b6;
      }
      uVar24 = param_3 - *(int *)(param_2 + 0x98);
      if (*(char *)(param_2 + 0x9f) != '\0') goto LAB_ram_48055daa;
      if (500 < uVar24) {
        uVar24 = 0;
        goto LAB_ram_480559b6;
      }
LAB_ram_48055f0c:
      uVar17 = 0;
      uVar29 = 0xffffffff;
      uVar5 = 0xffffffff;
      uVar24 = 0;
      uVar4 = 0;
      uVar36 = 0;
      uVar11 = 0;
      iVar30 = 0;
      iStack_6c = 0;
LAB_ram_48055c94:
      if ((((*(char *)(param_2 + 0x95) == '\0') && (*(byte *)(param_2 + 0x96) < 3)) &&
          (*(char *)(param_2 + 0x8c) != '\0')) &&
         ((((uint)(param_3 - *(int *)(param_2 + 0x90)) < 0x12d &&
           (*(char *)(param_2 + 0x8b) != '\0')) &&
          ((*(byte *)(param_2 + 0x8a) != 0xff &&
           (*(byte *)(param_2 + 0x8a) <= *(byte *)(param_2 + 0xa9))))))) {
        uVar36 = 3;
      }
      uVar14 = 0;
      uVar13 = 1;
      goto LAB_ram_48055932;
    }
    if ((cVar6 != '\0') && (uVar26 = 0, uVar37 != 0)) goto LAB_ram_48055664;
LAB_ram_48055ade:
    iVar31 = *(int *)(param_2 + 0xa0);
    uVar26 = (uint)*(byte *)(param_2 + 0x9f);
    if (*(char *)(param_2 + 0x97) != '\0') {
      uVar24 = param_3 - *(int *)(param_2 + 0x98);
      if (uVar26 != 0) {
        uVar26 = 0;
LAB_ram_48055daa:
        uVar29 = 0xffffffff;
        uVar17 = 0;
        uVar5 = 0xffffffff;
        uVar33 = (uint)(uVar24 < 0x1f5);
        uVar24 = 0;
        uVar4 = 0;
        uVar36 = 0;
        uVar11 = 0;
        iVar30 = 0;
        iStack_6c = 0;
        goto LAB_ram_48055c14;
      }
      if (uVar24 < 0x1f5) goto LAB_ram_48055f0c;
      uVar24 = 0;
LAB_ram_480559b6:
      uVar19 = 0;
      uVar14 = 0;
      uVar21 = 0;
      uVar5 = 0xffffffff;
      iVar30 = 0;
      uVar4 = 0;
      uVar17 = uVar24;
      uVar34 = 0;
      uVar33 = 0;
      goto LAB_ram_480559c0;
    }
    if (uVar26 != 0) {
      if (500 < (uint)(param_3 - iVar31)) {
        uVar26 = 0;
        uVar24 = 0;
        goto LAB_ram_480559b6;
      }
      uVar26 = 0;
LAB_ram_48055f5e:
      uVar29 = 0xffffffff;
      uVar17 = 0;
      uVar5 = 0xffffffff;
      uVar4 = 0;
      uVar24 = 0;
      iVar30 = 0;
      iStack_6c = 0;
      uVar11 = 0;
      uVar36 = 0;
      uVar13 = 0;
      goto LAB_ram_48055c4a;
    }
LAB_ram_48055ed6:
    uVar24 = 0;
    cVar35 = '\0';
    uVar17 = 0;
    uVar33 = 0;
    uVar36 = 0;
    uVar21 = 0;
LAB_ram_48055a36:
    uVar20 = (undefined1)uVar21;
    uVar16 = (undefined1)uVar36;
  }
  else {
    if (uVar24 != 0) {
      if (*(char *)(param_2 + 0x6d) != '\0') {
        local_50 = *(undefined4 *)(param_2 + 0x3c);
        local_4c = *(undefined4 *)(param_2 + 0x40);
        uStack_48 = *(undefined4 *)(param_2 + 0x44);
        uVar26 = (uint)((uint)(param_3 - *(int *)(param_2 + 0x68)) < 0x1f5);
        if ((cVar6 != '\0') && (uVar17 = uVar37, uVar37 != 0)) goto LAB_ram_48055668;
        uVar5 = 0xffffffff;
        uVar29 = 0xffffffff;
        iStack_6c = 0;
        uVar36 = 0;
        iVar30 = 0;
LAB_ram_480557b6:
        if (uVar26 == 0) {
          uVar4 = 0;
          uVar24 = 0;
          uVar17 = 1;
        }
        else {
          puVar18 = (ushort *)&local_50;
          bVar28 = 0;
          puVar10 = puVar18;
          do {
            uVar3 = *puVar10;
            puVar10 = puVar10 + 1;
            if ((uVar3 != 0) && (uVar3 != 0x1ff)) {
              bVar28 = bVar28 + 1;
            }
          } while (auStack_44 != puVar10);
          uVar4 = 0;
          if (bVar9 <= bVar28) {
            uStack_68 = 0;
            cVar35 = '\0';
            puVar10 = puVar18;
            do {
              uVar3 = *puVar10;
              uVar24 = uStack_68;
              if ((uVar3 != 0) && (cVar27 = cVar35 + '\x01', uVar3 != 0x1ff)) {
                if (uVar3 == 1) {
LAB_ram_48055cfc:
                  uVar4 = 3;
                  goto LAB_ram_4805582e;
                }
                cVar35 = cVar27;
                if (uVar3 != 500) {
                  if (uVar3 <= uVar1) goto LAB_ram_48055cfc;
                  uVar24 = uVar26;
                  if (uVar3 <= uVar2) goto LAB_ram_4805581c;
                }
                uVar24 = uStack_68;
              }
LAB_ram_4805581c:
              uStack_68 = uVar24;
              puVar10 = puVar10 + 1;
            } while ((ushort *)&local_4c != puVar10);
            uVar4 = 0;
            if (cVar35 != '\0') {
              uVar4 = uStack_68 + 1;
            }
          }
LAB_ram_4805582e:
          bVar28 = 0;
          puVar10 = puVar18;
          do {
            uVar3 = *puVar10;
            puVar10 = puVar10 + 1;
            if ((uVar3 != 0) && (uVar3 != 0x1ff)) {
              bVar28 = bVar28 + 1;
            }
          } while (puVar10 != auStack_44);
          uVar24 = 0;
          if (bVar9 <= bVar28) {
            uStack_64 = 0;
            cVar35 = '\0';
            puVar10 = puVar18;
            do {
              uVar3 = puVar10[2];
              uVar24 = uStack_64;
              if ((uVar3 != 0) && (cVar27 = cVar35 + '\x01', uVar3 != 0x1ff)) {
                if (uVar3 == 1) {
LAB_ram_48055cf6:
                  uVar24 = 3;
                  goto LAB_ram_480558a0;
                }
                cVar35 = cVar27;
                if (uVar3 != 500) {
                  if (uVar3 <= uVar1) goto LAB_ram_48055cf6;
                  uVar24 = uVar26;
                  if (uVar3 <= uVar2) goto LAB_ram_4805588c;
                }
                uVar24 = uStack_64;
              }
LAB_ram_4805588c:
              uStack_64 = uVar24;
              puVar10 = puVar10 + 1;
            } while ((ushort *)&local_4c != puVar10);
            uVar24 = 0;
            if (cVar35 != '\0') {
              uVar24 = uStack_64 + 1;
            }
          }
LAB_ram_480558a0:
          bVar28 = 0;
          puVar10 = puVar18;
          do {
            uVar3 = *puVar10;
            puVar10 = puVar10 + 1;
            if ((uVar3 != 0) && (uVar3 != 0x1ff)) {
              bVar28 = bVar28 + 1;
            }
          } while (auStack_44 != puVar10);
          uVar17 = uVar26;
          if (bVar9 <= bVar28) {
            cVar35 = '\0';
            uVar13 = 0;
            do {
              uVar3 = puVar18[4];
              uVar11 = uVar13;
              if ((uVar3 != 0) && (cVar27 = cVar35 + '\x01', uVar3 != 0x1ff)) {
                if (uVar3 == 1) {
LAB_ram_48055cda:
                  uVar11 = 3;
                  goto LAB_ram_4805590e;
                }
                cVar35 = cVar27;
                if (uVar3 != 500) {
                  if (uVar3 <= uVar1) goto LAB_ram_48055cda;
                  uVar11 = uVar26;
                  if (uVar3 <= uVar2) goto LAB_ram_480558f8;
                }
                uVar11 = uVar13;
              }
LAB_ram_480558f8:
              puVar18 = puVar18 + 1;
              uVar13 = uVar11;
            } while ((ushort *)&local_4c != puVar18);
            if (cVar35 != '\0') {
              uVar11 = uVar11 + 1;
              goto LAB_ram_4805590e;
            }
          }
        }
        uVar11 = 0;
LAB_ram_4805590e:
        iVar31 = *(int *)(param_2 + 0xa0);
        uVar13 = (uint)*(byte *)(param_2 + 0x9f);
        if (*(char *)(param_2 + 0x97) != '\0') goto LAB_ram_48055c06;
        if (uVar13 != 0) goto LAB_ram_48055922;
        uVar13 = 0;
        uVar14 = 0;
        goto LAB_ram_48055932;
      }
      local_50 = *(undefined4 *)(param_2 + 0x3c);
      local_4c = *(undefined4 *)(param_2 + 0x40);
      uStack_48 = *(undefined4 *)(param_2 + 0x44);
      if (cVar6 != '\0') goto LAB_ram_480555f2;
      uVar29 = (uint)*(byte *)(param_2 + 0x97);
      iVar31 = *(int *)(param_2 + 0xa0);
      uVar13 = (uint)*(byte *)(param_2 + 0x9f);
      if (uVar29 != 0) goto LAB_ram_48055bf6;
      uVar26 = 0;
      if (uVar13 == 0) goto LAB_ram_480559b6;
LAB_ram_48055648:
      uVar26 = 0;
      uVar29 = 0xffffffff;
      uVar5 = 0xffffffff;
      uVar4 = 0;
      uVar24 = 0;
      iVar30 = 0;
      uVar36 = 0;
      iStack_6c = 0;
      uVar11 = 0;
      uVar17 = uVar13;
LAB_ram_48055922:
      if (500 < (uint)(param_3 - iVar31)) {
        uVar13 = 0;
        uVar14 = 0;
        goto LAB_ram_48055932;
      }
      uVar13 = 0;
LAB_ram_48055c4a:
      uVar14 = 1;
      uVar15 = 1;
      bVar9 = *(char *)(param_2 + 0x9c) - 1;
      uVar19 = uVar13;
      uVar33 = uVar36;
      if ((byte)(*(char *)(param_2 + 0x9d) - 1U) < 2) {
        if (1 < bVar9) {
          if (uVar4 < 2) {
            uVar4 = 2;
          }
          if (2 < uVar29) {
joined_r0x48055d8c:
            uVar14 = 1;
            if (2 < uVar5) goto LAB_ram_48055c7e;
            goto LAB_ram_480559ce;
          }
          if (uVar11 - 1 < 3) {
            uVar15 = 1;
            goto LAB_ram_48055940;
          }
          uVar14 = 1;
          if (uVar5 < 3) goto LAB_ram_480559ce;
          if (uVar13 != 0) goto LAB_ram_48055a0e;
          uVar15 = 0;
          goto LAB_ram_48055bea;
        }
        uVar21 = uVar15;
        if (uVar29 < 3) {
          uVar4 = 3;
          uVar11 = 3;
          goto LAB_ram_48055940;
        }
        if (2 < uVar5) {
          uVar15 = uVar13;
          if (uVar13 == 0) {
            uVar24 = 3;
            cVar35 = *(char *)(param_2 + 0x9e);
            uVar21 = 3;
            goto LAB_ram_48055a36;
          }
          goto LAB_ram_48055b28;
        }
        uVar4 = 3;
        if (iVar30 == 3) {
          if (uVar13 == 0) {
            uVar15 = 1;
            cVar35 = *(char *)(param_2 + 0x9e);
            goto LAB_ram_48055bee;
          }
          bVar9 = *(byte *)(param_2 + 0x94);
          uVar15 = uVar13;
          if (bVar9 == 2) goto LAB_ram_48055fc2;
          goto LAB_ram_48055a18;
        }
        if (uVar24 - 1 < 3) goto LAB_ram_48055d58;
        if (uVar13 != 0) {
          uVar24 = 0;
          uVar21 = uVar13;
          goto LAB_ram_48055a0e;
        }
        uVar24 = 0;
        cVar35 = *(char *)(param_2 + 0x9e);
        goto LAB_ram_48055bee;
      }
      if (1 < bVar9) goto LAB_ram_48055932;
      if (uVar11 < 2) {
        uVar11 = 2;
        if (2 < uVar29) goto joined_r0x48055ec8;
        goto LAB_ram_4805594c;
      }
      uVar15 = uVar14;
      if (uVar29 < 3) goto LAB_ram_48055940;
joined_r0x48055ec8:
      if (uVar5 < 3) {
        uVar5 = uVar4 - 1;
        goto joined_r0x48055d8c;
      }
LAB_ram_48055c7e:
      uVar15 = 0;
      if (uVar13 != 0) {
LAB_ram_48055b28:
        bVar9 = *(byte *)(param_2 + 0x94);
        if ((bVar9 != 2) && (bVar9 != 5)) {
          uVar13 = 1;
          if ((bVar9 == 1) || (bVar9 == 4)) goto LAB_ram_48055b48;
          goto LAB_ram_48055eec;
        }
        goto LAB_ram_48055fc2;
      }
      cVar35 = *(char *)(param_2 + 0x9e);
LAB_ram_48055c8a:
      uVar21 = uVar24 & 0xff;
      goto LAB_ram_48055a36;
    }
    local_50 = *(undefined4 *)(param_2 + 0x3c);
    local_4c = *(undefined4 *)(param_2 + 0x40);
    uStack_48 = *(undefined4 *)(param_2 + 0x44);
    if (cVar6 != '\0') {
LAB_ram_480555f2:
      if (uVar37 != 0) {
        uVar26 = 0;
        goto LAB_ram_48055668;
      }
      uVar29 = 0xffffffff;
      uVar5 = 0xffffffff;
      uVar26 = 0;
      iStack_6c = 0;
      uVar36 = 0;
      iVar30 = 0;
      uVar4 = 0;
      uVar24 = 0;
      uVar11 = 0;
      goto LAB_ram_4805590e;
    }
    uVar29 = (uint)*(byte *)(param_2 + 0x97);
    iVar31 = *(int *)(param_2 + 0xa0);
    uVar13 = (uint)*(byte *)(param_2 + 0x9f);
    if (uVar29 == 0) {
      if (uVar13 == 0) {
        uVar26 = 0;
        uVar24 = uVar17;
        goto LAB_ram_480559b6;
      }
      goto LAB_ram_48055648;
    }
LAB_ram_48055bf6:
    uVar5 = 0xffffffff;
    uVar26 = 0;
    uVar4 = 0;
    uVar24 = 0;
    iVar30 = 0;
    uVar36 = 0;
    iStack_6c = 0;
    uVar11 = 0;
    uVar17 = uVar29;
    uVar29 = uVar5;
LAB_ram_48055c06:
    uVar33 = (uint)((uint)(param_3 - *(int *)(param_2 + 0x98)) < 0x1f5);
    if (uVar13 != 0) {
LAB_ram_48055c14:
      if ((uint)(param_3 - iVar31) < 0x1f5) {
        uVar13 = uVar33;
        if (((((uVar33 != 0) && (*(char *)(param_2 + 0x95) == '\0')) &&
             (*(byte *)(param_2 + 0x96) < 3)) &&
            ((uVar14 = (uint)*(byte *)(param_2 + 0x8c), uVar14 != 0 &&
             (uVar13 = uVar14, (uint)(param_3 - *(int *)(param_2 + 0x90)) < 0x12d)))) &&
           ((uVar14 = (uint)*(byte *)(param_2 + 0x8b), uVar14 != 0 &&
            ((uVar13 = uVar14, *(byte *)(param_2 + 0x8a) != 0xff &&
             (uVar13 = uVar33, *(byte *)(param_2 + 0x8a) <= *(byte *)(param_2 + 0xa9))))))) {
          uVar36 = 3;
          uVar13 = uVar14;
        }
        goto LAB_ram_48055c4a;
      }
    }
    if (uVar33 != 0) goto LAB_ram_48055c94;
    uVar14 = 0;
    uVar13 = 0;
LAB_ram_48055932:
    uVar19 = uVar13;
    uVar34 = uVar24;
    uVar33 = uVar36;
    if ((uVar29 < 3) && (uVar15 = uVar14, uVar11 - 1 < 3)) {
LAB_ram_48055940:
      uVar14 = uVar15;
      uVar19 = uVar13;
      uVar15 = uVar11 - 1 & 0xff;
LAB_ram_4805594c:
      uVar13 = iStack_6c - 1U & 0xff;
      uVar34 = uVar24;
      uVar33 = uVar36;
      if (uVar15 < uVar13) {
        uVar33 = 0;
        if ((uVar36 - 1 < 3) && (uVar33 = (iStack_6c - uVar11 & 0xff) + 1, uVar33 < uVar36)) {
          uVar33 = uVar36;
        }
      }
      else if (((uVar13 < uVar15) && (uVar34 = 0, uVar24 - 1 < 3)) &&
              (uVar34 = (uVar11 - iStack_6c & 0xff) + 1, uVar34 < uVar24)) {
        uVar34 = uVar24;
      }
    }
LAB_ram_480559c0:
    uVar13 = uVar14;
    uVar24 = uVar34;
    if ((uVar5 < 3) && (uVar36 = uVar33, uVar4 - 1 < 3)) {
LAB_ram_480559ce:
      uVar5 = iVar30 - 1U & 0xff;
      uVar29 = uVar4 - 1 & 0xff;
      uVar13 = uVar14;
      uVar33 = uVar36;
      if (uVar29 < uVar5) {
        uVar33 = 0;
        if ((uVar36 - 1 < 3) && (uVar33 = (iVar30 - uVar4 & 0xff) + 1, uVar33 < uVar36)) {
          uVar33 = uVar36;
        }
      }
      else if (uVar5 < uVar29) {
        uVar15 = uVar14;
        if (uVar24 - 1 < 3) {
LAB_ram_48055d58:
          uVar29 = (uVar4 - iVar30 & 0xff) + 1;
          uVar13 = uVar15;
          uVar33 = uVar36;
          if (uVar24 < uVar29) {
            uVar24 = uVar29;
          }
        }
        else {
          uVar24 = 0;
        }
      }
    }
    uVar15 = uVar21;
    uVar21 = uVar15;
    uVar36 = uVar33;
    if (uVar19 == 0) {
LAB_ram_48055bba:
      uVar36 = uVar33;
      if (uVar13 == 0) {
        uVar36 = uVar33 & 0xff;
        cVar35 = '\0';
      }
      else {
LAB_ram_48055bea:
        cVar35 = *(char *)(param_2 + 0x9e);
        uVar33 = uVar36;
LAB_ram_48055bee:
        uVar36 = uVar33 & 0xff;
      }
LAB_ram_48055bc0:
      if (uVar15 != 0) {
        uVar24 = 3;
        uVar21 = 3;
        goto LAB_ram_48055a36;
      }
      goto LAB_ram_48055c8a;
    }
LAB_ram_48055a0e:
    bVar9 = *(byte *)(param_2 + 0x94);
    uVar15 = uVar21;
    uVar33 = uVar36;
    if (bVar9 == 2) {
LAB_ram_48056032:
      uVar36 = 3;
      uVar33 = 3;
      cVar35 = '\0';
      if (uVar13 != 0) {
LAB_ram_48055fc2:
        uVar36 = 3;
        cVar35 = *(char *)(param_2 + 0x9e);
        uVar33 = 3;
      }
      goto LAB_ram_48055bc0;
    }
LAB_ram_48055a18:
    if (bVar9 == 5) goto LAB_ram_48056032;
    if ((bVar9 != 1) && (bVar9 != 4)) {
LAB_ram_48055eec:
      if ((bVar9 & 0xfb) != 3) goto LAB_ram_48055bba;
      uVar36 = uVar33 & 0xff;
      cVar35 = '\x01';
      goto LAB_ram_48055bc0;
    }
    uVar24 = 3;
    uVar21 = 3;
    uVar36 = uVar33 & 0xff;
    cVar35 = '\0';
    if (uVar13 == 0) goto LAB_ram_48055a36;
LAB_ram_48055b48:
    uVar16 = (undefined1)uVar36;
    uVar20 = 3;
    uVar21 = 3;
    cVar35 = *(char *)(param_2 + 0x9e);
    uVar24 = uVar21;
  }
  uVar12 = (char)uVar21;
  if (((((cVar6 == '\0') || (uVar12 = uVar20, uVar37 == 0)) || (uVar17 == 0)) ||
      ((param_4 == 0 || (uVar26 == 0)))) || (cVar35 != '\0')) {
    uVar20 = uVar12;
    *(undefined1 *)(param_2 + 0x76) = uVar23;
    *(undefined1 *)(param_2 + 0x77) = uVar7;
    *(char *)(param_2 + 0x74) = (char)iVar22;
    *(undefined1 *)(param_2 + 0x78) = uVar16;
    *(undefined1 *)(param_2 + 0x79) = uVar20;
    *(undefined1 *)(param_2 + 0x7a) = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_2 + 0x70) = 1;
    *param_1 = 1;
    *(undefined1 *)(param_2 + 0x75) = uVar25;
    uVar12 = 0;
    uVar8 = 0;
    goto LAB_ram_48055472;
  }
  cVar6 = *(char *)(param_2 + 0x88);
  if ((byte)(cVar6 - 1U) < 4) {
    if (cVar6 == '\x04') {
      uVar32 = 0;
      uVar8 = 6;
      if ((uVar33 == 3) && (uVar24 == 1)) {
        uVar32 = 2;
        uVar8 = 3;
      }
    }
    else if (cVar6 == '\x02') {
      if ((uVar24 == 3) && (uVar33 == 1)) {
        uVar32 = 1;
        uVar8 = 4;
      }
      else {
LAB_ram_48056000:
        uVar32 = 0;
        uVar8 = 6;
      }
    }
    else if (uVar33 == 1) {
      if (uVar24 != 3) goto LAB_ram_48056000;
      uVar8 = 4;
      uVar32 = 1;
    }
    else {
      uVar32 = 0;
      uVar8 = 6;
      if ((uVar24 == 1) && (uVar33 == 3)) {
        uVar32 = 2;
        uVar8 = 3;
      }
    }
  }
  else {
    uVar32 = 0;
    uVar8 = 1;
  }
  uVar12 = 1;
  *(undefined1 *)(param_2 + 0x72) = uVar32;
  *(char *)(param_2 + 0x74) = (char)iVar22;
  *(undefined1 *)(param_2 + 0x78) = uVar16;
  *(undefined1 *)(param_2 + 0x79) = uVar20;
  *(undefined1 *)(param_2 + 0x7a) = uVar8;
  *(undefined1 *)(param_1 + 1) = uVar32;
  *(undefined **)(param_2 + 0x70) = &sedeleg;
  *param_1 = &sedeleg;
  *(undefined1 *)(param_2 + 0x73) = 1;
  *(undefined1 *)(param_2 + 0x75) = uVar25;
  *(undefined1 *)(param_2 + 0x76) = uVar23;
  *(undefined1 *)(param_2 + 0x77) = uVar7;
LAB_ram_48055472:
  *(undefined1 *)((int)param_1 + 3) = uVar12;
  *(int *)(param_1 + 2) = iVar22;
  *(undefined1 *)(param_1 + 4) = uVar16;
  *(undefined1 *)((int)param_1 + 9) = uVar20;
  *(undefined1 *)(param_1 + 5) = uVar8;
  FUN_ram_4ff3ee10(param_2 + 0xac);
  return param_1;
}


