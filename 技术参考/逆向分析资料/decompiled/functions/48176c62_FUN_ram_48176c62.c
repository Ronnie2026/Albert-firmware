/* Firmware entry: 0x48176c62 */

undefined4 FUN_ram_48176c62(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != (int *)0x0) && ((uint *)*param_1 != (uint *)0x0)) {
    uVar2 = *(uint *)*param_1;
    if (uVar2 < 10) {
      if (7 < uVar2) {
        uVar1 = FUN_ram_4817c72e(param_1[1]);
        return uVar1;
      }
      if (uVar2 == 3) {
        uVar1 = FUN_ram_4817e1cc(param_1[1]);
        return uVar1;
      }
      if (uVar2 == 5) {
        uVar1 = FUN_ram_4817c460(param_1[1]);
        return uVar1;
      }
    }
    else if (uVar2 - 10 < 2) {
      uVar1 = FUN_ram_4817ca46(param_1[1]);
      return uVar1;
    }
  }
  return 0xffffaf00;
}


