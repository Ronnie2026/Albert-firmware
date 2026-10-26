/* Firmware entry: 0x481a779a */

void FUN_ram_481a779a(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"main_task","I (%lu) %s: Started on CPU%d\n",uVar1,"main_task",mhartid);
  do {
    do {
    } while (DAT_ram_4ff6da54 == 0);
  } while (DAT_ram_4ff6da58 == 0);
  FUN_ram_48002170();
  iVar2 = FUN_ram_4ff21c3a();
  if ((iVar2 != 0) && (iVar2 = FUN_ram_481a6e9c(0x8000), iVar2 != 0)) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"main_task","E (%lu) %s: Could not reserve internal/DMA pool (error 0x%x)\n",
                     uVar1,"main_task",iVar2);
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e06();
  }
  uStack_1c = 5000;
  uStack_14 = 1;
  uStack_18 = 3;
  iVar2 = FUN_ram_481309e6(&uStack_1c);
  if (iVar2 == 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"main_task","I (%lu) %s: Calling app_main()\n",uVar1,"main_task");
    FUN_ram_48024f8c();
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"main_task","I (%lu) %s: Returned from app_main()\n",uVar1,"main_task");
    FUN_ram_4ff3c10a(0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff36e1a(iVar2,"/IDF/components/freertos/app_startup.c",0xce,"main_task",
                   "esp_task_wdt_init(&twdt_config)");
}


