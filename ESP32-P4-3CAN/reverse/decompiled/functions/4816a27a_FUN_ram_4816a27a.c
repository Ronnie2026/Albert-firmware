/* Firmware entry: 0x4816a27a */

void FUN_ram_4816a27a(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48176c62(*(int *)(param_1 + 0x40) + 0x150);
  if (iVar1 != 0) {
    return;
  }
  FUN_ram_48176c62(*(int *)(param_1 + 0x40) + 0x15c,param_2,param_3);
  return;
}


