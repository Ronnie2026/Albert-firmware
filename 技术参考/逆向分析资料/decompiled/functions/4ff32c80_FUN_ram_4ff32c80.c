/* Firmware entry: 0x4ff32c80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff32c80(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 0) {
    iVar2 = FUN_ram_4ff311d8(0x38);
    if (iVar2 == 0) {
      _DAT_ram_50120000 = _DAT_ram_50120000 | 0x8000000;
    }
    FUN_ram_4ff31206(0x38,iVar2);
    FUN_ram_4ff32060();
  }
  else {
    _DAT_ram_50120000 = _DAT_ram_50120000 | 0x8000000;
  }
  _DAT_ram_500e60bc = _DAT_ram_500e60bc & 0xfffffdff;
  if (param_1 == 0x28) {
    bVar1 = FUN_ram_4ff2cdd6(99,0,3);
    FUN_ram_4ff2ceac(99,0,3,bVar1 | 0x30);
    bVar1 = FUN_ram_4ff2cdd6(99,0,1);
    FUN_ram_4ff2ceac(99,0,1,bVar1 & 0xdf);
    FUN_ram_4ff2ceac(99,0,1,bVar1 | 0x20);
    FUN_ram_4ff2ceac(99,0,2,(param_2 / 0x14 - 1) * 8 & 0xf9 | 1);
    do {
    } while ((_DAT_ram_500e60bc & 0x100) == 0);
    _DAT_ram_500e60bc = _DAT_ram_500e60bc | 0x200;
    if (param_3 == 0) {
      FUN_ram_4ff32076();
      iVar2 = FUN_ram_4ff31254(0x38);
      if (iVar2 == 0) {
        _DAT_ram_50120000 = _DAT_ram_50120000 & 0xf7ffffff;
      }
      FUN_ram_4ff31288(0x38,iVar2);
    }
    else {
      _DAT_ram_50120000 = _DAT_ram_50120000 & 0xf7ffffff;
    }
    DAT_ram_30100200 = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s__IDF_components_hal_esp32p4_incl_ram_4ff54eac,0x1c3,
                   s_clk_ll_mpll_set_config_ram_4ff53d8c,
                   s_xtal_freq_mhz____SOC_XTAL_FREQ_4_ram_4ff54f9c);
}


