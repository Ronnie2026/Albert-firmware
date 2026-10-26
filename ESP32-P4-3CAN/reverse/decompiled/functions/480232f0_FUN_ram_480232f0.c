/* Firmware entry: 0x480232f0 */

void FUN_ram_480232f0(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: mut allocation failed\n\n",uVar1,"os_wrapper_esp"
                  );
  FUN_ram_480232e6();
  return;
}


