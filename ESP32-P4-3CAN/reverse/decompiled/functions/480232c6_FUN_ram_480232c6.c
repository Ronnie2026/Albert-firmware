/* Firmware entry: 0x480232c6 */

undefined4 * FUN_ram_480232c6(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined4 *)thunk_FUN_ram_4ff2070c(8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = 0xb33fffff;
    return puVar1;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: mut allocation failed\n\n",uVar2,"os_wrapper_esp"
                  );
  puVar1 = (undefined4 *)FUN_ram_480232e6();
  return puVar1;
}


