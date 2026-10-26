/* Firmware entry: 0x4812b472 */

undefined4 FUN_ram_4812b472(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar2,&DAT_ram_481d385c,
                     "gpio_isr_register",0x269,"GPIO ISR null");
    return 0x102;
  }
  uStack_28 = 0x4a;
  uStack_24 = param_3;
  iStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_4;
  FUN_ram_4ff3ec14(&DAT_ram_4ff4b97c,0xffffffff);
  if (DAT_ram_4ff4b984 == 3) {
    DAT_ram_4ff4b984 = mhartid;
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff4b97c);
  iVar1 = FUN_ram_48130130(DAT_ram_4ff4b984,FUN_ram_48129d3c,&uStack_28);
  if (iVar1 == 0) {
    if (iStack_14 == 0) {
      return 0;
    }
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: esp_intr_alloc failed (0x%x)\n",uVar2,
                     &DAT_ram_481d385c,iStack_14);
  }
  else {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: esp_ipc_call_blocking failed (0x%x)\n",uVar2,
                     &DAT_ram_481d385c,iVar1);
  }
  return 0x105;
}


