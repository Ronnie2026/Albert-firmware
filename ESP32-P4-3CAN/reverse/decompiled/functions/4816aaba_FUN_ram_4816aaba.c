/* Firmware entry: 0x4816aaba */

int FUN_ram_4816aaba(int *param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4816a88a();
  if (iVar1 == 0) {
    param_1[1] = 0;
    param_1[2] = 1;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_ram_4816a73c(param_1);
        if (iVar1 != 0) {
          return iVar1;
        }
      } while (param_1[1] != 0x1b);
      return 0;
    }
    iVar1 = -0x7100;
  }
  return iVar1;
}


