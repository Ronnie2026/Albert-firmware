/* Firmware entry: 0x48158b6e */

undefined4 FUN_ram_48158b6e(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == (undefined1 *)0x0) || (iVar7 = *(int *)(param_1 + 0x10), iVar7 == 0)) {
    uVar6 = 0x5002;
  }
  else if ((*(char **)(param_1 + 0x20) == (char *)0x0) ||
          (uVar6 = 0x106, **(char **)(param_1 + 0x20) == '\0')) {
    if ((*(byte *)(iVar7 + 0xe7) & 1) == 0) {
      uVar1 = *param_1;
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      uVar4 = param_1[4];
      uVar5 = param_1[5];
      param_2[1] = param_1[1];
      *param_2 = uVar1;
      param_2[2] = uVar2;
      param_2[3] = uVar3;
      param_2[4] = uVar4;
      param_2[5] = uVar5;
      return 0;
    }
    uVar1 = *(undefined1 *)(iVar7 + 0xe0);
    uVar2 = *(undefined1 *)(iVar7 + 0xe1);
    uVar3 = *(undefined1 *)(iVar7 + 0xe3);
    uVar4 = *(undefined1 *)(iVar7 + 0xe4);
    uVar5 = *(undefined1 *)(iVar7 + 0xe5);
    param_2[2] = *(undefined1 *)(iVar7 + 0xe2);
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[3] = uVar3;
    param_2[4] = uVar4;
    param_2[5] = uVar5;
    return 0;
  }
  return uVar6;
}


