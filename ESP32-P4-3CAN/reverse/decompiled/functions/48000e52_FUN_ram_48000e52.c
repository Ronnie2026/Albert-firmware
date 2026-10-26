/* Firmware entry: 0x48000e52 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48000e52(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  undefined1 auStack_28 [32];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff211de();
  if (iVar1 != 0x28) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("clk.c",0x5c,"esp_clk_init","rtc_clk_xtal_freq_get() == SOC_XTAL_FREQ_40M");
  }
  FUN_ram_4ff325da(1);
  FUN_ram_4ff32716(0);
  uStack_44 = 0x50116000;
  uStack_48 = 0;
  uVar2 = FUN_ram_4ff326f4();
  FUN_ram_4fc00208(&uStack_48);
  FUN_ram_4fc0021c(&uStack_48);
  uVar3 = __udivdi3(uVar2 * 0x640,(int)((ulonglong)uVar2 * 0x640 >> 0x20),1000,0);
  FUN_ram_4ff36c30(&uStack_48,0,uVar3,4);
  FUN_ram_4fc0020c(&uStack_48);
  FUN_ram_48000d4e(0);
  iVar1 = FUN_ram_4ff326f4();
  FUN_ram_4fc00208(&uStack_48);
  FUN_ram_4fc0021c(&uStack_48);
  FUN_ram_4ff36c30(&uStack_48,0,iVar1 * 9,4);
  FUN_ram_4fc0020c(&uStack_48);
  FUN_ram_4ff32b00(auStack_40);
  iVar1 = FUN_ram_4ff3277e(400,auStack_28);
  if (iVar1 != 0) {
    uart_tx_wait_idle(0);
    FUN_ram_4ff3280a(auStack_28);
    _DAT_csreg_0b00 = __udivdi3(cycle * 400,(int)((ulonglong)cycle * 400 >> 0x20),uStack_2c,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("clk.c",0x8e,"esp_clk_init","res");
}


