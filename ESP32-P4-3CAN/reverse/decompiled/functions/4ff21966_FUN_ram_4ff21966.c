/* Firmware entry: 0x4ff21966 */

void FUN_ram_4ff21966(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("locks.c",0x13f,"check_lock_nonzero",
                     "lock != NULL && \"Uninitialized lock used\"");
  }
  iVar1 = FUN_ram_4ff3d9d2();
  if (iVar1 != 1) {
    if ((DAT_csreg_0347 >> 5 & 7) == 0 && DAT_csreg_0fb1 >> 0x1d == 0) {
      FUN_ram_4ff3b1a4(param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e06();
  }
  return;
}


