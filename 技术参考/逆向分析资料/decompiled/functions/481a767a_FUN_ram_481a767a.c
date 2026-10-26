/* Firmware entry: 0x481a767a */

int FUN_ram_481a767a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dacc == 0) {
    iVar1 = FUN_ram_4800340c(0x37,0xc02,&LAB_ram_4ff219f0,0,&DAT_ram_4ff6dacc);
    if (iVar1 == 0) {
      if (DAT_ram_4ff6dac8 == 0) {
        DAT_ram_4ff6dac8 = param_1;
        FUN_ram_4fc00248(&DAT_ram_4ff59fc0,2);
      }
      iVar1 = FUN_ram_4ff20cba(DAT_ram_4ff6dacc);
      if ((iVar1 != 0) && (DAT_ram_4ff47dac != 0)) {
        uVar2 = FUN_ram_4ff44d14();
        ets_printf("E (%lu) %s: Can not enable ISR (0x%0x)\n",uVar2,"esp_timer_systimer",iVar1);
      }
    }
    else if (DAT_ram_4ff47dac != 0) {
      uVar2 = FUN_ram_4ff44d14();
      ets_printf("E (%lu) %s: esp_intr_alloc failed (0x%x)\n",uVar2,"esp_timer_systimer",iVar1);
    }
    return iVar1;
  }
  if (DAT_ram_4ff47dac != 0) {
    uVar2 = FUN_ram_4ff44d14();
    ets_printf("E (%lu) %s: timer ISR is already initialized\n",uVar2,"esp_timer_systimer");
  }
  return 0x103;
}


