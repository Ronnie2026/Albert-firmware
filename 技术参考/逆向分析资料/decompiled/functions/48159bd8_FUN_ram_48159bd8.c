/* Firmware entry: 0x48159bd8 */

undefined4 FUN_ram_48159bd8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(int *)(iVar1 + 4) == 1) {
    iVar2 = FUN_ram_4814cc3e(*(undefined4 *)(iVar1 + 0xc),0);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-netif_lwip-ppp","E (%lu) %s: %s: PPP connection cannot be started\n",
                       uVar3,"esp-netif_lwip-ppp","esp_netif_start_ppp");
      if (*(char *)(iVar1 + 9) == '\0') {
        uVar3 = 0xffffffff;
      }
      else {
        FUN_ram_481a3b62("NETIF_PPP_STATUS",0x200,param_1,4,0);
        uVar3 = 0xffffffff;
      }
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("esp_netif_lwip_ppp.c",0xfb,"esp_netif_start_ppp",
                   "ppp_ctx->base.netif_type == PPP_LWIP_NETIF");
}


