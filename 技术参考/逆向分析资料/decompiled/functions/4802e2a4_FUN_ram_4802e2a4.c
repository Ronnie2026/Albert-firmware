/* Firmware entry: 0x4802e2a4 */

void FUN_ram_4802e2a4(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_50108080 = 0;
  fence();
  DAT_ram_50108084 = 0xffffffff;
  DAT_ram_50108088 = 0;
  DAT_ram_5010808c = 0xffffffff;
  iVar1 = 0;
  do {
    (&DAT_ram_50108090)[iVar1] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x20);
  DAT_ram_501080b0 = 0;
  DAT_ram_501080b4 = 0xffffffff;
  fence();
  return;
}


