/* Firmware entry: 0x4ff40dd6 */

undefined4 FUN_ram_4ff40dd6(uint param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_3 == (undefined4 *)0x0) || (param_4 == (undefined4 *)0x0)) {
    return 0;
  }
  uVar1 = param_2 + -1 + param_1;
  if (param_1 < 0x4ff00000) {
    if ((0x3fffffff < param_1) && (uVar1 < 0x4c000000)) {
      *param_3 = 2;
      *param_4 = 3;
      return 1;
    }
  }
  else if (uVar1 < 0x4ffc0000) {
    *param_3 = 1;
    *param_4 = 3;
    return 1;
  }
  return 0;
}


