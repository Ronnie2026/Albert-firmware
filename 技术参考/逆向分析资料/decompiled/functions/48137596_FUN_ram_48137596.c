/* Firmware entry: 0x48137596 */

int FUN_ram_48137596(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_24 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 2) {
    iVar1 = FUN_ram_481477ca(param_2,param_3);
    return iVar1;
  }
  if (param_1 == 10) {
    iVar1 = FUN_ram_48149140(param_2,auStack_24);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_ram_4ff45158(param_3,auStack_24,0x10);
    return iVar1;
  }
  puVar2 = (undefined4 *)FUN_ram_4819bf88();
  *puVar2 = 0x6a;
  return -1;
}


