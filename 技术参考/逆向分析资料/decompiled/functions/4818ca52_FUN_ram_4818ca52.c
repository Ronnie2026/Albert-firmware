/* Firmware entry: 0x4818ca52 */

int FUN_ram_4818ca52(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0x32) {
    iVar1 = 0;
    if (param_3 == 0xc) {
      return param_1 + 0x28;
    }
  }
  else if (param_2 < 0x33) {
    if (param_2 == 6) {
      iVar1 = 0;
      if (param_3 == 1) {
        return param_1 + 0x39;
      }
    }
    else if (param_2 == 0x20) {
      iVar1 = 0;
      if (param_3 == 1) {
        return param_1 + 0x38;
      }
    }
    else {
      if (param_2 != 1) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      iVar1 = 0;
      if (param_3 == 4) {
        return param_1 + 0x1c;
      }
    }
  }
  else if (param_2 == 0x33) {
    iVar1 = 0;
    if (param_3 == 4) {
      return param_1 + 0x34;
    }
  }
  else {
    iVar1 = param_1 + 0x3c;
    if (param_2 != 0x72) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
  }
  return iVar1;
}


