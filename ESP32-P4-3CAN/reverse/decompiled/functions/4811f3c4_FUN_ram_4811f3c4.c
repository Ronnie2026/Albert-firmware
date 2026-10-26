/* Firmware entry: 0x4811f3c4 */

void FUN_ram_4811f3c4(undefined4 *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 local_d0 [46];
  
  uVar2 = DAT_ram_4ff6b775;
  uVar5 = DAT_ram_4ff6b764;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_1 = DAT_ram_4ff6b760;
  param_1[1] = uVar5;
  *(undefined1 *)((int)param_1 + 0x15) = uVar2;
  puVar12 = &DAT_ram_4ff6b7b0;
  puVar11 = param_1 + 0x14;
  do {
    uVar5 = puVar12[1];
    uVar6 = puVar12[2];
    uVar8 = puVar12[3];
    *puVar11 = *puVar12;
    puVar11[1] = uVar5;
    puVar11[2] = uVar6;
    puVar11[3] = uVar8;
    puVar12 = puVar12 + 4;
    puVar11 = puVar11 + 4;
  } while (puVar12 != (undefined4 *)0x4ff6ba50);
  puVar12 = &DAT_ram_4ff6bcf8;
  puVar11 = param_1 + 0x166;
  *(undefined1 *)(param_1 + 0x164) = DAT_ram_4ff6bcf0;
  do {
    uVar5 = puVar12[1];
    uVar6 = puVar12[2];
    uVar8 = puVar12[3];
    *puVar11 = *puVar12;
    puVar11[1] = uVar5;
    puVar11[2] = uVar6;
    puVar11[3] = uVar8;
    puVar12 = puVar12 + 4;
    puVar11 = puVar11 + 4;
  } while (puVar12 != &DAT_ram_4ff6bd68);
  FUN_ram_4ff3ec14(&DAT_ram_4ff47ed4,0xffffffff);
  uVar6 = DAT_ram_4ff6bdd8;
  uVar2 = DAT_ram_4ff6b774;
  uVar5 = DAT_ram_4ff6b770;
  puVar11 = local_d0;
  puVar12 = &DAT_ram_4ff6b778;
  do {
    puVar13 = puVar12;
    puVar10 = puVar11;
    uVar8 = puVar13[1];
    uVar7 = puVar13[2];
    uVar9 = puVar13[3];
    *puVar10 = *puVar13;
    puVar10[1] = uVar8;
    puVar10[2] = uVar7;
    puVar10[3] = uVar9;
    puVar11 = puVar10 + 4;
    puVar12 = puVar13 + 4;
  } while (puVar13 + 4 != &DAT_ram_4ff6b7a8);
  uVar8 = puVar13[5];
  puVar10[4] = DAT_ram_4ff6b7a8;
  puVar10[5] = uVar8;
  puVar11 = local_d0 + 0xe;
  puVar12 = &DAT_ram_4ff6bd68;
  do {
    uVar8 = puVar12[1];
    uVar7 = puVar12[2];
    uVar9 = puVar12[3];
    *puVar11 = *puVar12;
    puVar11[1] = uVar8;
    puVar11[2] = uVar7;
    puVar11[3] = uVar9;
    puVar12 = puVar12 + 4;
    puVar11 = puVar11 + 4;
  } while (puVar12 != &DAT_ram_4ff6bdd8);
  FUN_ram_4ff3ee10(&DAT_ram_4ff47ed4);
  param_1[4] = uVar5;
  *(undefined1 *)(param_1 + 5) = uVar2;
  puVar11 = param_1 + 6;
  puVar12 = local_d0;
  do {
    puVar13 = puVar12;
    puVar10 = puVar11;
    uVar5 = puVar13[1];
    uVar8 = puVar13[2];
    uVar7 = puVar13[3];
    *puVar10 = *puVar13;
    puVar10[1] = uVar5;
    puVar10[2] = uVar8;
    puVar10[3] = uVar7;
    puVar12 = puVar13 + 4;
    puVar11 = puVar10 + 4;
  } while (puVar12 != local_d0 + 0xc);
  uVar5 = *puVar12;
  puVar12 = local_d0 + 0xe;
  puVar10[5] = puVar13[5];
  puVar10[4] = uVar5;
  puVar11 = param_1 + 0x182;
  do {
    uVar5 = puVar12[1];
    uVar8 = puVar12[2];
    uVar7 = puVar12[3];
    *puVar11 = *puVar12;
    puVar11[1] = uVar5;
    puVar11[2] = uVar8;
    puVar11[3] = uVar7;
    puVar12 = puVar12 + 4;
    puVar11 = puVar11 + 4;
  } while (puVar12 != local_d0 + 0x2a);
  param_1[0x19e] = uVar6;
  iVar4 = DAT_ram_4ff6e018;
  fence();
  *(bool *)((int)param_1 + 0x16) = DAT_ram_4ff6e018 != 0;
  if (iVar4 == 0) {
    memset(param_1 + 0xbc,0,0x2a0);
  }
  else {
    puVar12 = &DAT_ram_4ff4c628;
    puVar11 = param_1 + 0xbc;
    do {
      uVar5 = puVar12[1];
      uVar6 = puVar12[2];
      uVar8 = puVar12[3];
      *puVar11 = *puVar12;
      puVar11[1] = uVar5;
      puVar11[2] = uVar6;
      puVar11[3] = uVar8;
      puVar12 = puVar12 + 4;
      puVar11 = puVar11 + 4;
    } while (puVar12 != (undefined4 *)0x4ff4c8c8);
  }
  param_1[3] = 0;
  iVar4 = DAT_ram_4ff6e010;
  uVar3 = DAT_ram_4ff6e008;
  param_1[3] = DAT_ram_4ff6e008;
  uVar14 = iVar4 + DAT_ram_4ff6e014;
  bVar1 = uVar14 < DAT_ram_4ff6e014;
  if (uVar3 < DAT_ram_4ff6e00c) {
    param_1[3] = DAT_ram_4ff6e00c;
  }
  if (bVar1) {
    uVar14 = 0xffffffff;
  }
  param_1[2] = uVar14;
  return;
}


