/* Firmware entry: 0x4801bb28 */

undefined4 FUN_ram_4801bb28(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6db9b != '\0') {
    return 0;
  }
  FUN_ram_4801af3a();
  FUN_ram_4801a802();
  uVar1 = FUN_ram_4801af88();
  return uVar1;
}


