/* Firmware entry: 0x4ff24bf0 */

/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_ram_4ff24bf0(int *param_1,int *param_2,int param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  undefined4 *puVar13;
  code *pcVar14;
  int iVar15;
  int iVar16;
  byte bVar17;
  char cVar18;
  uint uVar19;
  int iVar20;
  int local_170;
  int iStack_16c;
  int iStack_168;
  uint uStack_164;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [40];
  int iStack_120;
  undefined1 auStack_11c [4];
  undefined4 uStack_118;
  int iStack_114;
  undefined1 uStack_110;
  undefined1 uStack_d8;
  undefined1 auStack_d0 [7];
  char cStack_c9;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  uint uStack_b4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (DAT_ram_4ff6df30 != '\0') {
    return 0;
  }
  fence();
  fence();
  if (DAT_ram_4ff6df38 == '\0') {
    return 0;
  }
  cVar1 = *(char *)((int)param_1 + 0xd);
  bVar17 = 0;
  if (cVar1 == '\x02') {
    if (*param_1 != 0x3fd) {
      return 0;
    }
    if ((char)param_1[1] != '\b') {
      return 0;
    }
    bVar12 = *(byte *)((int)param_1 + 5) & 7;
    if ((*(byte *)((int)param_1 + 5) & 7) == 0) {
      iVar5 = FUN_ram_48025b94();
      if (2000 < (uint)(iVar5 - param_3)) {
        DAT_ram_4ff60cf4 = FUN_ram_48025ba6();
        if ((*(char *)((int)param_1 + 0xe) != '\0') || (param_1[4] != 0)) {
          DAT_ram_4ff60c64 = param_1[4];
        }
        DAT_ram_4ff60c94 = DAT_ram_4ff60c94 + 1;
        DAT_ram_4ff60c4c = DAT_ram_4ff60c4c + 1;
        DAT_ram_4ff60c40 = DAT_ram_4ff60c40 + 1;
        iVar5 = param_1[4];
        uVar7 = FUN_ram_48025ba6();
        FUN_ram_48030714(iVar5,uVar7);
        *(undefined2 *)(param_4 + 4) = 0x400;
        pcVar14 = *(code **)(*param_2 + 0xac);
        *(undefined1 *)(param_4 + 6) = 1;
        (*pcVar14)(param_2,param_1);
        return 1;
      }
      uVar7 = FUN_ram_48025b94();
      puVar13 = &DAT_ram_4ff5cfc0;
      cVar18 = *(char *)((int)param_1 + 0xd);
      cVar3 = DAT_ram_4ff5cfc4;
      goto joined_r0x4ff25072;
    }
    if (1 < (byte)(bVar12 - 1)) {
      return 0;
    }
LAB_ram_4ff24cac:
    bVar17 = bVar12;
    iVar5 = FUN_ram_48025b94();
    if (2000 < (uint)(iVar5 - param_3)) {
      cVar1 = *(char *)((int)param_1 + 0xd);
      if (((((cVar1 == '\x01') || (cVar1 == '\x02')) && (*param_1 == 0x3fd)) &&
          (((char)param_1[1] == '\b' && (param_1[8] == 0)))) &&
         (bVar12 = *(byte *)((int)param_1 + 5) & 7, bVar12 < 3)) {
        cVar18 = '\0';
        if (cVar1 == '\x02') {
          cVar18 = '\x03';
        }
        *(int *)(&DAT_ram_4ff5d038 + ((byte)(bVar12 + cVar18) + 0xf37) * 4) =
             *(int *)(&DAT_ram_4ff5d038 + ((byte)(bVar12 + cVar18) + 0xf37) * 4) + 1;
      }
      *(byte *)(param_4 + 4) = bVar17;
      pcVar14 = *(code **)(*param_2 + 0xac);
      *(undefined1 *)(param_4 + 6) = 1;
      *(undefined1 *)(param_4 + 5) = 4;
      (*pcVar14)(param_2,param_1);
      return 1;
    }
  }
  else {
    if (cVar1 != '\x01') {
      return 0;
    }
    if (*param_1 != 0x3fd) {
      return 0;
    }
    if ((char)param_1[1] != '\b') {
      return 0;
    }
    bVar2 = *(byte *)((int)param_1 + 5);
    if ((bVar2 & 7) != 0) {
      if (2 < (bVar2 & 7)) {
        return 0;
      }
      bVar12 = bVar2 & 7;
      if ((bVar2 & 7) != 0) goto LAB_ram_4ff24cac;
    }
    uVar7 = FUN_ram_48025b94();
    puVar13 = &DAT_ram_4ff5cffc;
    cVar18 = *(char *)((int)param_1 + 0xd);
    cVar3 = DAT_ram_4ff5d000;
joined_r0x4ff25072:
    if (cVar3 == '\x01') {
      if (cVar18 == '\x01') goto LAB_ram_4ff24e38;
    }
    else if (cVar18 == '\x02') {
LAB_ram_4ff24e38:
      if (((*param_1 == 0x3fd) && ((char)param_1[1] == '\b')) &&
         ((*(byte *)((int)param_1 + 5) & 7) == 0)) {
        iVar10 = param_1[7];
        iVar11 = param_1[8];
        iVar20 = param_1[1];
        iVar5 = param_1[2];
        iVar16 = param_1[3];
        iVar15 = param_1[4];
        iVar8 = param_1[5];
        iVar9 = param_1[6];
        puVar13[3] = *param_1;
        puVar13[4] = iVar20;
        puVar13[5] = iVar5;
        puVar13[6] = iVar16;
        puVar13[7] = iVar15;
        puVar13[8] = iVar8;
        puVar13[9] = iVar9;
        puVar13[10] = iVar10;
        puVar13[0xb] = iVar11;
        iVar5 = param_1[4];
        if ((*(char *)((int)param_1 + 0xe) == '\0') && (iVar5 == 0)) {
          iVar5 = param_3;
        }
        puVar13[0xc] = iVar5;
        puVar13[0xd] = uVar7;
        *(undefined1 *)(puVar13 + 0xe) = 1;
      }
    }
  }
  iVar5 = FUN_ram_48025b94();
  memset(auStack_11c,0,0x4c);
  uStack_d8 = 0xff;
  uStack_118 = (**(code **)(*param_2 + 0x154))(param_2,*(undefined1 *)((int)param_1 + 0xd));
  iStack_120 = param_1[4];
  if (((*(char *)((int)param_1 + 0xe) == '\0') && (iStack_120 == 0)) &&
     (iStack_120 = iVar5, param_3 != 0)) {
    iStack_120 = param_3;
  }
  iStack_114 = iStack_120 + 2000;
  uStack_110 = 1;
  uVar7 = FUN_ram_48025ba6();
  FUN_ram_4ff230e8(auStack_148,&DAT_ram_4ff68814);
  fence();
  fence();
  if (DAT_ram_4ff47ec4 != '\0') {
    auStack_148[0] = 0;
  }
  uVar6 = FUN_ram_48025b94();
  FUN_ram_4ff23a7c(auStack_d0,&DAT_ram_4ff5d038,param_1,&iStack_120,auStack_148,uVar6,uVar7);
  iVar9 = iStack_b8;
  iVar8 = iStack_bc;
  iVar5 = iStack_c0;
  uVar4 = (undefined2)uStack_b4;
  uVar19 = uStack_b4 & 0xffff;
  if (cVar1 == '\x02') {
    if (bVar17 != 0) goto LAB_ram_4ff24ea6;
    DAT_ram_4ff60cf4 = FUN_ram_48025ba6();
    DAT_ram_4ff60c94 = DAT_ram_4ff60c94 + 1;
    if (cStack_c9 == '\0') {
      DAT_ram_4ff60c40 = DAT_ram_4ff60c40 + 1;
    }
    else {
      DAT_ram_4ff60ca0 = DAT_ram_4ff60ca0 + 1;
    }
    if (param_1[4] != 0 || *(char *)((int)param_1 + 0xe) != '\0') {
      DAT_ram_4ff60c64 = param_1[4];
    }
    iVar10 = param_1[4];
    uVar7 = FUN_ram_48025ba6();
    FUN_ram_48030714(iVar10,uVar7);
    uVar7 = FUN_ram_48025b94();
    if ((byte)(DAT_ram_4ff5cfc5 * -0x55) < 0x56) {
      FUN_ram_4805f8e4(&DAT_ram_4ff5cfc0,auStack_148,param_2,uVar7);
    }
    if (((iStack_c0 != 0 || iStack_bc != 0) && (iStack_b8 != 0)) && (uVar19 != 0xffff))
    goto LAB_ram_4ff24ef0;
  }
  else {
    if (bVar17 == 0) {
      uVar7 = FUN_ram_48025b94();
      if ((byte)(DAT_ram_4ff5d001 * -0x55) < 0x56) {
        FUN_ram_4805f8e4(&DAT_ram_4ff5cffc,auStack_148,param_2,uVar7);
      }
      goto LAB_ram_4ff24da6;
    }
LAB_ram_4ff24ea6:
    if (((iStack_c0 != 0 || iStack_bc != 0) && (iStack_b8 != 0)) && (uVar19 != 0xffff)) {
      uVar7 = FUN_ram_48025b94();
      local_170 = iStack_c0;
      iStack_16c = iStack_bc;
      iStack_168 = iStack_b8;
      uStack_164 = uStack_b4;
      FUN_ram_4ff2480c(auStack_160,&DAT_ram_4ff5d038,&local_170,bVar17,auStack_148,param_2,uVar7,
                       cVar1);
      if (bVar17 == 0) {
        if (cVar1 != '\x02') goto LAB_ram_4ff24da6;
LAB_ram_4ff24ef0:
        FUN_ram_48025b94();
        FUN_ram_4ff3ec14(&DAT_ram_4ff5d044,0xffffffff);
        iVar5 = FUN_ram_48032748(&DAT_ram_4ff5d040,iVar5,iVar8,iVar9,uVar19);
        if ((iVar5 != 0) && (*(char *)(iVar5 + 0x41) == '\0')) {
          DAT_ram_4ff60c34 = DAT_ram_4ff60c34 + -1;
          *(undefined1 *)(iVar5 + 0x41) = 1;
          if (*(char *)(iVar5 + 0x40) == '\0') {
            *(undefined1 *)(iVar5 + 0x40) = 1;
          }
          FUN_ram_48044ec6(&DAT_ram_4ff5d040,iVar5);
        }
        FUN_ram_4ff3ee10(&DAT_ram_4ff5d044);
        goto LAB_ram_4ff24f5e;
      }
    }
    uVar7 = FUN_ram_48025b94();
    FUN_ram_4804549a(&DAT_ram_4ff5d038,bVar17,auStack_148,param_2,uVar7,cVar1);
  }
LAB_ram_4ff24f5e:
  (**(code **)(*param_2 + 0xac))(param_2,param_1);
LAB_ram_4ff24da6:
  uStack_b4 = CONCAT22(uStack_b4._2_2_,uVar4);
  FUN_ram_4ff45158(param_4,auStack_d0,0x25);
  return *(undefined1 *)(param_4 + 6);
}


