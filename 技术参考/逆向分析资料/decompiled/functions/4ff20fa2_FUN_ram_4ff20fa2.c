/* Firmware entry: 0x4ff20fa2 */

void FUN_ram_4ff20fa2(uint param_1)

{
  uint uVar1;
  
  uVar1 = mstatus;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  mstatus = mstatus & 0xfffffff7;
  esprv_intc_int_disable(1 << (param_1 & 0x1f));
  mstatus = mstatus | uVar1 & 8;
  return;
}


