/* Firmware entry: 0x4ff465d6 */

void FUN_ram_4ff465d6(void)

{
  int iVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_18 = 0xce4;
  uStack_1c = 1;
  uStack_14 = 2;
  iVar1 = FUN_ram_4ff30018(&uStack_1c,&DAT_ram_4ff6e0b4);
  if (iVar1 == 0) {
    FUN_ram_4812f9c2();
    spi_flash_guard_set(&PTR_FUN_ram_4ff2c4d6_ram_4ff52fa0);
    FUN_ram_481a9f1c(&PTR_DAT_ram_4ff530c4_ram_4ff530a0);
  }
  return;
}


