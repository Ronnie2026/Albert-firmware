/* Firmware entry: 0x48046460 */

int FUN_ram_48046460(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 2;
  if (param_2 == 2) {
    iVar1 = 1;
  }
  else if (param_2 != 4) {
    if (param_2 != 1) {
      return 0;
    }
    iVar1 = 0;
  }
  if (param_3 < 0x18) {
    if (param_3 < 0x10) {
      return param_1 + param_3 * 0xe8 + iVar1 * 0x1228;
    }
    iVar2 = (param_3 - 0x10) * 0x120;
    iVar1 = param_1 + iVar2;
    if ((*(char *)(iVar1 + 0x3696) != '\0') && (*(byte *)(iVar1 + 0x3678) == param_2)) {
      return param_1 + iVar2 + 14000;
    }
  }
  return 0;
}


