/* Firmware entry: 0x4804a1e6 */

undefined1 * FUN_ram_4804a1e6(undefined1 *param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  char cVar12;
  undefined2 uVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_1 + 0x22,0,0x3e);
  cVar1 = *(char *)(param_2 + 0x85);
  uVar14 = 5;
  if ((cVar1 != '\0') && ((uint)(param_3 - *(int *)(param_2 + 0x8c)) < 0x12d)) {
    uVar14 = *(undefined1 *)(param_2 + 0x89);
  }
  cVar2 = *(char *)(param_2 + 0xa1);
  cVar3 = *(char *)(param_2 + 0xa2);
  bVar4 = *(byte *)(param_2 + 0xa5);
  bVar5 = *(byte *)(param_2 + 0xac);
  bVar6 = *(byte *)(param_2 + 0xa0);
  bVar7 = *(byte *)(param_2 + 0x68);
  bVar8 = *(byte *)(param_2 + 0x78);
  uVar9 = *(undefined1 *)(param_2 + 0xa3);
  uVar10 = *(undefined1 *)(param_2 + 0xa4);
  uVar11 = *(undefined1 *)(param_2 + 0x9b);
  *param_1 = uVar14;
  param_1[10] = cVar2 == '\x05' | bVar5;
  param_1[3] = cVar3;
  cVar12 = *(char *)(param_2 + 0x2c);
  param_1[6] = cVar3 == '\x03' & bVar4;
  param_1[7] = bVar7 | bVar8;
  param_1[2] = cVar2;
  param_1[9] = cVar2 == '\x04';
  param_1[1] = bVar6;
  param_1[8] = bVar6 - 2 < 3;
  param_1[4] = uVar9;
  param_1[5] = uVar10;
  param_1[0xb] = uVar11;
  iVar19 = -1;
  if (cVar12 != '\0') {
    iVar19 = param_3 - *(int *)(param_2 + 0x30);
  }
  *(int *)(param_1 + 0xc) = iVar19;
  iVar19 = -1;
  if (cVar1 != '\0') {
    iVar19 = param_3 - *(int *)(param_2 + 0x8c);
  }
  cVar1 = *(char *)(param_2 + 0x97);
  *(int *)(param_1 + 0x10) = iVar19;
  iVar19 = -1;
  if (cVar1 != '\0') {
    iVar19 = param_3 - *(int *)(param_2 + 0x9c);
  }
  *(int *)(param_1 + 0x14) = iVar19;
  if (bVar8 == 0) {
    iVar19 = 0;
    if (bVar7 != 0) {
      iVar19 = param_3 - *(int *)(param_2 + 0x6c);
    }
  }
  else {
    iVar19 = param_3 - *(int *)(param_2 + 0x7c);
  }
  cVar1 = *(char *)(param_2 + 0x7a);
  *(int *)(param_1 + 0x18) = iVar19;
  if (cVar1 == '\0') {
    uVar20 = 0;
    if (cVar2 == '\x02') {
      uVar20 = *(int *)(param_2 + 0x74) - param_3 & param_3 - *(int *)(param_2 + 0x74) >> 0x1f;
    }
  }
  else {
    uVar20 = 0;
    if ((uint)(param_3 - *(int *)(param_2 + 0x7c)) < 0xbb9) {
      uVar20 = (3000 - param_3) + *(int *)(param_2 + 0x7c);
    }
  }
  uVar13 = *(undefined2 *)(param_2 + 0xec);
  *(uint *)(param_1 + 0x1c) = uVar20;
  iVar19 = 0;
  *(undefined2 *)(param_1 + 0x20) = uVar13;
  if ((bVar5 != 0) && (iVar19 = 0, *(int *)(param_2 + 200) != 0)) {
    iVar19 = param_3 - *(int *)(param_2 + 200);
  }
  cVar1 = *(char *)(param_2 + 0x50);
  *(int *)(param_1 + 0x24) = iVar19;
  iVar19 = -1;
  if (cVar1 != '\0') {
    iVar19 = param_3 - *(int *)(param_2 + 0x54);
  }
  uVar15 = *(undefined4 *)(param_2 + 0x58);
  uVar16 = *(undefined4 *)(param_2 + 0x5c);
  cVar1 = *(char *)(param_2 + 0xdc);
  *(int *)(param_1 + 0x28) = iVar19;
  *(undefined4 *)(param_1 + 0x2c) = uVar15;
  *(undefined4 *)(param_1 + 0x30) = uVar16;
  param_1[0x34] = cVar1;
  if ((cVar1 != '\0') &&
     (((iVar19 = *(int *)(param_2 + 0xe8), iVar19 != 0 && (param_3 - iVar19 < 0)) ||
      ((*(char *)(param_2 + 0xe5) == '\0' &&
       (iVar19 = *(int *)(param_2 + 0xe0), param_3 - iVar19 < 0)))))) {
    *(int *)(param_1 + 0x38) = iVar19 - param_3;
  }
  uVar22 = *(undefined4 *)(param_2 + 0xb0);
  uVar21 = *(undefined4 *)(param_2 + 300);
  uVar15 = *(undefined4 *)(param_2 + 0x158);
  uVar16 = *(undefined4 *)(param_2 + 0x15c);
  uVar17 = *(undefined4 *)(param_2 + 0x160);
  uVar18 = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x168);
  *(undefined4 *)(param_1 + 0x3c) = uVar22;
  *(undefined4 *)(param_1 + 0x40) = uVar21;
  *(undefined4 *)(param_1 + 0x44) = uVar15;
  *(undefined4 *)(param_1 + 0x48) = uVar16;
  *(undefined4 *)(param_1 + 0x4c) = uVar17;
  *(undefined4 *)(param_1 + 0x50) = uVar18;
  uVar14 = 0;
  if (cVar12 != '\0') {
    uVar14 = *(undefined1 *)(param_2 + 0x27);
  }
  uVar9 = *(undefined1 *)(param_2 + 0x94);
  uVar10 = *(undefined1 *)(param_2 + 0x95);
  uVar11 = *(undefined1 *)(param_2 + 0xb8);
  uVar15 = *(undefined4 *)(param_2 + 0xf8);
  uVar16 = *(undefined4 *)(param_2 + 0xfc);
  uVar17 = *(undefined4 *)(param_2 + 0xf4);
  param_1[0x5b] = *(undefined1 *)(param_2 + 0x96);
  param_1[0x58] = uVar14;
  param_1[0x59] = uVar9;
  param_1[0x5a] = uVar10;
  param_1[0x5c] = uVar11;
  *(undefined4 *)(param_1 + 100) = uVar15;
  *(undefined4 *)(param_1 + 0x68) = uVar16;
  *(undefined4 *)(param_1 + 0x60) = uVar17;
  return param_1;
}


