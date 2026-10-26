/* Firmware entry: 0x4ff36cc4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff36cc4(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff20fa2(0x19);
  intr_matrix_set(0,0x53,0x19);
  esprv_intc_int_set_type(0x19,0);
  esprv_intc_int_set_priority(0x19,4);
  _DAT_ram_3ff10170 = 0x1f;
  _DAT_ram_3ff102f0 = 0x40;
  _DAT_ram_3ff1016c = _DAT_ram_3ff1016c | 0x1f;
  _DAT_ram_3ff102ec = _DAT_ram_3ff102ec | 0x40;
  FUN_ram_4ff20f7c(0x19);
  return;
}


