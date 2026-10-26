/* Firmware entry: 0x48195904 */

void FUN_ram_48195904(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48006808(&DAT_ram_4ff6e2d4,&LAB_ram_48195842);
  DAT_ram_4ff6e2d8 = iVar1 == 0;
  return;
}


