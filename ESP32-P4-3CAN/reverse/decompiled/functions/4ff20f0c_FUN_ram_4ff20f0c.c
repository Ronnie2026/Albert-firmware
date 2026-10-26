/* Firmware entry: 0x4ff20f0c */

void FUN_ram_4ff20f0c(void)

{
  uint uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ec14(&DAT_ram_4ff47dc8,0xffffffff);
  iVar2 = mhartid;
  uVar1 = mstatus;
  if ((&DAT_ram_4ff6d9b4)[mhartid] != '\0') {
    (&DAT_ram_4ff6d9b4)[mhartid] = '\0';
    mstatus = mstatus & 0xfffffff7;
    esprv_intc_int_enable();
    mstatus = mstatus | uVar1 & 8;
    FUN_ram_4ff20fca(iVar2);
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ee10(&DAT_ram_4ff47dc8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e06(*(undefined4 *)(&DAT_ram_4ff6d9b8 + mhartid * 4));
}


