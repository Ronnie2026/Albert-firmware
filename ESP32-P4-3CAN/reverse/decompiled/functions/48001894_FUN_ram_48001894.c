/* Firmware entry: 0x48001894 */

void FUN_ram_48001894(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff20fa2(0x1c);
  intr_matrix_set(param_1,param_1 + 0x51,0x1c);
  esprv_intc_int_set_type(0x1c,0);
  esprv_intc_int_set_priority(0x1c,4);
  FUN_ram_4ff20f7c(0x1c);
  return;
}


