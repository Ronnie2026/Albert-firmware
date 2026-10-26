/* Firmware entry: 0x4ff2c900 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff2c900(uint *param_1)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (mhartid == 0) {
    _DAT_ram_500e5010 = 0;
  }
  else {
    _DAT_ram_500e5014 = 0;
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff47f20,0xffffffff);
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_ram_4ff3ee10(&DAT_ram_4ff47f20);
  if ((uVar1 & 1) != 0) {
    FUN_ram_4ff3f038();
  }
  if ((uVar1 & 4) != 0) {
    FUN_ram_4ff2cc60(100);
  }
  if ((uVar1 & 0x10) != 0) {
    FUN_ram_48130792(0);
    return;
  }
  return;
}


