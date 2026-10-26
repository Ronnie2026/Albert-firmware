/* Firmware entry: 0x48131ac8 */

void FUN_ram_48131ac8(int *param_1,uint *param_2)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = 0;
  if ((*(uint *)(*param_1 + 0x20) >> 1 & 1) != 0) {
    uVar1 = *(uint *)(*param_1 + 0x20) & 1 | 2;
  }
  *param_2 = uVar1;
  return;
}


