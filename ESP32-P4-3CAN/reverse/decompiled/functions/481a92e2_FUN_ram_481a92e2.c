/* Firmware entry: 0x481a92e2 */

uint FUN_ram_481a92e2(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = 1;
  if (param_2 != (uint *)0x0) {
    uVar1 = 0;
    if (*param_2 - 2 < 0x7fff) {
      uVar1 = ~*param_2 & 1;
    }
    uVar1 = (*(byte *)((int)param_2 + 6) - 1 < 8 &&
            (*(byte *)((int)param_2 + 7) - 1 < 4 && *(byte *)((int)param_2 + 5) - 1 < 0x10)) & uVar1
    ;
  }
  return uVar1;
}


