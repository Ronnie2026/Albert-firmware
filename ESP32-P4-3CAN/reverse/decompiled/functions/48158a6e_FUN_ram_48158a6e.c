/* Firmware entry: 0x48158a6e */

undefined4 FUN_ram_48158a6e(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar3 = (code *)*param_2;
  *(undefined4 **)(param_1 + 0x28) = param_2;
  if (pcVar3 != (code *)0x0) {
    iVar1 = (*pcVar3)();
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_ram_4ff44d14(0);
      FUN_ram_4ff44bf0(1,"esp_netif_lwip",
                       "E (%lu) %s: Post-attach callback of driver(%p) failed with %d\n",uVar2,
                       "esp_netif_lwip",param_2,iVar1);
      uVar2 = 0x5008;
    }
    return uVar2;
  }
  return 0;
}


