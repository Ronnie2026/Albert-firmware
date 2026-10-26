/* Firmware entry: 0x48156284 */

void FUN_ram_48156284(int param_1)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 4) {
    FUN_ram_4814268a(FUN_ram_48156044,param_1);
LAB_ram_481562e6:
    *(undefined1 *)(param_1 + 0x10) = 2;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(int *)(param_1 + 4) + 0x28);
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x481562fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(param_1);
      return;
    }
  }
  else {
    if (bVar1 < 5) {
      if (bVar1 == 2) goto LAB_ram_481562e6;
      if (bVar1 != 3) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
    }
    else {
      if (8 < bVar1) {
        if (bVar1 != 9) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return;
        }
        FUN_ram_4815612c(param_1,5);
        return;
      }
      FUN_ram_4814268a(FUN_ram_48156044,param_1);
    }
    *(undefined1 *)(param_1 + 0x10) = 3;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(int *)(param_1 + 4) + 0x28);
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x481562c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(param_1);
      return;
    }
  }
  return;
}


