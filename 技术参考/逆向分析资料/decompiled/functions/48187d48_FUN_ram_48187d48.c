/* Firmware entry: 0x48187d48 */

void FUN_ram_48187d48(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 0x10;
  if (2 < param_1) {
    iVar1 = (uint)(param_1 - 3 < 5) << 5;
  }
  FUN_ram_4818b650(param_1,param_2,iVar1,param_3);
  return;
}


