/* Firmware entry: 0x4ff3280a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff3280a(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = *param_1;
  if ((_DAT_ram_50111040 & 3) == 1) {
    if (iVar3 == 0) {
      FUN_ram_4ff210fc(param_1[5],param_1[2],0);
    }
    else {
      if (iVar3 == 1) goto LAB_ram_4ff328d6;
      if (iVar3 != 2) {
        return;
      }
      FUN_ram_4ff3218a();
    }
    _DAT_ram_501150cc = _DAT_ram_501150cc | 0x882;
    DAT_ram_4ff6d9d4 = 0;
    return;
  }
  if (iVar3 == 0) {
    FUN_ram_4ff210fc(param_1[5],param_1[2],0);
    return;
  }
  if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    FUN_ram_4ff3218a();
    return;
  }
  FUN_ram_4ff3277c(8);
  _DAT_ram_501150cc = _DAT_ram_501150cc | 0x8820000;
LAB_ram_4ff328d6:
  if (param_1[1] != DAT_ram_4ff6d9d4) {
    iVar3 = FUN_ram_4ff211de();
    FUN_ram_4ff210fc(iVar3,1,0);
    iVar4 = param_1[1];
    iVar2 = FUN_ram_4ff311d8(0x38);
    if (iVar2 == 0) {
      _DAT_ram_50120000 = _DAT_ram_50120000 | 0x8000000;
    }
    FUN_ram_4ff31206(0x38,iVar2);
    _DAT_ram_500e60bc = _DAT_ram_500e60bc & 0xfffffff7;
    if (iVar3 != 0x28) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88(s__IDF_components_hal_esp32p4_incl_ram_4ff54eac,0x180,
                       s_clk_ll_cpll_set_config_ram_4ff53da4,
                       s_xtal_freq_mhz____SOC_XTAL_FREQ_4_ram_4ff54f9c);
    }
    iVar3 = FUN_ram_4ff20626();
    if (iVar3 == 0) {
      cVar1 = (iVar4 == 400) + '\x05';
    }
    else {
      cVar1 = (iVar4 == 400) + '\t';
    }
    FUN_ram_4ff32060();
    FUN_ram_4ff2ceac(0x67,0,2,0x50);
    FUN_ram_4ff2ceac(0x67,0,3,cVar1);
    FUN_ram_4ff2ceac(0x67,0,6,0x73);
    FUN_ram_4ff32076();
    do {
    } while ((_DAT_ram_500e60bc & 4) == 0);
    ets_delay_us(10);
    _DAT_ram_500e60bc = _DAT_ram_500e60bc | 8;
    iVar3 = FUN_ram_4ff31254(0x38);
    if (iVar3 == 0) {
      _DAT_ram_50120000 = _DAT_ram_50120000 & 0xf7ffffff;
    }
    FUN_ram_4ff31288(0x38,iVar3);
    DAT_ram_4ff6d9d4 = iVar4;
  }
  FUN_ram_4ff32230(param_1[5],param_1 + 2);
  FUN_ram_4ff3277c(9);
  return;
}


