/* Firmware entry: 0x4ff23a7c */

int * FUN_ram_4ff23a7c(int *param_1,undefined4 *param_2,int *param_3,int *param_4,int param_5,
                      undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  byte bVar16;
  char cVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  ushort uVar21;
  int iVar22;
  undefined4 uVar23;
  undefined4 *puVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uStack_11c;
  uint uStack_d0;
  int iStack_c8;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  uint uStack_80;
  int iStack_7c;
  uint uStack_78;
  uint uStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_1,0,0x50);
  *(undefined1 *)((int)param_1 + 0x42) = 1;
  *(undefined1 *)(param_1 + 1) = 0xff;
  *(undefined1 *)(param_1 + 0xb) = 8;
  piVar3 = param_1 + 0x14;
  piVar8 = param_4;
  do {
    iVar6 = piVar8[1];
    iVar11 = piVar8[2];
    iVar14 = piVar8[3];
    *piVar3 = *piVar8;
    piVar3[1] = iVar6;
    piVar3[2] = iVar11;
    piVar3[3] = iVar14;
    piVar8 = piVar8 + 4;
    piVar3 = piVar3 + 4;
  } while (piVar8 != param_4 + 0x14);
  bVar16 = *(byte *)((int)param_3 + 5);
  uVar25 = bVar16 & 7;
  if (2 < uVar25) {
    iVar22 = param_3[1];
    iVar20 = param_3[2];
    iVar6 = param_3[3];
    iVar11 = param_3[4];
    iVar14 = param_3[5];
    iVar12 = param_3[6];
    iVar15 = param_3[7];
    iVar18 = param_3[8];
    param_1[10] = *param_3;
    param_1[0xb] = iVar22;
    param_1[0xc] = iVar20;
    param_1[0xd] = iVar6;
    param_1[0xe] = iVar11;
    param_1[0xf] = iVar14;
    param_1[0x10] = iVar12;
    param_1[0x11] = iVar15;
    param_1[0x12] = iVar18;
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return param_1;
  }
  uVar13 = uVar25;
  if (*(char *)((int)param_3 + 0xd) == '\x02') {
    uVar13 = uVar25 + 3;
  }
  iVar6 = param_3[8];
  piVar8 = param_2 + uVar13 + 0xf37;
  if (iVar6 == 0) {
    iVar6 = *piVar8;
    *piVar8 = iVar6 + 1;
    iVar6 = iVar6 + 1;
    if (iVar6 == 0) {
      iVar6 = *piVar8;
      *piVar8 = iVar6 + 1;
      iVar6 = iVar6 + 1;
    }
  }
  else {
    fence();
    *piVar8 = iVar6;
  }
  fence();
  param_2[uVar13 + 0xf3d] = iVar6;
  FUN_ram_4ff232be(&iStack_88,*param_2,param_1 + 10,param_3,param_5,param_7);
  param_1[1] = iStack_84;
  param_1[3] = iStack_7c;
  param_1[5] = uStack_74;
  param_1[4] = uStack_78;
  param_1[6] = iStack_70;
  param_1[7] = iStack_6c;
  param_1[8] = iStack_68;
  *(undefined1 *)(param_1 + 9) = (undefined1)uStack_64;
  param_1[2] = uStack_80;
  *param_1 = iStack_88;
  if (((uStack_80 >> 8 & 0xff) != 0) && (iStack_88 != 0)) {
    fence();
    param_2[0xf43] = iStack_88;
  }
  if (*(char *)((int)param_1 + 7) == '\0') {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return param_1;
  }
  cVar1 = *(char *)((int)param_3 + 0xd);
  cVar17 = '\x01';
  param_1[0xe] = *param_4;
  *(undefined1 *)((int)param_1 + 0x36) = 1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  iVar11 = *param_1;
  if (cVar1 == '\x02') {
    cVar17 = '\x03';
    if ((bVar16 & 7) != 0) goto LAB_ram_4ff23cfe;
    cVar17 = '\x04';
    uVar7 = 0x10;
    iStack_ac = 0;
  }
  else if ((bVar16 & 7) == 0) {
    uVar7 = 0x10;
    cVar17 = '\x04' - *(char *)(param_5 + 0x14);
    iStack_ac = 0;
  }
  else {
    if (((*(char *)((int)param_1 + 0x35) == '\x01') && (param_1[10] == 0x3fd)) &&
       ((char)param_1[0xb] == '\b')) {
      cVar17 = '\x04';
      if (((*(byte *)((int)param_1 + 0x2d) & 7) != 0) &&
         (cVar17 = '\x03', 2 < (*(byte *)((int)param_1 + 0x2d) & 7))) {
        cVar17 = '\x01';
      }
    }
LAB_ram_4ff23cfe:
    if (uVar25 == 2) {
      if (iVar11 == 0) {
        iStack_ac = 0;
        uVar7 = 0x10;
      }
      else {
        uVar7 = 0x11;
        iStack_ac = iVar11;
      }
    }
    else {
      uVar7 = 0x10;
      iStack_ac = 0;
    }
  }
  *(char *)((int)param_1 + 0x42) = cVar17;
  *(undefined1 *)((int)param_1 + 0x43) = uVar7;
  iStack_a8 = param_1[0x12];
  iStack_b4 = param_1[0xf];
  uVar26 = *(undefined4 *)(param_5 + 0x24);
  iStack_b0 = param_1[0x10];
  iStack_c8 = param_1[10];
  uStack_c4 = param_1[0xb];
  iStack_c0 = param_1[0xc];
  uStack_bc = param_1[0xd];
  iStack_b8 = param_1[0xe];
  iVar15 = param_4[2];
  iVar12 = param_4[3];
  iVar14 = param_4[4];
  param_1[0x11] = iStack_ac;
  uStack_a4 = 0;
  uVar7 = *(undefined1 *)((int)param_1 + 0xb);
  puVar2 = param_2 + 3;
  uStack_8c = (uint)CONCAT11(uVar7,(char)iVar14);
  iStack_a0 = iVar6;
  uStack_9c = uVar26;
  iStack_98 = iVar15;
  iStack_94 = iVar12;
  iStack_90 = iVar11;
  FUN_ram_4ff3ec14(puVar2,0xffffffff);
  cVar17 = uStack_bc._1_1_;
  if ((((byte)(uStack_bc._1_1_ - 1U) < 2) && (iStack_c8 == 0x3fd)) && ((uStack_c4 & 0xff) == 8)) {
    bVar16 = 2;
    uStack_11c = uStack_c4 >> 8 & 7;
    if (uStack_11c < 3) {
      uVar21 = *(ushort *)(param_2 + 0xefc);
      uVar25 = (uint)uVar21;
      if (uVar25 != 0xffff) {
        if ((param_2[0xefa] != -1) || (param_2[0xefb] != -1)) {
          iVar20 = uVar25 * 0x48;
          puVar19 = param_2 + 2;
          *(undefined2 *)(param_2 + 0xefc) = *(undefined2 *)((int)param_2 + iVar20 + 0x56);
          uStack_64 = 0x10000;
          iStack_88 = 0;
          uStack_4c = 0xffffffff;
          iStack_84 = 0;
          uStack_80 = 0;
          iStack_7c = 0;
          uStack_78 = 0;
          uStack_74 = 0;
          iStack_70 = 0;
          iStack_6c = 0;
          iStack_68 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          uStack_58 = 0;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          uStack_42 = 0;
          FUN_ram_4ff45158(puVar19 + uVar25 * 0x12 + 4,&iStack_88,0x47);
          uVar9 = param_2[0xefa];
          iVar18 = param_2[0xefb];
          uVar4 = uVar9 + 1;
          *(ushort *)(param_2 + uVar25 * 0x12 + 0x15) = uVar21;
          iVar18 = (uint)(uVar4 < uVar9) + iVar18;
          param_2[0xefa] = uVar4;
          param_2[0xefb] = iVar18;
          param_2[uVar25 * 0x12 + 9] = uVar26;
          param_2[uVar25 * 0x12 + 7] = iVar18;
          param_2[uVar25 * 0x12 + 6] = uVar4;
          param_2[uVar25 * 0x12 + 8] = iVar6;
          param_2[uVar25 * 0x12 + 10] = iVar15;
          param_2[uVar25 * 0x12 + 0xb] = iVar12;
          param_2[uVar25 * 0x12 + 0xc] = iVar11;
          param_2[uVar25 * 0x12 + 0xd] = iStack_b8;
          *(char *)(puVar19 + uVar25 * 0x12 + 0xd) = (char)iVar14;
          *(byte *)(puVar19 + uVar25 * 0x12 + 0xc) = iStack_b8 != 0 | uStack_bc._2_1_;
          *(char *)((int)param_2 + iVar20 + 0x3d) = (char)uStack_11c;
          iStack_84 = 0;
          *(char *)((int)param_2 + iVar20 + 0x3e) = cVar17;
          *(undefined1 *)((int)puVar19 + iVar20 + 0x37) = uVar7;
          *(byte *)((int)param_2 + iVar20 + 0x5e) = *(byte *)((int)param_2 + iVar20 + 0x5e) | 1;
          *(short *)(param_2 + 0xeff) = *(short *)(param_2 + 0xeff) + 1;
          iStack_70 = 0;
          *(short *)(param_2 + 0xefe) = *(short *)(param_2 + 0xefe) + 1;
          *(short *)((int)param_2 + 0x3bfa) = *(short *)((int)param_2 + 0x3bfa) + -1;
          iStack_6c = 0;
          iStack_68 = 0;
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          if (uVar4 == 0 && iVar18 == 0) {
            uVar21 = 0;
            uVar25 = 0;
          }
          else if (uVar25 < 0x1ff) {
            uVar25 = uVar4 * 0x200 | uVar25 + 1;
          }
          else {
            uVar21 = 0;
            uVar25 = 0;
            uVar4 = 0;
            iVar18 = 0;
          }
          uStack_74 = (uint)uVar21;
          uVar9 = uStack_74;
          iStack_88 = 1;
          if (cVar17 == '\x02') {
            uStack_11c = uStack_11c + 3;
          }
          uVar10 = param_2[uStack_11c * 0x14 + 0xe82];
          puVar24 = puVar19 + uStack_11c * 0x14 + 0xe80;
          uVar5 = param_2[uStack_11c * 0x14 + 0xe84];
          uVar26 = param_2[uStack_11c * 0x14 + 0xe83];
          uVar23 = param_2[uStack_11c * 0x14 + 0xe85];
          uStack_80 = uVar4;
          iStack_7c = iVar18;
          uStack_78 = uVar25;
          iVar11 = FUN_ram_48032748(puVar19,*puVar24,puVar24[1],puVar24[2],
                                    *(undefined2 *)(puVar24 + 3));
          if (((iVar11 != 0) && (-1 < *(int *)(iVar11 + 0x44) << 0xc)) &&
             (*(char *)(iVar11 + 0x40) != '\x03')) {
            if (*(int *)(iVar11 + 0x44) << 0xe < 0) {
              if (*(char *)(iVar11 + 0x42) == '\0') {
                *(undefined1 *)(iVar11 + 0x42) = 1;
              }
              FUN_ram_48044d4c(puVar19);
            }
            else {
              FUN_ram_480375b2(puVar19,iVar11,1,param_6);
            }
          }
          param_2[uStack_11c * 0x14 + 0xe84] = uVar25;
          param_2[uStack_11c * 0x14 + 0xe85] = uVar9;
          param_2[uStack_11c * 0x14 + 0xe82] = uVar4;
          param_2[uStack_11c * 0x14 + 0xe83] = iVar18;
          FUN_ram_4ff45158(puVar24 + 4,&iStack_c8,0x3e);
          param_2[uStack_11c * 0x14 + 0xe8f] = uVar25;
          FUN_ram_480345f4(puVar19,uStack_11c);
          uStack_60 = 0;
          uStack_5c = 0;
          iStack_88 = 1;
          iStack_84 = 0;
          uStack_80 = uVar4;
          iStack_7c = iVar18;
          uStack_78 = uVar25;
          uStack_74 = uVar9;
          iStack_70 = uVar10;
          iStack_6c = uVar26;
          iStack_68 = uVar5;
          uStack_64 = uVar23;
          FUN_ram_4ff3ee10(puVar2);
          *(undefined1 *)(param_1 + 2) = 0;
          param_1[4] = uStack_80;
          param_1[5] = iStack_7c;
          param_1[6] = uStack_78;
          param_1[7] = uStack_74;
          *(undefined1 *)((int)param_1 + 5) = 5;
          fence();
          param_2[uVar13 + 0xf3d] = iVar6;
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return param_1;
        }
        bVar16 = 3;
      }
      uStack_d0 = (uint)bVar16;
      uStack_60 = uStack_d0;
      goto LAB_ram_4ff23cbe;
    }
  }
  uStack_60 = 0;
LAB_ram_4ff23cbe:
  uStack_5c = 0;
  uStack_64 = 0;
  iStack_68 = 0;
  iStack_6c = 0;
  iStack_70 = 0;
  uStack_74 = 0;
  uStack_78 = 0;
  iStack_7c = 0;
  uStack_80 = 0;
  iStack_84 = 0;
  iStack_88 = 0;
  FUN_ram_4ff3ee10(puVar2);
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[4] = uStack_80;
  param_1[5] = iStack_7c;
  param_1[6] = uStack_78;
  param_1[7] = uStack_74;
  *(undefined1 *)((int)param_1 + 5) = 3;
  return param_1;
}


