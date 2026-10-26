/* Firmware entry: 0x4812ab6c */

undefined4 FUN_ram_4812ab6c(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (-1 < param_1) {
    if ((int)(param_1 - 0x20U) < 0) {
      uVar1 = -0x1000000 << (0x1fU - param_1 & 0x1f);
    }
    else {
      uVar1 = -0x800000 >> (param_1 - 0x20U & 0x1f);
    }
    if ((uVar1 & 1) == 0) {
      if (3 < param_2) {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar2,&DAT_ram_481d385c,
                         "gpio_set_pull_mode",0x11a,"GPIO pull mode error");
        return 0x102;
      }
      if (param_2 == 2) {
        FUN_ram_4812a250(param_1);
        FUN_ram_4812a082(param_1);
        return 0;
      }
      if (param_2 == 3) {
        FUN_ram_4812a314(param_1);
        FUN_ram_4812a146(param_1);
        return 0;
      }
      if (param_2 == 1) {
        FUN_ram_4812a250();
        FUN_ram_4812a146(param_1);
        return 0;
      }
      FUN_ram_4812a314(param_1);
      FUN_ram_4812a082(param_1);
      return 0;
    }
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar2,&DAT_ram_481d385c,
                   "gpio_set_pull_mode",0x119,"GPIO number error");
  return 0x102;
}


