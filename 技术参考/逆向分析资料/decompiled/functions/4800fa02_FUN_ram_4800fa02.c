/* Firmware entry: 0x4800fa02 */

undefined4 FUN_ram_4800fa02(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6db44 != '\0') {
    uVar1 = FUN_ram_4801beec();
    return uVar1;
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"H_API","E (%lu) %s: ESP-Hosted link not yet up\n",uVar1,"H_API");
  return 0xffffffff;
}


