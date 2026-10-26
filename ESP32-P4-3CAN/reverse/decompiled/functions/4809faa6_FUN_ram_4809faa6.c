/* Firmware entry: 0x4809faa6 */

void FUN_ram_4809faa6(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  char cVar11;
  char *pcVar12;
  uint uVar13;
  undefined1 uVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 *puVar17;
  int *piVar18;
  bool bVar19;
  int *piVar20;
  uint uVar21;
  undefined1 uStack_135;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 auStack_128 [4];
  undefined1 uStack_124;
  undefined1 uStack_10e;
  undefined4 uStack_f8;
  char local_d4 [4];
  undefined4 uStack_d0;
  char cStack_ca;
  char acStack_c8 [4];
  undefined4 local_c4 [39];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *(int *)(param_1 + 0x58);
  FUN_ram_4ff3ec14(iVar2 + 0xb18,0xffffffff);
  puVar15 = (undefined4 *)(iVar2 + 0xb38);
  pcVar12 = local_d4;
  do {
    uVar5 = puVar15[1];
    uVar6 = puVar15[2];
    uVar9 = puVar15[3];
    *(undefined4 *)pcVar12 = *puVar15;
    *(undefined4 *)(pcVar12 + 4) = uVar5;
    *(undefined4 *)(pcVar12 + 8) = uVar6;
    *(undefined4 *)(pcVar12 + 0xc) = uVar9;
    puVar15 = puVar15 + 4;
    pcVar12 = pcVar12 + 0x10;
  } while (puVar15 != (undefined4 *)(iVar2 + 0xbd8));
  *(undefined4 *)pcVar12 = *puVar15;
  FUN_ram_4ff3ee10(iVar2 + 0xb18);
  iVar2 = *(int *)(param_1 + 0x58);
  bVar19 = false;
  if ((*(char *)(iVar2 + 1) != '\0') && (bVar19 = false, local_d4[0] != '\0')) {
    uVar21 = param_2 - *(int *)(iVar2 + 0x78);
    if (*(char *)(iVar2 + 0x76) == '\x01') {
      bVar19 = uVar21 < 6000;
    }
    else {
      bVar19 = *(char *)(iVar2 + 0x76) != '\0' && uVar21 < 3000;
    }
  }
  uStack_135 = 0;
  if ((cStack_ca == '\0') || (acStack_c8[0] == '\0')) {
LAB_ram_4809fb3c:
    piVar20 = *(int **)(param_1 + 0x5c);
    piVar18 = piVar20 + 0x297;
    FUN_ram_4ff3ec14(piVar18,0xffffffff);
    piVar20 = (int *)*piVar20;
    iVar2 = iVar2 + 0x80;
    FUN_ram_4ff3ee10(piVar18);
    uVar21 = 0;
    if (piVar20 != (int *)0x0) {
LAB_ram_4809fb6c:
      uVar5 = (**(code **)(*piVar20 + 0x154))(piVar20,2);
      goto LAB_ram_4809fb7a;
    }
    iVar16 = *(int *)(param_1 + 0x58);
    uVar5 = 0;
    bVar7 = 0;
    uVar13 = uVar21;
  }
  else {
    fence();
    if (*(char *)(iVar2 + 0x9789) != '\0') {
      iVar2 = *(int *)(param_1 + 0x58);
      goto LAB_ram_4809fb3c;
    }
    uVar21 = FUN_ram_48045922(*(undefined4 *)(param_1 + 0x5c),2,&uStack_135);
    piVar20 = *(int **)(param_1 + 0x5c);
    piVar18 = piVar20 + 0x297;
    iVar2 = *(int *)(param_1 + 0x58);
    FUN_ram_4ff3ec14(piVar18,0xffffffff);
    piVar20 = (int *)*piVar20;
    FUN_ram_4ff3ee10(piVar18);
    iVar2 = iVar2 + 0x80;
    uVar5 = 0;
    if (piVar20 != (int *)0x0) goto LAB_ram_4809fb6c;
LAB_ram_4809fb7a:
    iVar16 = *(int *)(param_1 + 0x58);
    bVar7 = 0;
    uVar13 = uVar21;
    if ((uVar21 != 0) && (uVar13 = (uint)*(byte *)(iVar16 + 0x21f), uVar13 == 0)) {
      bVar7 = *(byte *)(iVar16 + 0x222) ^ 1;
      uVar13 = uVar21;
    }
  }
  FUN_ram_4804304e(iVar2,param_2,uVar5,bVar7,bVar19,*(undefined1 *)(iVar16 + 0x5a1));
  iVar2 = *(int *)(param_1 + 0x58);
  if (*(int *)(iVar2 + 0x224) != *(int *)(iVar2 + 0x59c)) {
    FUN_ram_4ff3ec14(iVar2 + 0xb20,0xffffffff);
    puVar17 = (undefined4 *)(iVar2 + 0x224);
    puVar15 = (undefined4 *)(iVar2 + 0x458);
    do {
      uVar5 = puVar17[1];
      uVar6 = puVar17[2];
      uVar9 = puVar17[3];
      *puVar15 = *puVar17;
      puVar15[1] = uVar5;
      puVar15[2] = uVar6;
      puVar15[3] = uVar9;
      puVar17 = puVar17 + 4;
      puVar15 = puVar15 + 4;
    } while (puVar17 != (undefined4 *)(iVar2 + 0x364));
    *puVar15 = *puVar17;
    FUN_ram_4ff3ee10(iVar2 + 0xb20);
    *(undefined4 *)(iVar2 + 0x59c) = *(undefined4 *)(iVar2 + 0x224);
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x58);
  *(undefined1 *)(iVar2 + 0x220) = uStack_135;
  memset(auStack_128,0,0x54);
  puVar17 = *(undefined4 **)(param_1 + 0x5c);
  puVar15 = puVar17 + 0x297;
  FUN_ram_4ff3ec14(puVar15,0xffffffff);
  piVar18 = (int *)*puVar17;
  FUN_ram_4ff3ee10(puVar15);
  uVar5 = 0;
  if (piVar18 != (int *)0x0) {
    uVar5 = (**(code **)(*piVar18 + 0x154))(piVar18,2);
  }
  iVar16 = *(int *)(param_1 + 0x58);
  uVar21 = param_2 - *(int *)(iVar16 + 0x78);
  if (*(char *)(iVar16 + 0x76) == '\x01') {
    if (uVar21 < 6000) {
      if (uVar21 < 500) {
        uVar10 = 100;
LAB_ram_480a0010:
        uVar8 = 1;
      }
      else if (uVar21 < 0x5dc) {
        uVar8 = 100;
        uVar10 = 100;
      }
      else if (uVar21 < 3000) {
        uVar8 = 100;
        uVar10 = 0;
      }
      else {
        if (0x1193 < uVar21) {
          uVar10 = 0x23;
          goto LAB_ram_480a0010;
        }
        uVar8 = 100;
        uVar10 = 0x23;
      }
      uVar14 = 0xe6;
      uVar4 = 0x9f;
      uVar3 = 0x5a;
      goto LAB_ram_4809fc8a;
    }
  }
  else if (uVar21 < 3000) {
    if (*(char *)(iVar16 + 0x76) == '\0') {
      uVar14 = 0;
      uVar4 = 0;
      uVar3 = 0;
      uVar8 = 0;
      uVar10 = 0;
    }
    else {
      uVar8 = 100;
      if ((499 < uVar21) &&
         ((uVar21 < 0x2ee || ((uVar8 = 0, 999 < uVar21 && (uVar8 = 100, 0x5db < uVar21)))))) {
        uVar8 = 100;
      }
      uVar14 = 0;
      uVar4 = 0x6a;
      uVar3 = 0xff;
      uVar10 = 100;
    }
    goto LAB_ram_4809fc8a;
  }
  uVar14 = 0;
  uVar4 = 0;
  uVar3 = 0;
  uVar8 = 0;
  uVar10 = 0;
LAB_ram_4809fc8a:
  uVar1 = *(undefined1 *)(iVar16 + 0x5a1);
  uStack_12c = CONCAT31(uStack_12c._1_3_,uVar14);
  uStack_130 = CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar8,uVar10)));
  uVar6 = FUN_ram_48025b94();
  uStack_124 = 8;
  uStack_10e = 1;
  iVar16 = FUN_ram_48044258(iVar2 + 0x80,param_2,uVar5,uVar13,uStack_130,uStack_12c,bVar19,uVar1,
                            auStack_128,uVar6);
  uVar8 = uStack_10e;
  uVar10 = uStack_124;
  iVar2 = *(int *)(param_1 + 0x58);
  cVar11 = *(char *)(iVar2 + 0x21f);
  if (cVar11 == '\0') {
    cVar11 = *(char *)(iVar2 + 0x222);
  }
  if ((*(char *)(iVar2 + 0x5a0) != '\0') != (bool)cVar11) {
    fence();
    *(char *)(iVar2 + 0x5a0) = cVar11;
    iVar2 = *(int *)(param_1 + 0x58);
  }
  if (*(int *)(iVar2 + 0x224) != *(int *)(iVar2 + 0x59c)) {
    FUN_ram_4ff3ec14(iVar2 + 0xb20,0xffffffff);
    puVar17 = (undefined4 *)(iVar2 + 0x224);
    puVar15 = (undefined4 *)(iVar2 + 0x458);
    do {
      uVar5 = puVar17[1];
      uVar6 = puVar17[2];
      uVar9 = puVar17[3];
      *puVar15 = *puVar17;
      puVar15[1] = uVar5;
      puVar15[2] = uVar6;
      puVar15[3] = uVar9;
      puVar17 = puVar17 + 4;
      puVar15 = puVar15 + 4;
    } while (puVar17 != (undefined4 *)(iVar2 + 0x364));
    *puVar15 = *puVar17;
    FUN_ram_4ff3ee10(iVar2 + 0xb20);
    *(undefined4 *)(iVar2 + 0x59c) = *(undefined4 *)(iVar2 + 0x224);
  }
  if (iVar16 != 0) {
    iVar2 = *(int *)(param_1 + 0x58);
    uStack_134 = 0;
    if (*(char *)(iVar2 + 0x3fc) == '\0') {
      uStack_124 = uVar10;
      uStack_10e = uVar8;
      FUN_ram_4ff45158(iVar2 + 0x3a8,auStack_128,0x52);
      *(undefined1 *)(iVar2 + 0x3a5) = 1;
      if (*(byte *)(iVar2 + 0x21c) < 0xc) {
        *(byte *)(iVar2 + 0x21c) = *(byte *)(iVar2 + 0x21c) + 1;
      }
      FUN_ram_480439fa(iVar2 + 0x80);
      iVar2 = *(int *)(param_1 + 0x58);
    }
    uStack_124 = uVar10;
    uStack_10e = uVar8;
    iVar2 = FUN_ram_4805cb5e(iVar2,auStack_128,0,0xf,3,0,uStack_f8,0x10,&uStack_134,0,0,1,0,0);
    if (iVar2 == 0) {
      if (*(char *)(*(int *)(param_1 + 0x58) + 0x3a5) != '\0') {
        *(undefined1 *)(*(int *)(param_1 + 0x58) + 0x3a5) = 0;
      }
    }
    else {
      FUN_ram_4ff45158(param_1,auStack_128,0x52);
      *(undefined4 *)(param_1 + 0x54) = uStack_134;
    }
  }
  return;
}


