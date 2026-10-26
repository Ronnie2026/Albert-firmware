/* Firmware entry: 0x4817b010 */

int FUN_ram_4817b010(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_88 [116];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4817c41a(auStack_88);
  iVar1 = FUN_ram_4817c446(auStack_88);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_4817c460(auStack_88,param_1,param_2), iVar1 == 0)) {
    iVar1 = FUN_ram_4817c5d6(auStack_88,param_3);
  }
  FUN_ram_4817c428(auStack_88);
  return iVar1;
}


