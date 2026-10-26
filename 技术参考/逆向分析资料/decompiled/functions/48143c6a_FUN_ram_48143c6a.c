/* Firmware entry: 0x48143c6a */

uint FUN_ram_48143c6a(uint param_1,int param_2,char *param_3)

{
  char *pcVar1;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_3 != (char *)0x0) && (sVar3 = strlen(param_3), sVar3 != 0)) {
    if (0x42 - param_1 < sVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/dhcp.c",0x625,"dhcp_option_hostname"
                       ,"DHCP: hostname is too long!");
    }
    if (0xff < sVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/dhcp.c",0x627,"dhcp_option_hostname"
                       ,"DHCP: hostname is too long!");
    }
    uVar5 = param_1 + 2;
    if (0x45 < sVar3 + uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_48143a34();
    }
    uVar4 = param_1 + 1;
    *(undefined1 *)(param_2 + param_1) = 0xc;
    param_1 = uVar5 & 0xffff;
    pcVar6 = (char *)(uVar5 + param_2);
    *(char *)((uVar4 & 0xffff) + param_2) = (char)sVar3;
    pcVar2 = param_3;
    do {
      pcVar1 = pcVar2 + 1;
      if (param_1 == 0x45) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/dhcp.c",0x600,"dhcp_option_byte",
                         "dhcp_option_byte: options_out_len < DHCP_OPTIONS_LEN");
      }
      *pcVar6 = *pcVar2;
      param_1 = param_1 + 1 & 0xffff;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar1;
    } while (pcVar1 != param_3 + sVar3);
  }
  return param_1;
}


