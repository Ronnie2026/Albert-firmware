/* Firmware entry: 0x481a7250 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_481a7250(void)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  iVar1 = mhartid;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff20fa2(0x1b);
  FUN_ram_4ff3122a();
  _DAT_ram_500e6014 = _DAT_ram_500e6014 | 0x40;
  _DAT_ram_3ff06108 = _DAT_ram_3ff06108 | 1;
  _DAT_ram_3ff06000 = _DAT_ram_3ff06000 & 0xfffffcff;
  _DAT_ram_3ff0600c = 0x300;
  _DAT_ram_3ff06038 = 0;
  _DAT_ram_3ff0603c = 0xffffffff;
  _DAT_ram_3ff06044 = 3;
  _DAT_ram_3ff06080 = _DAT_ram_3ff06080 & 0xfffffcff;
  _DAT_ram_3ff0608c = 0x300;
  _DAT_ram_3ff060b8 = 0;
  _DAT_ram_3ff060bc = 0xffffffff;
  _DAT_ram_3ff060c4 = 3;
  FUN_ram_4ff31240();
  intr_matrix_set(iVar1,0x7f,0x1b);
  esprv_intc_int_set_type(0x1b,0);
  esprv_intc_int_set_priority(0x1b,4);
  if (iVar1 == 0) {
    puVar3 = (uint *)&DAT_ram_3ff06008;
    uVar2 = _DAT_ram_3ff06008;
  }
  else {
    puVar3 = (uint *)&DAT_ram_3ff06088;
    uVar2 = _DAT_ram_3ff06088;
  }
  *puVar3 = uVar2 | 0x300;
  FUN_ram_4ff20f7c(0x1b);
  return 0;
}


