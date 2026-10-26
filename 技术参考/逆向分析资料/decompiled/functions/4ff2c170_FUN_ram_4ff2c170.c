/* Firmware entry: 0x4ff2c170 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4ff2c170(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  _DAT_ram_5008d010 = _DAT_ram_5008d010 & 0x7fffffff;
  _DAT_ram_5008c010 = _DAT_ram_5008c010 & 0x7fffffff;
  FUN_ram_4ff2befc(5,0,0,0,0,0,0);
  if ((_DAT_ram_5008d000 & 0xf) == 0) {
    FUN_ram_4ff2befc(0x66,0,0,0,0,0,0);
    FUN_ram_4ff2befc(0x99,0,0,0,0,0,0);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


