/* Firmware entry: 0x48024f1e */

void FUN_ram_48024f1e(void)

{
  int iVar1;
  
  FUN_ram_48024f18();
  thunk_FUN_ram_4ff3c2b6();
  iVar1 = FUN_ram_48024f14();
  if (iVar1 != 0) {
    FUN_ram_48025104();
  }
  FUN_ram_4802a242(&DAT_ram_4ff5bb3c,0x26,0x25,0xffffffff);
  recovered_arduino_setup();
  iVar1 = FUN_ram_48024f14();
  if (iVar1 != 0) {
    FUN_ram_48025892();
  }
  if (DAT_ram_4ff6dbfc != '\0') goto LAB_ram_48024f78;
  do {
    do {
      FUN_ram_4810db58();
      FUN_ram_48029a0c();
    } while (DAT_ram_4ff6dbfc == '\0');
LAB_ram_48024f78:
    FUN_ram_48130b50();
  } while( true );
}


