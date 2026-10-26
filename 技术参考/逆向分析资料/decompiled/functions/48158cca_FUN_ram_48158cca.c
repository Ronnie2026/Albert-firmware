/* Firmware entry: 0x48158cca */

void FUN_ram_48158cca(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
                    /* WARNING: Could not recover jumptable at 0x48158cce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x34))(*(undefined4 *)(param_1 + 0x28));
  return;
}


