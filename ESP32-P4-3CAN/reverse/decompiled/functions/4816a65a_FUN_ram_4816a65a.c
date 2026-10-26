/* Firmware entry: 0x4816a65a */

undefined4 FUN_ram_4816a65a(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar1 = 0xffffffff;
    if (*(int *)(param_1 + 0x3c) != 0) {
      return *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x6c);
    }
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x6c);
  }
  return uVar1;
}


