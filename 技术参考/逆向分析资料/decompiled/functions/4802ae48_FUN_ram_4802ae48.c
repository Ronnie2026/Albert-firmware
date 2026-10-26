/* Firmware entry: 0x4802ae48 */

undefined4 FUN_ram_4802ae48(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != param_1) {
    if (-1 < *(char *)((int)param_2 + 0xf)) {
      uVar3 = FUN_ram_4802ad72(param_1,*param_2,param_2[2]);
      return uVar3;
    }
    uVar3 = FUN_ram_4802ad72(param_1,param_2,*(byte *)((int)param_2 + 0xf) & 0x7f);
    return uVar3;
  }
  if (*(char *)((int)param_2 + 0xf) < '\0') {
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) == 0) {
      return 1;
    }
  }
  else {
    if (param_1[2] == 0) {
      return 1;
    }
    if (*param_1 == 0) {
      return 0;
    }
  }
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    uVar1 = *(byte *)((int)param_1 + 0xf) & 0x7f;
  }
  else {
    uVar1 = param_1[2];
  }
  iVar2 = uVar1 * 2;
  iVar4 = FUN_ram_4802a79a(param_1,iVar2);
  if (iVar4 != 0) {
    if (*(char *)((int)param_1 + 0xf) < '\0') {
      uVar1 = *(byte *)((int)param_1 + 0xf) & 0x7f;
      piVar5 = param_1;
    }
    else {
      uVar1 = param_1[2];
      piVar5 = (int *)*param_1;
    }
    FUN_ram_4ff4522c((int)piVar5 + uVar1);
    if (*(char *)((int)param_1 + 0xf) < '\0') {
      *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0x80 | (byte)iVar2 & 0x7f;
      *(undefined1 *)(iVar2 + (int)param_1) = 0;
    }
    else {
      param_1[2] = iVar2;
      if (*param_1 != 0) {
        *(undefined1 *)(*param_1 + iVar2) = 0;
      }
    }
    return 1;
  }
  return 0;
}


