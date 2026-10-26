/* Firmware entry: 0x48159cfa */

void FUN_ram_48159cfa(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 4) == 1) {
    FUN_ram_4814cd32(*(undefined4 *)(param_1 + 0xc));
    thunk_FUN_ram_4ff209c6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("esp_netif_lwip_ppp.c",0x158,"esp_netif_destroy_ppp",
                   "ppp_ctx->base.netif_type == PPP_LWIP_NETIF");
}


