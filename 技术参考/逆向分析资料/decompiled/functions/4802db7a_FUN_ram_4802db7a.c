/* Firmware entry: 0x4802db7a */

bool FUN_ram_4802db7a(undefined4 param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (DAT_ram_4ff6df04 != '\0') {
    if (DAT_ram_4ff6def4 != 0) {
      iVar1 = FUN_ram_4ff3afa2(DAT_ram_4ff6def4,param_1,0,0);
      if (iVar1 != 1) {
        DAT_ram_4ff6defc = DAT_ram_4ff6defc + 1;
      }
      return iVar1 == 1;
    }
    DAT_ram_4ff6defc = DAT_ram_4ff6defc + 1;
  }
  return false;
}


