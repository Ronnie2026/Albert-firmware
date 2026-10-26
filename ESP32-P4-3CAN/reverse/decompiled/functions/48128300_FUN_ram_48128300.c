/* Firmware entry: 0x48128300 */

void FUN_ram_48128300(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_ram_4ff3c10a();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_ram_4ff3ff7a();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    iStack_14 = 0;
    iVar1 = FUN_ram_4ff3b4aa(*(int *)(param_1 + 8),&iStack_14,0);
    while (iVar1 == 1) {
      if (iStack_14 == 0) {
        uVar2 = *(undefined4 *)(param_1 + 8);
      }
      else {
        thunk_FUN_ram_4ff209c6(iStack_14,0x34);
        uVar2 = *(undefined4 *)(param_1 + 8);
      }
      iVar1 = FUN_ram_4ff3b4aa(uVar2,&iStack_14,0);
    }
    FUN_ram_4ff3ba8e(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar1 != iVar3) {
    do {
      if (*(code **)(iVar1 + 0x10) != (code *)0x0) {
        (**(code **)(iVar1 + 0x10))(iVar1 + 8,iVar1 + 8,3);
      }
      iVar1 = iVar1 + 0x20;
    } while (iVar3 != iVar1);
    iVar3 = *(int *)(param_1 + 0x10);
  }
  if (iVar3 == 0) {
    return;
  }
  thunk_FUN_ram_4ff209c6(iVar3,*(int *)(param_1 + 0x18) - iVar3);
  return;
}


