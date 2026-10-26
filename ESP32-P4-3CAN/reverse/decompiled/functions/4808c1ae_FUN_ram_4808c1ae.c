/* Firmware entry: 0x4808c1ae */

void FUN_ram_4808c1ae(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((char)param_1[10] == '\0') || (iVar2 = param_1[3], 10 < iVar2 - 1U)) ||
     (*(char *)((int)param_1 + iVar2 + 0x1b) != '\0')) goto LAB_ram_4808c1fc;
  if (*(char *)((int)param_1 + iVar2 + 0xf) == '\0') {
    uVar1 = param_1[2];
    if (((uint)param_1[1] < uVar1) || (param_1[1] - uVar1 < 2)) goto LAB_ram_4808c1fc;
    *(undefined1 *)(*param_1 + uVar1) = 0x2c;
    iVar2 = param_1[2];
    param_1[2] = iVar2 + 1;
    *(undefined1 *)(iVar2 + 1 + *param_1) = 0;
    if ((char)param_1[10] == '\0') goto LAB_ram_4808c1fc;
  }
  uVar1 = param_1[2];
  if ((uVar1 <= (uint)param_1[1]) && (1 < param_1[1] - uVar1)) {
    *(undefined1 *)(*param_1 + uVar1) = 0x7b;
    iVar2 = param_1[2];
    param_1[2] = iVar2 + 1;
    *(undefined1 *)(iVar2 + 1 + *param_1) = 0;
    iVar2 = param_1[3];
    *(undefined1 *)((int)param_1 + iVar2 + 0xf) = 0;
    *(undefined1 *)((int)param_1 + iVar2 + 0x10) = 1;
    *(undefined1 *)((int)param_1 + iVar2 + 0x1c) = 1;
    param_1[3] = iVar2 + 1;
    return;
  }
LAB_ram_4808c1fc:
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


