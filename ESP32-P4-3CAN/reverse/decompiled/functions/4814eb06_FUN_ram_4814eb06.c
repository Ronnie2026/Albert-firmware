/* Firmware entry: 0x4814eb06 */

void FUN_ram_4814eb06(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4814e3e8();
  if ((iVar1 != 0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = 1;
  }
  return;
}


