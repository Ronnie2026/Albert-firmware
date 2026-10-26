/* Firmware entry: 0x48169d32 */

undefined4 * FUN_ram_48169d32(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined4 *)FUN_ram_4ff45080(1,0xc);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"wifi_netif","E (%lu) %s: No memory to create a wifi interface handle\n",
                     uVar2,"wifi_netif");
  }
  else {
    puVar1[2] = param_1;
    *puVar1 = &LAB_ram_48169c9e;
  }
  return puVar1;
}


