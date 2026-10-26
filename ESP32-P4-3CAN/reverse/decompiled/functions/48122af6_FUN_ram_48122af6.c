/* Firmware entry: 0x48122af6 */

void FUN_ram_48122af6(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a59e(param_1 + 0x38);
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x48122b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x24))(param_1 + 0x1c,param_1 + 0x1c,3);
    return;
  }
  return;
}


