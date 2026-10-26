/* Firmware entry: 0x4ff21846 */

void FUN_ram_4ff21846(int *param_1)

{
  int *apiStack_14 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  apiStack_14[0] = param_1;
  if (param_1 != (int *)0x0) {
    if (*param_1 == -0x44ef3bcd) {
      apiStack_14[0] = (int *)&DAT_ram_4ff59f08;
    }
    FUN_ram_4ff21488(apiStack_14,0xffffffff,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("locks.c",0x13f,"check_lock_nonzero",
                   "lock != NULL && \"Uninitialized lock used\"");
}


