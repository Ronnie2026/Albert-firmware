/* Firmware entry: 0x4817a918 */

undefined4 FUN_ram_4817a918(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 != 0 || param_3 != 0) && (param_4 == 0)) {
    return 0xffffbf80;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    uVar1 = FUN_ram_4817a848();
    return uVar1;
  }
  if (*(int *)(param_1 + 0x70) != 1) {
    return 0xffffbf00;
  }
  uVar1 = FUN_ram_4817a66c();
  return uVar1;
}


