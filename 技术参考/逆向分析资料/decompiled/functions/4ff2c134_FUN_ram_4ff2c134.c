/* Firmware entry: 0x4ff2c134 */

uint FUN_ram_4ff2c134(void)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff2befc(0x9f,0,0,0,0,0,0x18);
  return uVar1 & 0xff00 | (uVar1 & 0xff) << 0x10 | uVar1 >> 0x10 & 0xff;
}


