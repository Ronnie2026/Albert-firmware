/* Firmware entry: 0x48033974 */

void FUN_ram_48033974(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(byte *)(param_1 + 0x2c) == param_2) {
    iVar3 = 0x88c;
    iVar4 = 0;
  }
  else if (*(byte *)(param_1 + 0x35a4) == param_2) {
    iVar3 = 0x3e04;
    iVar4 = 1;
  }
  else {
    if (*(byte *)(param_1 + 0x6b1c) != param_2) {
      return;
    }
    iVar3 = 0x737c;
    iVar4 = 2;
  }
  iVar3 = iVar3 + param_1;
  FUN_ram_4ff3ec14(iVar3,0xffffffff);
  iVar1 = iVar4 * 0x3578 + param_1;
  uVar2 = (undefined1)param_4;
  if (((param_3 == *(int *)(iVar1 + 0x858)) && (*(byte *)(iVar1 + 0x85c) == param_4)) &&
     (*(char *)(iVar1 + 0x85e) == '\0')) {
    FUN_ram_4ff3ee10(iVar3);
    if (param_2 == 2) {
      fence();
      *(undefined1 *)(param_1 + 0x18d90) = uVar2;
    }
  }
  else {
    iVar4 = iVar4 * 0x3578 + param_1;
    *(int *)(iVar4 + 0x858) = param_3;
    *(undefined1 *)(iVar4 + 0x85c) = uVar2;
    *(undefined1 *)(iVar4 + 0x85e) = 0;
    FUN_ram_4ff3ee10(iVar3);
    if (param_2 == 2) {
      fence();
      *(undefined1 *)(param_1 + 0x18d90) = uVar2;
    }
    if (*(byte *)(param_1 + 0x2c) == param_2) {
      iVar3 = 0x88c;
      iVar4 = 0;
    }
    else if (*(byte *)(param_1 + 0x35a4) == param_2) {
      iVar3 = 0x3e04;
      iVar4 = 1;
    }
    else {
      if (*(byte *)(param_1 + 0x6b1c) != param_2) {
        return;
      }
      iVar3 = 0x737c;
      iVar4 = 2;
    }
    FUN_ram_4ff3ec14(param_1 + iVar3,0xffffffff);
    iVar4 = *(int *)(param_1 + iVar4 * 0x3578 + 0x580);
    FUN_ram_4ff3ee10(param_1 + iVar3);
    if (iVar4 != 0) {
      FUN_ram_4ff3e004(iVar4,0,0,2,0);
      return;
    }
  }
  return;
}


