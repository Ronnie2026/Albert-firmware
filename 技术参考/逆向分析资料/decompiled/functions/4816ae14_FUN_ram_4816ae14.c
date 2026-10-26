/* Firmware entry: 0x4816ae14 */

byte FUN_ram_4816ae14(undefined4 param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48177194(param_1,1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_ram_48177194(param_1,4);
  return -(iVar1 != 0) & 3;
}


