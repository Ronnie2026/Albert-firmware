/* Firmware entry: 0x48121ef0 */

int FUN_ram_48121ef0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    iVar4 = (*(byte *)(param_1 + 0x1f) & 0x7f) + param_3;
    iVar1 = FUN_ram_4802a79a(param_1 + 0x10,iVar4 + 1);
  }
  else {
    iVar4 = param_3;
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar4 = *(int *)(param_1 + 0x18) + param_3;
    }
    iVar1 = FUN_ram_4802a79a(param_1 + 0x10,iVar4 + 1);
  }
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = param_1 + 0x10;
  if (*(char *)(param_1 + 0x1f) < '\0') {
    uVar3 = *(byte *)(param_1 + 0x1f) & 0x7f;
    iVar2 = iVar1;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  FUN_ram_4ff45158(iVar2 + uVar3,param_2,param_3);
  if (*(char *)(param_1 + 0x1f) < '\0') {
    *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) & 0x80 | (byte)iVar4 & 0x7f;
    *(undefined1 *)(param_1 + iVar4 + 0x10) = 0;
  }
  else {
    *(int *)(param_1 + 0x18) = iVar4;
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar1 = 0;
      goto LAB_ram_48121f92;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar4) = 0;
  }
  if (-1 < *(char *)(param_1 + 0x1f)) {
    iVar1 = *(int *)(param_1 + 0x10);
  }
LAB_ram_48121f92:
  *(undefined1 *)(iVar1 + iVar4) = 0;
  return param_3;
}


