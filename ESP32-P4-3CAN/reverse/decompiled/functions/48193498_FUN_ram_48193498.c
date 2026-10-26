/* Firmware entry: 0x48193498 */

undefined4 FUN_ram_48193498(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == -1) {
    uVar1 = 0xe002;
  }
  else if (param_1 < 0) {
    uVar1 = 0xe004;
    if ((param_1 != -3) && (uVar1 = 0xffffffff, param_1 == -2)) {
      return 0xe003;
    }
  }
  else {
    uVar1 = 0xffffffff;
    if (param_1 == 0) {
      return 0xe001;
    }
  }
  return uVar1;
}


