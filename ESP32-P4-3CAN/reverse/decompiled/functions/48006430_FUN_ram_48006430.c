/* Firmware entry: 0x48006430 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48006430(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  _DAT_ram_4ffbffe0 = &DAT_ram_4ff4bb0c;
  DAT_ram_4ff4bb34 = FUN_ram_480063d4;
  DAT_ram_4ff4bb24 = 1;
  _DAT_ram_4ffbffe4 = &PTR_FUN_ram_4ff3e8de_ram_4ff480ac;
  DAT_ram_4ff4bb00 = 0;
  DAT_ram_4ff4bb04 = 0;
  PTR_DAT_ram_4ff6d654_ram_4ff4bb08 = (undefined *)0x0;
  PTR_DAT_ram_4ff6e2e4_ram_4ff47fb4 = (undefined *)thunk_FUN_ram_4ff2070c(4);
  if ((undefined4 *)PTR_DAT_ram_4ff6e2e4_ram_4ff47fb4 != (undefined4 *)0x0) {
    *(undefined4 *)PTR_DAT_ram_4ff6e2e4_ram_4ff47fb4 = 0;
    FUN_ram_48005c96();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e06();
}


