/* Firmware entry: 0x4817dcd8 */

int FUN_ram_4817dcd8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*param_1 != 1) && (1 < *param_1 - 3U)) {
    iVar1 = FUN_ram_4817497c();
    return iVar1;
  }
  iVar1 = FUN_ram_481748fc(param_1,param_3);
  if ((iVar1 == 0) &&
     ((iVar1 = FUN_ram_4817dc1e(param_1,param_4), iVar1 == 0 &&
      (iVar2 = FUN_ram_4817dad2(param_1[0xf],param_2,param_3,param_4), iVar1 = 0, iVar2 != 0)))) {
    iVar1 = -0x4f80;
  }
  return iVar1;
}


