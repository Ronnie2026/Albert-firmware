/* Firmware entry: 0x480101ee */

undefined4 FUN_ram_480101ee(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6db50 != 0) {
    FUN_ram_480228be();
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: TRANSPORT_INACTIVE\n",uVar1,"transport");
  DAT_ram_4ff6db4c = 0;
  return 0;
}


