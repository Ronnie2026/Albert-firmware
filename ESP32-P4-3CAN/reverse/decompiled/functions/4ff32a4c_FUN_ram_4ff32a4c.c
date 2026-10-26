/* Firmware entry: 0x4ff32a4c */

uint FUN_ram_4ff32a4c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 1) {
    iVar2 = FUN_ram_4ff211de();
    iVar3 = FUN_ram_4ff31f12(0x67,0,3,7,0);
    iVar4 = FUN_ram_4ff31f12(0x67,0,2,3,0);
    iVar5 = FUN_ram_4ff20626();
    if (iVar5 != 0) {
      return (uint)(iVar3 * iVar2) / (iVar4 + 1U);
    }
    uVar1 = (uint)((iVar3 + 4) * iVar2) / (iVar4 + 1U);
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 0) {
        if (DAT_ram_4ff47dac != 0) {
          uVar6 = FUN_ram_4ff44d14();
          ets_printf(s_E___lu___s__Invalid_HP_ROOT_CLK_ram_4ff54fc0,uVar6,s_rtc_clk_ram_4ff54ee4);
        }
        return 0;
      }
      uVar1 = FUN_ram_4ff211de();
      return uVar1;
    }
    uVar1 = 0x14;
  }
  return uVar1;
}


