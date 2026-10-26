/* Firmware entry: 0x48137530 */

int FUN_ram_48137530(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 < 0) {
    puVar2 = (undefined4 *)FUN_ram_4819bf88();
    *puVar2 = 0x1c;
    return 0;
  }
  if (param_1 == 2) {
    iVar1 = FUN_ram_4814797e(param_2,param_3,param_4);
  }
  else {
    if (param_1 != 10) {
      puVar2 = (undefined4 *)FUN_ram_4819bf88();
      *puVar2 = 0x6a;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    iVar1 = FUN_ram_481493de(param_2,param_3,param_4);
  }
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)FUN_ram_4819bf88();
    *puVar2 = 0x1c;
  }
  return iVar1;
}


