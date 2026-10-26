/* Firmware entry: 0x4817b0c4 */

int FUN_ram_4817b0c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined1 auStack_100 [236];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 < 2) {
    FUN_ram_4817c9fc(auStack_100);
    iVar1 = FUN_ram_4817ca28(auStack_100,param_4);
    if ((iVar1 == 0) && (iVar1 = FUN_ram_4817ca46(auStack_100,param_1,param_2), iVar1 == 0)) {
      iVar1 = FUN_ram_4817cbc0(auStack_100,param_3);
    }
    FUN_ram_4817ca0a(auStack_100);
  }
  else {
    iVar1 = -0x75;
  }
  return iVar1;
}


