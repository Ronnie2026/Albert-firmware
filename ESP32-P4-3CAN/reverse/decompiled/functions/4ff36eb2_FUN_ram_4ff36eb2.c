/* Firmware entry: 0x4ff36eb2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4ff36eb2(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((_DAT_ram_3ff06004 & 0x300) == 0) {
    return -(uint)((_DAT_ram_3ff06084 & 0x300) == 0) | 1;
  }
  return 0;
}


