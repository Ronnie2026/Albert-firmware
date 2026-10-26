/* Firmware entry: 0x481664a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_481664a8(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      _DAT_ram_5012f024 = _DAT_ram_5012f024 | 0x40000000;
      _DAT_ram_5012f000 = _DAT_ram_5012f000 | 0x200;
      ets_delay_us(300);
      *(undefined4 *)(param_1 + 4) = 1;
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"temperature_sensor","E (%lu) %s: %s(%d): tsens not in init state\n",uVar1,
                       "temperature_sensor","temperature_sensor_enable",0xf3);
      uVar1 = 0x103;
    }
    return uVar1;
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"temperature_sensor","E (%lu) %s: %s(%d): invalid argument\n",uVar1,
                   "temperature_sensor","temperature_sensor_enable",0xf2);
  return 0x102;
}


