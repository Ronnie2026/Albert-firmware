/* Firmware entry: 0x4ff29b6c */

void FUN_ram_4ff29b6c(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = (&DAT_ram_4ff6e010)[mhartid];
  if (iVar1 != -1) {
    (&DAT_ram_4ff6e010)[mhartid] = iVar1 + 1;
  }
  FUN_ram_4ff2955a();
  return;
}


