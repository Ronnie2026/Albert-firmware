/* Firmware entry: 0x48176aa0 */

undefined4 FUN_ram_48176aa0(int *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((param_1 != (int *)0x0) && (puVar1 = (uint *)*param_1, puVar1 != (uint *)0x0)) &&
      (param_2 != (int *)0x0)) &&
     (((uint *)*param_2 != (uint *)0x0 && (puVar1 == (uint *)*param_2)))) {
    uVar2 = *puVar1;
    if (uVar2 < 10) {
      if (uVar2 < 8) {
        if (uVar2 == 3) {
          FUN_ram_4817e208(param_1[1],param_2[1]);
        }
        else {
          if (uVar2 != 5) {
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return 0xffffaf00;
          }
          FUN_ram_4817c43a(param_1[1],param_2[1]);
        }
      }
      else {
        FUN_ram_4817c6da(param_1[1],param_2[1]);
      }
    }
    else {
      if (1 < uVar2 - 10) {
        return 0xffffaf00;
      }
      FUN_ram_4817ca1c(param_1[1],param_2[1]);
    }
    return 0;
  }
  return 0xffffaf00;
}


