/* Firmware entry: 0x4ff203ce */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  int iVar1;
  int iStack_18;
  undefined4 uStack_14;
  
  iStack_18 = 1;
  uStack_14 = 1;
  iVar1 = FUN_ram_4ff45682();
  if (iVar1 != 0) {
    ets_delay_us(100000);
    ets_delay_us(100000);
  }
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_csreg_07c1 = DAT_csreg_07c1 | 0x1030;
  mtvec = &UNK_ram_4ff20003;
  _DAT_csreg_0307 = &PTR_DAT_ram_4ff20100_ram_4ff20040;
  iVar1 = rtc_get_reset_reason(0);
  iStack_18 = iVar1;
  uStack_14 = rtc_get_reset_reason(1);
  memset(&DAT_ram_4ff589e0,0,0x15920);
  if (iVar1 != 5) {
    memset(&DAT_ram_50108080,0,0);
  }
  FUN_ram_4ff40a4e();
  thunk_FUN_ram_4ff31690();
  FUN_ram_4ff2c79e();
  FUN_ram_4ff2c21a();
  FUN_ram_4ff203be();
  FUN_ram_4ff33cf6();
  iVar1 = FUN_ram_4ff37220();
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_ram_4ff34230();
    if (iVar1 == 0) {
      FUN_ram_4ff34062();
      FUN_ram_48000a02(&iStack_18);
                    /* WARNING: Could not recover jumptable at 0x4ff204d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&PTR_FUN_ram_480017bc_ram_481e3a18)[mhartid])();
      return;
    }
    if (DAT_ram_4ff47dac != 0) {
      ets_printf(s_E__s__Failed_to_init_external_RA_ram_4ff4bc58,"cpu_start");
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e06();
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff36e1a(iVar1,"/IDF/components/esp_system/port/cpu_start.c",0x25e,"mspi_init",
                   "image_process()");
}


