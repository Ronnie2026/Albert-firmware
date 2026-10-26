/* Firmware entry: 0x4ff2fb9a */

/* WARNING: Removing unreachable block (ram,0x4ff2fbee) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4ff2fb9a(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff45682();
  if (iVar1 == 0) {
    _DAT_csreg_07a5 = 0x88;
    _tdata1 = 0x4c;
    _tselect = param_1;
    _tdata2 = param_2;
  }
  else {
    ebreak();
  }
  return 0;
}


