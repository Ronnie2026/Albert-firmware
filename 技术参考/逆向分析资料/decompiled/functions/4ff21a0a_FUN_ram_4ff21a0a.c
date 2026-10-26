/* Firmware entry: 0x4ff21a0a */

void FUN_ram_4ff21a0a(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = DAT_ram_4ff59fc4;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4fc00234(&DAT_ram_4ff59fc0,0);
                    /* WARNING: Could not recover jumptable at 0x4ff21a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


