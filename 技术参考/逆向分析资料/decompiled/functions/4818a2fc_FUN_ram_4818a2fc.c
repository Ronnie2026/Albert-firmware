/* Firmware entry: 0x4818a2fc */

int FUN_ram_4818a2fc(undefined4 *param_1,int param_2,uint *param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar10 = (char *)*param_1;
  if (param_2 - (int)pcVar10 < 1) {
    return -0x2460;
  }
  if (*pcVar10 == '\x17') {
    iVar13 = 2;
  }
  else {
    if (*pcVar10 != '\x18') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return -0x2462;
    }
    iVar13 = 4;
  }
  *param_1 = pcVar10 + 1;
  iVar2 = FUN_ram_4817f2d4(param_1,param_2,&iStack_14);
  if (iVar2 != 0) {
    return iVar2 + -0x2400;
  }
  iVar2 = (uint)(iVar13 != 2) * 2 + 0xc;
  if (iVar2 == iStack_14) {
    pbVar11 = (byte *)*param_1;
    pbVar6 = pbVar11 + iVar2;
  }
  else {
    if (iStack_14 != (-(uint)(iVar13 != 2) & 2) + 0xd) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return -0x2400;
    }
    pbVar11 = (byte *)*param_1;
    pbVar6 = pbVar11 + iStack_14;
    if (pbVar6[-1] != 0x5a) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return -0x2400;
    }
  }
  *param_1 = pbVar6;
  if ((*pbVar11 - 0x30 < 10) && (pbVar11[1] - 0x30 < 10)) {
    uVar7 = (*pbVar11 - 0x30) * 10 + (pbVar11[1] - 0x30);
    *param_3 = uVar7;
    if (iVar13 == 4) {
      pbVar6 = pbVar11 + 2;
      pbVar1 = pbVar11 + 3;
      iVar13 = uVar7 * 100;
      pbVar11 = pbVar11 + 2;
      if ((9 < *pbVar6 - 0x30) || (9 < *pbVar1 - 0x30)) goto LAB_ram_4818a53a;
      uVar7 = (*pbVar6 - 0x30) * 10 + (*pbVar1 - 0x30);
    }
    else {
      iVar13 = (-(uint)(0x31 < uVar7) & 0xffffff9c) + 2000;
    }
    uVar7 = iVar13 + uVar7;
    *param_3 = uVar7;
    if ((pbVar11[2] - 0x30 < 10) && (pbVar11[3] - 0x30 < 10)) {
      uVar8 = (pbVar11[2] - 0x30) * 10 + (pbVar11[3] - 0x30);
    }
    else {
      uVar8 = 0xffffffff;
    }
    param_3[1] = uVar8;
    if ((pbVar11[4] - 0x30 < 10) && (pbVar11[5] - 0x30 < 10)) {
      uVar5 = (pbVar11[4] - 0x30) * 10 + (pbVar11[5] - 0x30);
    }
    else {
      uVar5 = 0xffffffff;
    }
    param_3[2] = uVar5;
    if ((pbVar11[6] - 0x30 < 10) && (pbVar11[7] - 0x30 < 10)) {
      uVar4 = (pbVar11[6] - 0x30) * 10 + (pbVar11[7] - 0x30);
    }
    else {
      uVar4 = 0xffffffff;
    }
    param_3[3] = uVar4;
    if ((pbVar11[8] - 0x30 < 10) && (pbVar11[9] - 0x30 < 10)) {
      uVar3 = (pbVar11[8] - 0x30) * 10 + (pbVar11[9] - 0x30);
    }
    else {
      uVar3 = 0xffffffff;
    }
    param_3[4] = uVar3;
    if ((pbVar11[10] - 0x30 < 10) && (pbVar11[0xb] - 0x30 < 10)) {
      uVar12 = (pbVar11[10] - 0x30) * 10 + (pbVar11[0xb] - 0x30);
    }
    else {
      uVar12 = 0xffffffff;
    }
    param_3[5] = uVar12;
    if (uVar8 - 1 < 0xc) {
      uVar9 = 1 << (uVar8 - 1 & 0x1f);
      uVar8 = 0x1f;
      if (((((uVar9 & 0xad5) == 0) && (uVar8 = 0x1e, (uVar9 & 0x528) == 0)) &&
          (uVar8 = 0x1c, (uVar7 & 3) == 0)) && (uVar8 = 0x1d, uVar7 == (uVar7 / 100) * 100)) {
        uVar8 = (uVar7 % 400 == 0) + 0x1c;
      }
      if (((uVar5 - 1 < uVar8) && (uVar4 < 0x18)) && ((uVar3 < 0x3c && (uVar12 < 0x3c)))) {
        return 0;
      }
    }
  }
  else {
LAB_ram_4818a53a:
    *param_3 = 0xffffffff;
  }
  return -0x2400;
}


