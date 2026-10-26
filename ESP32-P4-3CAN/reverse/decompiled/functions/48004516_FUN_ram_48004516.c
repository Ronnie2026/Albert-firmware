/* Firmware entry: 0x48004516 */

int FUN_ram_48004516(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0x102;
  }
  if (param_2 < 1) {
    return 0x102;
  }
  if (7 < param_3) {
    return 0x102;
  }
  if (param_4 < 0x40) {
    FUN_ram_4ff216dc(&DAT_ram_4ff4bdfc);
    if ((DAT_ram_4ff4bdf4 & 0xf) == 0) {
      iVar1 = FUN_ram_480041b8(&DAT_ram_481e46ec,1,7,0xffffffff);
      FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    else {
      FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
    }
    FUN_ram_4ff216dc(&DAT_ram_4ff4bdfc);
    iVar1 = FUN_ram_4800445e(param_3,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_480041b8(param_1,param_2,param_3,param_4);
      if (iVar1 != 0) {
        FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
        return iVar1;
      }
      iVar1 = FUN_ram_4800445e(param_3,param_4);
      if (iVar1 == 0) {
        (&DAT_ram_4ff4bd3c)[(param_4 >> 5) + 0x34] =
             1 << (param_4 & 0x1f) | (&DAT_ram_4ff4bd3c)[(param_4 >> 5) + 0x34];
        FUN_ram_48003bbc();
        FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
        FUN_ram_4ff31e54();
        iVar1 = FUN_ram_481a6030(&LAB_ram_4ff31eb4);
        if (iVar1 == 0) {
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff36e1a(iVar1,"/IDF/components/esp_hw_support/sleep_retention.c",0x28a,
                         "sleep_retention_entries_create",
                         "esp_deep_sleep_register_hook(&pmu_sleep_disable_regdma_backup)");
      }
    }
    FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
    return 0x101;
  }
  return 0x102;
}


