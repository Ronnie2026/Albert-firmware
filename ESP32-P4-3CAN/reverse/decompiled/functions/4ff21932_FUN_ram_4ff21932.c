/* Firmware entry: 0x4ff21932 */

void FUN_ram_4ff21932(int param_1)

{
  int aiStack_14 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  aiStack_14[0] = param_1;
  if (param_1 != 0) {
    FUN_ram_4ff21590(aiStack_14,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("locks.c",0x13f,"check_lock_nonzero",
                   "lock != NULL && \"Uninitialized lock used\"");
}


