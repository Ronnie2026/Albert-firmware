/* Firmware entry: 0x480ca012 */

void FUN_ram_480ca012(int *param_1,int *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  char cVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  undefined4 uStack_dc;
  undefined2 uStack_d4;
  int iStack_d0;
  undefined4 auStack_c4 [40];
  char cStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(byte *)(param_2 + 1) < 8) {
    return;
  }
  puVar20 = (uint *)param_1[3];
  fence();
  uVar11 = *puVar20;
  do {
    uVar9 = uVar11 + 1;
    if ((int)uVar11 < 0) {
      return;
    }
    if ((uVar11 & 0xffff) == 0xffff) {
      return;
    }
    bVar1 = *puVar20 != uVar11;
    uVar11 = *puVar20;
  } while (bVar1);
  *puVar20 = uVar9;
  iVar19 = *param_1;
  FUN_ram_4ff3ec14(iVar19 + 0xb18,0xffffffff);
  puVar17 = (undefined4 *)(iVar19 + 0xb38);
  puVar14 = auStack_c4;
  do {
    uVar8 = puVar17[1];
    uVar10 = puVar17[2];
    uVar13 = puVar17[3];
    *puVar14 = *puVar17;
    puVar14[1] = uVar8;
    puVar14[2] = uVar10;
    puVar14[3] = uVar13;
    puVar17 = puVar17 + 4;
    puVar14 = puVar14 + 4;
  } while (puVar17 != (undefined4 *)(iVar19 + 0xbd8));
  *puVar14 = *puVar17;
  FUN_ram_4ff3ee10(iVar19 + 0xb18);
  if ((*(byte *)((int)param_2 + 5) & 7) != 0) {
    if ((*(byte *)((int)param_2 + 5) & 7) == 2) {
      uVar8 = FUN_ram_48025ba6();
      FUN_ram_480c90ae(param_1,auStack_c4,uVar8);
      if ((*(char *)((int)param_2 + 0xd) == '\x01') && (cStack_24 == '\0')) {
        iVar19 = FUN_ram_48025ba6();
        param_1[0x8e] = iVar19;
        *(undefined1 *)(param_1 + 0x95) = 1;
        if ((*(char *)((int)param_1 + 0x246) != '\0') &&
           ((((*(char *)((int)param_1 + 0x24b) == '\0' && (*(char *)((int)param_1 + 0x24a) == '\0'))
             && (*(char *)((int)param_1 + 0x249) != '\0')) &&
            (*(char *)((int)param_1 + 0x247) != '\0')))) {
          if ((uint)(iVar19 - param_1[0x86]) < 0x5dd) {
            if ((uint)*(ushort *)(param_1 + 0x90) <= (uint)(iVar19 - param_1[0x86])) {
              uVar9 = param_1[0x84];
              uVar11 = 0;
              if ((uint)*(byte *)((int)param_1 + 0x245) * 100 < uVar9) {
                uVar11 = uVar9 + (uint)*(byte *)((int)param_1 + 0x245) * -100;
              }
              uVar15 = param_1[0x83];
              if ((uint)param_1[0x83] < uVar11) {
                uVar15 = uVar11;
              }
              if (uVar9 != uVar15) {
                param_1[0x84] = uVar15;
                *(undefined1 *)((int)param_1 + 0x247) = 0;
                iVar18 = param_1[0x7e] + 1;
                if (iVar18 == 0) {
                  iVar18 = 1;
                }
                param_1[0x7e] = iVar18;
              }
              param_1[0x86] = iVar19;
              param_1[0x8d] = iVar19;
              param_1[0x8c] = param_1[0x8c] + 1;
              FUN_ram_480c7da6(param_1,auStack_c4);
            }
          }
          else {
            param_1[0x86] = iVar19;
          }
        }
      }
    }
    fence();
    uVar11 = *puVar20;
    while( true ) {
      uVar9 = uVar11 - 1;
      if ((int)uVar11 < 0) {
        return;
      }
      if ((uVar11 & 0xffff) == 0) break;
      bVar1 = *puVar20 == uVar11;
      uVar11 = *puVar20;
      if (bVar1) {
        *puVar20 = uVar9;
        return;
      }
    }
    return;
  }
  if (((*(char *)((int)param_2 + 0xd) == '\x01') && (*param_2 == 0x3fd)) &&
     ((char)param_2[1] == '\b')) {
    cVar2 = (char)param_1[0xa0];
    uVar3 = *(undefined1 *)((int)param_1 + 0x283);
    cVar16 = cVar2;
    if ((cVar2 == '\0') || (*(char *)((int)param_1 + 0x281) == '\0')) {
      cVar7 = '\0';
      uVar12 = 0;
    }
    else {
      cVar7 = *(char *)((int)param_1 + 0x282);
      uVar12 = 0;
      if ((cVar7 != '\0') &&
         (uVar12 = uVar3, cVar16 = cVar7, 0x5dc < (uint)(param_3 - param_1[0xa2]))) {
        cVar7 = '\0';
        uVar12 = 0;
        cVar16 = cVar2;
      }
    }
    *(undefined **)(param_1 + 0xa0) = &sedeleg;
    cVar2 = (char)param_2[3];
    iVar19 = param_1[0xa1];
    *(byte *)((int)param_1 + 0x282) = (byte)(cVar2 >> 7) >> 7;
    bVar5 = *(byte *)(param_2 + 2) >> 7;
    *(byte *)((int)param_1 + 0x283) = bVar5;
    bVar4 = *(byte *)((int)param_2 + 10);
    *(byte *)(param_1 + 0xa1) = bVar4 & 1;
    bVar6 = *(byte *)(param_2 + 2);
    uStack_d4 = CONCAT11((char)iVar19,cVar7);
    param_1[0xa2] = param_3;
    cVar7 = (bVar6 >> 1 & 0x3f) - 0x1e;
    uStack_dc = CONCAT13(*(undefined1 *)((int)param_1 + 0x285),
                         CONCAT12(uVar3,CONCAT11(uVar12,cVar16)));
    *(char *)((int)param_1 + 0x285) = cVar7;
    bVar6 = bVar5;
    if (cVar2 >= '\0') {
      bVar6 = 0;
    }
    iStack_d0 = CONCAT31(CONCAT12(cVar7,CONCAT11(bVar5,bVar6)),1);
    if (uStack_dc == iStack_d0) {
      FUN_ram_480c6f6c(param_1,param_3);
      FUN_ram_4ff3ec14(param_1[2],0xffffffff);
      iVar19 = param_1[2];
      *(int *)(param_1[1] + 0x848) = param_3;
      FUN_ram_4ff3ee10(iVar19);
      if (uStack_d4 == (CONCAT11(bVar4,cVar2 < '\0') & 0x1ff)) goto LAB_ram_480ca21c;
    }
    else {
      FUN_ram_480c6f6c(param_1,param_3);
      FUN_ram_4ff3ec14(param_1[2],0xffffffff);
      iVar19 = param_1[2];
      *(int *)(param_1[1] + 0x848) = param_3;
      FUN_ram_4ff3ee10(iVar19);
    }
    FUN_ram_480c90ae(param_1,auStack_c4,param_3);
    FUN_ram_4809ec88(param_1,auStack_c4);
  }
  else {
    FUN_ram_480c6f6c(param_1,param_3);
    FUN_ram_4ff3ec14(param_1[2],0xffffffff);
    iVar19 = param_1[2];
    *(int *)(param_1[1] + 0x848) = param_3;
    FUN_ram_4ff3ee10(iVar19);
  }
LAB_ram_480ca21c:
  fence();
  uVar11 = *puVar20;
  while( true ) {
    uVar9 = uVar11 - 1;
    if ((int)uVar11 < 0) {
      return;
    }
    if ((uVar11 & 0xffff) == 0) break;
    bVar1 = *puVar20 == uVar11;
    uVar11 = *puVar20;
    if (bVar1) {
      *puVar20 = uVar9;
      return;
    }
  }
  return;
}


