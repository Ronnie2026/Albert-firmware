/* Firmware entry: 0x4ff326f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4ff326f4(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 0x21340;
  if ((_DAT_ram_50111000 & 3) != 0) {
    iVar1 = (uint)((_DAT_ram_50111000 & 3) != 3) << 0xf;
  }
  return iVar1;
}


