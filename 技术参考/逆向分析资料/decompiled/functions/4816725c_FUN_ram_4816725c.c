/* Firmware entry: 0x4816725c */

undefined4 FUN_ram_4816725c(int param_1)

{
  undefined4 uVar1;
  int aiStack_14 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(uint *)(param_1 + 0x80) < 2) {
    return 0;
  }
  aiStack_14[0] = param_1;
  uVar1 = FUN_ram_48193390(*(undefined4 *)(param_1 + 0x1c));
  if (*(code **)(param_1 + 0x84) != (code *)0x0) {
    *(undefined4 *)(param_1 + 0xa0) = uVar1;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x98) = 6;
    (**(code **)(param_1 + 0x84))(param_1 + 0x98);
  }
  FUN_ram_481667a6(6,aiStack_14,4);
  *(undefined4 *)(aiStack_14[0] + 0x80) = 1;
  uVar1 = FUN_ram_48193340(*(undefined4 *)(aiStack_14[0] + 0x1c));
  return uVar1;
}


