/* Firmware entry: 0x4ff3387c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff3387c(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47dd8,0xffffffff);
  DAT_ram_4ff6e2bc = DAT_ram_4ff6e2bc + -1;
  if (-1 < DAT_ram_4ff6e2bc) {
    if (DAT_ram_4ff6e2bc == 0) {
      _DAT_ram_5012f000 = _DAT_ram_5012f000 & 0xffbfffff;
      FUN_ram_4ff3122a();
      _DAT_ram_50120000 = _DAT_ram_50120000 & 0xfffdffff;
      FUN_ram_4ff31240();
      FUN_ram_4ff3208a();
    }
    FUN_ram_4ff3ee10(&DAT_ram_4ff47dd8);
    return;
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47dd8);
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,s_temperature_sensor_ram_4ff58100,
                   s_E___lu___s___s_called__but_s_tem_ram_4ff58114,uVar1,
                   s_temperature_sensor_ram_4ff58100,"temperature_sensor_power_release");
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e06();
}


