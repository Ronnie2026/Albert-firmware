/* Firmware entry: 0x48143afc */

void FUN_ram_48143afc(void)

{
  char cVar1;
  
  cVar1 = DAT_ram_4ff6e210;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e210 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/dhcp.c",0x13c,"dhcp_dec_pcb_refcount",
                     "dhcp_pcb_refcount(): refcount error");
  }
  DAT_ram_4ff6e210 = DAT_ram_4ff6e210 + -1;
  if (cVar1 != '\x01') {
    return;
  }
  FUN_ram_4814351a(DAT_ram_4ff6e214);
  DAT_ram_4ff6e214 = 0;
  return;
}


