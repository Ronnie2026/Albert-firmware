/* Firmware entry: 0x4ff20522 */

void FUN_ram_4ff20522(void)

{
  int iVar1;
  
  iVar1 = mhartid;
  FUN_ram_4ff36b9a(0x10);
  Cache_Disable_L2_Cache();
  FUN_ram_4ff380ec();
  FUN_ram_4ff21246();
  ets_set_appcpu_boot_addr(0);
  if (iVar1 == 0) {
    FUN_ram_4ff2fb52(1);
    FUN_ram_4ff2fb52(0);
  }
  else {
    FUN_ram_4ff2fb52(0);
    FUN_ram_4ff2fd46(0);
    FUN_ram_4ff2fb52(1);
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


