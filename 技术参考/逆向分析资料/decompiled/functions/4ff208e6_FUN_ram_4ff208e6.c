/* Firmware entry: 0x4ff208e6 */

int FUN_ram_4ff208e6(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff20af0();
  if ((iVar1 == 0) && (param_2 != 0)) {
    FUN_ram_4ff206ca(param_2,param_3,"heap_caps_realloc");
  }
  return iVar1;
}


