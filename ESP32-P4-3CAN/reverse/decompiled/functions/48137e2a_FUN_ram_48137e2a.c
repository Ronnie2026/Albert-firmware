/* Firmware entry: 0x48137e2a */

void FUN_ram_48137e2a(void)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e198 == 0) {
    DAT_ram_4ff6e198 = FUN_ram_48143582(0x2e);
    if (DAT_ram_4ff6e198 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/apps/sntp/sntp.c",0x2b0,"sntp_init",
                       "Failed to allocate udp pcb for sntp client");
    }
    FUN_ram_48143512(DAT_ram_4ff6e198,&LAB_ram_48137cc6,0);
    iVar1 = DAT_ram_4ff6e198;
    if (DAT_ram_4ff6e19c == '\0') {
      DAT_ram_4ff6e194 = 15000;
      uVar2 = FUN_ram_4ff2d260();
      FUN_ram_48142636(uVar2 % 5000,&LAB_ram_48137b76,0);
      return;
    }
    if (DAT_ram_4ff6e19c == '\x01') {
      *(byte *)(DAT_ram_4ff6e198 + 0x31) = *(byte *)(DAT_ram_4ff6e198 + 0x31) | 0x20;
      FUN_ram_48142c4a(iVar1,&DAT_ram_482366d4,0x7b);
      return;
    }
  }
  return;
}


