/* Firmware entry: 0x48170b9e */

undefined4 FUN_ram_48170b9e(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(int *)(param_1 + 4) < 0x1b) && (*(int *)(param_1 + 0x40) != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x40) + 0x14);
                    /* WARNING: Could not recover jumptable at 0x48170bb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (param_1,*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x88),
                       *(int *)(param_1 + 4),UNRECOVERED_JUMPTABLE);
    return uVar1;
  }
  return 0;
}


