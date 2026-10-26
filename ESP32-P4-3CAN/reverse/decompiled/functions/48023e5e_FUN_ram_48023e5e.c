/* Firmware entry: 0x48023e5e */

undefined4 FUN_ram_48023e5e(undefined4 *param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: Uninitialized Q id 4\n\n",uVar1,
                     "os_wrapper_esp");
    uVar1 = 0xfffffffe;
  }
  else {
    FUN_ram_4ff3ba8e(*param_1);
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(param_1);
    uVar1 = 0;
  }
  return uVar1;
}


