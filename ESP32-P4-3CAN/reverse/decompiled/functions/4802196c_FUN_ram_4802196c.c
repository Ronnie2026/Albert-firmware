/* Firmware entry: 0x4802196c */

undefined4 FUN_ram_4802196c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  ppuVar1 = &PTR_s_crash_ram_481c0714_ram_4ff48528;
  do {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"esp_cli","I (%lu) %s: Registering command: %s\n",uVar3,"esp_cli",*ppuVar1);
    ppuVar2 = ppuVar1 + 7;
    FUN_ram_4815e1be(ppuVar1);
    ppuVar1 = ppuVar2;
  } while (ppuVar2 != (undefined **)&DAT_ram_4ff48608);
  return 0;
}


