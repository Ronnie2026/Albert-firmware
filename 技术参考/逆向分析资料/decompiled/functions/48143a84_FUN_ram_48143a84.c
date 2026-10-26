/* Firmware entry: 0x48143a84 */

uint FUN_ram_48143a84(int param_1,int param_2,undefined4 param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 + 4U < 0x46) {
    *(char *)(param_1 + param_2) = (char)((uint)param_3 >> 0x18);
    *(char *)((param_1 + 1U & 0xffff) + param_2) = (char)((uint)param_3 >> 0x10);
    *(char *)((param_1 + 2U & 0xffff) + param_2) = (char)((uint)param_3 >> 8);
    *(char *)(param_2 + (param_1 + 3U & 0xffff)) = (char)param_3;
    return param_1 + 4U & 0xffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/dhcp.c",0x611,"dhcp_option_long",
                   "dhcp_option_long: options_out_len + 4 <= DHCP_OPTIONS_LEN");
}


