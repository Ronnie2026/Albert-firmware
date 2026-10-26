/* Firmware entry: 0x4ff216e6 */

void FUN_ram_4ff216e6(int *param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff3d9d2();
  if (iVar1 == 1) {
    return;
  }
  if (*param_1 != 0) {
    if ((DAT_csreg_0347 >> 5 & 7) == 0 && DAT_csreg_0fb1 >> 0x1d == 0) {
      FUN_ram_4ff3b1a4();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e06();
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("locks.c",0xc4,"lock_release_generic","h");
}


