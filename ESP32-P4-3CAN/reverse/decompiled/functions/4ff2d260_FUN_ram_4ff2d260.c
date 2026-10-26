/* Firmware entry: 0x4ff2d260 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4ff2d260(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = FUN_ram_4ff20c3c();
  iVar5 = thunk_FUN_ram_4ff32b9c();
  uVar7 = 0;
  uVar3 = 0;
  do {
    do {
      iVar2 = cycle;
      uVar3 = uVar3 ^ _DAT_ram_50126004;
    } while ((uint)(cycle - DAT_ram_4ff6e150) < (uint)((iVar4 / iVar5) * 0x15e0));
    uVar6 = FUN_ram_4ff2cfd2();
    uVar1 = uVar7 & 0x1f;
    uVar7 = uVar7 + 8;
    uVar3 = uVar3 ^ (uVar6 & 0xff) << uVar1;
  } while (uVar7 != 0x20);
  DAT_ram_4ff6e150 = iVar2;
  return _DAT_ram_50126004 ^ uVar3;
}


