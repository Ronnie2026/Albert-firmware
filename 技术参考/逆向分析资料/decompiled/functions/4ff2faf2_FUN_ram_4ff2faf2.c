/* Firmware entry: 0x4ff2faf2 */

/* WARNING: Removing unreachable block (ram,0x4ff2fb2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4ff2faf2(undefined4 param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff45682();
  if (iVar1 == 0) {
    _tdata1 = 0;
    _tselect = param_1;
  }
  else {
    ebreak();
  }
  return 0;
}


