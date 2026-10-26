/* Firmware entry: 0x48052b10 */

undefined1 * FUN_ram_48052b10(undefined1 *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined2 uVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  byte bVar21;
  uint uVar22;
  undefined4 uVar23;
  bool bVar24;
  bool bVar25;
  short sVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_2,0xffffffff);
  memset(param_1 + 6,0,0x3a);
  uVar1 = *(undefined1 *)(param_2 + 0x1a);
  uVar2 = *(undefined1 *)(param_2 + 0x25);
  uVar3 = *(undefined1 *)(param_2 + 0x26);
  uVar4 = *(undefined1 *)(param_2 + 0x1c);
  uVar17 = *(undefined2 *)(param_2 + 0x1e);
  uVar5 = *(undefined1 *)(param_2 + 0x28);
  cVar6 = *(char *)(param_2 + 0x18);
  cVar7 = *(char *)(param_2 + 0x19);
  cVar8 = *(char *)(param_2 + 0x27);
  cVar9 = *(char *)(param_2 + 0x2a);
  cVar10 = *(char *)(param_2 + 0x29);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xc);
  param_1[4] = uVar1;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[5] = uVar4;
  *(undefined2 *)(param_1 + 0xc) = uVar17;
  param_1[0xf] = uVar5;
  param_1[2] = cVar6;
  param_1[3] = cVar7;
  param_1[0xe] = cVar8;
  param_1[0x10] = cVar9;
  param_1[0x11] = cVar10;
  cVar11 = *(char *)(param_2 + 0x1f);
  cVar12 = *(char *)(param_2 + 0x2b);
  if (cVar9 == '\0') {
    uVar27 = 0xffffffff;
    param_1[0x16] = cVar12;
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
    bVar24 = false;
  }
  else {
    uVar27 = param_3 - *(int *)(param_2 + 0x50);
    *(uint *)(param_1 + 0x44) = uVar27;
    if ((cVar10 != '\0') && (uVar27 < 0xbb9)) {
      param_1[0x12] = 1;
    }
    uVar27 = param_3 - *(int *)(param_2 + 0x54);
    param_1[0x16] = cVar12;
    bVar24 = uVar27 < 0xbb9;
    param_1[0x15] = 1;
  }
  cVar9 = *(char *)(param_2 + 0x2c);
  cVar10 = *(char *)(param_2 + 0x2d);
  *(uint *)(param_1 + 0x48) = uVar27;
  param_1[0x17] = bVar24;
  param_1[0x18] = cVar9;
  uVar22 = 0xffffffff;
  bVar24 = false;
  if (cVar10 != '\0') {
    uVar22 = param_3 - *(int *)(param_2 + 0x58);
    bVar24 = uVar22 < 0xbb9;
  }
  cVar10 = *(char *)(param_2 + 0x2e);
  *(uint *)(param_1 + 0x4c) = uVar22;
  param_1[0x19] = bVar24;
  uVar22 = 0xffffffff;
  bVar25 = false;
  if (cVar10 != '\0') {
    uVar22 = param_3 - *(int *)(param_2 + 0x5c);
    bVar25 = uVar22 < 0xbb9;
  }
  cVar10 = *(char *)(param_2 + 0x2f);
  *(uint *)(param_1 + 0x50) = uVar22;
  param_1[0x1a] = bVar25;
  uVar22 = 0xffffffff;
  bVar25 = false;
  if (cVar10 != '\0') {
    uVar22 = param_3 - *(int *)(param_2 + 0x60);
    bVar25 = uVar22 < 0xbb9;
  }
  uVar17 = *(undefined2 *)(param_2 + 0x80);
  uVar29 = *(undefined4 *)(param_2 + 0x78);
  sVar26 = *(short *)(param_2 + 0x76);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined2 *)(param_1 + 0x30) = uVar17;
  uVar18 = *(undefined4 *)(param_2 + 0x84);
  cVar10 = *(char *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x28) = uVar29;
  cVar13 = *(char *)(param_2 + 0x31);
  *(uint *)(param_1 + 0x54) = uVar22;
  bVar21 = *(byte *)(param_2 + 0x26);
  param_1[0x1b] = bVar25;
  *(short *)(param_1 + 0x26) = sVar26;
  *(undefined4 *)(param_1 + 0x34) = uVar18;
  param_1[0x1c] = cVar10;
  param_1[0x1d] = cVar13;
  uVar22 = (uint)bVar21 * 60000;
  if (cVar10 == '\0') {
    uVar20 = 0;
LAB_ram_48052ca0:
    *(uint *)(param_1 + 0x58) = uVar20;
    iVar19 = uVar22 - uVar20;
    if (uVar22 <= uVar20) goto LAB_ram_48052c8e;
  }
  else {
    if (cVar13 == '\0') {
      uVar20 = param_3 - *(int *)(param_2 + 100);
    }
    else {
      uVar20 = *(uint *)(param_2 + 0x68);
    }
    if (uVar20 <= uVar22) goto LAB_ram_48052ca0;
    *(uint *)(param_1 + 0x58) = uVar22;
LAB_ram_48052c8e:
    iVar19 = 0;
  }
  cVar10 = *(char *)(param_2 + 0x32);
  uVar1 = *(undefined1 *)(param_2 + 0x34);
  cVar14 = *(char *)(param_2 + 0x3b);
  *(int *)(param_1 + 0x5c) = iVar19;
  param_1[0x13] = cVar10;
  param_1[0x14] = uVar1;
  cVar15 = *(char *)(param_2 + 0x3c);
  cVar16 = *(char *)(param_2 + 0x37);
  if (cVar14 == '\x01') {
    bVar21 = 2 - cVar8;
  }
  else if (cVar14 == '\x03') {
    bVar21 = (cVar15 == '\x02') + 4;
  }
  else {
    bVar21 = 0;
    if (((cVar14 != '\x02') && (bVar21 = 2, cVar11 == '\0')) && (*(char *)(param_2 + 0x21) == '\0'))
    {
      if (cVar6 == '\x03') {
        bVar21 = 10;
        if (cVar7 != '\x03') {
          bVar21 = 5;
        }
      }
      else {
        if (cVar6 == '\x01') {
          if (cVar8 == '\0') goto LAB_ram_48052d42;
        }
        else {
          if (*(char *)(param_2 + 0x25) != '\0') {
            if ((((cVar8 != '\0') && (bVar21 = 4, *(char *)(param_2 + 0x36) == '\0')) &&
                ((bVar21 = 3, *(char *)(param_2 + 0x33) != '\0' &&
                 ((bVar21 = 5, *(char *)(param_2 + 0x35) != '\0' && (bVar21 = 6, cVar12 != '\0')))))
                ) && (bVar21 = 8, uVar27 < 0xbb9)) {
              bVar21 = (cVar9 == '\0') * '\x02' + 7;
            }
            goto LAB_ram_48052d42;
          }
          if (cVar16 == '\0') {
            bVar21 = -(cVar13 != '\0') & 10;
            goto LAB_ram_48052d42;
          }
          if (cVar8 == '\0') {
            bVar21 = 2;
            goto LAB_ram_48052d42;
          }
        }
        bVar21 = (-(*(char *)(param_2 + 0x36) != '\0') & 3U) + 1;
      }
    }
  }
LAB_ram_48052d42:
  uVar1 = *(undefined1 *)(param_2 + 0x70);
  uVar2 = *(undefined1 *)(param_2 + 0x3a);
  uVar17 = *(undefined2 *)(param_2 + 0x72);
  param_1[0x1e] = bVar21;
  param_1[0x1f] = uVar1;
  param_1[0x20] = uVar2;
  *(undefined2 *)(param_1 + 0x22) = uVar17;
  if ((bVar24 == false) || (sVar26 < 0)) {
    sVar26 = -1;
  }
  uVar1 = *(undefined1 *)(param_2 + 0x38);
  uVar2 = *(undefined1 *)(param_2 + 0x39);
  uVar3 = *(undefined1 *)(param_2 + 0x3d);
  uVar4 = *(undefined1 *)(param_2 + 0x3e);
  uVar28 = *(undefined4 *)(param_2 + 0x44);
  uVar18 = *(undefined4 *)(param_2 + 0x8c);
  uVar29 = *(undefined4 *)(param_2 + 0x90);
  uVar23 = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x88);
  *(short *)(param_1 + 0x24) = sVar26;
  param_1[0x38] = cVar16;
  param_1[0x3b] = cVar14;
  param_1[0x3c] = cVar15;
  param_1[0x39] = uVar1;
  param_1[0x3a] = uVar2;
  param_1[0x3d] = uVar3;
  param_1[0x3e] = uVar4;
  *(undefined4 *)(param_1 + 0x40) = uVar28;
  *(undefined4 *)(param_1 + 100) = uVar18;
  *(undefined4 *)(param_1 + 0x68) = uVar29;
  *(undefined4 *)(param_1 + 0x6c) = uVar23;
  iVar19 = -1;
  if (cVar10 != '\0') {
    iVar19 = param_3 - *(int *)(param_2 + 0x6c);
  }
  uVar18 = *(undefined4 *)(param_2 + 0x98);
  *(int *)(param_1 + 0x70) = iVar19;
  *(undefined4 *)(param_1 + 0x74) = uVar18;
  FUN_ram_4ff3ee10(param_2);
  return param_1;
}


