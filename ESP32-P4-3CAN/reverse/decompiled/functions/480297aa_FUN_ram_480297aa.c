/* Firmware entry: 0x480297aa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_480297aa(void)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = 1;
  if (-1 < (int)_DAT_ram_5008d014) {
    uVar1 = (_DAT_ram_5008d014 >> 0x10) + 1 & 0xff;
  }
  return uVar1;
}


