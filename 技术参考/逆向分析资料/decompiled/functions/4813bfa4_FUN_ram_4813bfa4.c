/* Firmware entry: 0x4813bfa4 */

void FUN_ram_4813bfa4(void)

{
  ushort uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff2d260();
  DAT_ram_4ff47f74 = uVar1 | 0xc000;
  return;
}


