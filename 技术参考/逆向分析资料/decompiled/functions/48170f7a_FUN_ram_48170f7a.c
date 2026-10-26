/* Firmware entry: 0x48170f7a */

undefined4 FUN_ram_48170f7a(int *param_1,undefined1 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (param_1[0x2f] == 0) {
      param_1[0x2d] = 0x15;
      param_1[0x2e] = 2;
      *(undefined1 *)param_1[0x2c] = param_2;
      *(undefined1 *)(param_1[0x2c] + 1) = param_3;
      uVar1 = FUN_ram_48170748(param_1,1);
      return uVar1;
    }
    uVar1 = FUN_ram_4817069a();
    return uVar1;
  }
  return 0xffff8f00;
}


