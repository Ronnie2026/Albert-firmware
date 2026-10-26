/* Firmware entry: 0x4812bbb0 */

uint FUN_ram_4812bbb0(uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (-1 < (int)param_1) {
    uVar4 = param_1 - 0x20;
    if ((int)uVar4 < 0) {
      uVar5 = 0xffffffffU >> (param_1 & 0x1f) | 0xfffffe << (0x1f - param_1 & 0x1f);
    }
    else {
      uVar5 = 0x7fffff >> (uVar4 & 0x1f);
    }
    uVar1 = uVar5 & 1 ^ 1;
    if ((uVar5 & 1) != 0) {
      if ((int)uVar4 < 0) {
        uVar4 = -0x1000000 << (0x1f - param_1 & 0x1f);
      }
      else {
        uVar4 = -0x800000 >> (uVar4 & 0x1f);
      }
      if ((param_2 & 1) == 0) {
        if ((uVar4 & 1) == 0) {
          *(uint *)(param_1 * 4 + 0x500e1004) = *(uint *)(param_1 * 4 + 0x500e1004) & 0xffffffef;
joined_r0x4812bc44:
          if ((param_2 & 2) != 0) {
            *(uint *)(param_1 * 4 + 0x500e1004) = *(uint *)(param_1 * 4 + 0x500e1004) | 1;
            return uVar1;
          }
          *(uint *)(param_1 * 4 + 0x500e1004) = *(uint *)(param_1 * 4 + 0x500e1004) & 0xfffffffe;
          return uVar1;
        }
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar2,&DAT_ram_481d385c,
                         "gpio_sleep_input_disable",0x392,"GPIO number error");
      }
      else {
        if ((uVar4 & 1) == 0) {
          *(uint *)(param_1 * 4 + 0x500e1004) = *(uint *)(param_1 * 4 + 0x500e1004) | 0x10;
          goto joined_r0x4812bc44;
        }
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar2,&DAT_ram_481d385c,
                         "gpio_sleep_input_enable",0x399,"GPIO number error");
      }
      if ((param_2 & 2) == 0) {
        uVar3 = FUN_ram_4ff44d14();
        pcVar7 = "GPIO number error";
        pcVar6 = "gpio_sleep_output_disable";
        uVar2 = 0x3a0;
      }
      else {
        uVar3 = FUN_ram_4ff44d14();
        pcVar7 = "GPIO output gpio_num error";
        pcVar6 = "gpio_sleep_output_enable";
        uVar2 = 0x3a7;
      }
      FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar3,&DAT_ram_481d385c,pcVar6
                       ,uVar2,pcVar7);
      return uVar1;
    }
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar2,&DAT_ram_481d385c,
                   "gpio_sleep_set_direction",0x3ae,"GPIO number error");
  return 0x102;
}


