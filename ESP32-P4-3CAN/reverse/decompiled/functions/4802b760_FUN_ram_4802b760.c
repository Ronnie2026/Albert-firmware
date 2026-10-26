/* Firmware entry: 0x4802b760 */

void FUN_ram_4802b760(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    uVar3 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    if (uVar3 <= param_2) {
      return;
    }
    if (param_3 == 0) {
      return;
    }
    piVar4 = param_1;
    uVar2 = uVar3 - param_2;
    if (param_3 < uVar3 - param_2) {
      uVar2 = param_3;
    }
  }
  else {
    uVar3 = param_1[2];
    if (uVar3 <= param_2) {
      return;
    }
    if (param_3 == 0) {
      return;
    }
    uVar2 = uVar3 - param_2;
    if (param_3 < uVar3 - param_2) {
      uVar2 = param_3;
    }
    piVar4 = (int *)*param_1;
  }
  iVar1 = uVar3 - uVar2;
  FUN_ram_4ff4522c((int)piVar4 + param_2,uVar2 + param_2 + (int)piVar4,iVar1 - param_2);
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0x80 | (byte)iVar1 & 0x7f;
    *(undefined1 *)((int)param_1 + iVar1) = 0;
  }
  else {
    param_1[2] = iVar1;
    piVar4 = (int *)0x0;
    if (*param_1 == 0) goto LAB_ram_4802b7bc;
    *(undefined1 *)(*param_1 + iVar1) = 0;
  }
  piVar4 = param_1;
  if (-1 < *(char *)((int)param_1 + 0xf)) {
    piVar4 = (int *)*param_1;
  }
LAB_ram_4802b7bc:
  *(undefined1 *)((int)piVar4 + iVar1) = 0;
  return;
}


