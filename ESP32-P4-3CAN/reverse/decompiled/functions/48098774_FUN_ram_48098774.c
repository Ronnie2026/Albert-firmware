/* Firmware entry: 0x48098774 */

void FUN_ram_48098774(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  short sVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  undefined4 uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  undefined1 auStack_31c [60];
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined1 uStack_2d8;
  int local_2d0 [3];
  byte abStack_2c4 [116];
  int local_250 [36];
  int local_1c0 [11];
  undefined2 uStack_194;
  undefined1 uStack_192;
  int aiStack_70 [15];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar6 = local_1c0;
  local_1c0[0] = 0;
  local_1c0[1] = 0;
  local_1c0[2] = 0;
  local_1c0[3] = 0;
  local_1c0[4] = 0;
  local_1c0[5] = 0;
  local_1c0[6] = 0;
  uStack_194 = 0;
  uStack_192 = 0;
  local_1c0[10] = 0xff00;
  local_1c0[7] = 0xffffffff;
  local_1c0[8] = 0xffffffff;
  local_1c0[9] = 0xffffffff;
  piVar18 = piVar6;
  do {
    piVar18[0xc] = 0;
    piVar18[0xd] = 0;
    piVar18[0xe] = 0;
    piVar18[0xf] = 0;
    piVar18[0x10] = 0;
    piVar18[0x11] = 0;
    piVar18[0x12] = 0;
    piVar18[0x13] = -1;
    piVar18[0x14] = -1;
    piVar18[0x15] = -1;
    piVar18[0x16] = 0xff00;
    *(undefined2 *)(piVar18 + 0x17) = 0;
    *(undefined1 *)((int)piVar18 + 0x5e) = 0;
    piVar18 = piVar18 + 0xc;
  } while (piVar18 != aiStack_70);
  piVar18 = local_2d0;
  memset(piVar18,0,0x80);
  memset(local_250,0,0x90);
  iVar7 = param_1 + 0x874;
  FUN_ram_4ff3ec14(iVar7,0xffffffff);
  bVar1 = *(byte *)(param_1 + 0x2d5e);
  uVar21 = 0;
  piVar23 = piVar6;
  do {
    uVar13 = uVar21 + 1;
    if (bVar1 == uVar21) break;
    bVar2 = *(byte *)(param_1 + 0x2d5d);
    uVar21 = uVar13 & 0xff;
    FUN_ram_4ff45158(piVar23,(uint)bVar2 * 0x30 + param_1 + 0x2bdc,0x2f);
    *(byte *)(param_1 + 0x2d5d) = bVar2 + 1 & 7;
    *(byte *)(param_1 + 0x2d5e) = bVar1 - (char)uVar13;
    piVar23 = piVar23 + 0xc;
  } while (uVar21 != 8);
  bVar1 = *(byte *)(param_1 + 0x2de2);
  uVar13 = 0;
  piVar23 = piVar18;
  do {
    uVar14 = uVar13 + 1;
    if (bVar1 == uVar13) break;
    bVar2 = *(byte *)(param_1 + 0x2de1);
    uVar13 = uVar14 & 0xff;
    FUN_ram_4ff45158(piVar23,(bVar2 + 0x2d6) * 0x10 + param_1,0xf);
    *(byte *)(param_1 + 0x2de1) = bVar2 + 1 & 7;
    *(byte *)(param_1 + 0x2de2) = bVar1 - (char)uVar14;
    piVar23 = piVar23 + 4;
  } while (uVar13 != 8);
  bVar1 = *(byte *)(param_1 + 0x2e76);
  piVar23 = local_250;
  uVar14 = 0;
  piVar11 = piVar23;
  do {
    uVar15 = uVar14 + 1;
    if (bVar1 == uVar14) break;
    uVar14 = uVar15 & 0xff;
    uVar9 = *(byte *)(param_1 + 0x2e75) + 1;
    iVar16 = (uint)*(byte *)(param_1 + 0x2e75) * 0xc + param_1;
    iVar25 = *(int *)(iVar16 + 0x2de8);
    iVar24 = *(int *)(iVar16 + 0x2dec);
    *piVar11 = *(int *)(iVar16 + 0x2de4);
    piVar11[1] = iVar25;
    piVar11[2] = iVar24;
    *(char *)(param_1 + 0x2e75) = (char)uVar9 + (char)(uVar9 / 0xc) * -0xc;
    *(byte *)(param_1 + 0x2e76) = bVar1 - (char)uVar15;
    piVar11 = piVar11 + 3;
  } while (uVar14 != 0xc);
  FUN_ram_4ff3ee10(iVar7);
  piVar11 = piVar18 + uVar13 * 4;
  if (uVar13 != 0) {
    do {
      FUN_ram_4ff3ec14(iVar7,0xffffffff);
      if (*piVar18 == *(int *)(param_1 + 0x2e78)) {
        iVar16 = piVar18[1];
        piVar17 = (int *)(param_1 + 0x3168);
        uVar13 = 0;
        cVar8 = '\x01';
        if (*(byte *)(param_1 + 0x30cd) != 0) {
          do {
            uVar15 = uVar13;
            iVar24 = *piVar17;
            piVar17 = piVar17 + 6;
            if (iVar24 == iVar16) {
              iVar16 = uVar15 * 0x18 + param_1;
              bVar1 = *(byte *)((int)piVar18 + 0xd);
              bVar2 = *(byte *)(piVar18 + 3);
              bVar5 = *(byte *)((int)piVar18 + 0xe);
              *(int *)(iVar16 + 0x317c) = piVar18[2];
              *(int *)(iVar16 + 0x316c) = *(int *)(iVar16 + 0x316c) + 1;
              *(uint *)(iVar16 + 0x3170) = *(int *)(iVar16 + 0x3170) + (uint)bVar2;
              *(uint *)(iVar16 + 0x3174) = *(int *)(iVar16 + 0x3174) + (uint)bVar1;
              *(uint *)(iVar16 + 0x3178) = (uint)bVar5 + *(int *)(iVar16 + 0x3178);
              FUN_ram_4ff3ee10(iVar7);
              goto joined_r0x48098a4c;
            }
            uVar13 = uVar15 + 1;
          } while (uVar13 != *(byte *)(param_1 + 0x30cd));
          if (uVar13 == 8) {
            *(int *)(param_1 + 0x30c0) = *(int *)(param_1 + 0x30c0) + 1;
            goto LAB_ram_48098996;
          }
          cVar8 = (char)uVar15 + '\x02';
        }
        iVar25 = uVar13 * 0x18 + param_1;
        *(char *)(param_1 + 0x30cd) = cVar8;
        bVar1 = *(byte *)(piVar18 + 3);
        bVar2 = *(byte *)((int)piVar18 + 0xd);
        bVar5 = *(byte *)((int)piVar18 + 0xe);
        iVar24 = piVar18[2];
        *(int *)(iVar25 + 0x3168) = iVar16;
        *(undefined4 *)(iVar25 + 0x316c) = 1;
        *(uint *)(iVar25 + 0x3170) = (uint)bVar1;
        *(uint *)(iVar25 + 0x3174) = (uint)bVar2;
        *(uint *)(iVar25 + 0x3178) = (uint)bVar5;
        *(int *)(iVar25 + 0x317c) = iVar24;
      }
LAB_ram_48098996:
      FUN_ram_4ff3ee10(iVar7);
joined_r0x48098a4c:
      piVar18 = piVar18 + 4;
    } while (piVar18 != piVar11);
  }
  if (uVar21 != 0) {
    piVar18 = piVar6 + uVar21 * 0xc;
    do {
      while (FUN_ram_4ff3ec14(iVar7,0xffffffff), *piVar6 != *(int *)(param_1 + 0x2e78)) {
        piVar6 = piVar6 + 0xc;
        FUN_ram_4ff3ee10(iVar7);
        if (piVar6 == piVar18) goto LAB_ram_48098bc0;
      }
      bVar1 = *(byte *)(param_1 + 0x2bd5);
      memset(auStack_31c,0,0x4c);
      iVar12 = (uint)bVar1 * 0x4c;
      uStack_2e0 = 0xffffffff;
      uStack_2dc = 0xffffffff;
      uStack_2d8 = 0xff;
      iVar22 = param_1 + iVar12;
      FUN_ram_4ff45158(iVar22 + 0x3288,auStack_31c,0x4a);
      iVar24 = piVar6[3];
      *(int *)(iVar22 + 0x3290) = piVar6[5];
      iVar16 = piVar6[4];
      *(int *)(iVar22 + 0x3294) = iVar24;
      iVar24 = piVar6[2];
      *(int *)(iVar22 + 0x3298) = iVar16;
      iVar16 = piVar6[10];
      iVar20 = piVar6[1];
      *(undefined1 *)(iVar22 + 0x32cc) = *(undefined1 *)((int)piVar6 + 0x29);
      iVar25 = piVar6[6];
      iVar12 = iVar12 + 0x32b0 + param_1;
      *(char *)(iVar22 + 0x329c) = (char)iVar16;
      *(int *)(iVar22 + 0x3288) = iVar24;
      *(int *)(iVar22 + 0x328c) = iVar20;
      *(int *)(iVar12 + 0x10) = iVar25;
      iVar16 = piVar6[7];
      *(int *)(iVar12 + 0x18) = piVar6[8];
      uVar3 = *(undefined1 *)((int)piVar6 + 0x2a);
      *(int *)(iVar12 + 0x14) = iVar16;
      iVar16 = piVar6[0xb];
      uVar4 = *(undefined1 *)((int)piVar6 + 0x2d);
      *(undefined1 *)(iVar22 + 0x32cd) = uVar3;
      uVar3 = *(undefined1 *)((int)piVar6 + 0x2e);
      *(char *)(iVar22 + 0x32ce) = (char)iVar16;
      *(undefined1 *)(iVar22 + 0x32cf) = uVar4;
      sVar10 = (short)piVar6[9];
      *(undefined1 *)(iVar22 + 0x32d0) = uVar3;
      if (sVar10 == -1) {
        sVar10 = *(short *)(param_1 + 0x3088);
      }
      *(short *)(iVar22 + 0x32b8) = sVar10;
      sVar10 = *(short *)((int)piVar6 + 0x26);
      if (sVar10 == -1) {
        sVar10 = *(short *)(param_1 + 0x308a);
      }
      uVar19 = *(undefined4 *)(param_1 + 0x3064);
      bVar2 = *(byte *)((int)piVar6 + 0x2b);
      *(short *)(iVar22 + 0x32ba) = sVar10;
      *(short *)(iVar22 + 0x32bc) = (short)uVar19;
      *(undefined1 *)(iVar22 + 0x32d1) = 1;
      *(ushort *)(iVar22 + 0x32be) = (ushort)bVar2;
      bVar2 = *(byte *)(param_1 + 0x2bd6);
      *(byte *)(param_1 + 0x2bd5) = bVar1 + 1 & 7;
      if (bVar2 < 8) {
        *(byte *)(param_1 + 0x2bd6) = bVar2 + 1;
        *(byte *)(param_1 + 0x30cf) = bVar2 + 1;
      }
      else {
        *(byte *)(param_1 + 0x30cf) = bVar2;
        *(int *)(param_1 + 0x30c8) = *(int *)(param_1 + 0x30c8) + 1;
      }
      piVar6 = piVar6 + 0xc;
      FUN_ram_4ff3ee10(iVar7);
    } while (piVar6 != piVar18);
  }
LAB_ram_48098bc0:
  if (uVar14 != 0) {
    do {
      FUN_ram_4ff3ec14(iVar7,0xffffffff);
      if (*piVar23 == *(int *)(param_1 + 0x2e78)) {
        uVar21 = (uint)*(byte *)(param_1 + 0x30cc);
        iVar16 = piVar23[1];
        piVar18 = (int *)(param_1 + 0x30d8);
        uVar13 = 0;
        cVar8 = '\x01';
        if (uVar21 != 0) {
          do {
            iVar24 = *piVar18;
            piVar18 = piVar18 + 3;
            if (iVar24 == iVar16) {
              iVar24 = uVar13 * 0xc + param_1;
              iVar16 = piVar23[2];
              *(int *)(iVar24 + 0x30dc) = *(int *)(iVar24 + 0x30dc) + 1;
              *(int *)(iVar24 + 0x30e0) = iVar16;
              FUN_ram_4ff3ee10(iVar7);
              goto joined_r0x48098c66;
            }
            uVar13 = uVar13 + 1;
          } while (uVar21 != uVar13);
          if (uVar21 == 0xc) {
            *(int *)(param_1 + 0x30b8) = *(int *)(param_1 + 0x30b8) + 1;
            goto LAB_ram_48098bdc;
          }
          cVar8 = *(byte *)(param_1 + 0x30cc) + 1;
        }
        iVar24 = piVar23[2];
        iVar25 = uVar21 * 0xc + param_1;
        *(char *)(param_1 + 0x30cc) = cVar8;
        *(int *)(iVar25 + 0x30d8) = iVar16;
        *(undefined4 *)(iVar25 + 0x30dc) = 1;
        *(int *)(iVar25 + 0x30e0) = iVar24;
      }
LAB_ram_48098bdc:
      FUN_ram_4ff3ee10(iVar7);
joined_r0x48098c66:
      piVar23 = piVar23 + 3;
    } while (piVar23 != local_250 + uVar14 * 3);
  }
  return;
}


