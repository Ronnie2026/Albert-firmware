/* Firmware entry: 0x480219d0 */

void FUN_ram_480219d0(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"hci_stub_drv","I (%lu) %s: Host BT Support: Disabled\n",uVar1,"hci_stub_drv");
  return;
}


