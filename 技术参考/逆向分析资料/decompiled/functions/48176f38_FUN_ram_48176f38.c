/* Firmware entry: 0x48176f38 */

int FUN_ram_48176f38(int *param_1)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return -0x5100;
  }
  if (*param_1 == 0) {
    iVar2 = -0x5100;
  }
  else {
    iVar1 = param_1[2];
    if (iVar1 == 0) {
      iVar2 = -0x5100;
    }
    else {
      iVar2 = FUN_ram_48176bfe();
      if (iVar2 == 0) {
        iVar2 = FUN_ram_48176c62(param_1,iVar1,*(undefined1 *)(*param_1 + 5));
        return iVar2;
      }
    }
  }
  return iVar2;
}


