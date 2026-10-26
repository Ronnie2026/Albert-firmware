/* Firmware entry: 0x480d20b2 */

void FUN_ram_480d20b2(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_480b063e();
  iVar1 = FUN_ram_4802fc76();
  DAT_ram_4ff6dcd5 = (undefined1)iVar1;
  if (iVar1 == 0) {
    return;
  }
  FUN_ram_480d1ac8(&DAT_ram_4ff5be28);
  FUN_ram_480cea72();
  return;
}


