/* Firmware entry: 0x4ff3208a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff3208a(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ec14(&DAT_ram_4ff47de8,0xffffffff);
  DAT_ram_4ff6d9d8 = DAT_ram_4ff6d9d8 + -1;
  if (DAT_ram_4ff6d9d8 < 0) {
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ee10(&DAT_ram_4ff47de8);
    if (DAT_ram_4ff47dac != 0) {
      uVar1 = FUN_ram_4ff44d14();
      ets_printf(s_E___lu___s__REGI2C_SARADC_is_alr_ram_4ff55150,uVar1,
                 PTR_s_REGI2C_ram_481b2b34_ram_4ff4bd38);
    }
  }
  else if (DAT_ram_4ff6d9d8 == 0) {
    _DAT_ram_5011515c = _DAT_ram_5011515c & 0xf7ffffff;
  }
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ee10(&DAT_ram_4ff47de8);
  return;
}


