/* Firmware entry: 0x48130342 */

void FUN_ram_48130342(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_481a7138(&LAB_ram_4ff2cb24,mhartid);
  FUN_ram_4ff20fa2(0x18);
  intr_matrix_set(mhartid,0x33,0x18);
  esprv_intc_int_set_type(0x18,0);
  esprv_intc_int_set_priority(0x18,4);
  FUN_ram_4ff20f7c(0x18);
  return;
}


