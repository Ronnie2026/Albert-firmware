/* Firmware entry: 0x481827fe */

int FUN_ram_481827fe(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_481718bc(param_2,param_4,1);
  if (iVar1 == 0) {
    iVar1 = -0xd;
  }
  else if ((*(uint *)(iVar1 + 4) & 0x1f) == 0x10) {
    param_1 = param_1 + 0x38;
    FUN_ram_4817191c(param_1);
    iVar1 = FUN_ram_48171962(param_1,iVar1);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_481719ba(param_1,param_3,param_4,1);
      return iVar1;
    }
  }
  else {
    iVar1 = -0xd;
  }
  return iVar1;
}


