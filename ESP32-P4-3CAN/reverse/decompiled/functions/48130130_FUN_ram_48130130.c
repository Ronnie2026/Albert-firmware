/* Firmware entry: 0x48130130 */

undefined4 FUN_ram_48130130(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < param_1) {
    return 0x102;
  }
  if ((*(int *)(&DAT_ram_4ff6e104 + param_1 * 4) != 0) && (iVar1 = FUN_ram_4ff3d9d2(), iVar1 == 2))
  {
    FUN_ram_4812ff2e(param_1,param_2,param_3,2);
    return 0;
  }
  return 0x103;
}


