/* Firmware entry: 0x4810ca34 */

undefined4 FUN_ram_4810ca34(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  short sVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  short *psVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  undefined4 local_168 [2];
  undefined1 uStack_15e;
  undefined4 auStack_15c [38];
  char local_c4 [4];
  undefined4 uStack_c0;
  char cStack_ba;
  undefined4 auStack_b8 [38];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  psVar13 = *(short **)(param_1 + 0x33ec);
  if ((psVar13 == (short *)0x0) || (cVar2 = (char)psVar13[8], cVar2 == '\0')) {
    *(undefined1 *)(param_1 + 0x33f1) = 0;
    cVar2 = '\0';
  }
  else {
    sVar9 = *psVar13;
    if (sVar9 == 0) {
      return 0;
    }
    if (*(code **)(psVar13 + 2) != (code *)0x0) {
      iVar15 = (**(code **)(psVar13 + 2))();
      if (*(uint *)(psVar13 + 6) <= (uint)(iVar15 - *(int *)(psVar13 + 4))) {
        return 0;
      }
      sVar9 = *psVar13;
    }
    *psVar13 = sVar9 + -1;
  }
  iVar15 = param_1 + 0x2864;
  FUN_ram_4ff3ec14(iVar15,0xffffffff);
  piVar14 = *(int **)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar15);
  uVar3 = 0;
  if (piVar14 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar14 + 0x154))(piVar14,1);
  }
  *(undefined4 *)(param_1 + 0x9c4) = uVar3;
  FUN_ram_4ff3ec14(iVar15,0xffffffff);
  piVar14 = *(int **)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar15);
  uVar3 = 0;
  if (piVar14 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar14 + 0x154))(piVar14,2);
  }
  *(undefined4 *)(param_1 + 0x9c8) = uVar3;
  FUN_ram_4ff3ec14(iVar15,0xffffffff);
  piVar14 = *(int **)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar15);
  uVar3 = 0;
  if (piVar14 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar14 + 0x154))(piVar14,4);
  }
  *(undefined4 *)(param_1 + 0x9cc) = uVar3;
  FUN_ram_4ff3ec14(param_1 + 0xb18,0xffffffff);
  puVar10 = (undefined4 *)(param_1 + 0xb38);
  puVar11 = local_168;
  do {
    uVar3 = puVar10[1];
    uVar5 = puVar10[2];
    uVar6 = puVar10[3];
    *puVar11 = *puVar10;
    puVar11[1] = uVar3;
    puVar11[2] = uVar5;
    puVar11[3] = uVar6;
    puVar10 = puVar10 + 4;
    puVar11 = puVar11 + 4;
  } while (puVar10 != (undefined4 *)(param_1 + 0xbd8));
  *puVar11 = *puVar10;
  FUN_ram_4ff3ee10(param_1 + 0xb18);
  iVar4 = FUN_ram_48025ba6();
  fence();
  if (*(char *)(param_1 + 0x9789) != '\0') {
    *(undefined1 *)(param_1 + 0x33f1) = 0;
    FUN_ram_4805abf4(param_1,local_168,iVar4);
    return 1;
  }
  FUN_ram_4ff3ec14(iVar15,0xffffffff);
  *(undefined1 *)(param_1 + 0x1e13) = uStack_15e;
  FUN_ram_4ff3ee10(iVar15);
  uVar7 = (uint)*(byte *)(param_1 + 0x33f1);
  if (uVar7 == 2) goto LAB_ram_4810cdb2;
  if (2 < uVar7) {
    if (uVar7 == 3) goto LAB_ram_4810cdd0;
    if (uVar7 == 4) goto LAB_ram_4810cd9e;
    goto LAB_ram_4810cc94;
  }
  if (uVar7 != 0) goto LAB_ram_4810ccca;
  iVar15 = *(int *)(param_1 + 0x79cc);
  FUN_ram_4ff3ec14(iVar15 + 0xb18,0xffffffff);
  puVar11 = (undefined4 *)(iVar15 + 0xb38);
  pcVar8 = local_c4;
  do {
    uVar3 = puVar11[1];
    uVar5 = puVar11[2];
    uVar6 = puVar11[3];
    *(undefined4 *)pcVar8 = *puVar11;
    *(undefined4 *)(pcVar8 + 4) = uVar3;
    *(undefined4 *)(pcVar8 + 8) = uVar5;
    *(undefined4 *)(pcVar8 + 0xc) = uVar6;
    puVar11 = puVar11 + 4;
    pcVar8 = pcVar8 + 0x10;
  } while (puVar11 != (undefined4 *)(iVar15 + 0xbd8));
  *(undefined4 *)pcVar8 = *puVar11;
  FUN_ram_4ff3ee10(iVar15 + 0xb18);
  iVar15 = *(int *)(param_1 + 0x79cc);
  if ((((*(char *)(iVar15 + 1) == '\0') || (local_c4[0] == '\0')) || (cStack_ba == '\0')) ||
     ((*(char *)(param_1 + 0x7a40) == '\0' || (0x2ee < (uint)(iVar4 - *(int *)(param_1 + 0x7a3c)))))
     ) {
    *(undefined1 *)(iVar15 + 0x74) = 0;
    *(undefined1 *)(iVar15 + 0x76) = 0;
  }
  if (*(char *)(param_1 + 0x7b55) != '\0') {
    if (500 < (uint)(iVar4 - *(int *)(param_1 + 0x7c68))) {
      *(undefined1 *)(param_1 + 0x7b4c) = 0;
      *(undefined4 *)(param_1 + 0x7b50) = 0;
      *(undefined2 *)(param_1 + 0x7b54) = 0;
      *(undefined4 *)(param_1 + 0x7b58) = 0;
      *(undefined4 *)(param_1 + 0x7b5c) = 0;
      *(undefined4 *)(param_1 + 0x7c24) = 0;
      *(undefined4 *)(param_1 + 0x7c28) = 0;
      *(undefined4 *)(param_1 + 0x7c2c) = 0;
      *(undefined4 *)(param_1 + 0x7c30) = 0;
      *(undefined2 *)(param_1 + 0x7c34) = 0;
      *(undefined4 *)(param_1 + 0x7c38) = 0;
      *(undefined4 *)(param_1 + 0x7c3c) = 0;
      *(undefined2 *)(param_1 + 0x7c40) = 0;
      *(undefined1 *)(param_1 + 0x7c42) = 0;
      *(undefined4 *)(param_1 + 0x7c44) = 0;
      *(undefined1 *)(param_1 + 0x7bb8) = 0;
      iVar15 = *(int *)(param_1 + 0x7bc0) + 1;
      if (iVar15 == 0) {
        iVar15 = 1;
      }
      *(int *)(param_1 + 0x7bc0) = iVar15;
      iVar15 = *(int *)(param_1 + 0x7bc4) + 1;
      if (iVar15 == 0) {
        iVar15 = 1;
      }
      *(int *)(param_1 + 0x7bc4) = iVar15;
      *(undefined2 *)(param_1 + 0x7c12) = 0;
      *(undefined4 *)(param_1 + 0x7c14) = 0;
      *(undefined4 *)(param_1 + 0x7c18) = 0;
      *(undefined4 *)(param_1 + 0x7c1c) = 0;
      *(undefined2 *)(param_1 + 0x7c20) = 0;
      FUN_ram_4809ebc2(param_1 + 0x79cc);
      if (*(char *)(param_1 + 0x7b55) == '\0') goto LAB_ram_4810cc7c;
      iVar15 = *(int *)(param_1 + 0x79cc);
    }
    FUN_ram_4ff3ec14(iVar15 + 0xb18,0xffffffff);
    cVar1 = *(char *)(iVar15 + 0xbd8);
    FUN_ram_4ff3ee10(iVar15 + 0xb18);
    if (((cVar1 == '\0') && (*(char *)(param_1 + 0x7c12) != '\0')) &&
       (*(char *)(param_1 + 0x7c17) == '\0')) {
      uVar7 = *(uint *)(param_1 + 0x7bdc);
      if ((uint)*(ushort *)(param_1 + 0x7c08) * 100 <= uVar7) {
        uVar12 = (uint)*(byte *)(param_1 + 0x7c0f);
        if (((int)((ulonglong)uVar7 * (ulonglong)uVar12 >> 0x20) == 0) &&
           (uVar7 * uVar12 <=
            (uVar12 * 100 + (uint)*(byte *)(param_1 + 0x7c10)) * (uint)*(ushort *)(param_1 + 0x7c08)
           )) {
          if ((*(int *)(param_1 + 0x7c6c) == 0) || (*(int *)(param_1 + 0x7c6c) - iVar4 < 0x1f5)) {
            if (iVar4 + 0x5dc == 0) {
              *(undefined4 *)(param_1 + 0x7c6c) = 1;
            }
            else {
              *(int *)(param_1 + 0x7c6c) = iVar4 + 0x5dc;
            }
          }
          goto LAB_ram_4810cc7c;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x7c6c) = 0;
  }
LAB_ram_4810cc7c:
  FUN_ram_4809ec88(param_1 + 0x79cc,local_c4);
  uVar7 = (uint)*(byte *)(param_1 + 0x33f1);
LAB_ram_4810cc94:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar7 = uVar7 + 1;
          uVar7 = uVar7 - (uVar7 / 5 + ((uint)((ulonglong)uVar7 * 0xcccccccd >> 0x20) & 0xfffffffc))
          ;
          uVar12 = uVar7 & 0xff;
          *(char *)(param_1 + 0x33f1) = (char)uVar7;
          if (uVar7 == 0) {
            return 1;
          }
          if (cVar2 != '\0') {
            return 0;
          }
          if (uVar12 != 2) break;
LAB_ram_4810cdb2:
          FUN_ram_4810bb96(param_1 + 0x84a8,iVar4);
          uVar7 = (uint)*(byte *)(param_1 + 0x33f1);
        }
        if (2 < uVar12) break;
LAB_ram_4810ccca:
        iVar15 = *(int *)(param_1 + 0x7cd0) + 0xb18;
        FUN_ram_4ff3ec14(iVar15,0xffffffff);
        FUN_ram_4ff3ee10(iVar15);
        iVar15 = param_1 + 0x7cd0;
        FUN_ram_481062c4(iVar15,iVar4);
        FUN_ram_480cc0a2(iVar15,iVar4);
        FUN_ram_480d7710(iVar15,iVar4);
        FUN_ram_480c3830(iVar15);
        uVar7 = (uint)*(byte *)(param_1 + 0x33f1);
      }
      if (uVar12 == 3) break;
LAB_ram_4810cd9e:
      FUN_ram_4805abf4(param_1,local_168,iVar4);
LAB_ram_4810cda8:
      uVar7 = (uint)*(byte *)(param_1 + 0x33f1);
    }
LAB_ram_4810cdd0:
    FUN_ram_4ff3ec14(param_1 + 0xb30,0xffffffff);
    iVar16 = *(int *)(param_1 + 0x9780);
    iVar15 = *(int *)(param_1 + 0x977c);
    FUN_ram_4ff3ee10(param_1 + 0xb30);
    if (iVar16 == iVar15) goto LAB_ram_4810cda8;
    FUN_ram_480599fe(param_1,0);
    uVar7 = (uint)*(byte *)(param_1 + 0x33f1);
  } while( true );
}


