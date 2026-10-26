/* Firmware entry: 0x4812aca0 */

uint FUN_ram_4812aca0(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (-1 < (int)param_1) {
    if ((int)(param_1 - 0x20) < 0) {
      uVar2 = 0xffffffffU >> (param_1 & 0x1f) | 0xfffffe << (0x1f - param_1 & 0x1f);
    }
    else {
      uVar2 = 0x7fffff >> (param_1 - 0x20 & 0x1f);
    }
    uVar3 = uVar2 & 1 ^ 1;
    if ((uVar2 & 1) != 0) {
      if ((param_2 & 1) == 0) {
        FUN_ram_4812a004();
      }
      else {
        FUN_ram_4812a6a6(param_1);
      }
      if ((param_2 & 2) == 0) {
        FUN_ram_4812a72e(param_1);
      }
      else {
        FUN_ram_4812a856();
      }
      if ((param_2 & 4) == 0) {
        FUN_ram_4812a97a(param_1);
        return uVar3;
      }
      FUN_ram_4812aa02();
      return uVar3;
    }
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar1,&DAT_ram_481d385c,
                   "gpio_set_direction",0x13d,"GPIO number error");
  return 0x102;
}


