/* Firmware entry: 0x4806019e */

uint FUN_ram_4806019e(int param_1,uint param_2,uint param_3,uint param_4,int *param_5,uint param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  char cVar17;
  uint uVar18;
  uint uVar19;
  uint local_2c0;
  uint uStack_2bc;
  uint uStack_2b8;
  char local_2a0 [8];
  uint local_298 [36];
  int local_208;
  int iStack_204;
  int iStack_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  undefined4 uStack_1bc;
  int aiStack_a0 [24];
  int aiStack_40 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_5 != (int *)0x0) && (param_6 != 0)) {
    if (3 < param_6) {
      param_6 = 3;
    }
    memset(local_298,0,0x90);
    local_2a0[0] = '\0';
    local_2a0[1] = '\0';
    local_2a0[2] = '\0';
    local_2a0[3] = '\0';
    local_2a0[4] = '\0';
    local_2a0[5] = '\0';
    local_2a0[6] = '\0';
    local_2a0[7] = '\0';
    pcVar14 = local_2a0;
    iVar9 = 0;
    uVar16 = 0;
    iVar3 = 0;
    bVar1 = false;
    uVar15 = 0;
    puVar7 = local_298;
    do {
      piVar4 = (int *)(iVar9 * 0x3e4 + param_1);
      uVar11 = piVar4[7];
      local_208 = *piVar4;
      iStack_204 = piVar4[1];
      iStack_200 = piVar4[2];
      uVar13 = piVar4[3];
      uStack_1f8 = piVar4[4];
      uStack_1f4 = piVar4[5];
      uStack_1f0 = piVar4[6];
      uStack_1ec = piVar4[7];
      uStack_1e8 = piVar4[8];
      uStack_1fc = uVar13;
      if ((((uVar11 == 0) || (uVar11 != piVar4[7])) || (uVar11 != uStack_1ec)) ||
         (((uStack_1e8 != ~uVar11 || (local_208 != 0x50313134)) ||
          ((iStack_204 != 2 || (iStack_200 != 0x3e4)))))) {
LAB_ram_4806026c:
        iVar5 = param_1 + iVar9 * 0x3e4;
        bVar1 = (bool)(bVar1 | ((((((((*piVar4 != 0 || piVar4[1] != 0) || piVar4[2] != 0) ||
                                    piVar4[3] != 0) || *(int *)(iVar5 + 0x10) != 0) ||
                                  *(int *)(iVar5 + 0x14) != 0) || *(int *)(iVar5 + 0x18) != 0) ||
                                *(int *)(iVar5 + 0x1c) != 0) || *(int *)(iVar5 + 0x20) != 0));
      }
      else {
        uVar6 = 0xf37eae88;
        uVar19 = 0;
        do {
          uVar2 = uVar19 & 0x1f;
          uVar19 = uVar19 + 8;
          uVar6 = (uVar13 >> uVar2 & 0xff ^ uVar6) * 0x1000193;
        } while (uVar19 != 0x20);
        uVar19 = 0;
        do {
          uVar2 = uVar19 & 0x1f;
          uVar19 = uVar19 + 8;
          uVar6 = (uStack_1f8 >> uVar2 & 0xff ^ uVar6) * 0x1000193;
        } while (uVar19 != 0x20);
        uVar19 = 0;
        do {
          uVar2 = uVar19 & 0x1f;
          uVar19 = uVar19 + 8;
          uVar6 = (uStack_1f4 >> uVar2 & 0xff ^ uVar6) * 0x1000193;
        } while (uVar19 != 0x20);
        uVar19 = 0;
        do {
          uVar2 = uVar6;
          uVar18 = uStack_1f0 >> (uVar19 & 0x1f) & 0xff;
          uVar19 = uVar19 + 8;
          uVar6 = (uVar18 ^ uVar2) * 0x1000193;
        } while (uVar19 != 0x20);
        if (uVar18 == uVar2) {
          uVar6 = 0xffffffff;
        }
        if (uVar11 != uVar6) goto LAB_ram_4806026c;
        *puVar7 = 0x50313134;
        puVar7[1] = 2;
        uVar6 = uStack_1f8;
        uVar11 = uStack_1fc;
        puVar7[2] = 0x3e4;
        uVar19 = uStack_1f4;
        puVar7[3] = uVar11;
        puVar7[4] = uVar6;
        uVar6 = uStack_1ec;
        uVar11 = uStack_1f0;
        puVar7[5] = uVar19;
        uVar19 = uStack_1e8;
        *pcVar14 = '\x01';
        uVar15 = uVar15 + 1;
        puVar7[6] = uVar11;
        puVar7[7] = uVar6;
        puVar7[8] = uVar19;
        if ((uVar15 == 1) || (0 < (int)(uVar13 - uVar16))) {
          iVar3 = iVar9;
          uVar16 = uVar13;
        }
      }
      iVar9 = iVar9 + 1;
      puVar7 = puVar7 + 9;
      pcVar14 = pcVar14 + 1;
    } while (iVar9 != 4);
    if (uVar15 != 0) {
      uStack_2b8 = 0;
      uStack_2bc = 0;
      local_2c0 = 0;
      uVar11 = 0;
      uVar16 = 0;
      do {
        memset(&local_208,0,0x1c8);
        piVar4 = &local_208;
        uStack_1bc = 0xffffffff;
        do {
          piVar4[0x1d] = -1;
          piVar4 = piVar4 + 10;
        } while (aiStack_a0 != piVar4);
        FUN_ram_4805ff04(iVar3 * 0x3e4 + param_1,local_298 + iVar3 * 9,&local_208);
        uVar13 = local_298[iVar3 * 9 + 3];
        if ((uVar11 != 0) || (bVar1)) {
          if (uVar13 + 1 == uVar16) {
            uStack_1e8 = CONCAT31(uStack_1e8._1_3_,1);
            uStack_1f4 = uStack_2b8;
            uStack_1f0 = uStack_2bc;
            uStack_1ec = local_2c0;
          }
        }
        else {
          uStack_1e8 = CONCAT31(uStack_1e8._1_3_,1);
          uStack_1f4 = param_2;
          uStack_1f0 = param_3;
          uStack_1ec = param_4;
        }
        uVar11 = uVar11 + 1;
        piVar12 = &local_208;
        piVar4 = param_5;
        do {
          iVar5 = piVar12[1];
          iVar8 = piVar12[2];
          *piVar4 = *piVar12;
          iVar9 = piVar12[3];
          piVar4[1] = iVar5;
          iVar5 = piVar12[4];
          piVar4[2] = iVar8;
          iVar8 = piVar12[5];
          piVar4[3] = iVar9;
          piVar4[4] = iVar5;
          piVar4[5] = iVar8;
          piVar12 = piVar12 + 6;
          piVar4 = piVar4 + 6;
        } while (piVar12 != aiStack_40);
        *(undefined1 *)((int)local_298 + iVar3 + -4) = 1;
        uStack_2b8 = local_298[iVar3 * 9 + 4];
        param_5 = param_5 + 0x72;
        uStack_2bc = local_298[iVar3 * 9 + 5];
        local_2c0 = local_298[iVar3 * 9 + 6];
        if (param_6 == uVar11) {
          return param_6;
        }
        if (uVar15 == uVar11) {
          return uVar11;
        }
        pcVar14 = local_2a0 + 4;
        pcVar10 = local_2a0;
        iVar9 = 0;
        uVar16 = 0;
        cVar17 = '\0';
        puVar7 = local_298;
        do {
          if ((((*pcVar10 != '\0') && (*pcVar14 == '\0')) &&
              (uVar6 = uVar13 - puVar7[3], 0 < (int)uVar6)) &&
             ((cVar17 == '\0' || (uVar6 < uVar16)))) {
            iVar3 = iVar9;
            uVar16 = uVar6;
            cVar17 = *pcVar10;
          }
          iVar9 = iVar9 + 1;
          pcVar10 = pcVar10 + 1;
          puVar7 = puVar7 + 9;
          pcVar14 = pcVar14 + 1;
        } while (iVar9 != 4);
        uVar16 = uVar13;
      } while (cVar17 != '\0');
      return uVar11;
    }
  }
  return 0;
}


