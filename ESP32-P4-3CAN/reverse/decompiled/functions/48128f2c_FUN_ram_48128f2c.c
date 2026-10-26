/* Firmware entry: 0x48128f2c */

undefined4 FUN_ram_48128f2c(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_ram_4ff3fdde(*(int *)(param_1 + 4),0);
    return uVar1;
  }
  return DAT_ram_4ff6e080;
}


