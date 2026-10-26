/* Firmware entry: 0x4818d584 */

bool FUN_ram_4818d584(uint *param_1)

{
  short sVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((((*param_1 & 3) != 0) && (sVar1 = (short)param_1[5], 99 < (ushort)(sVar1 - 100U))) &&
      (sVar1 != 0xcc)) && ((sVar1 != 0x130 && ((*param_1 >> 2 & 0x41) == 0)))) {
    return (param_1[2] & param_1[3]) == 0xffffffff;
  }
  return false;
}


