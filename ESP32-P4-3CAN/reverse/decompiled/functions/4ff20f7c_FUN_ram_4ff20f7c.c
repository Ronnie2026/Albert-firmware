/* Firmware entry: 0x4ff20f7c */

void FUN_ram_4ff20f7c(uint param_1)

{
  uint uVar1;
  
  uVar1 = mstatus;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  mstatus = mstatus & 0xfffffff7;
  esprv_intc_int_enable(1 << (param_1 & 0x1f));
  mstatus = mstatus | uVar1 & 8;
  return;
}


