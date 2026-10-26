/* Firmware entry: 0x4814cec2 */

void FUN_ram_4814cec2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0xc) + 0xc);
                    /* WARNING: Could not recover jumptable at 0x4814ceca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,*(undefined4 *)(param_1 + 0x10),param_2,param_4,*(int *)(param_1 + 0xc),
             UNRECOVERED_JUMPTABLE);
  return;
}


