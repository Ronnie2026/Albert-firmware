/* Firmware entry: 0x4ff41254 */

void FUN_ram_4ff41254(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
                    /* WARNING: Could not recover jumptable at 0x4ff41256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))();
  return;
}


