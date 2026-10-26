/* Firmware entry: 0x4809e702 */

void FUN_ram_4809e702(int *param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  ushort uVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  uint uStack_5c;
  undefined2 uStack_54;
  char cStack_50;
  undefined1 uStack_4f;
  ushort uStack_4e;
  uint uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar12 = *(byte *)(param_2 + 0xa0) ^ 1;
  cVar13 = '\0';
  if (((*(char *)(param_2 + 0xe) != '\0') && (*(char *)(param_2 + 10) != '\0')) &&
     (*(char *)(param_2 + 0xb) != '\0')) {
    cVar13 = *(char *)(param_2 + 0xc);
  }
  uVar5 = *(ushort *)(param_1 + 0x13);
  iVar10 = *param_1;
  if (uVar5 < 0x32) {
    if (*(char *)(param_2 + 1) == '\f') {
      uVar16 = (uint)(*(byte *)(param_2 + 0x11) >> 2);
      if (0x3c < uVar16) {
        uVar16 = 0x3c;
      }
    }
    else {
      if (*(char *)(param_2 + 1) != '\x0e') {
        if (((*(char *)(iVar10 + 0x7c4c) == '\0') || (*(char *)(iVar10 + 0x7c4d) == '\0')) ||
           (*(char *)(iVar10 + 0x7c4e) == '\0')) {
          uVar16 = (uint)*(byte *)(param_2 + 0x9c);
        }
        else {
          if ((uint)(param_3 - *(int *)(iVar10 + 0x7c54)) < 0x5dd) goto LAB_ram_4809e978;
          uVar16 = (uint)*(byte *)(param_2 + 0x9c);
        }
        goto LAB_ram_4809e780;
      }
      uVar16 = (uint)*(byte *)(param_2 + 0x24);
      if (0xf0 < *(byte *)(param_2 + 0x24)) {
        uVar16 = 0xf0;
      }
      uVar16 = uVar16 >> 2;
    }
  }
  else {
    uVar8 = 10;
    uVar16 = 10;
    if (((*(char *)(iVar10 + 0x7c4c) != '\0') &&
        (uVar16 = uVar8, *(char *)(iVar10 + 0x7c4d) != '\0')) &&
       ((*(char *)(iVar10 + 0x7c4e) != '\0' && ((uint)(param_3 - *(int *)(iVar10 + 0x7c54)) < 0x5dd)
        ))) {
LAB_ram_4809e978:
      cVar1 = *(char *)(iVar10 + 0x7c51);
      if (*(char *)(iVar10 + 0x7c50) == '\0') {
        uVar16 = (uint)*(byte *)(param_2 + 0x9d);
        if (0x3c < uVar16) {
          uVar16 = 0x3c;
        }
      }
      else if (*(char *)(iVar10 + 0x7c4f) == '\0') {
        uVar16 = 10;
      }
      else {
        uVar16 = 0x3c;
        if (cVar1 < '=') {
          uVar16 = (int)cVar1 & ~(int)cVar1 >> 0x1f;
        }
        uVar16 = uVar16 & 0xff;
      }
      if (uVar5 < 0x32) {
        uVar16 = (uint)*(byte *)(param_2 + 0x9c);
      }
    }
LAB_ram_4809e780:
    if (0x3c < uVar16) {
      uVar16 = 0x3c;
    }
  }
  uVar7 = *(ushort *)(param_2 + 0xa2);
  if (*(char *)(iVar10 + 0x7c42) == '\0') {
    iVar9 = *(int *)(iVar10 + 0x79cc);
    iVar15 = iVar9 + 0xb18;
    FUN_ram_4ff3ec14(iVar15,0xffffffff);
    cVar1 = *(char *)(iVar9 + 0xb39);
    FUN_ram_4ff3ee10(iVar15);
    cVar2 = *(char *)(*(int *)(iVar10 + 0x79cc) + 0x36);
    if ((cVar1 == '\f') || (cVar1 == '\x0e')) {
      if ((cVar2 == '\0') && (*(char *)(*(int *)(iVar10 + 0x79cc) + 0x37) != '\0'))
      goto LAB_ram_4809eab0;
LAB_ram_4809ea94:
      bVar14 = 4;
    }
    else {
      if (cVar2 != '\0') goto LAB_ram_4809ea94;
LAB_ram_4809eab0:
      bVar14 = 3;
      if ((((0x31 < uVar5) && (bVar14 = 0, *(char *)(iVar10 + 0x7c4c) != '\0')) &&
          (*(char *)(iVar10 + 0x7c4d) != '\0')) &&
         (((*(char *)(iVar10 + 0x7c4e) != '\0' &&
           ((uint)(param_3 - *(int *)(iVar10 + 0x7c54)) < 0x5dd)) &&
          (bVar14 = 2, *(char *)(iVar10 + 0x7c50) != '\0')))) {
        bVar14 = *(byte *)(iVar10 + 0x7c4f);
      }
    }
    bVar11 = *(byte *)(param_2 + 0x10);
    iVar10 = *param_1;
    if (bVar12 != 0) {
      if (*(char *)(iVar10 + 0x7c42) != '\0') goto LAB_ram_4809e9ee;
      iStack_48 = FUN_ram_4809df80(iVar10 + 0x79cc,*(undefined2 *)(iVar10 + 0x7c26),param_2,param_3)
      ;
      goto LAB_ram_4809e9f6;
    }
    uVar5 = *(ushort *)(param_1 + 0x13);
LAB_ram_4809e7aa:
    iStack_48 = FUN_ram_4809df80(iVar10 + 0x79cc,uVar5,param_2,param_3);
    bVar6 = 1;
    uVar4 = 0;
  }
  else {
    bVar14 = *(byte *)(iVar10 + 0x7c48);
    bVar11 = *(byte *)(param_2 + 0x10);
    if (bVar12 == 0) goto LAB_ram_4809e7aa;
LAB_ram_4809e9ee:
    iStack_48 = *(int *)(iVar10 + 0x7c44);
LAB_ram_4809e9f6:
    if (*(char *)(iVar10 + 0x7c12) == '\0') {
      bVar6 = 0;
      uVar4 = 1;
    }
    else {
      uVar4 = 1;
      bVar6 = (*(byte *)(iVar10 + 0x7c17) ^ 1) & *(byte *)(iVar10 + 0x7c16);
    }
  }
  uStack_5c = (uint)bVar14;
  uStack_54 = CONCAT11(bVar6,uVar4);
  uStack_4c = uStack_5c;
  if (uVar7 < 100) {
    uVar7 = 100;
  }
  if (10000 < uVar7) {
    uVar7 = 10000;
  }
  if (bVar11 == 0) {
    bVar11 = 1;
  }
  if (10 < bVar11) {
    bVar11 = 10;
  }
  if (((param_1[3] == iStack_48) && ((iStack_48 != 0 || (*(byte *)((int)param_1 + 5) == uVar16))))
     && (cVar13 == (char)param_1[1])) {
    if ((*(ushort *)((int)param_1 + 6) == uVar7) && (*(byte *)((int)param_1 + 0x12) == bVar11)) {
      if ((*(byte *)(param_1 + 2) == bVar14) && (*(byte *)(param_1 + 4) == bVar12))
      goto LAB_ram_4809e8ba;
      goto LAB_ram_4809e824;
    }
    if ((*(byte *)(param_1 + 2) != bVar14) || (*(byte *)(param_1 + 4) != bVar12))
    goto LAB_ram_4809e824;
    uVar4 = (undefined1)param_1[0x1e];
    bVar3 = false;
  }
  else {
LAB_ram_4809e824:
    if (((char)param_1[0x1a] != '\0') && (*(char *)((int)param_1 + 0x6a) == '\0')) {
      *(undefined1 *)((int)param_1 + 0x69) = 0;
    }
    bVar3 = true;
    uVar4 = 0;
  }
  if (param_1[10] + 1 == 0) {
    cVar1 = *(char *)((int)param_1 + 0x79);
    param_1[10] = 1;
    *(undefined1 *)(param_1 + 0x1e) = 0;
    *(undefined2 *)(param_1 + 0x19) = 0;
    *(undefined2 *)((int)param_1 + 0x5e) = 0;
  }
  else {
    cVar1 = *(char *)((int)param_1 + 0x79);
    param_1[10] = param_1[10] + 1;
    *(undefined1 *)(param_1 + 0x1e) = 0;
    *(undefined2 *)(param_1 + 0x19) = 0;
    *(undefined2 *)((int)param_1 + 0x5e) = 0;
  }
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)((int)param_1 + 0x16) = 0;
    *(undefined1 *)((int)param_1 + 0x17) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)((int)param_1 + 0x19) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)((int)param_1 + 0x1d) = 0;
    *(undefined1 *)((int)param_1 + 0x1e) = 0;
    *(undefined1 *)((int)param_1 + 0x1f) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined1 *)((int)param_1 + 0x21) = 0;
    *(undefined1 *)((int)param_1 + 0x22) = 0;
    *(undefined1 *)((int)param_1 + 0x23) = 0;
    *(undefined2 *)(param_1 + 9) = 0;
  }
  if (bVar3) {
    *(undefined1 *)((int)param_1 + 0x7e) = 0;
    *(undefined1 *)((int)param_1 + 0x7d) = 0;
    *(undefined1 *)((int)param_1 + 0x81) = 0;
    *(undefined1 *)((int)param_1 + 0x82) = 0;
    *(undefined1 *)((int)param_1 + 0x75) = 0;
    *(undefined2 *)((int)param_1 + 0x76) = 0x100;
  }
  else {
    *(undefined1 *)(param_1 + 0x1e) = uVar4;
  }
  if (cVar13 != (char)param_1[1]) {
    *(undefined1 *)((int)param_1 + 0x6d) = 0;
    param_1[0x1a] = 0;
    param_1[0x12] = param_3;
    *(undefined1 *)((int)param_1 + 0x6e) = 1;
  }
LAB_ram_4809e8ba:
  uStack_44 = (uint)CONCAT12(bVar11,uStack_54);
  _cStack_50 = CONCAT22(uVar7,CONCAT11((char)uVar16,cVar13));
  FUN_ram_4ff45158(param_1 + 1,&cStack_50,0xf);
  if (((((*(char *)(iVar10 + 0x7ee5) != '\0') && (*(char *)(iVar10 + 0x7eea) == '\x01')) ||
       ((*(char *)(iVar10 + 0x7f54) != '\0' && (*(char *)(iVar10 + 0x7f5c) == '\x02')))) ||
      ((*(int *)(iVar10 + 0x7f1c) != 0 && (*(char *)(iVar10 + 0x7f29) == '\x02')))) ||
     ((uVar4 = 0, *(char *)(iVar10 + 0x7f55) != '\0' &&
      (uVar4 = 0, *(char *)(iVar10 + 0x7f57) == '\x02')))) {
    if ((((*(char *)((int)param_1 + 0x7f) == '\0') && (*(char *)((int)param_1 + 0x75) != '\0')) &&
        (*(char *)((int)param_1 + 0x71) != '\0')) && (*(char *)((int)param_1 + 0x81) == '\0')) {
      *(undefined1 *)((int)param_1 + 0x81) = 1;
      *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)((int)param_1 + 0x4e);
    }
    uVar4 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x7f) = uVar4;
  return;
}


