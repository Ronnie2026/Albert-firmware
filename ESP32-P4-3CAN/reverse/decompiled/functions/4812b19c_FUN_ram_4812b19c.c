/* Firmware entry: 0x4812b19c */

undefined4 FUN_ram_4812b19c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff4b988 == 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar1,&DAT_ram_481d385c,
                     "gpio_isr_handler_add",0x231,
                     "GPIO isr service is not installed, call gpio_install_isr_service() first");
    return 0x103;
  }
  if (-1 < param_1) {
    if ((int)(param_1 - 0x20U) < 0) {
      uVar3 = -0x1000000 << (0x1fU - param_1 & 0x1f);
    }
    else {
      uVar3 = -0x800000 >> (param_1 - 0x20U & 0x1f);
    }
    if ((uVar3 & 1) == 0) {
      FUN_ram_4ff3ec14(&DAT_ram_4ff4b97c,0xffffffff);
      FUN_ram_4812a618(param_1);
      if (DAT_ram_4ff4b988 != 0) {
        puVar2 = (undefined4 *)(DAT_ram_4ff4b988 + param_1 * 8);
        *puVar2 = param_2;
        puVar2[1] = param_3;
      }
      uVar1 = FUN_ram_48002ce4(DAT_ram_4ff4b98c);
      FUN_ram_481a8ec4(PTR_DAT_ram_4ff47f08_ram_4ff4b978,param_1,uVar1);
      FUN_ram_4ff3ee10(&DAT_ram_4ff4b97c);
      return 0;
    }
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar1,&DAT_ram_481d385c,
                   "gpio_isr_handler_add",0x232,"GPIO number error");
  return 0x102;
}


