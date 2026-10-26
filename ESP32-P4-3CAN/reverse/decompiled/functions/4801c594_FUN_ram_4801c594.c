/* Firmware entry: 0x4801c594 */

bool FUN_ram_4801c594(uint param_1,int *param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0xb) {
    iVar1 = __eqdf2(*param_2,param_2[1],0,0);
    return iVar1 == 0;
  }
  if (param_1 < 0xc) {
    if (param_1 == 10) {
      return (float)*(undefined8 *)param_2 == 0.0;
    }
    if ((7 < param_1) || ((param_1 < 6 && (2 < param_1)))) {
      return *param_2 == 0 && param_2[1] == 0;
    }
  }
  else {
    if (param_1 == 0xe) {
      if ((char *)*param_2 != (char *)0x0) {
        return *(char *)*param_2 == '\0';
      }
      return true;
    }
    if ((0xe < param_1) && (1 < param_1 - 0xf)) {
      return true;
    }
  }
  return *param_2 == 0;
}


