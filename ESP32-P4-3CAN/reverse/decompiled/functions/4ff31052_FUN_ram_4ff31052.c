/* Firmware entry: 0x4ff31052 */

void FUN_ram_4ff31052(void)

{
  undefined4 uVar1;
  undefined4 uStack_15c;
  undefined1 auStack_158 [128];
  undefined4 auStack_d8 [49];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (2 < DAT_ram_4ff47dac) {
    uVar1 = FUN_ram_4ff44d14();
    ets_printf(s_I___lu___s__Enter_psram_timing_t_ram_4ff54d58,uVar1,s_MSPI_Timing_ram_4ff54d4c);
  }
  auStack_d8[0] = 0;
  FUN_ram_4ff2c464(0,auStack_d8);
  FUN_ram_4ff30ebc(0x14,0,1);
  FUN_ram_4ff30e22(0x14,0,1);
  FUN_ram_4ff30cc2(1);
  FUN_ram_4ff30ab6(1);
  FUN_ram_4ff2c48a(0,auStack_d8[0]);
  FUN_ram_4ff306da(auStack_158,0x80);
  FUN_ram_4ff30714(auStack_158,0x80);
  memset(auStack_d8,0,0xb8);
  DAT_ram_4ff58b90 = &LAB_ram_4ff3088a;
  DAT_ram_4ff58b98 = FUN_ram_4ff308b2;
  DAT_ram_4ff58b9c = &LAB_ram_4ff3091e;
  DAT_ram_4ff58b88 = 1;
  DAT_ram_4ff58b70 = 1;
  DAT_ram_4ff58b8c = &LAB_ram_4ff306c2;
  DAT_ram_4ff58b94 = &LAB_ram_4ff307b4;
  FUN_ram_4ff3085a(auStack_d8);
  FUN_ram_4ff30ebe(auStack_158,auStack_d8);
  DAT_ram_4ff58b90 = &LAB_ram_4ff3093a;
  DAT_ram_4ff58b98 = (code *)&LAB_ram_4ff30a36;
  DAT_ram_4ff58b9c = &LAB_ram_4ff30aa8;
  DAT_ram_4ff58b70 = 100;
  DAT_ram_4ff58b8c = &LAB_ram_4ff306c2;
  DAT_ram_4ff58b94 = &LAB_ram_4ff307b4;
  DAT_ram_4ff58b88 = 2;
  FUN_ram_4ff3092a(auStack_d8);
  FUN_ram_4ff30ebe(auStack_158,auStack_d8);
  uStack_15c = 0;
  FUN_ram_4ff2c464(0,&uStack_15c);
  FUN_ram_4ff30ebc(0x50,1,1);
  FUN_ram_4ff30e22(200,1,1);
  FUN_ram_4ff30d38(1);
  FUN_ram_4ff30b44(1);
  FUN_ram_4ff2c48a(0,uStack_15c);
  return;
}


