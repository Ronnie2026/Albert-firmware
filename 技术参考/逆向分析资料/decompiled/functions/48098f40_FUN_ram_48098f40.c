/* Firmware entry: 0x48098f40 */

undefined4 FUN_ram_48098f40(int param_1,uint param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined4 local_a0 [3];
  undefined1 uStack_92;
  undefined1 uStack_82;
  undefined1 uStack_72;
  undefined1 uStack_62;
  undefined1 uStack_52;
  undefined1 uStack_42;
  undefined1 uStack_32;
  undefined1 uStack_22;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar10 = local_a0;
  if (*(byte *)(param_1 + 0x2c) == param_2) {
    iVar16 = 0x88c;
    iVar17 = 0x18;
    iVar4 = 0;
  }
  else if (*(byte *)(param_1 + 0x35a4) == param_2) {
    iVar17 = 0x3590;
    iVar16 = 0x3e04;
    iVar4 = 1;
  }
  else {
    if (*(byte *)(param_1 + 0x6b1c) != param_2) {
      return 0;
    }
    iVar17 = 0x6b08;
    iVar16 = 0x737c;
    iVar4 = 2;
  }
  FUN_ram_4ff3ec14(iVar16 + param_1,0xffffffff);
  FUN_ram_480982aa(iVar17 + param_1);
  iVar12 = iVar4 * 0x3578 + param_1;
  puVar13 = (undefined4 *)(iVar12 + 0x2ec0);
  puVar9 = param_3;
  do {
    uVar6 = puVar13[1];
    uVar7 = puVar13[2];
    uVar8 = puVar13[3];
    *puVar9 = *puVar13;
    puVar9[1] = uVar6;
    puVar9[2] = uVar7;
    puVar9[3] = uVar8;
    puVar13 = puVar13 + 4;
    puVar9 = puVar9 + 4;
  } while (puVar13 != (undefined4 *)(iVar12 + 0x3590));
  iVar12 = iVar4 * 0x3578 + param_1;
  if ((((*(char *)(iVar12 + 0x895) != '\0') && (*(char *)(iVar12 + 0x896) == '\0')) &&
      (*(char *)(iVar12 + 0x89a) == '\0')) && (*(char *)(iVar12 + 0x89b) == '\0')) {
    fence();
    if ((*(char *)(param_1 + 0x18c6b) != '\0') && (iVar12 = FUN_ram_4ff2bcc4(), iVar12 == 0)) {
      uVar6 = FUN_ram_4ff21a0a();
      uVar5 = FUN_ram_4ff26908(iVar17 + param_1,uVar6);
      goto LAB_ram_48099000;
    }
  }
  uVar5 = 0;
LAB_ram_48099000:
  *(undefined1 *)(param_3 + 0x51) = uVar5;
  iVar4 = param_1 + iVar4 * 0x3578;
  uVar5 = *(undefined1 *)(iVar4 + 0x2bed);
  uVar1 = *(undefined1 *)(iVar4 + 0x2bee);
  bVar2 = *(byte *)(iVar4 + 0x2bf0);
  uVar15 = (uint)bVar2;
  bVar3 = *(byte *)(iVar4 + 0x2bef);
  FUN_ram_4ff3ee10(iVar16 + param_1);
  FUN_ram_48098e62(uVar5,uVar1,param_3);
  memset(local_a0,0,0x80);
  uVar11 = (int)((bVar3 + 8) - uVar15) % 8 & 0xff;
  uVar14 = uVar15 + uVar11;
  uStack_92 = 1;
  uStack_82 = 1;
  uStack_72 = 1;
  uStack_62 = 1;
  uStack_52 = 1;
  uStack_42 = 1;
  uStack_32 = 1;
  uStack_22 = 1;
  if (uVar15 != 0) {
    do {
      uVar15 = uVar11 & 7;
      uVar6 = param_3[uVar15 * 4 + 0x191];
      uVar7 = param_3[uVar15 * 4 + 0x192];
      uVar8 = param_3[uVar15 * 4 + 0x193];
      *puVar10 = param_3[uVar15 * 4 + 400];
      puVar10[1] = uVar6;
      puVar10[2] = uVar7;
      puVar10[3] = uVar8;
      uVar11 = uVar11 + 1 & 0xff;
      puVar10 = puVar10 + 4;
    } while (uVar11 != (uVar14 & 0xff));
  }
  FUN_ram_4ff45158(param_3 + 400,local_a0,0x80);
  *(byte *)(param_3 + 0x8a) = bVar2;
  return 1;
}


