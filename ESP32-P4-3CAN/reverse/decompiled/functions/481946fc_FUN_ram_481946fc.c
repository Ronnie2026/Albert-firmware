/* Firmware entry: 0x481946fc */

void FUN_ram_481946fc(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff6e2c8 = FUN_ram_4ff3b144(1);
  if ((DAT_ram_4ff6e2c8 == 0) && (DAT_ram_4ff47dac != 0)) {
    uVar1 = FUN_ram_4ff44d14();
    ets_printf("E (%lu) %s: mutex for the DS session lock could not be created\n",uVar1,
               "ESP_DS_COMMON");
    return;
  }
  return;
}


