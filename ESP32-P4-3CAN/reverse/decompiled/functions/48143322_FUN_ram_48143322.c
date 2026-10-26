/* Firmware entry: 0x48143322 */

undefined4 FUN_ram_48143322(int param_1,int param_2)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(char *)(param_1 + 0x2c) != '.') {
      uVar1 = FUN_ram_481431f0(param_1,param_2,param_1 + 0x18,*(undefined2 *)(param_1 + 0x3c));
      return uVar1;
    }
    return 0xfffffffa;
  }
  return 0xfffffff0;
}


