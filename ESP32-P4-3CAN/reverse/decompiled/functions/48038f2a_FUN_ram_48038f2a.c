/* Firmware entry: 0x48038f2a */

undefined4 FUN_ram_48038f2a(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 local_700 [121];
  undefined1 uStack_51b;
  undefined1 uStack_51a;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined1 auStack_4ec [520];
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined1 uStack_2dc;
  undefined1 uStack_b2;
  undefined1 uStack_a2;
  undefined1 uStack_92;
  undefined1 uStack_82;
  undefined1 uStack_72;
  undefined1 uStack_62;
  undefined1 uStack_52;
  undefined1 uStack_42;
  undefined1 uStack_32;
  undefined4 auStack_30 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar12 = local_700;
  puVar8 = local_700;
  if (*(byte *)(param_1 + 0x2c) == param_2) {
    iVar16 = 0x88c;
    iVar17 = 0x18;
    iVar2 = 0;
  }
  else if (*(byte *)(param_1 + 0x35a4) == param_2) {
    iVar17 = 0x3590;
    iVar16 = 0x3e04;
    iVar2 = 1;
  }
  else {
    if (*(byte *)(param_1 + 0x6b1c) != param_2) {
      return 0;
    }
    iVar17 = 0x6b08;
    iVar16 = 0x737c;
    iVar2 = 2;
  }
  FUN_ram_4ff3ec14(iVar16 + param_1,0xffffffff);
  memset(local_700,0,0x6d0);
  iVar17 = iVar17 + param_1;
  do {
    *(undefined4 *)((int)puVar12 + 0x468) = 0xffffffff;
    *(undefined4 *)((int)puVar12 + 0x46c) = 0xffffffff;
    *(undefined1 *)((int)puVar12 + 0x470) = 0xff;
    puVar12 = (undefined4 *)((int)puVar12 + 0x4c);
  } while (puVar12 != (undefined4 *)auStack_4ec);
  local_700[0x74] = 0xffffffff;
  uStack_2e4 = 0xffffffff;
  uStack_2e0 = 0xffffffff;
  uStack_2dc = 0xff;
  iVar15 = param_1 + iVar2 * 0x3578;
  iVar11 = iVar2 * 0x3578 + 0x3090 + param_1;
  uStack_51b = *(undefined1 *)(iVar15 + 0x30a5);
  uStack_51a = *(undefined1 *)(iVar15 + 0x30a6);
  puVar12 = (undefined4 *)(iVar15 + 0x2ec0);
  uStack_518 = *(undefined4 *)(iVar11 + 0x18);
  uStack_514 = *(undefined4 *)(iVar11 + 0x1c);
  uStack_a2 = 1;
  uStack_92 = 1;
  uStack_82 = 1;
  uStack_72 = 1;
  uStack_62 = 1;
  uStack_52 = 1;
  uStack_42 = 1;
  uStack_b2 = 1;
  uStack_32 = 1;
  do {
    uVar3 = *puVar8;
    uVar5 = puVar8[1];
    uVar9 = puVar8[2];
    puVar12[3] = puVar8[3];
    *puVar12 = uVar3;
    puVar12[1] = uVar5;
    puVar12[2] = uVar9;
    puVar8 = puVar8 + 4;
    puVar12 = puVar12 + 4;
  } while (puVar8 != auStack_30);
  iVar15 = iVar2 * 0x3578;
  iVar11 = param_1 + iVar15;
  *(undefined1 *)(iVar11 + 0x2bed) = 0;
  *(undefined2 *)(iVar11 + 0x2bee) = 0;
  *(undefined1 *)(iVar11 + 0x2bf0) = 0;
  *(undefined2 *)(iVar15 + param_1 + 0x2d74) = 0;
  *(undefined1 *)(iVar11 + 0x2d76) = 0;
  *(undefined2 *)(iVar15 + param_1 + 0x2df8) = 0;
  *(undefined1 *)(iVar11 + 0x2dfa) = 0;
  *(undefined2 *)(iVar15 + param_1 + 0x2e8c) = 0;
  *(undefined1 *)(iVar11 + 0x2e8e) = 0;
  *(int *)(iVar17 + 0x2e78) = *(int *)(iVar17 + 0x2e78) + 1;
  *(undefined4 *)(iVar17 + 0x8a0) = 0;
  *(bool *)(iVar11 + 0x2ec0) = *(int *)(iVar11 + 0x44) != 0;
  *(undefined1 *)(iVar11 + 0x2ec1) = *(undefined1 *)(iVar11 + 0x895);
  *(undefined1 *)(iVar11 + 0x2ec2) = *(undefined1 *)(iVar11 + 0x896);
  cVar4 = *(char *)(iVar11 + 0x899);
  if (cVar4 == '\0') {
    cVar4 = *(char *)(iVar11 + 0x898);
  }
  bVar7 = false;
  iVar11 = iVar2 * 0x3578 + param_1;
  *(char *)(iVar11 + 0x2ec3) = cVar4;
  *(undefined1 *)(iVar11 + 0x2ec4) = *(undefined1 *)(iVar11 + 0x40);
  *(undefined4 *)(iVar11 + 0x2ec8) = *(undefined4 *)(iVar11 + 0x3c);
  *(undefined1 *)(iVar11 + 0x2ec5) = *(undefined1 *)(iVar11 + 0x89b);
  if (*(char *)(iVar11 + 0x2c) == '\x02') {
    bVar7 = 0x7f < *(ushort *)(iVar11 + 0x30a0);
  }
  iVar11 = 0;
  iVar15 = iVar2 * 0x3578 + param_1;
  *(bool *)(iVar15 + 0x30a4) = bVar7;
  if (*(int *)(iVar15 + 0x48) != 0) {
    iVar11 = FUN_ram_4ff3b9c2();
  }
  iVar15 = 0;
  if (*(int *)(iVar2 * 0x3578 + param_1 + 0xa8) != 0) {
    iVar15 = FUN_ram_4ff3b9c2();
    iVar11 = iVar11 + iVar15;
  }
  uVar10 = 0;
  piVar13 = *(int **)(iVar2 * 0x3578 + param_1 + 0x108);
  if (piVar13 != (int *)0x0) {
    if (*piVar13 == 0) {
      if (piVar13[1] != 0) {
        uVar10 = (uint)*(byte *)(piVar13[1] + 0x13a);
      }
    }
    else {
      uVar10 = (uint)*(byte *)(*piVar13 + 0x952);
    }
  }
  iVar19 = 0;
  iVar14 = iVar2 * 0x3578 + param_1;
  iVar18 = *(byte *)(iVar14 + 0x888) + uVar10;
  if (*(int *)(iVar14 + 0x110) != 0) {
    iVar19 = FUN_ram_4ff3b9c2();
  }
  uVar10 = 0;
  iVar14 = *(int *)(iVar2 * 0x3578 + param_1 + 0x10c);
  if (iVar14 != 0) {
    uVar10 = (uint)*(byte *)(iVar14 + 0x602);
  }
  iVar14 = 0;
  if (*(int *)(iVar2 * 0x3578 + param_1 + 0x170) != 0) {
    iVar14 = FUN_ram_4ff3b9c2();
  }
  bVar1 = *(byte *)(iVar17 + 0x488);
  cVar4 = *(char *)(param_1 + 0x18d88);
  fence();
  iVar6 = iVar14 + (uint)bVar1;
  iVar17 = iVar2 * 0x3578 + param_1;
  *(int *)(iVar17 + 0x2f14) = iVar15;
  *(int *)(iVar17 + 0x2f18) = iVar15;
  *(int *)(iVar17 + 0x2fe0) = iVar18;
  *(int *)(iVar17 + 0x2fe4) = iVar18;
  iVar17 = iVar19 + uVar10;
  if (cVar4 == '\0') {
    iVar6 = iVar6 + uVar10;
    iVar17 = iVar19;
  }
  iVar11 = iVar11 + iVar18 + iVar19 + uVar10 + iVar14 + (uint)bVar1;
  iVar2 = param_1 + iVar2 * 0x3578;
  *(int *)(iVar2 + 0x307c) = iVar11;
  *(int *)(iVar2 + 0x2ff0) = iVar17;
  *(int *)(iVar2 + 0x2fec) = iVar17;
  *(int *)(iVar2 + 0x301c) = iVar6;
  *(int *)(iVar2 + 0x3020) = iVar6;
  *(int *)(iVar2 + 0x3084) = iVar11;
  *(uint *)(iVar2 + 0x3080) = (uint)*(byte *)(iVar2 + 0x59a);
  *(uint *)(iVar2 + 0x3088) = (uint)*(byte *)(iVar2 + 0x59a);
  FUN_ram_4ff3ee10(iVar16 + param_1);
  return 1;
}


