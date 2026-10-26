/* Firmware entry: 0x4802fb02 */

void FUN_ram_4802fb02(void)

{
  uint uVar1;
  
  uVar1 = DAT_ram_4ff6dc40;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff6dc40 = DAT_ram_4ff6dc40 & 0xffffff00;
  if (((uVar1 & 0xff) != 0) && (DAT_ram_4ff6dc50 != 0)) {
    FUN_ram_4ff3e004(DAT_ram_4ff6dc50,0,0,2,0);
    return;
  }
  return;
}


