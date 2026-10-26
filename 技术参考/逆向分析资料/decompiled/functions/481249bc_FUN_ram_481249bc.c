/* Firmware entry: 0x481249bc */

undefined4
FUN_ram_481249bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4812527a(param_1,0);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_ram_4812550e(param_1,param_2,param_3,param_4,param_5,param_6), iVar1 != 0)) {
    uVar2 = FUN_ram_48124e22(param_1);
    return uVar2;
  }
  return 4;
}


