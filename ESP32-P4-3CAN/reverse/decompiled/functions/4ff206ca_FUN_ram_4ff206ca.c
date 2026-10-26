/* Firmware entry: 0x4ff206ca */

void FUN_ram_4ff206ca(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6d9ac != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4ff206d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_ram_4ff6d9ac)();
    return;
  }
  return;
}


