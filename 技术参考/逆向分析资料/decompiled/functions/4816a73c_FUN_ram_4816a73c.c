/* Firmware entry: 0x4816a73c */

int FUN_ram_4816a73c(int *param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return -0x7100;
  }
  if (((*param_1 == 0) || (param_1[0x10] == 0)) || (param_1[1] == 0x1b)) {
    return -0x7100;
  }
  iVar1 = FUN_ram_4817069a();
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_ram_48171480(param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*(char *)(*param_1 + 8) == '\0') {
    if (param_1[1] == 0) {
      param_1[1] = 1;
      return 0;
    }
    if (param_1[1] == 1) {
      iVar1 = FUN_ram_4816f274(param_1);
    }
    else {
      iVar1 = FUN_ram_4816c760(param_1);
    }
    if (*(char *)(*param_1 + 8) == '\x01') goto LAB_ram_4816a7c0;
  }
  else {
    if (*(char *)(*param_1 + 8) != '\x01') {
      iVar1 = -0x7100;
      goto LAB_ram_4816a7ac;
    }
LAB_ram_4816a7c0:
    iVar1 = FUN_ram_4816d866(param_1);
  }
  if (iVar1 == 0) {
    return 0;
  }
LAB_ram_4816a7ac:
  if ((char)param_1[0x25] == '\0') {
    return iVar1;
  }
  iVar1 = FUN_ram_48171480(param_1);
  return iVar1;
}


