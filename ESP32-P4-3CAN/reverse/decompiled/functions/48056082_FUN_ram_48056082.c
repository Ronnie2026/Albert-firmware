/* Firmware entry: 0x48056082 */

char * FUN_ram_48056082(char *param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  int iVar17;
  byte bVar18;
  undefined4 uVar19;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_2 + 0xac,0xffffffff);
  cVar1 = *(char *)(param_2 + 0x89);
  cVar2 = *(char *)(param_2 + 0x38);
  param_1[0x27] = '\0';
  *param_1 = cVar1;
  if (((cVar2 == '\0') || (bVar16 = *(byte *)(param_2 + 0x39), bVar16 == 0)) ||
     (0xfa < (uint)(param_3 - *(int *)(param_2 + 0x34)))) {
    bVar16 = 0;
    bVar15 = false;
    if ((*(char *)(param_2 + 100) != '\0') &&
       (bVar16 = 0, bVar15 = false, *(char *)(param_2 + 0x65) != '\0')) {
      bVar16 = 0;
      bVar15 = (uint)(param_3 - *(int *)(param_2 + 0x60)) < 0x1f5;
    }
  }
  else {
    bVar15 = false;
    if ((*(char *)(param_2 + 100) != '\0') && (bVar15 = false, *(char *)(param_2 + 0x65) != '\0')) {
      bVar15 = (uint)(param_3 - *(int *)(param_2 + 0x60)) < 0x1f5;
    }
  }
  bVar18 = 0;
  if (((*(char *)(param_2 + 0x4c) != '\0') && (bVar18 = 0, *(char *)(param_2 + 0x4d) != '\0')) &&
     (bVar18 = 0, (uint)(param_3 - *(int *)(param_2 + 0x48)) < 0xfb)) {
    bVar14 = false;
    if ((*(char *)(param_2 + 0x6c) != '\0') && (bVar14 = false, *(char *)(param_2 + 0x6d) != '\0'))
    {
      bVar14 = (uint)(param_3 - *(int *)(param_2 + 0x68)) < 0x1f5;
    }
    bVar18 = 0;
    if (cVar1 == '\0') {
      bVar18 = bVar14 & bVar16 & bVar15;
    }
  }
  cVar1 = *(char *)(param_2 + 0x10);
  cVar2 = *(char *)(param_2 + 0x24);
  cVar3 = *(char *)(param_2 + 0x11);
  cVar4 = *(char *)(param_2 + 0x25);
  cVar5 = *(char *)(param_2 + 0x54);
  param_1[1] = bVar18;
  param_1[2] = cVar1;
  param_1[3] = cVar2;
  param_1[4] = cVar3;
  param_1[5] = cVar4;
  bVar15 = false;
  if ((cVar5 != '\0') && (bVar15 = false, *(char *)(param_2 + 0x55) != '\0')) {
    bVar15 = (uint)(param_3 - *(int *)(param_2 + 0x50)) < 0x1f5;
  }
  cVar3 = *(char *)(param_2 + 0x5c);
  param_1[6] = bVar15;
  bVar15 = false;
  if ((cVar3 != '\0') && (bVar15 = false, *(char *)(param_2 + 0x5d) != '\0')) {
    bVar15 = (uint)(param_3 - *(int *)(param_2 + 0x58)) < 0x1f5;
  }
  param_1[7] = bVar15;
  iVar17 = -1;
  if (cVar1 != '\0') {
    iVar17 = param_3 - *(int *)(param_2 + 0xc);
  }
  *(int *)(param_1 + 8) = iVar17;
  iVar17 = -1;
  if (cVar2 != '\0') {
    iVar17 = param_3 - *(int *)(param_2 + 0x20);
  }
  uVar12 = *(undefined2 *)(param_2 + 0x78);
  cVar1 = *(char *)(param_2 + 0x72);
  cVar2 = *(char *)(param_2 + 0x7a);
  uVar13 = *(undefined4 *)(param_2 + 0x80);
  uVar19 = *(undefined4 *)(param_2 + 0x7c);
  cVar3 = *(char *)(param_2 + 0x70);
  cVar4 = *(char *)(param_2 + 0x71);
  cVar5 = *(char *)(param_2 + 0x73);
  cVar6 = *(char *)(param_2 + 0x74);
  cVar7 = *(char *)(param_2 + 0x75);
  cVar8 = *(char *)(param_2 + 0x76);
  cVar9 = *(char *)(param_2 + 0x77);
  *(int *)(param_1 + 0xc) = iVar17;
  *(undefined2 *)(param_1 + 0x10) = uVar12;
  cVar10 = *(char *)(param_2 + 0x79);
  cVar11 = *(char *)(param_2 + 0x78);
  param_1[0x12] = cVar1;
  param_1[0x1e] = cVar1;
  param_1[0x13] = cVar2;
  param_1[0x26] = cVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar13;
  *(undefined4 *)(param_1 + 0x14) = uVar19;
  param_1[0x1c] = cVar3;
  param_1[0x1d] = cVar4;
  param_1[0x1f] = cVar5;
  param_1[0x20] = cVar6;
  param_1[0x21] = cVar7;
  param_1[0x22] = cVar8;
  param_1[0x23] = cVar9;
  param_1[0x24] = cVar11;
  param_1[0x25] = cVar10;
  if (bVar18 == 0) {
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    param_1[0x12] = '\0';
  }
  FUN_ram_4ff3ee10(param_2 + 0xac);
  return param_1;
}


