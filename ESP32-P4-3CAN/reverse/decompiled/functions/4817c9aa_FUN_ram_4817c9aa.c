/* Firmware entry: 0x4817c9aa */

int FUN_ram_4817c9aa(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar1 = 1;
    if (*(int *)(param_1 + 0xd4) == 7) {
      iVar2 = FUN_ram_481876e6(*(undefined2 *)(param_1 + 0xd8));
      uVar1 = 0;
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    *(undefined4 *)(param_1 + 0xd0) = uVar1;
    *(undefined4 *)(param_1 + 0xdc) = 1;
  }
  else if (*(int *)(param_1 + 0xdc) == 1) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    thunk_FUN_ram_4818b708(*(undefined4 *)(param_1 + 0xd4),param_1 + 0x10);
  }
  return 0;
}


