/* Firmware entry: 0x4808c244 */

void FUN_ram_4808c244(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((char)param_1[10] != '\0') && (1 < (uint)param_1[3])) &&
     (*(char *)((int)param_1 + param_1[3] + 0x1bU) != '\0')) {
    uVar1 = param_1[2];
    if ((uVar1 <= (uint)param_1[1]) && (1 < param_1[1] - uVar1)) {
      *(undefined1 *)(*param_1 + uVar1) = 0x7d;
      iVar2 = param_1[2];
      param_1[2] = iVar2 + 1;
      *(undefined1 *)(iVar2 + 1 + *param_1) = 0;
      param_1[3] = param_1[3] + -1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


