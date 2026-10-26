/* Firmware entry: 0x4802be26 */

void FUN_ram_4802be26(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
                    /* WARNING: Could not recover jumptable at 0x4802be30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2,param_1,param_3,param_4,*(code **)(*param_2 + 8));
  return;
}


