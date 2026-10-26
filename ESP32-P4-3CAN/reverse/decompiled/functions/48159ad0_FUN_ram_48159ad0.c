/* Firmware entry: 0x48159ad0 */

void FUN_ram_48159ad0(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 4) == 1) {
    FUN_ram_48139d7a(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("esp_netif_lwip_ppp.c",0xd3,"esp_netif_ppp_set_default_netif",
                   "ppp_ctx->base.netif_type == PPP_LWIP_NETIF");
}


