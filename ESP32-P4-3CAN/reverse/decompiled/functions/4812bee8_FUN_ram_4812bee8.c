/* Firmware entry: 0x4812bee8 */

undefined4 FUN_ram_4812bee8(int param_1)

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
      FUN_ram_4ff3ec14(&DAT_ram_4ff4b97c,0xffffffff);
      *(uint *)(param_1 * 4 + 0x500e1004) = *(uint *)(param_1 * 4 + 0x500e1004) | 2;
      FUN_ram_4ff3ee10(&DAT_ram_4ff4b97c);
      return 0;
    }
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar2,&DAT_ram_481d385c,
                   "gpio_sleep_sel_en",0x3ec,"GPIO number error");
  return 0x102;
}


