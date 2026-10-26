/* Firmware entry: 0x48131786 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_48131786(void)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_481316c8();
  return ((uVar1 / ((_DAT_ram_500e6008 & 0xff) + 1)) / ((_DAT_ram_500e6008 >> 0x18) + 1)) /
         ((_DAT_ram_500e600c >> 0x10 & 0xff) + 1);
}


