/* Firmware entry: 0x4802bc72 */

void FUN_ram_4802bc72(int *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
                    /* WARNING: Could not recover jumptable at 0x4802bc76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


