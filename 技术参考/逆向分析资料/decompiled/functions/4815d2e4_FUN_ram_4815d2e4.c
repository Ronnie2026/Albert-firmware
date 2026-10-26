/* Firmware entry: 0x4815d2e4 */

undefined4 FUN_ram_4815d2e4(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *(int *)(param_1 + 4);
  do {
    if (iVar2 == 0) {
      return 0x1107;
    }
    iVar3 = *(int *)(iVar2 + 8);
    bVar1 = param_2 != iVar2;
    iVar2 = iVar3;
  } while (bVar1);
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 == 0) {
    *(int *)(param_1 + 4) = iVar3;
  }
  else {
    *(int *)(iVar2 + 8) = iVar3;
  }
  if (iVar3 != 0) {
    *(int *)(iVar3 + 4) = iVar2;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    return 0;
  }
  *(int *)(param_1 + 8) = iVar2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return 0;
}


