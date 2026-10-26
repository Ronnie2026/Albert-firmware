/* Firmware entry: 0x48166caa */

void FUN_ram_48166caa(int param_1)

{
  int aiStack_14 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(int *)(param_1 + 0x3c) != 0) && (*(int *)(param_1 + 0x40) != 0)) {
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0x3c);
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0x40);
    aiStack_14[0] = param_1;
    if (*(code **)(param_1 + 0x84) != (code *)0x0) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0xa4) = 0;
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x98) = 3;
      (**(code **)(param_1 + 0x84))(param_1 + 0x98);
    }
    FUN_ram_481667a6(3,aiStack_14,4);
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(aiStack_14[0] + 0x3c));
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(aiStack_14[0] + 0x40));
    *(undefined4 *)(aiStack_14[0] + 0x3c) = 0;
    *(undefined4 *)(aiStack_14[0] + 0x40) = 0;
  }
  return;
}


