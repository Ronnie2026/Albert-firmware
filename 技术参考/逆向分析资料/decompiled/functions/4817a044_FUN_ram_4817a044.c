/* Firmware entry: 0x4817a044 */

undefined4 FUN_ram_4817a044(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x70) == 0) {
    uVar1 = FUN_ram_48179f52();
    return uVar1;
  }
  if (*(int *)(param_1 + 0x70) != 1) {
    return 0xffffbf00;
  }
  uVar1 = FUN_ram_48179df8();
  return uVar1;
}


