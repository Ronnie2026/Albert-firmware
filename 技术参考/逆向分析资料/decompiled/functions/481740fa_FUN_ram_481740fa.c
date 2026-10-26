/* Firmware entry: 0x481740fa */

void FUN_ram_481740fa(int param_1,int param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4817fe72();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_4817fe72(param_1 + 8,param_2 + 8), iVar1 == 0)) {
    FUN_ram_4817fe72(param_1 + 0x10,param_2 + 0x10);
    return;
  }
  return;
}


