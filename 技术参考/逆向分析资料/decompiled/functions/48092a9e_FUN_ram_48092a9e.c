/* Firmware entry: 0x48092a9e */

void FUN_ram_48092a9e(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  int *piVar20;
  undefined4 *puVar21;
  int iVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  int iVar29;
  undefined4 uVar30;
  int iVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(*(int *)(param_1 + 4) + 0x874,0xffffffff);
  iVar15 = *(int *)(param_1 + 8);
  if (*(char *)(iVar15 + 0x240) == '\0') {
    iVar22 = *(int *)(param_1 + 4);
    if (param_2 == 0) {
      uVar19 = 0;
      goto LAB_ram_48092b3a;
    }
  }
  else {
    iVar22 = *(int *)(param_1 + 4);
    iVar5 = 0;
    uVar7 = 0;
LAB_ram_48092ae2:
    do {
      uVar19 = (uint)*(byte *)(iVar22 + 0x488);
      if (uVar19 != 0) {
        piVar20 = (int *)(uVar7 * 0x24 + iVar15);
        piVar11 = (int *)(iVar22 + 0x1b8);
        uVar25 = 0;
        do {
          cVar1 = *(char *)((int)piVar11 + 0xd);
          if (*(char *)((int)piVar20 + 0xd) == cVar1) {
            iVar29 = *piVar20;
            iVar31 = *piVar11;
            if (((iVar29 == iVar31) && (*(byte *)(piVar11 + 1) == *(byte *)(piVar20 + 1))) &&
               (iVar29 != 0x3c2)) {
              if (*(char *)((int)piVar20 + 0xd) == '\x02') {
                if (iVar29 == 0x213) goto LAB_ram_48092b12;
                cVar2 = *(char *)(iVar15 + iVar5 + 0xd);
              }
              else {
                cVar2 = *(char *)(iVar15 + iVar5 + 0xd);
              }
              if (cVar2 == '\x01') {
                if (iVar29 == 0x334) {
joined_r0x48092eee:
                  if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
LAB_ram_48092d48:
                    iVar15 = uVar25 * 0x24 + iVar22;
                    uVar14 = *(undefined4 *)(iVar15 + 0x1b8);
                    uVar10 = *(undefined4 *)(iVar15 + 0x1d0);
                    uVar9 = *(undefined4 *)(iVar15 + 0x1d4);
                    uVar17 = *(undefined4 *)(iVar15 + 0x1bc);
                    uVar12 = *(undefined4 *)(iVar15 + 0x1d8);
                    uVar23 = *(undefined4 *)(iVar15 + 0x1c0);
                    uVar16 = uVar19 - 1 & 0xff;
                    uVar26 = *(undefined4 *)(iVar15 + 0x1c4);
                    uVar33 = *(undefined4 *)(iVar15 + 0x1c8);
                    uVar27 = *(undefined4 *)(iVar15 + 0x1cc);
                    if (uVar16 != (uVar25 & 0xff)) {
                      iVar29 = uVar16 * 0x24 + iVar22;
                      uVar32 = *(undefined4 *)(iVar29 + 0x1bc);
                      uVar30 = *(undefined4 *)(iVar29 + 0x1c0);
                      uVar6 = *(undefined4 *)(iVar29 + 0x1c4);
                      uVar4 = *(undefined4 *)(iVar29 + 0x1c8);
                      uVar28 = *(undefined4 *)(iVar29 + 0x1cc);
                      uVar24 = *(undefined4 *)(iVar29 + 0x1d0);
                      uVar13 = *(undefined4 *)(iVar29 + 0x1d4);
                      uVar18 = *(undefined4 *)(iVar29 + 0x1d8);
                      *(undefined4 *)(iVar15 + 0x1b8) = *(undefined4 *)(iVar29 + 0x1b8);
                      *(undefined4 *)(iVar15 + 0x1bc) = uVar32;
                      *(undefined4 *)(iVar15 + 0x1c0) = uVar30;
                      *(undefined4 *)(iVar15 + 0x1c4) = uVar6;
                      *(undefined4 *)(iVar15 + 0x1c8) = uVar4;
                      *(undefined4 *)(iVar15 + 0x1cc) = uVar28;
                      *(undefined4 *)(iVar15 + 0x1d0) = uVar24;
                      *(undefined4 *)(iVar15 + 0x1d4) = uVar13;
                      *(undefined4 *)(iVar15 + 0x1d8) = uVar18;
                    }
                    *(char *)(iVar22 + 0x488) = (char)(uVar19 - 1);
                    puVar21 = (undefined4 *)(*(int *)(param_1 + 8) + uVar7 * 0x24);
                    puVar21[8] = uVar12;
                    *puVar21 = uVar14;
                    puVar21[1] = uVar17;
                    puVar21[2] = uVar23;
                    puVar21[3] = uVar26;
                    puVar21[4] = uVar33;
                    puVar21[5] = uVar27;
                    puVar21[6] = uVar10;
                    puVar21[7] = uVar9;
                    iVar15 = *(int *)(param_1 + 8);
                    uVar7 = uVar7 + 1;
                    uVar19 = (uint)*(byte *)(iVar15 + 0x240);
                    iVar22 = *(int *)(param_1 + 4);
                    iVar5 = iVar5 + 0x24;
                    if (uVar19 <= (uVar7 & 0xff)) goto LAB_ram_48092b2e;
                    goto LAB_ram_48092ae2;
                  }
                }
                else if ((iVar29 == 0x399) || (iVar29 == 0x3f8)) {
                  if (cVar1 == '\x01') goto LAB_ram_48092d48;
                  goto LAB_ram_48092d2c;
                }
              }
              else if (cVar2 == '\x02') {
                if (iVar29 == 0x334) goto joined_r0x48092eee;
                if (((iVar29 == 0x3a1) && ((cVar1 != '\x01' && (cVar1 == '\x02')))) &&
                   ((*(byte *)(piVar20 + 1) < 7 ||
                    (((*(byte *)(uVar7 * 0x24 + iVar15 + 0xb) ^ *(byte *)((int)piVar11 + 0xb)) & 0xf
                     ) == 0)))) goto LAB_ram_48092d48;
              }
              else if (((cVar2 == '\x04') && ((iVar29 == 0x30a || (iVar29 == 0x286)))) &&
                      (cVar1 != '\x01')) {
LAB_ram_48092d2c:
                if (((cVar1 != '\x02') && (cVar1 == '\x04')) &&
                   ((iVar31 == 0x30a || (iVar31 == 0x286)))) goto LAB_ram_48092d48;
              }
            }
          }
LAB_ram_48092b12:
          uVar25 = uVar25 + 1;
          piVar11 = piVar11 + 9;
        } while (uVar25 != uVar19);
      }
      uVar19 = (uint)*(byte *)(iVar15 + 0x240);
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + 0x24;
    } while ((uVar7 & 0xff) < uVar19);
LAB_ram_48092b2e:
    if ((param_2 == 0) || (0xf < uVar19)) goto LAB_ram_48092b3a;
  }
  bVar3 = *(byte *)(iVar22 + 0x488);
  while (uVar19 = (uint)bVar3, uVar19 != 0) {
    uVar7 = uVar19 - 1 & 0xff;
    if (uVar19 == 1) {
      uStack_54 = *(undefined4 *)(iVar22 + 0x1b8);
      uStack_50 = *(undefined4 *)(iVar22 + 0x1bc);
      uStack_4c = *(undefined4 *)(iVar22 + 0x1c0);
      uStack_48 = *(undefined4 *)(iVar22 + 0x1c4);
      uStack_44 = *(undefined4 *)(iVar22 + 0x1c8);
      uStack_40 = *(undefined4 *)(iVar22 + 0x1cc);
      uStack_3c = *(undefined4 *)(iVar22 + 0x1d0);
      uStack_38 = *(undefined4 *)(iVar22 + 0x1d4);
      uStack_34 = *(undefined4 *)(iVar22 + 0x1d8);
    }
    else {
      piVar11 = (int *)(iVar22 + 0x1ec);
      uVar16 = 1;
      uVar25 = 0;
      do {
        iVar15 = *piVar11;
        piVar11 = piVar11 + 9;
        uVar8 = uVar25;
        if (iVar15 - *(int *)(uVar25 * 0x24 + iVar22 + 0x1c8) < 0) {
          uVar25 = uVar16 & 0xff;
          uVar8 = uVar16;
        }
        uVar16 = uVar16 + 1;
      } while ((uVar16 & 0xff) < uVar19);
      iVar15 = uVar8 * 0x24 + iVar22;
      uStack_54 = *(undefined4 *)(iVar15 + 0x1b8);
      uStack_50 = *(undefined4 *)(iVar15 + 0x1bc);
      uStack_4c = *(undefined4 *)(iVar15 + 0x1c0);
      uStack_48 = *(undefined4 *)(iVar15 + 0x1c4);
      uStack_44 = *(undefined4 *)(iVar15 + 0x1c8);
      uStack_40 = *(undefined4 *)(iVar15 + 0x1cc);
      uStack_3c = *(undefined4 *)(iVar15 + 0x1d0);
      uStack_38 = *(undefined4 *)(iVar15 + 0x1d4);
      uStack_34 = *(undefined4 *)(iVar15 + 0x1d8);
      if (uVar25 != uVar7) {
        iVar5 = uVar7 * 0x24 + iVar22;
        uVar33 = *(undefined4 *)(iVar5 + 0x1bc);
        uVar26 = *(undefined4 *)(iVar5 + 0x1c0);
        uVar23 = *(undefined4 *)(iVar5 + 0x1c4);
        uVar9 = *(undefined4 *)(iVar5 + 0x1c8);
        uVar10 = *(undefined4 *)(iVar5 + 0x1cc);
        uVar12 = *(undefined4 *)(iVar5 + 0x1d0);
        uVar14 = *(undefined4 *)(iVar5 + 0x1d4);
        uVar17 = *(undefined4 *)(iVar5 + 0x1d8);
        *(undefined4 *)(iVar15 + 0x1b8) = *(undefined4 *)(iVar5 + 0x1b8);
        *(undefined4 *)(iVar15 + 0x1bc) = uVar33;
        *(undefined4 *)(iVar15 + 0x1c0) = uVar26;
        *(undefined4 *)(iVar15 + 0x1c4) = uVar23;
        *(undefined4 *)(iVar15 + 0x1c8) = uVar9;
        *(undefined4 *)(iVar15 + 0x1cc) = uVar10;
        *(undefined4 *)(iVar15 + 0x1d0) = uVar12;
        *(undefined4 *)(iVar15 + 0x1d4) = uVar14;
        *(undefined4 *)(iVar15 + 0x1d8) = uVar17;
      }
    }
    *(char *)(iVar22 + 0x488) = (char)(uVar19 - 1);
    iVar15 = *(int *)(param_1 + 8);
    bVar3 = *(byte *)(iVar15 + 0x240);
    *(byte *)(iVar15 + 0x240) = bVar3 + 1;
    puVar21 = (undefined4 *)(iVar15 + (uint)bVar3 * 0x24);
    *puVar21 = uStack_54;
    puVar21[1] = uStack_50;
    puVar21[2] = uStack_4c;
    puVar21[3] = uStack_48;
    puVar21[4] = uStack_44;
    puVar21[5] = uStack_40;
    puVar21[6] = uStack_3c;
    puVar21[7] = uStack_38;
    puVar21[8] = uStack_34;
    iVar15 = *(int *)(param_1 + 8);
    iVar22 = *(int *)(param_1 + 4);
    uVar19 = (uint)*(byte *)(iVar15 + 0x240);
    if (0xf < uVar19) goto LAB_ram_48092b3a;
    bVar3 = *(byte *)(iVar22 + 0x488);
  }
  uVar19 = (uint)*(byte *)(iVar15 + 0x240);
LAB_ram_48092b3a:
  iVar15 = uVar19 + *(byte *)(iVar22 + 0x488);
  if (*(int *)(iVar22 + 0x158) != 0) {
    iVar5 = FUN_ram_4ff3b9c2();
    iVar22 = *(int *)(param_1 + 4);
    iVar15 = iVar15 + iVar5;
  }
  *(int *)(iVar22 + 0x3004) = iVar15;
  FUN_ram_4ff3ee10(iVar22 + 0x874);
  return;
}


