/* Firmware entry: 0x48031876 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_48031876(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint local_ac [18];
  uint local_64 [20];
  uint auStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar8 = &DAT_ram_48222d7c;
  puVar6 = local_64;
  do {
    uVar2 = puVar8[1];
    uVar4 = puVar8[2];
    uVar5 = puVar8[3];
    *puVar6 = *puVar8;
    puVar6[1] = uVar2;
    puVar6[2] = uVar4;
    puVar6[3] = uVar5;
    puVar8 = puVar8 + 4;
    puVar6 = puVar6 + 4;
  } while (puVar8 != (uint *)&DAT_ram_48222dcc);
  *puVar6 = _DAT_ram_48222dcc;
  FUN_ram_4ff3ec14(&DAT_ram_4ff69338,0xffffffff);
  puVar8 = &DAT_ram_4ff6934c;
  puVar6 = local_ac;
  do {
    uVar10 = puVar8[1];
    uVar9 = puVar8[2];
    uVar2 = puVar8[3];
    uVar4 = puVar8[4];
    uVar5 = puVar8[5];
    *puVar6 = *puVar8;
    puVar6[1] = uVar10;
    puVar6[2] = uVar9;
    puVar6[3] = uVar2;
    puVar6[4] = uVar4;
    puVar6[5] = uVar5;
    puVar8 = puVar8 + 6;
    puVar6 = puVar6 + 6;
  } while (puVar8 != &DAT_ram_4ff69394);
  FUN_ram_4ff3ee10(&DAT_ram_4ff69338);
  puVar8 = local_ac;
  puVar6 = local_64 + 2;
  do {
    uVar10 = *puVar8;
    uVar9 = puVar8[1];
    uVar2 = puVar8[2];
    uVar4 = puVar8[3];
    uVar5 = puVar8[4];
    puVar6[5] = puVar8[5];
    *puVar6 = uVar10;
    puVar6[1] = uVar9;
    puVar6[2] = uVar2;
    puVar6[3] = uVar4;
    puVar6[4] = uVar5;
    puVar8 = puVar8 + 6;
    puVar7 = local_64;
    puVar6 = puVar6 + 6;
  } while (puVar7 != puVar8);
  auStack_14[0] = 0x811c9dc5;
  do {
    uVar2 = *puVar7;
    puVar7 = (uint *)((int)puVar7 + 1);
    auStack_14[0] = (auStack_14[0] ^ (byte)uVar2) * 0x1000193;
  } while (puVar7 != auStack_14);
  iVar3 = FUN_ram_48121fee(&DAT_ram_4ff6dec0,"B40NAG",0,0);
  bVar1 = false;
  if (iVar3 != 0) {
    iVar3 = FUN_ram_48122518(&DAT_ram_4ff6dec0,"config",local_64,0x54);
    FUN_ram_48122142(&DAT_ram_4ff6dec0);
    bVar1 = iVar3 == 0x54;
  }
  return bVar1;
}


