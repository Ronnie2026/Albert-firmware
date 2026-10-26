/* Firmware entry: 0x4816a7ec */

int FUN_ram_4816a7ec(int *param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return -0x7100;
  }
  if (*param_1 == 0) {
    iVar1 = -0x7100;
  }
  else {
    while (param_1[1] != 0x1b) {
      iVar1 = FUN_ram_4816a73c(param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


