/* Firmware entry: 0x48097ba6 */

int FUN_ram_48097ba6(int param_1,int param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  bool bVar15;
  undefined4 local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  char acStack_a2 [2];
  int iStack_a0;
  undefined1 auStack_9c [104];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar13 = *(int *)(param_1 + 0x17ec0);
  if (iVar13 != 0) {
    FUN_ram_4ff3b5f0(iVar13,0xffffffff);
    if (*(char *)(param_1 + 0x18c67) != '\0') {
      if (param_2 == 0) goto LAB_ram_48097c3e;
      iVar6 = FUN_ram_4ff2bcc4();
      if (iVar6 == 0) goto LAB_ram_48097c00;
    }
    iVar6 = 0;
    goto LAB_ram_48097c20;
  }
  if (*(char *)(param_1 + 0x18c67) == '\0') {
    return 0;
  }
  if (param_2 == 0) {
LAB_ram_48097c3e:
    fence();
    *(undefined1 *)(param_1 + 0x18c6b) = 0;
    fence();
    bVar15 = true;
    *(undefined1 *)(param_1 + 0x18c68) = 0;
    iVar6 = param_1 + 0x88c;
    iVar12 = param_1 + 0x18;
    iVar3 = param_1 + 0x2ec0;
    do {
      if (mhartid == 1) {
        iVar11 = FUN_ram_48095f0a(param_1,iVar12,1);
        if (iVar11 == 0) goto LAB_ram_48097d10;
LAB_ram_48097c94:
        FUN_ram_4ff3ec14(iVar6,0xffffffff);
        *(undefined1 *)(iVar6 + 0x11) = 0;
        *(undefined1 *)(iVar6 + 0x12) = 0;
        iVar11 = *(int *)(iVar12 + 0x2c);
        *(undefined1 *)(iVar6 + 0xd) = 0;
        *(undefined1 *)(iVar6 + 10) = 0;
        *(undefined1 *)(iVar6 + 0xb) = 0;
        *(undefined1 *)(iVar6 + 0xc) = 0;
        *(undefined4 *)(iVar6 + 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x18) = 0;
        *(undefined4 *)(iVar6 + 0x1c) = 0;
        *(undefined4 *)(iVar6 + 0x20) = 0;
        *(bool *)iVar3 = iVar11 != 0;
        uVar5 = *(undefined1 *)(iVar6 + 9);
        uVar9 = *(undefined4 *)(iVar12 + 0x24);
        *(undefined2 *)(iVar3 + 2) = 0;
        *(undefined1 *)(iVar3 + 1) = uVar5;
        bVar10 = false;
        *(undefined1 *)(iVar3 + 4) = *(undefined1 *)(iVar12 + 0x28);
        uVar5 = *(undefined1 *)(iVar6 + 0xf);
        *(undefined4 *)(iVar3 + 8) = uVar9;
        *(undefined1 *)(iVar3 + 5) = uVar5;
        if (*(char *)(iVar12 + 0x14) == '\x02') {
          bVar10 = 0x7f < *(ushort *)(iVar3 + 0x1e0);
        }
        *(bool *)(iVar3 + 0x1e4) = bVar10;
        FUN_ram_4ff3ee10(iVar6);
      }
      else {
        memset(acStack_a2,0,0x62);
        uStack_a4 = 1;
        uStack_a3 = 1;
        iStack_ac = param_1;
        iStack_a8 = iVar12;
        iStack_a0 = FUN_ram_4ff3aca6(1,0,0,auStack_9c,3);
        if (iStack_a0 != 0) {
          local_b0 = 0;
          if (*(char *)(iVar12 + 0x14) == '\x01') {
            pcVar14 = "twai0_ctl";
          }
          else {
            pcVar14 = "twai_aux_ctl";
          }
          iVar11 = FUN_ram_4ff3e458(&LAB_ram_48096c50,pcVar14,0x2000,&iStack_ac,4,&local_b0,1);
          if ((iVar11 == 1) && (FUN_ram_4ff3b5f0(iStack_a0,0xffffffff), acStack_a2[0] != '\0'))
          goto LAB_ram_48097c94;
        }
LAB_ram_48097d10:
        bVar15 = false;
      }
      iVar6 = iVar6 + 0x3578;
      iVar12 = iVar12 + 0x3578;
      iVar3 = iVar3 + 0x3578;
    } while (param_1 + 0xa8f4 != iVar6);
    puVar2 = &DAT_ram_48222640;
    iVar6 = 0;
    do {
      uVar7 = *(uint *)(puVar2 + 4);
      uVar8 = 0xffffffff;
      if (DAT_ram_4ff6dc5f < 2) {
        uVar8 = *(uint *)(&DAT_ram_48222610 + ((uint)DAT_ram_4ff6dc5f * 3 + iVar6) * 8);
        if ((int)uVar7 < 0) goto LAB_ram_48097e12;
LAB_ram_48097d60:
        bVar1 = puVar2[0x18];
        FUN_ram_481212c6(uVar7 & 0xff,3);
        FUN_ram_481214a0(uVar7 & 0xff,bVar1 ^ 1);
      }
      else {
        if (-1 < (int)uVar7) goto LAB_ram_48097d60;
LAB_ram_48097e12:
        FUN_ram_481212c6(uVar8 & 0xff,5);
      }
      iVar6 = iVar6 + 1;
      puVar2 = puVar2 + 0x28;
    } while (iVar6 != 3);
    if (!bVar15) goto LAB_ram_48097c18;
    iVar6 = FUN_ram_4ff2bcc4();
    if ((iVar6 != 0) || (fence(), *(char *)(param_1 + 0x18c6c) != '\0')) {
      fence();
      *(undefined1 *)(param_1 + 0x18c6d) = 0;
    }
  }
  else {
    iVar6 = FUN_ram_4ff2bcc4();
    if (iVar6 != 0) {
      return 0;
    }
LAB_ram_48097c00:
    fence();
    if (*(char *)(param_1 + 0x18c6c) != '\0') {
LAB_ram_48097c18:
      iVar6 = 0;
      goto LAB_ram_48097c1a;
    }
    pcVar14 = (char *)(param_1 + 0x18c6b);
    fence();
    if ((*pcVar14 == '\0') || (fence(), *(char *)(param_1 + 0x18c68) == '\0')) {
      fence();
      *pcVar14 = '\x01';
      FUN_ram_48031d74(1);
      fence();
      *(undefined1 *)(param_1 + 0x18c68) = 1;
      iVar3 = param_1 + 0x88c;
      iVar12 = param_1 + 0x2ec0;
      iVar6 = param_1 + 0x18;
      do {
        if (*(char *)(iVar3 + 0xf) == '\0') {
          FUN_ram_4ff3ec14(iVar3,0xffffffff);
          *(undefined1 *)(iVar3 + 0x11) = 0;
          *(undefined1 *)(iVar3 + 0x12) = 0;
          iVar11 = *(int *)(iVar6 + 0x2c);
          *(undefined1 *)(iVar3 + 0xd) = 0;
          *(undefined1 *)(iVar3 + 10) = 0;
          *(undefined1 *)(iVar3 + 0xb) = 0;
          *(undefined1 *)(iVar3 + 0xc) = 0;
          *(undefined4 *)(iVar3 + 0x14) = 0;
          *(undefined4 *)(iVar3 + 0x18) = 0;
          *(undefined4 *)(iVar3 + 0x1c) = 0;
          *(undefined4 *)(iVar3 + 0x20) = 0;
          *(bool *)iVar12 = iVar11 != 0;
          uVar5 = *(undefined1 *)(iVar3 + 9);
          uVar9 = *(undefined4 *)(iVar6 + 0x24);
          *(undefined2 *)(iVar12 + 2) = 0;
          *(undefined1 *)(iVar12 + 1) = uVar5;
          *(undefined1 *)(iVar12 + 4) = *(undefined1 *)(iVar6 + 0x28);
          uVar5 = *(undefined1 *)(iVar3 + 0xf);
          *(undefined4 *)(iVar12 + 8) = uVar9;
          *(undefined1 *)(iVar12 + 5) = uVar5;
          bVar15 = false;
          if (*(char *)(iVar6 + 0x14) == '\x02') {
            bVar15 = 0x7f < *(ushort *)(iVar12 + 0x1e0);
          }
          *(bool *)(iVar12 + 0x1e4) = bVar15;
          FUN_ram_4ff3ee10(iVar3);
          iVar11 = FUN_ram_4809660e(param_1,iVar6,0,0);
          if (iVar11 == 0) goto LAB_ram_4809802a;
        }
        iVar3 = iVar3 + 0x3578;
        iVar6 = iVar6 + 0x3578;
        iVar12 = iVar12 + 0x3578;
      } while (iVar3 != param_1 + 0xa8f4);
      pcVar4 = (char *)(param_1 + 0x89b);
      do {
        if ((*pcVar4 == '\0') && (iVar6 = FUN_ram_4809660e(param_1,pcVar4 + -0x883,0,1), iVar6 == 0)
           ) goto LAB_ram_4809802a;
        pcVar4 = pcVar4 + 0x3578;
      } while (pcVar4 != (char *)(param_1 + 0xa903));
      iVar6 = 1;
      goto LAB_ram_48097f5a;
    }
  }
  iVar6 = 1;
  goto LAB_ram_48097c1a;
LAB_ram_4809802a:
  iVar6 = 0;
LAB_ram_48097f5a:
  iVar3 = FUN_ram_4ff2bcc4();
  if (((iVar3 == 0) && (fence(), *(char *)(param_1 + 0x18c6c) == '\0')) && (iVar6 != 0)) {
    uVar5 = 0;
  }
  else {
    fence();
    *pcVar14 = '\0';
    fence();
    *(undefined1 *)(param_1 + 0x18c68) = 0;
    FUN_ram_4809660e(param_1,param_1 + 0x18,1);
    FUN_ram_4809660e(param_1,param_1 + 0x3590,1);
    FUN_ram_4809660e(param_1,param_1 + 0x6b08,1);
    FUN_ram_48031d74(0);
    uVar5 = 1;
    iVar6 = 0;
  }
  *(undefined1 *)(param_1 + 0x18c6a) = uVar5;
LAB_ram_48097c1a:
  if (iVar13 == 0) {
    return iVar6;
  }
LAB_ram_48097c20:
  FUN_ram_4ff3afa2(iVar13,0,0,0);
  return iVar6;
}


