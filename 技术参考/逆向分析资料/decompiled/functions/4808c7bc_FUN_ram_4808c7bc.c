/* Firmware entry: 0x4808c7bc */

void FUN_ram_4808c7bc(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((((char)param_1[10] != '\0') && (param_1[3] - 1U < 0xb)) &&
      (*(char *)((int)param_1 + param_1[3] + 0x1b) != '\0')) &&
     ((iVar1 = FUN_ram_4808c696(), iVar1 != 0 && ((char)param_1[10] != '\0')))) {
    uVar2 = param_1[2];
    if ((uVar2 <= (uint)param_1[1]) && (1 < param_1[1] - uVar2)) {
      *(undefined1 *)(*param_1 + uVar2) = 0x7b;
      iVar1 = param_1[2];
      param_1[2] = iVar1 + 1;
      *(undefined1 *)(iVar1 + 1 + *param_1) = 0;
      iVar1 = param_1[3];
      *(undefined1 *)((int)param_1 + iVar1 + 0x10) = 1;
      *(undefined1 *)((int)param_1 + iVar1 + 0x1c) = 1;
      param_1[3] = iVar1 + 1;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


