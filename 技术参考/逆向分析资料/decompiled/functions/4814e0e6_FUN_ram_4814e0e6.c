/* Firmware entry: 0x4814e0e6 */

void FUN_ram_4814e0e6(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"LWIP_ERROR",
                   "E (%lu) %s: dhcp_append(client_id): options_out_len + 3 + (netif->hwaddr_len + 1) <= DHCP_OPTIONS_LEN, please increase LWIP_DHCP_OPTIONS_LEN\n"
                   ,uVar1,"LWIP_ERROR");
  return;
}


