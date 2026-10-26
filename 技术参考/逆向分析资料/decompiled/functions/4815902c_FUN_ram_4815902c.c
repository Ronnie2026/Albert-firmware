/* Firmware entry: 0x4815902c */

undefined4 FUN_ram_4815902c(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0x102;
  }
  if ((*(char **)(param_1 + 0x20) == (char *)0x0) ||
     (uVar1 = 0x102, **(char **)(param_1 + 0x20) == '\0')) {
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0xd8), iVar2 != 0)) {
      *param_2 = iVar2;
      return 0;
    }
    uVar1 = 0x5002;
  }
  return uVar1;
}


