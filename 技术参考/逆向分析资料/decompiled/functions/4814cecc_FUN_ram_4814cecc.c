/* Firmware entry: 0x4814cecc */

void FUN_ram_4814cecc(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
                    /* WARNING: Could not recover jumptable at 0x4814ced2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 4))(param_1,*(undefined4 *)(param_1 + 0x10));
  return;
}


