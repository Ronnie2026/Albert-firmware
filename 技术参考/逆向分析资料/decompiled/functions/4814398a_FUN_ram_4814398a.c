/* Firmware entry: 0x4814398a */

undefined4 FUN_ram_4814398a(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e210 == '\0') {
    if (DAT_ram_4ff6e214 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/dhcp.c",0x122,
                       "dhcp_inc_pcb_refcount","dhcp_inc_pcb_refcount(): memory leak");
    }
    iVar1 = FUN_ram_4814354e();
    if (iVar1 == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      DAT_ram_4ff6e214 = iVar1;
      return 0xffffffff;
    }
    DAT_ram_4ff6e214 = iVar1;
    *(byte *)(iVar1 + 0x31) = *(byte *)(iVar1 + 0x31) | 0x20;
    FUN_ram_48142c4a(iVar1,&DAT_ram_48236f9c,0x44);
    FUN_ram_4814335a(DAT_ram_4ff6e214,&DAT_ram_48236f9c,0x43);
    FUN_ram_48143512(DAT_ram_4ff6e214,&LAB_ram_4814429c,0);
  }
  DAT_ram_4ff6e210 = DAT_ram_4ff6e210 + '\x01';
  return 0;
}


