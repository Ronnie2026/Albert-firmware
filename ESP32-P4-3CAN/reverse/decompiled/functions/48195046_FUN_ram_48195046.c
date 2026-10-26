/* Firmware entry: 0x48195046 */

void FUN_ram_48195046(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_a4;
  code *UNRECOVERED_JUMPTABLE;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_481952a4();
  if (iVar1 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(param_1 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x48195078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(int **)(param_1 + 8),param_2,param_3,param_4,extraout_a4,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}


