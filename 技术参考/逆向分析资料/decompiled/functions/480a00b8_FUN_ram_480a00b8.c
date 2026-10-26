/* Firmware entry: 0x480a00b8 */

void FUN_ram_480a00b8(int *param_1,uint param_2)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char cVar9;
  short sVar10;
  int *piVar11;
  undefined4 extraout_a3;
  undefined4 extraout_a3_00;
  byte bVar12;
  uint uVar13;
  short *psVar14;
  int iVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined1 uVar18;
  undefined4 *puVar19;
  int *piVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 uVar23;
  int iVar24;
  char cVar25;
  uint uVar26;
  uint uVar27;
  undefined2 uStack_9c;
  undefined1 uStack_9a;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  undefined4 local_78 [17];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar17 = param_1 + 2;
  piVar4 = param_1 + 0x2d4;
  FUN_ram_4ff3ec14(piVar4,0xffffffff);
  uVar1 = *(ushort *)(param_1 + 0x2da);
  FUN_ram_4ff3ee10(piVar4);
  if (uVar1 != 0) {
    uVar13 = (uint)*(byte *)((int)param_1 + 0xb72);
    cVar2 = '\x01';
    if (param_2 == 3) {
      cVar2 = '\x05';
    }
    cVar25 = '\0';
    uVar27 = uVar13;
    do {
      uVar26 = uVar27 % 0xc;
      if ((uVar1 >> uVar26 & 1) != 0) {
        FUN_ram_4ff3ec14(piVar4,0xffffffff);
        bVar12 = *(byte *)((int)param_1 + uVar26 * 0xf0 + 0xa2);
        FUN_ram_4ff3ee10(piVar4);
        if (param_2 == bVar12) {
          if (cVar2 != '\x01') {
            FUN_ram_4ff3ec14(piVar4,0xffffffff);
            cVar9 = *(char *)((int)param_1 + uVar26 * 0xf0 + 0x1d);
            if (cVar9 == '\x01') {
              if (param_1[uVar26 * 0x3c + 4] != 0x3fd) goto LAB_ram_480a02a4;
              bVar12 = *(byte *)((int)param_1 + uVar26 * 0xf0 + 0x15) & 7;
              if (bVar12 == 1) {
                cVar9 = '\0';
              }
              else if (bVar12 != 2) {
                cVar9 = '\x04';
              }
            }
            else if (cVar9 == '\x02') {
              if (param_1[uVar26 * 0x3c + 4] != 0x3c2) goto LAB_ram_480a02a4;
            }
            else if (cVar9 == '\x04') {
              if (param_1[uVar26 * 0x3c + 4] == 0x370) {
                cVar9 = '\x03';
              }
            }
            else {
LAB_ram_480a02a4:
              cVar9 = '\x04';
            }
            FUN_ram_4ff3ee10(piVar4);
            if (cVar25 != cVar9) goto LAB_ram_480a0262;
          }
          psVar14 = *(short **)(*param_1 + 0x33ec);
          if (psVar14 != (short *)0x0) {
            sVar10 = *psVar14;
            if (sVar10 == 0) {
              return;
            }
            if (*(code **)(psVar14 + 2) != (code *)0x0) {
              iVar6 = (**(code **)(psVar14 + 2))();
              if (*(uint *)(psVar14 + 6) <= (uint)(iVar6 - *(int *)(psVar14 + 4))) {
                return;
              }
              sVar10 = *psVar14;
            }
            *psVar14 = sVar10 + -1;
          }
          uStack_9c = 0;
          uStack_9a = 0;
          uStack_98 = 0;
          uStack_94 = 0;
          uStack_90 = 0;
          uStack_8c = 0;
          uStack_88 = 0;
          uStack_84 = 0;
          *(char *)((int)param_1 + 0xb72) = (char)((uVar26 + 1) % 0xc);
          uStack_80 = 0;
          uStack_7c = 0;
          uStack_7a = 1;
          iVar6 = FUN_ram_48025b94();
          FUN_ram_4ff3ec14(piVar4,0xffffffff);
          iVar15 = uVar26 * 0xf0;
          if ((char)param_1[uVar26 * 0x3c + 0x3e] == '\x02') {
            iVar7 = FUN_ram_48025ba6();
            if (((uint)param_1[uVar26 * 0x3c + 0x3d] < (uint)(iVar7 - param_1[uVar26 * 0x3c + 0x3c])
                ) || (0 < iVar6 - param_1[uVar26 * 0x3c + 0x26])) {
              puVar22 = (undefined4 *)param_1[0x2d6];
              *(ushort *)(param_1 + 0x2da) =
                   ~(ushort)(1 << (*(byte *)((int)param_1 + uVar26 * 0xf0 + 0x82) & 0x1f)) &
                   *(ushort *)(param_1 + 0x2da);
              puVar19 = puVar22 + 0x297;
              *(undefined1 *)(param_1 + uVar26 * 0x3c + 0x3e) = 4;
              *(undefined1 *)((int)param_1 + uVar26 * 0xf0 + 0x9e) = 0;
              FUN_ram_4ff3ec14(puVar19,0xffffffff);
              piVar11 = (int *)*puVar22;
              FUN_ram_4ff3ee10(puVar19);
              if (piVar11 != (int *)0x0) {
                (**(code **)(*piVar11 + 0xa8))
                          (piVar11,piVar17 + uVar26 * 0x3c + 0x1e,piVar11,extraout_a3,
                           *(code **)(*piVar11 + 0xa8));
              }
              puVar19 = &DAT_ram_48222eb8;
              puVar22 = local_78;
              do {
                puVar21 = puVar22;
                puVar16 = puVar19;
                uVar3 = puVar16[1];
                uVar23 = puVar16[2];
                *puVar21 = *puVar16;
                uVar8 = puVar16[3];
                puVar21[1] = uVar3;
                puVar21[2] = uVar23;
                puVar21[3] = uVar8;
                puVar19 = puVar16 + 4;
                puVar22 = puVar21 + 4;
              } while (puVar16 + 4 != &DAT_ram_48222ee8);
              uVar3 = puVar16[5];
              puVar21[4] = DAT_ram_48222ee8;
              puVar21[5] = uVar3;
              FUN_ram_4ff45158(piVar17 + uVar26 * 0x3c + 0x2c,local_78,0x35);
              piVar11 = param_1 + uVar26 * 0x3c;
              bVar12 = *(byte *)((int)piVar11 + 0x82);
              piVar11[0x2f] = piVar11[0x21];
              piVar11[0x34] = piVar11[0x2a];
              piVar11[0x35] = piVar11[0x2b];
              iVar24 = piVar11[0x25];
              iVar6 = piVar11[0x24];
              iVar7 = piVar11[0x22];
              piVar11[0x37] = piVar11[0x2d];
              *(char *)((int)piVar11 + 0xc5) = (char)piVar11[0x20];
              piVar11[0x36] = piVar11[0x2c];
              uVar18 = 9;
              uVar5 = 3;
            }
            else {
              piVar11 = (int *)param_1[0x2d6];
              piVar20 = piVar11 + 0x297;
              uVar18 = *(undefined1 *)((int)param_1 + iVar15 + 0x1d);
              FUN_ram_4ff3ec14(piVar20,0xffffffff);
              piVar11 = (int *)*piVar11;
              FUN_ram_4ff3ee10(piVar20);
              iVar6 = 0;
              if (piVar11 != (int *)0x0) {
                iVar6 = (**(code **)(*piVar11 + 0x154))(piVar11,uVar18,*(code **)(*piVar11 + 0x154))
                ;
              }
              if (param_1[uVar26 * 0x3c + 0x25] == iVar6) {
                FUN_ram_4ff45158(&uStack_9c,piVar17 + uVar26 * 0x3c + 0x1e,0x23);
                FUN_ram_4ff3ee10(piVar4);
                FUN_ram_48047b9e(piVar17,&uStack_9c);
                goto LAB_ram_480a0262;
              }
              puVar22 = (undefined4 *)param_1[0x2d6];
              *(ushort *)(param_1 + 0x2da) =
                   ~(ushort)(1 << (*(byte *)((int)param_1 + uVar26 * 0xf0 + 0x82) & 0x1f)) &
                   *(ushort *)(param_1 + 0x2da);
              puVar19 = puVar22 + 0x297;
              *(undefined1 *)(param_1 + uVar26 * 0x3c + 0x3e) = 4;
              *(undefined1 *)((int)param_1 + uVar26 * 0xf0 + 0x9e) = 0;
              FUN_ram_4ff3ec14(puVar19,0xffffffff);
              piVar11 = (int *)*puVar22;
              FUN_ram_4ff3ee10(puVar19);
              if (piVar11 != (int *)0x0) {
                (**(code **)(*piVar11 + 0xa8))
                          (piVar11,piVar17 + uVar26 * 0x3c + 0x1e,piVar11,extraout_a3_00,
                           *(code **)(*piVar11 + 0xa8));
              }
              puVar19 = &DAT_ram_48222eb8;
              puVar22 = local_78;
              do {
                puVar21 = puVar22;
                puVar16 = puVar19;
                uVar3 = puVar16[1];
                uVar23 = puVar16[2];
                *puVar21 = *puVar16;
                uVar8 = puVar16[3];
                puVar21[1] = uVar3;
                puVar21[2] = uVar23;
                puVar21[3] = uVar8;
                puVar19 = puVar16 + 4;
                puVar22 = puVar21 + 4;
              } while (puVar16 + 4 != &DAT_ram_48222ee8);
              uVar3 = puVar16[5];
              puVar21[4] = DAT_ram_48222ee8;
              puVar21[5] = uVar3;
              FUN_ram_4ff45158(piVar17 + uVar26 * 0x3c + 0x2c,local_78,0x35);
              piVar11 = param_1 + uVar26 * 0x3c;
              bVar12 = *(byte *)((int)piVar11 + 0x82);
              piVar11[0x2f] = piVar11[0x21];
              piVar11[0x34] = piVar11[0x2a];
              piVar11[0x35] = piVar11[0x2b];
              piVar11[0x37] = piVar11[0x2d];
              *(char *)((int)piVar11 + 0xc5) = (char)piVar11[0x20];
              iVar24 = piVar11[0x25];
              iVar6 = piVar11[0x24];
              iVar7 = piVar11[0x22];
              piVar11[0x36] = piVar11[0x2c];
              uVar18 = 10;
              uVar5 = 5;
            }
            piVar11[0x32] = iVar24;
            *(undefined1 *)(piVar11 + 0x31) = uVar18;
            *(undefined1 *)(piVar11 + 0x2e) = uVar5;
            *(char *)(piVar17 + uVar26 * 0x3c + 0x38) = (char)(bVar12 + 1);
            *(char *)((int)piVar17 + iVar15 + 0xe1) = (char)(bVar12 + 1 >> 8);
            *(char *)(piVar17 + uVar26 * 0x3c + 0x36) = (char)iVar6;
            *(char *)(piVar17 + uVar26 * 0x3c + 0x37) = (char)iVar7;
            *(char *)((int)piVar17 + iVar15 + 0xd9) = (char)((uint)iVar6 >> 8);
            *(char *)((int)piVar17 + iVar15 + 0xda) = (char)((uint)iVar6 >> 0x10);
            *(char *)((int)piVar17 + iVar15 + 0xdb) = (char)((uint)iVar6 >> 0x18);
            *(char *)((int)piVar17 + iVar15 + 0xdd) = (char)((uint)iVar7 >> 8);
            *(char *)((int)piVar17 + iVar15 + 0xde) = (char)((uint)iVar7 >> 0x10);
            *(char *)((int)piVar17 + iVar15 + 0xdf) = (char)((uint)iVar7 >> 0x18);
            *(undefined1 *)((int)piVar17 + iVar15 + 0xe2) = 0x11;
          }
          FUN_ram_4ff3ee10(piVar4);
        }
      }
LAB_ram_480a0262:
      uVar27 = uVar27 + 1;
    } while ((uVar13 + 0xc != uVar27) ||
            (cVar25 = cVar25 + '\x01', uVar27 = uVar13, cVar2 != cVar25));
  }
  return;
}


