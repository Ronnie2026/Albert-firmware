/* Firmware entry: 0x48159c82 */

undefined4 FUN_ram_48159c82(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 4) == 1) {
    iVar1 = FUN_ram_4814ccac(*(undefined4 *)(param_1 + 0xc),0);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_ram_4ff44d14(0);
      FUN_ram_4ff44bf0(1,"esp-netif_lwip-ppp","E (%lu) %s: ppp_close failed with %d\n",uVar2,
                       "esp-netif_lwip-ppp",iVar1);
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("esp_netif_lwip_ppp.c",0x14b,"esp_netif_stop_ppp",
                   "ppp_ctx->base.netif_type == PPP_LWIP_NETIF");
}


