/* Firmware entry: 0x4800081e */

undefined4 FUN_ram_4800081e(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff47dac < 3) {
    uVar1 = FUN_ram_4ff20c3c();
  }
  else {
    uVar1 = FUN_ram_4ff44d14();
    ets_printf("I (%lu) %s: Pro cpu start user code\n",uVar1,"cpu_start");
    uVar1 = FUN_ram_4ff20c3c();
  }
  if (DAT_ram_4ff47dac < 3) {
    return 0;
  }
  uVar2 = FUN_ram_4ff44d14();
  ets_printf("I (%lu) %s: cpu freq: %d Hz\n",uVar2,"cpu_start",uVar1);
  return 0;
}


