/* Firmware entry: 0x4814eb5c */

void FUN_ram_4814eb5c(void)

{
  int iVar1;
  undefined4 uStack_b4;
  undefined1 *puStack_b0;
  undefined1 auStack_ac [4];
  undefined1 *puStack_a8;
  code *pcStack_98;
  code *pcStack_94;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  code *pcStack_24;
  undefined1 *puStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(auStack_ac,0,0x9c);
  uStack_b4 = 1;
  puStack_b0 = &LAB_ram_48136b0c;
  puStack_a8 = &LAB_ram_48136778;
  pcStack_98 = FUN_ram_4813630a;
  pcStack_94 = FUN_ram_4814eb22;
  puStack_60 = &LAB_ram_4814eb02;
  puStack_5c = &LAB_ram_4814eafc;
  pcStack_24 = FUN_ram_48136b12;
  puStack_20 = &LAB_ram_4814eaf8;
  pcStack_1c = FUN_ram_4814eb06;
  puStack_18 = &LAB_ram_4814eaf4;
  iVar1 = FUN_ram_4800dc0e(&uStack_b4,0,0x36,0x40);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff36e1a(iVar1,"/IDF/components/lwip/port/esp32xx/vfs_lwip.c",0x70,
                   "esp_vfs_lwip_sockets_register",
                   "esp_vfs_register_fd_range(&vfs, NULL, LWIP_SOCKET_OFFSET, MAX_FDS)");
}


