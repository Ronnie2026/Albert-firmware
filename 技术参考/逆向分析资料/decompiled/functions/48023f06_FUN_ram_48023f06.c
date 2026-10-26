/* Firmware entry: 0x48023f06 */

undefined4 FUN_ram_48023f06(undefined4 *param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (undefined4 *)0x0) {
    FUN_ram_4ff3ba8e(*param_1);
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(param_1);
    return 0;
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: Uninitialized sem id 4\n\n",uVar1,
                   "os_wrapper_esp");
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("port_esp_hosted_host_os.c",0x239,"hosted_destroy_semaphore","semaphore_handle");
}


