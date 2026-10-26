/* Firmware entry: 0x4ff206d8 */

int FUN_ram_4ff206d8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff20ae8();
  if ((iVar1 == 0) && (param_1 != 0)) {
    FUN_ram_4ff206ca(param_1,param_2,"heap_caps_malloc");
  }
  return iVar1;
}


