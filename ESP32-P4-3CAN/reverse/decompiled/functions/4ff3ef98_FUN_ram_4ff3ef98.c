/* Firmware entry: 0x4ff3ef98 */

undefined4 FUN_ram_4ff3ef98(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  mstatus = mstatus & 0xffff9fff;
  DAT_csreg_07f2 = 0;
  DAT_csreg_07f1 = 1;
  *(undefined4 *)(&DAT_ram_4ff6da74 + mhartid * 4) = 0;
  *(undefined4 *)(&DAT_ram_4ff6da6c + mhartid * 4) = 0;
  (&DAT_ram_4ff6da7c)[mhartid] = 0;
  DAT_ram_4ff6da50 = &DAT_ram_4ff59e80;
  DAT_ram_4ff6da4c = &DAT_ram_4ff59650;
  (&DAT_ram_4ff6da54)[mhartid] = 0;
  DAT_ram_4ff6da48 = &DAT_ram_4ff59650;
  DAT_ram_4ff6da44 = &DAT_ram_4ff58e20;
  thunk_FUN_ram_4ff3f8fc();
  esprv_intc_int_set_threshold(0);
  mstatus = mstatus | 8;
  FUN_ram_4ff3ef0e();
  return 1;
}


