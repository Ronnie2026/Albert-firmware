/* Firmware entry: 0x481a7de6 */

int FUN_ram_481a7de6(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff206d8(0x28,param_1);
  iVar2 = 0;
  if ((iVar1 != 0) && (iVar2 = FUN_ram_4ff3fb7c(), iVar2 == 0)) {
    FUN_ram_4ff209c6(iVar1);
  }
  return iVar2;
}


