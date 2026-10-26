/* Firmware entry: 0x480c3830 */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_480c3830(int *param_1)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  char *pcVar17;
  undefined4 *puVar18;
  uint *puVar19;
  char cVar20;
  char cVar21;
  undefined4 *puVar22;
  char *pcVar23;
  uint *puVar24;
  uint uVar25;
  char cVar26;
  char cVar27;
  byte bVar28;
  int *piVar29;
  int local_1f0;
  int iStack_1ec;
  int iStack_1e4;
  int iStack_1d8;
  int iStack_1d4;
  undefined1 auStack_1c4 [3];
  char cStack_1c1;
  undefined4 local_158;
  uint uStack_154;
  char acStack_150 [4];
  uint auStack_14c [2];
  bool bStack_144;
  int iStack_140;
  int iStack_13c;
  bool bStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  uint uStack_128;
  char cStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  char cStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  char cStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  char cStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  char cStack_da;
  char acStack_d8 [4];
  undefined4 local_d4 [40];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(&local_158,0,0x74);
  iVar6 = *param_1;
  FUN_ram_4ff3ec14(iVar6 + 0xb18,0xffffffff);
  puVar22 = (undefined4 *)(iVar6 + 0xb38);
  puVar18 = &local_e4;
  do {
    uVar10 = puVar22[1];
    uVar14 = puVar22[2];
    uVar16 = puVar22[3];
    *puVar18 = *puVar22;
    puVar18[1] = uVar10;
    puVar18[2] = uVar14;
    puVar18[3] = uVar16;
    puVar22 = puVar22 + 4;
    puVar18 = puVar18 + 4;
  } while (puVar22 != (undefined4 *)(iVar6 + 0xbd8));
  *puVar18 = *puVar22;
  FUN_ram_4ff3ee10(iVar6 + 0xb18);
  pcVar23 = (char *)param_1[0x1c4];
  if (pcVar23 != (char *)0x0) {
    pcVar17 = pcVar23 + 0x7400;
    do {
      cVar21 = *pcVar23;
      pcVar23 = pcVar23 + 0xe8;
      if (cVar21 == '\0') {
        bVar4 = true;
        goto LAB_ram_480c38ea;
      }
    } while (pcVar17 != pcVar23);
  }
  bVar4 = false;
LAB_ram_480c38ea:
  piVar8 = (int *)param_1[1];
  piVar29 = piVar8 + 0x297;
  FUN_ram_4ff3ec14(piVar29,0xffffffff);
  piVar8 = (int *)*piVar8;
  FUN_ram_4ff3ee10(piVar29);
  iVar6 = 0;
  if (piVar8 != (int *)0x0) {
    iVar6 = (**(code **)(*piVar8 + 0x154))(piVar8,2);
  }
  if (cStack_da == '\0') {
    uVar10 = FUN_ram_48025ba6();
    FUN_ram_4804a1e6(auStack_1c4,param_1 + 0xae,uVar10);
    cVar21 = (char)param_1[0x1d9];
    if ((cVar21 == '\x02') || (param_1[0x1ec] != 0)) {
      local_158._0_2_ = CONCAT11(1,(undefined1)local_158);
      iVar11 = *param_1;
      cVar27 = '\x03';
    }
    else {
LAB_ram_480c3c38:
      cVar27 = '\x03';
LAB_ram_480c3c3a:
      if (2 < (byte)(cStack_1c1 - 2U)) {
        cVar26 = '\0';
        iVar7 = *(int *)(*param_1 + 0x7a28);
        bVar28 = 0;
        goto LAB_ram_480c3b9a;
      }
      local_158._0_2_ = CONCAT11(1,(undefined1)local_158);
      iVar11 = *param_1;
      uVar12 = local_158;
      if (cStack_da != '\0') goto joined_r0x480c3cc4;
    }
LAB_ram_480c3b8e:
    iVar7 = *(int *)(iVar11 + 0x7a28);
    cVar26 = '\x01';
    bVar28 = 0;
  }
  else {
    if ((acStack_d8[0] == '\0') || (local_e4._1_1_ == '\f')) {
      uVar10 = FUN_ram_48025ba6();
      FUN_ram_4804a1e6(auStack_1c4,param_1 + 0xae,uVar10);
      cVar21 = (char)param_1[0x1d9];
      if ((cVar21 != '\x02') && (param_1[0x1ec] == 0)) goto LAB_ram_480c3c38;
      local_158._0_2_ = CONCAT11(1,(undefined1)local_158);
      iVar11 = *param_1;
      cVar27 = '\x03';
      uVar12 = local_158;
joined_r0x480c3cc4:
      local_158 = uVar12;
      if (acStack_d8[0] == '\0') {
        iVar7 = *(int *)(iVar11 + 0x7a28);
        cVar2 = (char)param_1[0x79];
        local_158._3_1_ = (undefined1)(uVar12 >> 0x18);
        local_158._0_2_ = (ushort)uVar12;
        local_158._0_3_ = (uint3)(ushort)local_158;
        cVar26 = '\x01';
        bVar28 = 0;
        iVar11 = uStack_12c;
        uVar12 = uStack_108;
        uVar15 = uStack_f8;
        uVar25 = local_e8;
        goto joined_r0x480c3bac;
      }
    }
    else {
      iVar11 = FUN_ram_48045922(param_1[1],2,0);
      cVar27 = '\x04';
      bVar9 = false;
      if ((iVar11 != 0) && (bVar9 = false, iVar6 != 0)) {
        if (bVar4) {
          if (param_1[400] == 0) {
            cVar27 = param_1[0x146] != 0;
            bVar9 = param_1[0x146] == 0;
          }
          else {
            bVar9 = false;
            cVar27 = '\x02';
          }
        }
        else {
          bVar9 = false;
          cVar27 = '\x05';
        }
      }
      local_158 = CONCAT31(local_158._1_3_,bVar9);
      uVar10 = FUN_ram_48025ba6();
      FUN_ram_4804a1e6(auStack_1c4,param_1 + 0xae,uVar10);
      cVar21 = (char)param_1[0x1d9];
      if (cVar21 != '\x02') {
        if (param_1[0x1ec] != 0) {
          local_158._0_2_ = CONCAT11(1,(undefined1)local_158);
          iVar11 = *param_1;
          uVar12 = local_158;
          goto joined_r0x480c3cc4;
        }
        goto LAB_ram_480c3c3a;
      }
      local_158._0_2_ = CONCAT11(1,(undefined1)local_158);
      iVar11 = *param_1;
    }
    if (local_e4._1_1_ == '\f') goto LAB_ram_480c3b8e;
    cVar26 = *(char *)(iVar11 + 0x7a40);
    if (cVar26 == '\0') {
      iVar7 = *(int *)(iVar11 + 0x7a28);
      cVar26 = '\x01';
      bVar28 = 0;
    }
    else {
      iVar13 = FUN_ram_48025ba6();
      iVar7 = *(int *)(iVar11 + 0x7a28);
      if ((uint)(iVar13 - *(int *)(iVar11 + 0x7a3c)) < 0x1f5) {
        if ((*(byte *)(iVar11 + 0x7a1d) & 0xf) == 6) {
          cVar21 = (char)param_1[0x1d9];
          bVar28 = iVar7 != 0 | *(byte *)(iVar11 + 0x7a26);
        }
        else {
          cVar21 = (char)param_1[0x1d9];
          bVar28 = 0;
        }
      }
      else {
        cVar21 = (char)param_1[0x1d9];
        bVar28 = 0;
      }
    }
  }
LAB_ram_480c3b9a:
  cVar2 = (char)param_1[0x79];
  local_158._0_3_ = CONCAT12(bVar28,(ushort)local_158);
  iVar11 = uStack_12c;
  uVar12 = uStack_108;
  uVar15 = uStack_f8;
  uVar25 = local_e8;
joined_r0x480c3bac:
  bVar4 = cVar2 != '\0';
  iVar7 = iVar7 + 500000;
  if (bVar4) {
    local_1f0 = param_1[0x1c5];
    uVar5 = (uint)iStack_13c >> 8;
    iStack_13c = CONCAT31((int3)uVar5,*(undefined1 *)((int)param_1 + 0x1f2));
    cVar2 = (char)param_1[0xa1];
  }
  else {
    cVar2 = (char)param_1[0xa1];
    local_1f0 = 0;
  }
  if (cVar2 == '\0') {
    iStack_1ec = 0;
    uStack_12c = iVar11;
  }
  else {
    iStack_1ec = param_1[0x1c6];
    uStack_12c._3_1_ = (undefined1)((uint)iVar11 >> 0x18);
    uStack_12c._0_3_ =
         CONCAT12((char)param_1[0xa6],CONCAT11(*(undefined1 *)((int)param_1 + 0x297),(char)iVar11));
    uVar5 = uStack_128 >> 8;
    uStack_128 = CONCAT31((int3)uVar5,*(undefined1 *)((int)param_1 + 0x29b));
  }
  bVar9 = cVar2 != '\0';
  uStack_108 = uVar12;
  uStack_f8 = uVar15;
  local_e8 = uVar25;
  if (cVar21 == '\0') {
    cVar20 = '\0';
    cVar3 = '\0';
    cVar2 = '\0';
    cVar21 = '\0';
    iStack_1e4 = 0;
    iStack_1d8 = 0;
    iStack_1d4 = 0;
    iVar13 = 0;
  }
  else {
    iVar11 = param_1[0x1c7];
    uVar1 = *(undefined1 *)((int)param_1 + 0x797);
    if (cVar21 == '\x02') {
      uStack_f8._2_2_ = (undefined2)(uVar15 >> 0x10);
      uStack_f8._0_2_ = CONCAT11(2,(char)uVar15);
      uStack_fc = CONCAT13(uVar1,(undefined3)uStack_fc);
      iStack_1e4 = 0;
      cVar3 = '\0';
      cVar2 = '\x01';
      iStack_1d8 = 0;
      cVar21 = '\0';
      iStack_1d4 = 0;
      cVar20 = '\0';
      iVar13 = iVar11;
    }
    else if (*(char *)((int)param_1 + 0x769) == '\0') {
      local_e8._2_2_ = (undefined2)(uVar25 >> 0x10);
      local_e8._0_2_ = CONCAT11(3,(char)uVar25);
      uStack_ec = CONCAT13(uVar1,(undefined3)uStack_ec);
      cVar3 = '\x01';
      cVar2 = '\0';
      iStack_1d8 = 0;
      cVar21 = '\0';
      iStack_1d4 = 0;
      cVar20 = '\0';
      iVar13 = 0;
      iStack_1e4 = iVar11;
    }
    else {
      cVar20 = '\x01';
      if (((byte)(*(char *)((int)param_1 + 0x76b) - 2U) < 2) ||
         (*(char *)((int)param_1 + 0x76b) == '\x05')) {
        cVar21 = '\x01';
        uStack_10c = CONCAT13(uVar1,(undefined3)uStack_10c);
        uStack_108._2_2_ = (undefined2)(uVar12 >> 0x10);
        uStack_108._0_2_ = CONCAT11(1,(char)uVar12);
        iStack_1e4 = 0;
        cVar3 = '\0';
        cVar2 = '\0';
        iStack_1d4 = 0;
        cVar20 = '\0';
        iVar13 = 0;
        iStack_1d8 = iVar11;
      }
      else {
        uStack_11c = CONCAT13(uVar1,(undefined3)uStack_11c);
        iStack_1e4 = 0;
        cVar3 = '\0';
        cVar2 = '\0';
        iStack_1d8 = 0;
        cVar21 = '\0';
        iVar13 = 0;
        iStack_1d4 = iVar11;
      }
    }
  }
  puVar22 = (undefined4 *)param_1[1];
  puVar18 = puVar22 + 0x297;
  FUN_ram_4ff3ec14(puVar18,0xffffffff);
  piVar29 = (int *)*puVar22;
  FUN_ram_4ff3ee10(puVar18);
  if ((piVar29 != (int *)0x0) && (cVar26 != '\0')) {
    (**(code **)(*piVar29 + 0x4c))(piVar29,1);
  }
  if ((((((((((local_158 ^ param_1[0x16b]) & 0xffffff) != 0) || (iVar7 != param_1[0x16c])) ||
          ((char)param_1[0x16d] != cVar27)) ||
         ((iVar6 != param_1[0x16e] || ((bool)(char)param_1[0x170] != bVar4)))) ||
        (param_1[0x171] != local_1f0)) ||
       (((iStack_13c != param_1[0x172] || ((short)param_1[0x173] != 0)) ||
        (((bool)(char)param_1[0x174] != bVar9 ||
         (((param_1[0x175] != iStack_1ec || (uStack_12c != param_1[0x176])) ||
          (((uStack_128 ^ param_1[0x177]) & 0xffff) != 0)))))))) ||
      ((((char)param_1[0x178] != cVar20 || (param_1[0x179] != iStack_1d4)) ||
       ((uStack_11c != param_1[0x17a] ||
        ((((((short)param_1[0x17b] != 0 || ((char)param_1[0x17c] != cVar21)) ||
           ((iStack_1d8 != param_1[0x17d] ||
            (((uStack_10c != param_1[0x17e] || (((uStack_108 ^ param_1[0x17f]) & 0xffff) != 0)) ||
             ((char)param_1[0x180] != cVar2)))))) ||
          ((iVar13 != param_1[0x181] || (uStack_fc != param_1[0x182])))) ||
         (((uStack_f8 ^ param_1[0x183]) & 0xffff) != 0)))))))) ||
     ((((char)param_1[0x184] != cVar3 || (iStack_1e4 != param_1[0x185])) ||
      ((uStack_ec != param_1[0x186] || (((local_e8 ^ param_1[0x187]) & 0xffff) != 0)))))) {
    auStack_14c[1] = param_1[0x188] + 1;
    if (auStack_14c[1] == 0) {
      auStack_14c[1] = 1;
    }
    param_1[0x188] = auStack_14c[1];
    auStack_14c[0] = iVar6;
    iStack_140 = local_1f0;
    uStack_154 = iVar7;
    bStack_134 = bVar9;
    acStack_150[0] = cVar27;
    bStack_144 = bVar4;
    iStack_130 = iStack_1ec;
    cStack_124 = cVar20;
    cStack_114 = cVar21;
    iStack_120 = iStack_1d4;
    iStack_100 = iVar13;
    puVar19 = (uint *)(param_1 + 0x16b);
    iStack_110 = iStack_1d8;
    cStack_104 = cVar2;
    cStack_f4 = cVar3;
    iStack_f0 = iStack_1e4;
    puVar24 = &local_158;
    do {
      uVar25 = puVar24[1];
      uVar12 = puVar24[2];
      uVar15 = puVar24[3];
      *puVar19 = *puVar24;
      puVar19[1] = uVar25;
      puVar19[2] = uVar12;
      puVar19[3] = uVar15;
      puVar24 = puVar24 + 4;
      puVar19 = puVar19 + 4;
    } while (puVar24 != &local_e8);
    *puVar19 = local_e8;
    FUN_ram_4ff3ec14(param_1 + 0x14c,0xffffffff);
    puVar24 = &local_158;
    puVar19 = (uint *)(param_1 + 0x14e);
    do {
      uVar25 = puVar24[1];
      uVar12 = puVar24[2];
      uVar15 = puVar24[3];
      *puVar19 = *puVar24;
      puVar19[1] = uVar25;
      puVar19[2] = uVar12;
      puVar19[3] = uVar15;
      puVar24 = puVar24 + 4;
      puVar19 = puVar19 + 4;
    } while (puVar24 != &local_e8);
    *puVar19 = *puVar24;
    FUN_ram_4ff3ee10(param_1 + 0x14c);
  }
  if ((piVar29 != (int *)0x0) &&
     ((**(code **)(*piVar29 + 0x50))(piVar29,param_1[0x16f],bVar28,iVar7), cVar26 == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x480c3b62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar29 + 0x4c))(piVar29,0);
    return;
  }
  return;
}


