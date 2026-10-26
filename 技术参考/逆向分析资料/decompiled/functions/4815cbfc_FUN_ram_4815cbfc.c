/* Firmware entry: 0x4815cbfc */

undefined4 FUN_ram_4815cbfc(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 100) == 1) {
    uVar1 = FUN_ram_4815caba();
    return uVar1;
  }
  return 0x1101;
}


