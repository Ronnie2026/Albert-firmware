/* Firmware entry: 0x4ff44c86 */

bool FUN_ram_4ff44c86(void)

{
  bool bVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6d9a8 == 0) {
    DAT_ram_4ff6d9a8 = FUN_ram_4ff3b144(1);
  }
  iVar2 = FUN_ram_4ff3d9d2();
  bVar1 = true;
  if (iVar2 != 1) {
    iVar2 = FUN_ram_4ff3b5f0(DAT_ram_4ff6d9a8,10);
    bVar1 = iVar2 == 1;
  }
  return bVar1;
}


