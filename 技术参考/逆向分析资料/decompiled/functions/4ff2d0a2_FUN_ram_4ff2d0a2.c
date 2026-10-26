/* Firmware entry: 0x4ff2d0a2 */

int FUN_ram_4ff2d0a2(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_14 = 0;
  uStack_1c = 2;
  uStack_18 = 0x708;
  iVar1 = FUN_ram_4ff30018(&uStack_1c,&DAT_ram_4ff6e13c);
  if (iVar1 == 0) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47f38,0xffffffff);
    DAT_ram_4ff6e140 = DAT_ram_4ff6e140 + 1;
    if (DAT_ram_4ff6e140 == 1) {
      FUN_ram_30100000();
    }
    FUN_ram_4ff3ee10(&DAT_ram_4ff47f38);
    return 0;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"clk_ctrl_os","E (%lu) %s: %s(%d): acquire internal LDO for MPLL failed\n",
                   uVar2,"clk_ctrl_os","periph_rtc_mpll_acquire",0x96);
  return iVar1;
}


