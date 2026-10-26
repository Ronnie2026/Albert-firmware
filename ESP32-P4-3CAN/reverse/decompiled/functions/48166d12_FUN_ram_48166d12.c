/* Firmware entry: 0x48166d12 */

int FUN_ram_48166d12(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0x18);
  FUN_ram_48166caa(iVar1);
  iVar1 = FUN_ram_481693ec(iVar1 + 0x3c,param_2,param_3);
  return -(uint)(iVar1 == 0);
}


