/* Firmware entry: 0x4812b6ae */

undefined4 FUN_ram_4812b6ae(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (-1 < param_1) {
    if ((int)(param_1 - 0x20U) < 0) {
      uVar2 = -0x1000000 << (0x1fU - param_1 & 0x1f);
    }
    else {
      uVar2 = -0x800000 >> (param_1 - 0x20U & 0x1f);
    }
    if ((uVar2 & 1) == 0) {
      if (3 < param_2) {
        uVar1 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar1,&DAT_ram_481d385c,
                         "gpio_set_drive_capability",0x2c1,"GPIO drive capability error");
        return 0x102;
      }
      FUN_ram_4812c13a(param_1);
      FUN_ram_4ff3ec14(&DAT_ram_4ff4b97c,0xffffffff);
      *(uint *)(param_1 * 4 + 0x500e1004) =
           *(uint *)(param_1 * 4 + 0x500e1004) & 0xfffff3ff | (param_2 & 3) << 10;
      FUN_ram_4ff3ee10(&DAT_ram_4ff4b97c);
      return 0;
    }
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar1,&DAT_ram_481d385c,
                   "gpio_set_drive_capability",0x2c0,"GPIO number error");
  return 0x102;
}


