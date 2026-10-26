/* Firmware entry: 0x480b621c */

int FUN_ram_480b621c(undefined4 *param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int *piVar14;
  int iVar15;
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
  bVar5 = 0;
  pbVar10 = param_2;
  do {
    bVar1 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    bVar5 = bVar5 | bVar1;
  } while (pbVar10 != param_2 + 0x10);
  if ((((bVar5 != 0) && (iVar15 = *(int *)(param_2 + 0x10), iVar15 != 0)) &&
      (param_3 != (byte *)0x0)) && (param_4 - 1 < 0x30000)) {
    uVar11 = param_1[6];
    if ((uVar11 != 0xffffffff) || (param_1[7] != -1)) {
      if ((int)param_1[9] < 0) {
        uVar2 = 0x1000;
        iStack_298 = 0;
        iStack_294 = 0;
      }
      else {
        iStack_294 = 1 - param_1[9];
        iStack_298 = iStack_294 * 0x31000;
        uVar2 = iStack_298 + 0x1000;
      }
      uVar3 = (uint)(uVar11 + 1 < uVar11) + param_1[7];
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
      puVar7 = local_280 + 2;
      local_280[1] = 1;
      uVar12 = 0;
      do {
        bVar5 = (byte)(uVar11 + 1 >> (uVar12 & 0x1f)) | (byte)(uVar3 * 2 << (0x1f - uVar12 & 0x1f));
        if (-1 < (int)(uVar12 - 0x20)) {
          bVar5 = (byte)(uVar3 >> (uVar12 - 0x20 & 0x1f));
        }
        *(byte *)puVar7 = bVar5;
        uVar12 = uVar12 + 8;
        puVar7 = (uint *)((int)puVar7 + 1);
      } while (uVar12 != 0x40);
      local_278[2] = iVar15;
      FUN_ram_4ff45158(&uStack_26c,param_2,0x10);
      uStack_25c = param_4 & 0xffffff;
      uVar11 = 0xffffffff;
      pbVar10 = param_3;
      do {
        iVar15 = 8;
        uVar11 = uVar11 ^ *pbVar10;
        do {
          iVar15 = iVar15 + -1;
          uVar11 = uVar11 >> 1 ^ -(uVar11 & 1) & 0xedb88320;
        } while (iVar15 != 0);
        pbVar10 = pbVar10 + 1;
      } while (param_3 + param_4 != pbVar10);
      uStack_258 = ~uVar11;
      puVar7 = local_280;
      auStack_254[0] = 0xffffffff;
      do {
        iVar15 = 8;
        auStack_254[0] = auStack_254[0] ^ (byte)*puVar7;
        do {
          iVar15 = iVar15 + -1;
          auStack_254[0] = auStack_254[0] >> 1 ^ -(auStack_254[0] & 1) & 0xedb88320;
        } while (iVar15 != 0);
        puVar7 = (uint *)((int)puVar7 + 1);
      } while (puVar7 != auStack_254);
      piVar14 = (int *)*param_1;
      auStack_254[0] = ~auStack_254[0];
      if (*piVar14 != 0) {
        fence();
        fence();
        if (((DAT_ram_4ff6df30 == '\0') && (DAT_ram_4ff5c5c0 == '\0')) &&
           ((DAT_ram_4ff5c5ca == '\0' &&
            ((uVar2 < 0x63001 && (uVar11 = param_4 + 0x103f & 0xfffff000, uVar11 <= 0x63000 - uVar2)
             ))))) {
          uVar3 = 0;
          do {
            uStack_23c = 0;
            pcStack_240 = FUN_ram_48025b94;
            uStack_238 = 0;
            FUN_ram_4807df16(&pcStack_240);
            iVar15 = FUN_ram_4812e61e(*piVar14,uVar3 + uVar2,0x1000);
            if (iVar15 != 0) {
              FUN_ram_4807e2fa(&pcStack_240);
              return 0;
            }
            FUN_ram_4807e2fa(&pcStack_240);
            uVar3 = uVar3 + 0x1000;
            FUN_ram_4ff3c2b6(1);
          } while (uVar3 < uVar11);
          piVar14 = (int *)*param_1;
          if (*piVar14 != 0) {
            fence();
            fence();
            if (((DAT_ram_4ff6df30 == '\0') && (DAT_ram_4ff5c5c0 == '\0')) &&
               (DAT_ram_4ff5c5ca == '\0')) {
              uStack_23c = 0;
              pcStack_240 = FUN_ram_48025b94;
              uStack_238 = 0;
              FUN_ram_4807df16(&pcStack_240);
              iVar15 = FUN_ram_4812e4d6(*piVar14,uVar2,local_280,0x3c);
              FUN_ram_4807e2fa(&pcStack_240);
              if (iVar15 == 0) {
                uVar11 = 0;
                do {
                  piVar14 = (int *)*param_1;
                  if (*piVar14 == 0) {
                    return 0;
                  }
                  fence();
                  fence();
                  if (DAT_ram_4ff6df30 != '\0') {
                    return 0;
                  }
                  if (DAT_ram_4ff5c5c0 != '\0') {
                    return 0;
                  }
                  uVar3 = uVar11 + iStack_298 + 0x1040;
                  if (DAT_ram_4ff5c5ca != '\0') {
                    return 0;
                  }
                  uVar12 = param_4 - uVar11;
                  if (0x63000 < uVar3) {
                    return 0;
                  }
                  if (0x1000 < uVar12) {
                    uVar12 = 0x1000;
                  }
                  if (0x63000 - uVar3 < uVar12) {
                    return 0;
                  }
                  uStack_23c = 0;
                  uStack_238 = 0;
                  pcStack_240 = FUN_ram_48025b94;
                  FUN_ram_4807df16(&pcStack_240);
                  iVar15 = FUN_ram_4812e4d6(*piVar14,uVar3,param_3 + uVar11,uVar12);
                  FUN_ram_4807e2fa(&pcStack_240);
                  uVar11 = uVar11 + uVar12;
                  if (iVar15 != 0) {
                    return 0;
                  }
                } while (uVar11 < param_4);
                memset(&pcStack_240,0,0x200);
                uVar11 = 0;
                do {
                  uVar3 = uVar11 + iStack_298 + 0x1040;
                  uVar12 = param_4 - uVar11;
                  if (*(int *)*param_1 == 0) {
                    return 0;
                  }
                  if (0x63000 < uVar3) {
                    return 0;
                  }
                  if (0x200 < uVar12) {
                    uVar12 = 0x200;
                  }
                  if (0x63000 - uVar3 < uVar12) {
                    return 0;
                  }
                  iVar15 = FUN_ram_4812e734(*(int *)*param_1,uVar3,&pcStack_240,uVar12);
                  if (iVar15 != 0) {
                    return 0;
                  }
                  iVar15 = FUN_ram_4ff4511a(&pcStack_240,param_3 + uVar11,uVar12);
                  uVar11 = uVar11 + uVar12;
                  if (iVar15 != 0) {
                    return 0;
                  }
                } while (uVar11 < param_4);
                if (((*(int *)*param_1 != 0) &&
                    (iVar15 = FUN_ram_4812e734(*(int *)*param_1,uVar2,&pcStack_240,0x3c),
                    iVar15 == 0)) &&
                   (iVar15 = FUN_ram_4ff4511a(&pcStack_240,local_280,0x3c), iVar15 == 0)) {
                  uVar11 = iStack_298 + 0x103c;
                  pcStack_284 = (code *)0xa43bc751;
                  iVar15 = FUN_ram_4808f132(*param_1,uVar11,&pcStack_284,4);
                  if (((iVar15 != 0) && (*(int *)*param_1 != 0)) &&
                     ((uVar11 < 0x63001 &&
                      ((iVar4 = FUN_ram_4812e734(*(int *)*param_1,uVar11,&pcStack_240,4), iVar4 == 0
                       && (pcStack_240 == pcStack_284)))))) {
                    uVar2 = param_1[6];
                    param_1[9] = iStack_294;
                    uVar11 = uVar2 + 1;
                    param_1[6] = uVar11;
                    param_1[7] = (uint)(uVar11 < uVar2) + param_1[7];
                    uVar6 = *(undefined4 *)(param_2 + 4);
                    uVar8 = *(undefined4 *)(param_2 + 8);
                    uVar9 = *(undefined4 *)(param_2 + 0xc);
                    uVar13 = *(undefined4 *)(param_2 + 0x10);
                    param_1[1] = *(undefined4 *)param_2;
                    param_1[2] = uVar6;
                    param_1[3] = uVar8;
                    param_1[4] = uVar9;
                    param_1[5] = uVar13;
                    param_1[8] = param_4;
                    return iVar15;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


