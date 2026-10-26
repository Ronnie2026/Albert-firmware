/* Firmware entry: 0x481a9e8e */

undefined4 FUN_ram_481a9e8e(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 0x20) {
    return *(undefined4 *)(&DAT_ram_4ff6c1e4 + (param_1 + mhartid * 0x20) * 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("interrupt_clic.h",0x81,"assert_valid_rv_int_num",
                   "rv_int_num < RV_EXTERNAL_INT_COUNT && \"Invalid CPU interrupt number\"");
}


