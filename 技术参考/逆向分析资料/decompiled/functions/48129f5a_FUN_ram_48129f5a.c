/* Firmware entry: 0x48129f5a */

void FUN_ram_48129f5a(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((int)(param_1 - 0x20U) < 0) {
    uVar2 = -0x1000000 << (0x1fU - param_1 & 0x1f);
  }
  else {
    uVar2 = -0x800000 >> (param_1 - 0x20U & 0x1f);
  }
  if ((uVar2 & 1) == 0) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff4b97c,0xffffffff);
    *(uint *)(param_1 * 4 + 0x500e1004) = *(uint *)(param_1 * 4 + 0x500e1004) | 8;
    FUN_ram_4ff3ee10(&DAT_ram_4ff4b97c);
    return;
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar1,&DAT_ram_481d385c,
                   "gpio_sleep_pullup_en",0x366,"GPIO number error");
  return;
}


