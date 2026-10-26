/* Firmware entry: 0x48195aa0 */

void FUN_ram_48195aa0(uint param_1,uint param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x3ffffffc < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_481950f0("basic_string::_S_create");
  }
  if ((param_2 < param_1) && (param_1 < param_2 << 1)) {
    param_1 = param_2 << 1;
  }
  iVar1 = param_1 + 0xd;
  if ((param_1 + 0x1d < 0x1001) || (param_1 <= param_2)) {
    if (iVar1 < 0) {
      FUN_ram_4819508e();
      thunk_FUN_ram_4ff209c6();
      return;
    }
  }
  else {
    param_1 = (param_1 + 0x1000) - (param_1 + 0x1d & 0xfff);
    if (0x3ffffffc < param_1) {
      param_1 = 0x3ffffffc;
    }
    iVar1 = param_1 + 0xd;
  }
  iVar1 = FUN_ram_48194e68(iVar1);
  *(uint *)(iVar1 + 4) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}


