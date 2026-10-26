/* Firmware entry: 0x4817069a */

uint FUN_ram_4817069a(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar3 = *(code **)(param_1 + 0x20);
  if (pcVar3 == (code *)0x0) {
    return 0xffff8f00;
  }
  iVar2 = *(int *)(param_1 + 0xbc);
  if (iVar2 != 0) {
    while( true ) {
      uVar1 = (*pcVar3)(*(undefined4 *)(param_1 + 0x2c),*(int *)(param_1 + 0xa4) - iVar2);
      if ((int)uVar1 < 1) {
        return uVar1;
      }
      iVar2 = *(uint *)(param_1 + 0xbc) - uVar1;
      if (*(uint *)(param_1 + 0xbc) < uVar1) {
        return 0xffff9400;
      }
      *(int *)(param_1 + 0xbc) = iVar2;
      if (iVar2 == 0) break;
      pcVar3 = *(code **)(param_1 + 0x20);
    }
    iVar4 = *(int *)(param_1 + 0x9c);
    iVar2 = *(int *)(param_1 + 0x48);
    iVar5 = iVar4 + 0xd;
    *(int *)(param_1 + 0xa4) = iVar4 + 8;
    *(int *)(param_1 + 0xa8) = iVar4 + 0xb;
    *(int *)(param_1 + 0xac) = iVar5;
    *(int *)(param_1 + 0xb0) = iVar5;
    if (iVar2 != 0) {
      *(int *)(param_1 + 0xb0) = iVar5 + (*(int *)(iVar2 + 4) - *(int *)(iVar2 + 8));
    }
  }
  return 0;
}


