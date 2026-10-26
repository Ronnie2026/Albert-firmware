/* Firmware entry: 0x4802cf56 */

void * FUN_ram_4802cf56(void *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_1,0,0x40);
  FUN_ram_4ff3ec14(&DAT_ram_4ff47ebc,0xffffffff);
  *(bool *)param_1 = DAT_ram_4ff6df24 != 0 && DAT_ram_4ff6df20 != 0;
  iVar15 = DAT_ram_4ff6df20;
  uVar2 = DAT_ram_4ff6df18;
  uVar5 = DAT_ram_4ff6defa;
  uVar4 = DAT_ram_4ff48b63;
  fence();
  fence();
  bVar1 = DAT_ram_4ff6df04 != '\0';
  *(int *)((int)param_1 + 0xc) = DAT_ram_4ff6df20 * 0x13;
  *(int *)((int)param_1 + 8) = iVar15;
  *(bool *)((int)param_1 + 1) = bVar1;
  *(undefined1 *)((int)param_1 + 2) = uVar5;
  *(undefined1 *)((int)param_1 + 3) = uVar4;
  *(undefined4 *)((int)param_1 + 4) = uVar2;
  iVar14 = DAT_ram_4ff6df10;
  uVar11 = DAT_ram_4ff5ce94;
  uVar10 = DAT_ram_4ff5ce90;
  uVar9 = DAT_ram_4ff5ce8c;
  uVar8 = DAT_ram_4ff5ce88;
  uVar7 = DAT_ram_4ff5ce84;
  uVar2 = DAT_ram_4ff5ce80;
  *(int *)((int)param_1 + 0x10) = DAT_ram_4ff6df14 + DAT_ram_4ff6defc;
  *(undefined4 *)((int)param_1 + 0x14) = uVar9;
  *(undefined4 *)((int)param_1 + 0x18) = uVar10;
  *(undefined4 *)((int)param_1 + 0x1c) = uVar11;
  *(undefined4 *)((int)param_1 + 0x20) = uVar2;
  *(undefined4 *)((int)param_1 + 0x24) = uVar7;
  *(undefined4 *)((int)param_1 + 0x28) = uVar8;
  *(int *)((int)param_1 + 0x2c) = iVar14;
  iVar15 = 0;
  if (iVar14 != 0) {
    fence();
    fence();
    if ((DAT_ram_4ff6df04 == '\0') && (DAT_ram_4ff6df08 != 0)) {
      iVar15 = DAT_ram_4ff6df08 - DAT_ram_4ff6df10;
    }
    else {
      iVar15 = FUN_ram_48025ba6();
      iVar15 = iVar15 - DAT_ram_4ff6df10;
    }
  }
  uVar13 = DAT_ram_4ff6df06;
  uVar12 = DAT_ram_4ff6df05;
  uVar6 = DAT_ram_4ff48d68;
  uVar5 = DAT_ram_4ff48c64;
  uVar4 = DAT_ram_4ff48b62;
  uVar3 = DAT_ram_4ff48b60;
  uVar2 = DAT_ram_4ff48b5c;
  *(int *)((int)param_1 + 0x30) = iVar15;
  *(undefined1 *)((int)param_1 + 0x38) = uVar13;
  *(undefined1 *)((int)param_1 + 0x39) = uVar12;
  *(undefined4 *)((int)param_1 + 0x34) = uVar2;
  *(undefined1 *)((int)param_1 + 0x3a) = uVar5;
  *(undefined1 *)((int)param_1 + 0x3b) = uVar6;
  *(undefined1 *)((int)param_1 + 0x3e) = uVar4;
  *(undefined2 *)((int)param_1 + 0x3c) = uVar3;
  FUN_ram_4ff3ee10(&DAT_ram_4ff47ebc);
  return param_1;
}


