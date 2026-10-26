/* Firmware entry: 0x4817f830 */

int FUN_ram_4817f830(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar2 = (char *)*param_1;
  if (param_2 - (int)pcVar2 < 1) {
    return -0x60;
  }
  if (*pcVar2 == '\x03') {
    *param_1 = pcVar2 + 1;
    iVar1 = FUN_ram_4817f2d4();
    if (iVar1 == 0) {
      if (*param_3 != 0) {
        pcVar2 = (char *)*param_1;
        *param_3 = *param_3 + -1;
        if (*pcVar2 == '\0') {
          *param_1 = pcVar2 + 1;
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 0;
        }
      }
      iVar1 = -0x68;
    }
    return iVar1;
  }
  return -0x62;
}


