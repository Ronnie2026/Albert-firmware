/* Firmware entry: 0x4817b524 */

undefined4 FUN_ram_4817b524(undefined1 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 != 0xc0) {
    uVar1 = 0xffffffe0;
    if ((param_3 - 0x80 & 0xffffff7f) == 0) {
      *param_1 = (char)(param_3 >> 3);
      FUN_ram_4ff45158(param_1 + 2);
      uVar1 = 0;
      param_1[1] = 0;
    }
    return uVar1;
  }
  return 0xffffff8e;
}


