/* Firmware entry: 0x4817b2a2 */

int FUN_ram_4817b2a2(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_3 - 0x100 & 0xfffffeff) != 0) {
    return -0x20;
  }
  iVar1 = FUN_ram_4817b524(param_1 + 0x22,param_2 + (param_3 >> 4),param_3 >> 1);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_ram_4817b524(param_1,param_2,param_3 >> 1);
  return iVar1;
}


