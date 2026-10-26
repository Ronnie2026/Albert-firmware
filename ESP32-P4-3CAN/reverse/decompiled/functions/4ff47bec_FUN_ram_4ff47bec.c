/* Firmware entry: 0x4ff47bec */

undefined4 FUN_ram_4ff47bec(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4812e80c(param_2,param_3);
  if (iVar1 == 0) {
    return 0x10d;
  }
  if (*(char *)(param_1 + 4) == '\0') {
    iVar1 = FUN_ram_4812e874(param_2,param_3);
    if (iVar1 == 0) {
      return 0x106;
    }
  }
  return 0;
}


