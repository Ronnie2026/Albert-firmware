/* Firmware entry: 0x4812fe80 */

void FUN_ram_4812fe80(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47f20,0xffffffff);
  *(undefined4 *)(&DAT_ram_4ff6e0c0 + mhartid * 4) = 0;
  FUN_ram_4ff3ee10(&DAT_ram_4ff47f20);
  if (mhartid == 0) {
    iVar1 = FUN_ram_4800340c(0x4f,0x400,FUN_ram_4ff2c900,&DAT_ram_4ff6e0c0,0);
  }
  else {
    iVar1 = FUN_ram_4800340c(0x50,0x400,FUN_ram_4ff2c900,&DAT_ram_4ff6e0c4,0);
  }
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff36e1a(iVar1,"/IDF/components/esp_system/crosscore_int.c",0x6d,"esp_crosscore_int_init",
                   &DAT_ram_481d52c8);
}


