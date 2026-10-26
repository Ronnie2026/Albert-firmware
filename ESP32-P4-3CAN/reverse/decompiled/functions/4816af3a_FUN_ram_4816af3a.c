/* Firmware entry: 0x4816af3a */

undefined4 FUN_ram_4816af3a(uint param_1)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 0;
  uVar2 = 0x19;
  puVar3 = &DAT_ram_482383cc;
  do {
    if (param_1 == uVar2) {
      return (&DAT_ram_482383c4)[iVar1 * 3];
    }
    uVar2 = (uint)*puVar3;
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 6;
  } while (uVar2 != 0);
  return 0;
}


