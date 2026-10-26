/* Firmware entry: 0x481338b8 */

int FUN_ram_481338b8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e168 == 0) {
    iVar1 = FUN_ram_4ff3e458(&DAT_ram_481335f2,"esp_timer",0x1000,0,0x16,&DAT_ram_4ff6e168,0);
    if (iVar1 == 1) {
      iVar1 = FUN_ram_481a767a(&LAB_ram_4ff2d2e4);
      if (iVar1 != 0) {
        if (DAT_ram_4ff47dac != 0) {
          uVar2 = FUN_ram_4ff44d14();
          ets_printf("E (%lu) %s: ISR init failed\n",uVar2,"esp_timer");
        }
        if (DAT_ram_4ff6e168 != 0) {
          FUN_ram_4ff3c10a();
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          DAT_ram_4ff6e168 = 0;
          return iVar1;
        }
      }
      return iVar1;
    }
    if (DAT_ram_4ff47dac != 0) {
      uVar2 = FUN_ram_4ff44d14();
      ets_printf("E (%lu) %s: Not enough memory to create timer task\n",uVar2,"esp_timer");
    }
    iVar1 = 0x101;
  }
  else {
    if (DAT_ram_4ff47dac != 0) {
      uVar2 = FUN_ram_4ff44d14();
      ets_printf("E (%lu) %s: Task is already initialized\n",uVar2,"esp_timer");
    }
    iVar1 = 0x103;
  }
  return iVar1;
}


