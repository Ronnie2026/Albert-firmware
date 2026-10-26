/* Firmware entry: 0x48155eb2 */

void FUN_ram_48155eb2(int param_1)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 3) {
LAB_ram_48155ef2:
    bVar1 = *(byte *)(param_1 + 0x11);
  }
  else {
    if (bVar1 < 4) {
      if (bVar1 == 0) {
        *(undefined1 *)(param_1 + 0x10) = 1;
        UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 4) + 0x24);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x48155f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      if (bVar1 != 2) {
        return;
      }
      goto LAB_ram_48155ed0;
    }
    if (bVar1 != 4) {
      if (bVar1 != 9) {
        return;
      }
      goto LAB_ram_48155ef2;
    }
    *(undefined1 *)(param_1 + 0x10) = 5;
    bVar1 = *(byte *)(param_1 + 0x11);
  }
  if ((bVar1 & 2) == 0) {
    return;
  }
  FUN_ram_48155e2a(param_1);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 2;
    return;
  }
  if (*(char *)(param_1 + 0x10) != '\x01') {
    return;
  }
LAB_ram_48155ed0:
  if ((*(byte *)(param_1 + 0x11) & 4) == 0) {
    FUN_ram_48155c50(param_1,0);
    *(undefined1 *)(param_1 + 0x10) = 6;
  }
  else {
    *(undefined1 *)(param_1 + 0x10) = 3;
  }
  return;
}


