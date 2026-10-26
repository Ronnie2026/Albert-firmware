/* Firmware entry: 0x480b0938 */

int FUN_ram_480b0938(undefined4 *param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  uint uStack_2a4;
  int iStack_298;
  int iStack_294;
  code *pcStack_284;
  uint local_280 [2];
  uint local_278 [3];
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  uint uStack_25c;
  uint uStack_258;
  uint auStack_254 [5];
  code *pcStack_240;
  undefined4 uStack_23c;
  undefined1 uStack_238;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar4 = 0;
  pbVar9 = param_2;
  do {
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    bVar4 = bVar4 | bVar1;
  } while (pbVar9 != param_2 + 0x10);
  if (bVar4 == 0) {
    return 0;
  }
  iVar14 = *(int *)(param_2 + 0x10);
  if (iVar14 == 0) {
    return 0;
  }
  if (param_3 == (byte *)0x0) {
    return 0;
  }
  if (0x2ffff < param_4 - 1) {
    return 0;
  }
  uVar10 = param_1[6];
  if ((uVar10 == 0xffffffff) && (param_1[7] == -1)) {
    return 0;
  }
  if ((int)param_1[9] < 0) {
    uStack_2a4 = 0x1000;
    iStack_298 = 0;
    iStack_294 = 0;
  }
  else {
    iStack_294 = 1 - param_1[9];
    iStack_298 = iStack_294 * 0x31000;
    uStack_2a4 = iStack_298 + 0x1000;
  }
  uVar2 = (uint)(uVar10 + 1 < uVar10) + param_1[7];
  local_278[1] = 0xffffffff;
  local_278[0] = 0xffffffff;
  uStack_26c = 0xffffffff;
  uStack_268 = 0xffffffff;
  uStack_264 = 0xffffffff;
  uStack_260 = 0xffffffff;
  uStack_25c = 0xffffffff;
  uStack_258 = 0xffffffff;
  auStack_254[0] = 0xffffffff;
  auStack_254[1] = 0xffffffff;
  auStack_254[2] = 0xffffffff;
  auStack_254[3] = 0xffffffff;
  auStack_254[4] = 0xffffffff;
  local_280[0] = 0x31535350;
  puVar6 = local_280 + 2;
  local_280[1] = 1;
  uVar11 = 0;
  do {
    bVar4 = (byte)(uVar10 + 1 >> (uVar11 & 0x1f)) | (byte)(uVar2 * 2 << (0x1f - uVar11 & 0x1f));
    if (-1 < (int)(uVar11 - 0x20)) {
      bVar4 = (byte)(uVar2 >> (uVar11 - 0x20 & 0x1f));
    }
    *(byte *)puVar6 = bVar4;
    uVar11 = uVar11 + 8;
    puVar6 = (uint *)((int)puVar6 + 1);
  } while (uVar11 != 0x40);
  local_278[2] = iVar14;
  FUN_ram_4ff45158(&uStack_26c,param_2,0x10);
  uStack_25c = param_4 & 0xffffff;
  uVar10 = 0xffffffff;
  pbVar9 = param_3;
  do {
    iVar14 = 8;
    uVar10 = uVar10 ^ *pbVar9;
    do {
      iVar14 = iVar14 + -1;
      uVar10 = uVar10 >> 1 ^ -(uVar10 & 1) & 0xedb88320;
    } while (iVar14 != 0);
    pbVar9 = pbVar9 + 1;
  } while (param_3 + param_4 != pbVar9);
  uStack_258 = ~uVar10;
  puVar6 = local_280;
  auStack_254[0] = 0xffffffff;
  do {
    iVar14 = 8;
    auStack_254[0] = auStack_254[0] ^ (byte)*puVar6;
    do {
      iVar14 = iVar14 + -1;
      auStack_254[0] = auStack_254[0] >> 1 ^ -(auStack_254[0] & 1) & 0xedb88320;
    } while (iVar14 != 0);
    puVar6 = (uint *)((int)puVar6 + 1);
  } while (puVar6 != auStack_254);
  piVar13 = (int *)*param_1;
  auStack_254[0] = ~auStack_254[0];
  if (*piVar13 == 0) {
    return 0;
  }
  fence();
  fence();
  if ((DAT_ram_4ff6df30 == '\0') && (DAT_ram_4ff5c5c0 == '\0')) {
    fence();
    if (DAT_ram_4ff5c548 == '\x02') {
      return 0;
    }
    if (DAT_ram_4ff5c5ca != '\0') goto LAB_ram_480b0d62;
  }
  else {
    fence();
    if (DAT_ram_4ff5c548 == '\x02') {
      return 0;
    }
    if (DAT_ram_4ff5c5ca == '\0') {
      return 0;
    }
LAB_ram_480b0d62:
    if (DAT_ram_4ff6deb4 == '\0') {
      return 0;
    }
  }
  if (0x63000 < uStack_2a4) {
    return 0;
  }
  uVar10 = param_4 + 0x103f & 0xfffff000;
  if (0x63000 - uStack_2a4 < uVar10) {
    return 0;
  }
  uVar2 = 0;
  do {
    uStack_23c = 0;
    pcStack_240 = FUN_ram_48025b94;
    uStack_238 = 0;
    FUN_ram_4807df16(&pcStack_240);
    iVar14 = FUN_ram_4812e61e(*piVar13,uStack_2a4 + uVar2,0x1000);
    if (iVar14 != 0) {
      FUN_ram_4807e2fa(&pcStack_240);
      return 0;
    }
    FUN_ram_4807e2fa(&pcStack_240);
    uVar2 = uVar2 + 0x1000;
    FUN_ram_4ff3c2b6(1);
  } while (uVar2 < uVar10);
  piVar13 = (int *)*param_1;
  if (*piVar13 == 0) {
    return 0;
  }
  fence();
  fence();
  if ((DAT_ram_4ff6df30 == '\0') && (DAT_ram_4ff5c5c0 == '\0')) {
    fence();
    if (DAT_ram_4ff5c548 == '\x02') {
      return 0;
    }
    if (DAT_ram_4ff5c5ca == '\0') goto LAB_ram_480b0be6;
  }
  else {
    fence();
    if (DAT_ram_4ff5c548 == '\x02') {
      return 0;
    }
    if (DAT_ram_4ff5c5ca == '\0') {
      return 0;
    }
  }
  if (DAT_ram_4ff6deb4 == '\0') {
    return 0;
  }
LAB_ram_480b0be6:
  uStack_23c = 0;
  pcStack_240 = FUN_ram_48025b94;
  uStack_238 = 0;
  FUN_ram_4807df16(&pcStack_240);
  iVar14 = FUN_ram_4812e4d6(*piVar13,uStack_2a4,local_280,0x3c);
  FUN_ram_4807e2fa(&pcStack_240);
  if (iVar14 == 0) {
    uVar10 = 0;
    do {
      piVar13 = (int *)*param_1;
      if (*piVar13 == 0) {
        return 0;
      }
      fence();
      fence();
      if ((DAT_ram_4ff6df30 == '\0') && (DAT_ram_4ff5c5c0 == '\0')) {
        fence();
        if (DAT_ram_4ff5c548 == '\x02') {
          return 0;
        }
        if (DAT_ram_4ff5c5ca != '\0') goto LAB_ram_480b0d3a;
      }
      else {
        fence();
        if (DAT_ram_4ff5c548 == '\x02') {
          return 0;
        }
        if (DAT_ram_4ff5c5ca == '\0') {
          return 0;
        }
LAB_ram_480b0d3a:
        if (DAT_ram_4ff6deb4 == '\0') {
          return 0;
        }
      }
      uVar2 = uVar10 + iStack_298 + 0x1040;
      if (0x63000 < uVar2) {
        return 0;
      }
      uVar11 = param_4 - uVar10;
      if (0x1000 < uVar11) {
        uVar11 = 0x1000;
      }
      if (0x63000 - uVar2 < uVar11) {
        return 0;
      }
      uStack_23c = 0;
      pcStack_240 = FUN_ram_48025b94;
      uStack_238 = 0;
      FUN_ram_4807df16(&pcStack_240);
      iVar14 = FUN_ram_4812e4d6(*piVar13,uVar2,param_3 + uVar10,uVar11);
      FUN_ram_4807e2fa(&pcStack_240);
      if (iVar14 != 0) {
        return 0;
      }
      uVar10 = uVar10 + uVar11;
    } while (uVar10 < param_4);
    memset(&pcStack_240,0,0x200);
    uVar10 = 0;
    do {
      uVar2 = iStack_298 + 0x1040 + uVar10;
      if (*(int *)*param_1 == 0) {
        return 0;
      }
      uVar11 = param_4 - uVar10;
      if (0x63000 < uVar2) {
        return 0;
      }
      if (0x200 < uVar11) {
        uVar11 = 0x200;
      }
      if (0x63000 - uVar2 < uVar11) {
        return 0;
      }
      iVar14 = FUN_ram_4812e734(*(int *)*param_1,uVar2,&pcStack_240,uVar11);
      if (iVar14 != 0) {
        return 0;
      }
      iVar14 = FUN_ram_4ff4511a(&pcStack_240,param_3 + uVar10,uVar11);
      uVar10 = uVar10 + uVar11;
      if (iVar14 != 0) {
        return 0;
      }
    } while (uVar10 < param_4);
    if (((*(int *)*param_1 != 0) &&
        (iVar14 = FUN_ram_4812e734(*(int *)*param_1,uStack_2a4,&pcStack_240,0x3c), iVar14 == 0)) &&
       (iVar14 = FUN_ram_4ff4511a(&pcStack_240,local_280,0x3c), iVar14 == 0)) {
      uVar10 = iStack_298 + 0x103c;
      pcStack_284 = (code *)0xa43bc751;
      iVar14 = FUN_ram_4808eb64(*param_1,uVar10,&pcStack_284,4);
      if (((iVar14 != 0) && (*(int *)*param_1 != 0)) &&
         ((uVar10 < 0x63001 &&
          ((iVar3 = FUN_ram_4812e734(*(int *)*param_1,uVar10,&pcStack_240,4), iVar3 == 0 &&
           (pcStack_284 == pcStack_240)))))) {
        uVar2 = param_1[6];
        param_1[9] = iStack_294;
        uVar10 = uVar2 + 1;
        param_1[6] = uVar10;
        param_1[7] = (uint)(uVar10 < uVar2) + param_1[7];
        uVar5 = *(undefined4 *)(param_2 + 4);
        uVar7 = *(undefined4 *)(param_2 + 8);
        uVar8 = *(undefined4 *)(param_2 + 0xc);
        uVar12 = *(undefined4 *)(param_2 + 0x10);
        param_1[1] = *(undefined4 *)param_2;
        param_1[2] = uVar5;
        param_1[3] = uVar7;
        param_1[4] = uVar8;
        param_1[5] = uVar12;
        param_1[8] = param_4;
        return iVar14;
      }
    }
  }
  return 0;
}


