/* Firmware entry: 0x4816608a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4816608a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      if (DAT_ram_4ff6e280 != 0) {
        thunk_FUN_ram_4ff209c6();
      }
      DAT_ram_4ff6e280 = 0;
      _DAT_ram_5012f010 = _DAT_ram_5012f010 & 0xfffffffe;
      if ((*(int *)(param_1 + 0xc) == 0) || (iVar1 = FUN_ram_48003514(), iVar1 == 0)) {
        FUN_ram_481a60be(0,0);
        FUN_ram_4ff3387c();
        thunk_FUN_ram_4ff209c6(param_1);
        iVar1 = 0;
      }
      else {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"temperature_sensor",
                         "E (%lu) %s: %s(%d): uninstall interrupt service failed\n",uVar2,
                         "temperature_sensor","temperature_sensor_uninstall",0xca);
      }
    }
    else {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"temperature_sensor","E (%lu) %s: %s(%d): tsens not in init state\n",uVar2,
                       "temperature_sensor","temperature_sensor_uninstall",0xc0);
      iVar1 = 0x103;
    }
    return iVar1;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"temperature_sensor","E (%lu) %s: %s(%d): invalid argument\n",uVar2,
                   "temperature_sensor","temperature_sensor_uninstall",0xbf);
  return 0x102;
}


