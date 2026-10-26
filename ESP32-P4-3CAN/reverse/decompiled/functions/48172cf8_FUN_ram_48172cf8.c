/* Firmware entry: 0x48172cf8 */

void FUN_ram_48172cf8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4817bf84(param_2,param_3,param_4);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_48172ae2(param_2,param_1), iVar1 == 0)) {
    DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
    return;
  }
  return;
}


