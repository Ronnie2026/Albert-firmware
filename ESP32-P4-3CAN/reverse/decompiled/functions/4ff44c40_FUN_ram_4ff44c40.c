/* Firmware entry: 0x4ff44c40 */

void FUN_ram_4ff44c40(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6d9a8 == 0) {
    DAT_ram_4ff6d9a8 = FUN_ram_4ff3b144(1);
    iVar1 = FUN_ram_4ff3d9d2();
  }
  else {
    iVar1 = FUN_ram_4ff3d9d2();
  }
  if (iVar1 != 1) {
    FUN_ram_4ff3b5f0(DAT_ram_4ff6d9a8,0xffffffff);
    return;
  }
  return;
}


