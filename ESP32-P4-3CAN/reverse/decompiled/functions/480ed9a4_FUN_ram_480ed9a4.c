/* Firmware entry: 0x480ed9a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_480ed9a4(undefined1 *param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 local_1f0 [2];
  char cStack_1e6;
  undefined4 auStack_1e4 [38];
  undefined1 auStack_14c [300];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar8 = local_1f0;
  fence();
  if (DAT_ram_4ff6df90 != '\0') {
    param_1[10] = 0;
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
  puVar9 = &DAT_ram_4ff61958;
  do {
    uVar3 = puVar9[1];
    uVar5 = puVar9[2];
    uVar6 = puVar9[3];
    *puVar8 = *puVar9;
    puVar8[1] = uVar3;
    puVar8[2] = uVar5;
    puVar8[3] = uVar6;
    puVar9 = puVar9 + 4;
    puVar8 = puVar8 + 4;
  } while (puVar9 != (undefined4 *)&DAT_ram_4ff619f8);
  *puVar8 = _DAT_ram_4ff619f8;
  FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
  fence();
  fence();
  if (((DAT_ram_4ff6df34 == '\0') || (cStack_1e6 == '\0')) || (param_1[10] != '\0'))
  goto LAB_ram_480eda30;
  FUN_ram_4ff3ec14(&DAT_ram_4ff48d94,0xffffffff);
  FUN_ram_4ff3ec14(&DAT_ram_4ff4b8c8,0xffffffff);
  _DAT_ram_4ff4b934 = _DAT_ram_4ff4b934 & 0xff;
  FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
  fence();
  DAT_ram_4ff4a02d = 0;
  if (DAT_ram_4ff48d9c != 0) {
    FUN_ram_48047848(DAT_ram_4ff48d9c + 0x2878);
  }
  if ((byte)(DAT_ram_4ff4a020 - 3U) < 2) {
    uVar7 = (uint)DAT_ram_4ff4a02c;
    _DAT_ram_4ff4a020 = 4;
    if (uVar7 == 0) goto LAB_ram_480edafa;
    puVar10 = (undefined1 *)((int)&DAT_ram_4ff494b4 + 1);
    bVar2 = false;
    do {
      piVar1 = (int *)(puVar10 + 0x7f);
      puVar10[0xe7] = 0;
      *puVar10 = 5;
      puVar10 = puVar10 + 0xf4;
      bVar2 = (bool)(bVar2 | *piVar1 != 0);
    } while (puVar10 != (undefined1 *)((int)&DAT_ram_4ff494b4 + uVar7 * 0xf4 + 1));
    if (!bVar2) goto LAB_ram_480edafa;
    _DAT_ram_4ff4a020 = CONCAT11(2,DAT_ram_4ff4a020);
  }
  else {
LAB_ram_480edafa:
    _DAT_ram_4ff4a020 = 0x200;
    FUN_ram_4ff3ec14(&DAT_ram_4ff4b8c8,0xffffffff);
    _DAT_ram_4ff4b934 = 0;
    fence();
    DAT_ram_4ff4b8d1 = 0xff;
    fence();
    DAT_ram_4ff4b8d0 = 0;
    FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff48d94);
  memset(auStack_14c,0,300);
  FUN_ram_480ea70a(&DAT_ram_4ff60e20,auStack_14c,0,0);
LAB_ram_480eda30:
  iVar4 = FUN_ram_480ed7e0(&DAT_ram_4ff60e20,param_1);
  if (iVar4 != 0) {
    fence();
    DAT_ram_4ff60d48 = *param_1;
    fence();
    DAT_ram_4ff60d49 = 0;
  }
  return;
}


