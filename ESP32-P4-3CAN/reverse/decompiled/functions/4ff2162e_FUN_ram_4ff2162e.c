/* Firmware entry: 0x4ff2162e */

void FUN_ram_4ff2162e(int *param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_1 = 0;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47dfc,0xffffffff);
  if (*param_1 != 0) {
    FUN_ram_4ff3ee10(&DAT_ram_4ff47dfc);
    return;
  }
  iVar1 = FUN_ram_4ff3b144(4);
  if (iVar1 != 0) {
    *param_1 = iVar1;
    FUN_ram_4ff3ee10(&DAT_ram_4ff47dfc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e06();
}


