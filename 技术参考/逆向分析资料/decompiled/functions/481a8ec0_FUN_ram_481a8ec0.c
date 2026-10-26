/* Firmware entry: 0x481a8ec0 */

void FUN_ram_481a8ec0(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
                    /* WARNING: Could not recover jumptable at 0x481a8ec2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x34))();
  return;
}


