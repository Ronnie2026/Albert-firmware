/* Firmware entry: 0x48126e34 */

undefined4 FUN_ram_48126e34(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = FUN_ram_4ff3fdde(*(int *)(param_1 + 8),0);
    return uVar1;
  }
  return *(undefined4 *)(param_1 + 0xc);
}


