/* Firmware entry: 0x4800357a */

void FUN_ram_4800357a(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (2 < DAT_ram_4ff47dac) {
    uVar2 = FUN_ram_4ff44d14();
    ets_printf("I (%lu) %s: Configure to isolate all GPIO pins in sleep state\n",uVar2,"sleep_gpio")
    ;
  }
  uVar1 = 0;
  do {
    while( true ) {
      uVar3 = 0xffffffffU >> (uVar1 & 0x1f) | 0xfffffe << (0x1f - uVar1 & 0x1f);
      if (-1 < (int)(uVar1 - 0x20)) {
        uVar3 = 0x7fffff >> (uVar1 - 0x20 & 0x1f);
      }
      if ((uVar3 & 1) != 0) break;
      uVar1 = uVar1 + 1;
      if (uVar1 == 0x37) {
        return;
      }
    }
    FUN_ram_4812bbb0(uVar1,0);
    uVar3 = uVar1 + 1;
    FUN_ram_4812bdb4(uVar1,3);
    uVar1 = uVar3;
  } while (uVar3 != 0x37);
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return;
}


