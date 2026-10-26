/* Firmware entry: 0x4817a624 */

undefined4
FUN_ram_4817a624(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                int param_6)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_4 == 0 && param_5 == 0) || (param_6 != 0)) {
    if (*(int *)(param_1 + 0x70) == 0) {
      uVar1 = FUN_ram_4817a526();
      return uVar1;
    }
    if (*(int *)(param_1 + 0x70) == 1) {
      uVar1 = 0xffffbf80;
      if (param_4 != 0 || *(int *)(param_1 + 0x74) != 0) {
        uVar1 = FUN_ram_48179c50();
        return uVar1;
      }
    }
    else {
      uVar1 = 0xffffbf00;
    }
  }
  else {
    uVar1 = 0xffffbf80;
  }
  return uVar1;
}


