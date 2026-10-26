/* Firmware entry: 0x48155e2a */

void FUN_ram_48155e2a(int param_1)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 4) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    FUN_ram_4814268a(FUN_ram_48156044);
    return;
  }
  if (bVar1 < 5) {
    if (bVar1 == 2) {
      *(undefined1 *)(param_1 + 0x10) = 0;
      return;
    }
    if (bVar1 == 3) {
      *(undefined1 *)(param_1 + 0x10) = 1;
      UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 4) + 0x24);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x48155e6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      return;
    }
    return;
  }
  if (bVar1 < 9) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    FUN_ram_4814268a(FUN_ram_48156044);
    return;
  }
  if (bVar1 == 9) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 4) + 0x20);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      (*UNRECOVERED_JUMPTABLE)();
      *(undefined1 *)(param_1 + 0x10) = 1;
      return;
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
    return;
  }
  return;
}


