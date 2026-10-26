/* Firmware entry: 0x4ff3e8de */

undefined * FUN_ram_4ff3e8de(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ebfe();
  iVar1 = (&DAT_ram_4ff6da3c)[mhartid];
  FUN_ram_4ff3ec08();
  if (iVar1 != 0) {
    return (undefined *)(iVar1 + 0x68);
  }
  return &DAT_ram_4ff4bb0c;
}


