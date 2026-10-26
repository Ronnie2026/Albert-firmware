/* Firmware entry: 0x4ff21590 */

void FUN_ram_4ff21590(int *param_1,int param_2)

{
  int iVar1;
  int aiStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff3d9d2();
  if (iVar1 != 1) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("locks.c",0xc4,"lock_release_generic","h");
    }
    if ((DAT_csreg_0347 >> 5 & 7) == 0 && DAT_csreg_0fb1 >> 0x1d == 0) {
      if (param_2 != 4) {
        FUN_ram_4ff3afa2(iVar1,0,0,0);
        return;
      }
      FUN_ram_4ff3b1a4();
      return;
    }
    if (param_2 == 4) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e06();
    }
    aiStack_14[0] = 0;
    FUN_ram_4ff3b3d2(iVar1,aiStack_14);
    if (aiStack_14[0] != 0) {
      FUN_ram_4ff3f038();
      return;
    }
  }
  return;
}


