/* Firmware entry: 0x4812a618 */

undefined4 FUN_ram_4812a618(int param_1,int param_2)

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
    param_2 = param_1;
    if ((uVar1 & 1) == 0) {
      FUN_ram_481a8f06(PTR_DAT_ram_4ff47f08_ram_4ff4b978);
      return 0;
    }
  }
  uVar2 = FUN_ram_4ff44d14(param_1,param_2);
  FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar2,&DAT_ram_481d385c,
                   "gpio_intr_disable",0xc2,"GPIO number error");
  return 0x102;
}


