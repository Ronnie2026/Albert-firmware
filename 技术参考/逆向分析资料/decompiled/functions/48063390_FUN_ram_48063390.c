/* Firmware entry: 0x48063390 */

void FUN_ram_48063390(int *param_1,int param_2,int param_3,uint param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  int iVar19;
  ushort uVar20;
  int iVar21;
  undefined8 uVar22;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar14 = *(uint *)(param_2 + 0x10) & 0xffffff;
  if (uVar14 == 0x203b6) {
    FUN_ram_480619f0(param_1,*(undefined4 *)(param_2 + 0x13));
    return;
  }
  if (uVar14 == 0x10399) {
    bVar4 = *(byte *)(param_2 + 0x13);
    iVar6 = FUN_ram_48061530(param_1,param_3);
    if (iVar6 != 0) {
      uVar15 = bVar4 & 0xf;
      uVar14 = 0x437fU >> uVar15 & 1;
      if ((uVar14 == 0) || (uVar15 != 6)) {
        if (*(char *)((int)param_1 + 0x5d9) != '\0') {
          if (param_1[0x162] == 1) {
            iVar6 = param_1[0x16c];
            iVar8 = param_1[0x16d];
            param_1[0x16e] = iVar6;
            param_1[0x16f] = iVar8;
          }
          else {
            iVar10 = param_1[0x16d];
            iVar6 = param_1[0x16c];
            iVar19 = param_1[0x171];
            iVar21 = param_1[0x170];
            iVar8 = __ltdf2(iVar21,iVar19,iVar6,iVar10);
            if (-1 < iVar8) {
              iVar10 = iVar19;
              iVar6 = iVar21;
            }
            param_1[0x170] = iVar6;
            iVar6 = param_1[0x16c];
            iVar8 = param_1[0x16d];
            param_1[0x171] = iVar10;
          }
          param_1[0x172] = iVar6;
          param_1[0x173] = iVar8;
          *(undefined1 *)((int)param_1 + 0x5d9) = 0;
          param_1[0x16c] = 0;
          param_1[0x16d] = 0;
        }
        *(char *)((int)param_1 + 0x5d3) = (char)uVar14;
        *(undefined1 *)(param_1 + 0x175) = 0;
        param_1[0x151] = param_3;
      }
      else {
        param_1[0x151] = param_3;
        *(undefined1 *)((int)param_1 + 0x5d3) = 1;
        *(undefined1 *)(param_1 + 0x175) = 1;
        if (*(char *)((int)param_1 + 0x5d9) == '\0') {
          *(undefined1 *)((int)param_1 + 0x5d9) = 1;
          param_1[0x16c] = 0;
          param_1[0x16d] = 0;
          param_1[0x162] = param_1[0x162] + 1;
          return;
        }
      }
    }
    return;
  }
  if (uVar14 != 0x10118) {
    if (uVar14 != 0x10257) {
      return;
    }
    uVar20 = (ushort)*(byte *)(param_2 + 0x19) << 5 | (ushort)(*(byte *)(param_2 + 0x18) >> 3);
    if (uVar20 == 0x1fff) {
      iVar6 = FUN_ram_48061530(param_1,param_3);
      if (iVar6 == 0) {
        return;
      }
    }
    else {
      iVar6 = FUN_ram_48061530(param_1,param_3);
      if (iVar6 == 0) {
        return;
      }
      uVar22 = __floatsidf(uVar20);
      uVar22 = __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_ram_481f4cf0,
                        DAT_ram_481f4cf4);
      uVar22 = __subdf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_ram_481f4cf8,
                        DAT_ram_481f4cfc);
      uVar3 = DAT_ram_481f4cbc;
      uVar2 = DAT_ram_481f4cb8;
      uVar14 = (uint)((ulonglong)uVar22 >> 0x20);
      uVar7 = (undefined4)uVar22;
      iVar8 = __unorddf2(uVar7,uVar14 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
      if ((((iVar8 == 0) && (iVar8 = __gtdf2(uVar7,uVar14 & 0x7fffffff,uVar2,uVar3), iVar8 < 1)) &&
          (iVar8 = __gedf2(uVar7,uVar14,0,0), -1 < iVar8)) &&
         (iVar8 = __ledf2(uVar7,uVar14,DAT_ram_481f4d00,DAT_ram_481f4d04), iVar8 < 1))
      goto LAB_ram_480634bc;
    }
    iVar6 = 0;
    uVar22 = 0;
LAB_ram_480634bc:
    *(undefined8 *)(param_1 + 0x164) = uVar22;
    *(char *)((int)param_1 + 0x5d6) = (char)iVar6;
    param_1[0x153] = param_3;
    return;
  }
  bVar4 = *(byte *)(param_2 + 0x15);
  iVar6 = FUN_ram_48061530(param_1,param_3);
  if (iVar6 == 0) {
    return;
  }
  bVar4 = bVar4 >> 5;
  *(bool *)((int)param_1 + 0x5d5) = bVar4 - 1 < 4;
  *(byte *)((int)param_1 + 0x5da) = bVar4;
  param_1[0x152] = param_3;
  if (bVar4 != 1) {
    if ((char)param_1[0x12] == '\0') {
      return;
    }
    uVar14 = param_1[0x17];
    if (*(char *)((int)param_1 + 0x5dd) == '\0') {
      uVar11 = (uint)(param_3 - param_1[0x14f]) / 1000;
      uVar15 = param_1[0x150] + uVar11;
      if (uVar15 < uVar11) {
        uVar15 = 0xffffffff;
      }
    }
    else {
      bVar1 = false;
      uVar15 = uVar14;
      if (((*(char *)((int)param_1 + 0x50d) != '\0') &&
          (uVar11 = param_1[0x145], 0x6592007f < uVar11)) &&
         ((0x6592007f < param_4 && (uVar11 < param_4)))) {
        uVar15 = (param_4 - uVar11) + uVar14;
        bVar1 = uVar15 < uVar14;
      }
      if (bVar1) {
        uVar15 = 0xffffffff;
      }
      param_1[0x150] = uVar15;
      param_1[0x14f] = param_3;
      *(undefined1 *)((int)param_1 + 0x5dd) = 0;
    }
    if (uVar14 != uVar15) {
      param_1[0x17] = uVar15;
      *param_1 = *param_1 + 1;
    }
    if (*(char *)((int)param_1 + 0x79) == '\0') {
      return;
    }
    *(undefined1 *)((int)param_1 + 0x79) = 0;
    *param_1 = *param_1 + 1;
    return;
  }
  if ((char)param_1[0x12] == '\0') goto LAB_ram_480635fc;
  if (*(char *)((int)param_1 + 0x5dd) != '\0') {
    uVar15 = param_1[0x17];
    bVar1 = false;
    uVar14 = uVar15;
    if (((*(char *)((int)param_1 + 0x50d) != '\0') && (uVar11 = param_1[0x145], 0x6592007f < uVar11)
        ) && ((0x6592007f < param_4 && (uVar11 < param_4)))) {
      uVar14 = (param_4 - uVar11) + uVar15;
      bVar1 = uVar14 < uVar15;
    }
    if (bVar1) {
      uVar14 = 0xffffffff;
    }
    param_1[0x150] = uVar14;
    param_1[0x14f] = param_3;
    *(undefined1 *)((int)param_1 + 0x5dd) = 0;
  }
  if (*(char *)((int)param_1 + 0x79) == '\x01') {
LAB_ram_48063802:
    uVar14 = (uint)(param_3 - param_1[0x14f]) / 1000;
    uVar15 = param_1[0x150] + uVar14;
    if (uVar15 < uVar14) {
      uVar15 = 0xffffffff;
    }
    if (uVar15 != param_1[0x17]) {
      param_1[0x17] = uVar15;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    *(undefined1 *)((int)param_1 + 0x79) = 1;
    *param_1 = *param_1 + 1;
    if (*(char *)((int)param_1 + 0x5dd) == '\0') goto LAB_ram_48063802;
  }
  bVar13 = *(byte *)(param_1 + 0x22);
  uVar15 = (uint)bVar13;
  *(undefined1 *)((int)param_1 + 0x7a) = 1;
  *(undefined1 *)((int)param_1 + 0x79) = 2;
  param_1[0x16] = param_4;
  uVar14 = uVar15;
  if (0x13 < uVar15) {
    uVar14 = 0x13;
  }
  if (uVar15 != 0) {
    piVar18 = param_1 + uVar14 * 6 + 0x18a;
    piVar5 = param_1 + uVar14 * 0xe;
    do {
      piVar9 = piVar5 + 0x24;
      piVar17 = piVar5 + 0x16;
      do {
        piVar16 = piVar17;
        piVar12 = piVar9;
        iVar6 = piVar16[1];
        iVar8 = piVar16[2];
        iVar10 = piVar16[3];
        *piVar12 = *piVar16;
        piVar12[1] = iVar6;
        piVar12[2] = iVar8;
        piVar12[3] = iVar10;
        piVar17 = piVar16 + 4;
        piVar9 = piVar12 + 4;
      } while (piVar17 != piVar5 + 0x22);
      iVar6 = piVar16[5];
      piVar12[4] = *piVar17;
      piVar12[5] = iVar6;
      FUN_ram_4ff45158(piVar18 + 6,piVar18,0x12);
      piVar17 = piVar18 + 0x78;
      piVar9 = piVar18 + 0x7e;
      piVar18 = piVar18 + -6;
      FUN_ram_4ff45158(piVar9,piVar17,0x12);
      piVar5 = piVar5 + -0xe;
    } while (param_1 + 0x18a != piVar18);
  }
  piVar5 = param_1 + 0x24;
  piVar18 = param_1 + 0x14;
  do {
    piVar17 = piVar18;
    piVar9 = piVar5;
    iVar6 = piVar17[1];
    iVar8 = piVar17[2];
    iVar10 = piVar17[3];
    *piVar9 = *piVar17;
    piVar9[1] = iVar6;
    piVar9[2] = iVar8;
    piVar9[3] = iVar10;
    piVar18 = piVar17 + 4;
    piVar5 = piVar9 + 4;
  } while (piVar18 != param_1 + 0x20);
  iVar6 = piVar17[5];
  piVar9[4] = *piVar18;
  piVar9[5] = iVar6;
  FUN_ram_4ff45158(param_1 + 400,param_1 + 0x178,0x12);
  if (((char)param_1[0x174] == '\0') || (uVar14 = param_1[0x160] - param_3, 0x240c8400 < uVar14)) {
LAB_ram_48063a94:
    bVar4 = 0;
    param_3 = 0;
    iVar6 = 0;
    uVar14 = 0;
    iVar8 = 0;
  }
  else {
    uVar11 = param_1[0x15e];
    if ((param_1[0x15f] == 0) && (uVar11 < uVar14)) goto LAB_ram_48063a94;
    uVar14 = uVar11 - uVar14;
    iVar6 = param_1[0x161];
    iVar8 = param_1[0x15f] - (uint)(uVar11 < uVar14);
  }
  *(char *)(param_1 + 0x208) = (char)uVar14;
  *(char *)(param_1 + 0x209) = (char)iVar8;
  *(char *)((int)param_1 + 0x82e) = (char)((uint)param_3 >> 0x10);
  *(char *)(param_1 + 0x20a) = (char)iVar6;
  *(char *)(param_1 + 0x20b) = (char)param_3;
  *(byte *)(param_1 + 0x20c) = bVar4;
  *(undefined1 *)((int)param_1 + 0x831) = 0;
  *(char *)((int)param_1 + 0x821) = (char)(uVar14 >> 8);
  *(char *)((int)param_1 + 0x822) = (char)(uVar14 >> 0x10);
  *(char *)((int)param_1 + 0x823) = (char)(uVar14 >> 0x18);
  *(char *)((int)param_1 + 0x825) = (char)((uint)iVar8 >> 8);
  *(char *)((int)param_1 + 0x826) = (char)((uint)iVar8 >> 0x10);
  *(char *)((int)param_1 + 0x827) = (char)((uint)iVar8 >> 0x18);
  *(char *)((int)param_1 + 0x829) = (char)((uint)iVar6 >> 8);
  *(char *)((int)param_1 + 0x82a) = (char)((uint)iVar6 >> 0x10);
  *(char *)((int)param_1 + 0x82b) = (char)((uint)iVar6 >> 0x18);
  *(char *)((int)param_1 + 0x82d) = (char)((uint)param_3 >> 8);
  *(char *)((int)param_1 + 0x82f) = (char)((uint)param_3 >> 0x18);
  if (0x13 < uVar15) {
    bVar13 = 0x13;
  }
  *(byte *)(param_1 + 0x22) = bVar13 + 1;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((int)param_1 + 0x7a) = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x178) = 0;
  *(undefined1 *)((int)param_1 + 0x5e1) = 0;
  *(undefined1 *)((int)param_1 + 0x5e2) = 0;
  *(undefined1 *)((int)param_1 + 0x5e3) = 0;
  *(undefined1 *)(param_1 + 0x179) = 0;
  *(undefined1 *)((int)param_1 + 0x5e5) = 0;
  *(undefined1 *)((int)param_1 + 0x5e6) = 0;
  *(undefined1 *)((int)param_1 + 0x5e7) = 0;
  *(undefined1 *)(param_1 + 0x17a) = 0;
  *(undefined1 *)((int)param_1 + 0x5e9) = 0;
  *(undefined1 *)((int)param_1 + 0x5ea) = 0;
  *(undefined1 *)((int)param_1 + 0x5eb) = 0;
  *(undefined1 *)(param_1 + 0x17b) = 0;
  *(undefined1 *)((int)param_1 + 0x5ed) = 0;
  *(undefined1 *)((int)param_1 + 0x5ee) = 0;
  *(undefined1 *)((int)param_1 + 0x5ef) = 0;
  *(undefined1 *)(param_1 + 0x17c) = 0;
  param_1[0x15c] = 0;
  *(undefined1 *)((int)param_1 + 0x5f1) = 0;
  param_1[0x15d] = 0;
  param_1[0x150] = 0;
  *(undefined1 *)((int)param_1 + 0x5dd) = 0;
  *param_1 = *param_1 + 1;
  param_1[0x163] = param_1[0x24];
LAB_ram_480635fc:
  if (*(char *)((int)param_1 + 0x5d2) != '\0') {
    *(undefined1 *)((int)param_1 + 0x5d7) = 1;
    param_1[0x154] = param_1[0x14c];
  }
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  *(undefined2 *)((int)param_1 + 0x5d2) = 0;
  *(undefined1 *)(param_1 + 0x175) = 0;
  param_1[0x157] = 0;
  param_1[0x156] = 0;
  param_1[0x155] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  *(undefined2 *)(param_1 + 0x176) = 0;
  param_1[0x162] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  return;
}


