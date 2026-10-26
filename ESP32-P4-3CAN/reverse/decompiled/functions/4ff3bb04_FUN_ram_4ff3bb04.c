/* Firmware entry: 0x4ff3bb04 */

undefined4 FUN_ram_4ff3bb04(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x18 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tasks.c",0x336,"prvIsYieldRequiredSMP","uxTaskPriority < ( 25 )");
  }
  uVar2 = *(uint *)(param_1 + 0x44);
  param_2 = param_2 + (param_3 == 1);
  if (uVar2 == mhartid) {
    if ((*(uint *)((&DAT_ram_4ff6da3c)[uVar2] + 0x2c) < param_2) &&
       ((&DAT_ram_4ff6d9f8)[uVar2] == 0)) {
      return 1;
    }
    if (uVar2 != 0x7fffffff) {
      return 0;
    }
    uVar1 = (uint)(mhartid == 0);
  }
  else if (uVar2 == 0x7fffffff) {
    if ((*(uint *)((&DAT_ram_4ff6da3c)[mhartid] + 0x2c) < param_2) &&
       ((&DAT_ram_4ff6d9f8)[mhartid] == 0)) {
      return 1;
    }
    uVar1 = (uint)(mhartid == 0);
  }
  else {
    uVar1 = (uint)(mhartid == 0);
    if (uVar2 != uVar1) {
      return 0;
    }
  }
  if ((*(uint *)((&DAT_ram_4ff6da3c)[uVar1] + 0x2c) < param_2) && ((&DAT_ram_4ff6d9f8)[uVar1] == 0))
  {
    thunk_FUN_ram_4ff2ca00();
  }
  return 0;
}


