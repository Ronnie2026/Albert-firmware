/* Firmware entry: 0x48177020 */

int FUN_ram_48177020(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_78 [100];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  thunk_EXT_FUN_ram_4fc005e0(auStack_78);
  iVar1 = FUN_ram_4817e1e8(auStack_78);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_4817e1cc(auStack_78,param_1,param_2), iVar1 == 0)) {
    iVar1 = FUN_ram_4817e1b2(auStack_78,param_3);
  }
  FUN_ram_4817e1fc(auStack_78);
  return iVar1;
}


