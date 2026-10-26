/* Firmware entry: 0x4817b062 */

int FUN_ram_4817b062(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined1 auStack_94 [128];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 < 2) {
    FUN_ram_4817c6ba(auStack_94);
    iVar1 = FUN_ram_4817c700(auStack_94,param_4);
    if ((iVar1 == 0) && (iVar1 = FUN_ram_4817c72e(auStack_94,param_1,param_2), iVar1 == 0)) {
      iVar1 = FUN_ram_4817c8a4(auStack_94,param_3);
    }
    FUN_ram_4817c6c8(auStack_94);
  }
  else {
    iVar1 = -0x74;
  }
  return iVar1;
}


