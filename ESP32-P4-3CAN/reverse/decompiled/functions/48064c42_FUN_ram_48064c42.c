/* Firmware entry: 0x48064c42 */

void FUN_ram_48064c42(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2[1] != 1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    *(undefined4 *)(param_1 + 8) = *param_2;
    *(undefined4 *)(param_1 + 0xc) = param_2[1];
    *(undefined4 *)(param_1 + 0x10) = param_2[2];
    *(undefined4 *)(param_1 + 0x14) = param_2[3];
    *(undefined4 *)(param_1 + 0x18) = param_2[4];
    *(undefined4 *)(param_1 + 0x1c) = param_2[5];
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    return;
  }
  uVar2 = FUN_ram_4ff21a0a();
  iVar1 = __divdi3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),1000,0);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(int *)(param_1 + 0x10) = iVar1;
  *(int *)(param_1 + 0x14) = iVar1 + 2000;
  *(int *)(param_1 + 0x18) = iVar1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}


