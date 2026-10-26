/* Firmware entry: 0x4818d00c */

void FUN_ram_4818d00c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  uVar2 = FUN_ram_48159644(param_1);
  FUN_ram_4ff44bf0(3,"esp_netif_handlers",
                   "I (%lu) %s: %s ip: %d.%d.%d.%d, mask: %d.%d.%d.%d, gw: %d.%d.%d.%d\n",uVar1,
                   "esp_netif_handlers",uVar2,*(undefined1 *)(param_4 + 4),
                   *(undefined1 *)(param_4 + 5),*(undefined1 *)(param_4 + 6),
                   *(undefined1 *)(param_4 + 7),*(undefined1 *)(param_4 + 8),
                   *(undefined1 *)(param_4 + 9),*(undefined1 *)(param_4 + 10),
                   *(undefined1 *)(param_4 + 0xb),*(undefined1 *)(param_4 + 0xc),
                   *(undefined1 *)(param_4 + 0xd),*(undefined1 *)(param_4 + 0xe),
                   *(undefined1 *)(param_4 + 0xf));
  return;
}


