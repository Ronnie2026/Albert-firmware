/* Firmware entry: 0x4816ae5c */

int FUN_ram_4816ae5c(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 1;
  if (param_1 != 1) {
    iVar1 = (uint)(param_1 == 3) << 2;
  }
  return iVar1;
}


