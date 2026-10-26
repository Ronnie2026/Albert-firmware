/* Firmware entry: 0x4ff29b92 */

void FUN_ram_4ff29b92(void)

{
  int iVar1;
  
  iVar1 = DAT_ram_4ff6dff8;
  DAT_ram_4ff6dff8 = 1;
  if (iVar1 == 0) goto LAB_ram_4ff29bf6;
  (&DAT_ram_4ff6dfe8)[mhartid] = 0;
  iVar1 = 0x10000;
  do {
    fence();
    if (DAT_ram_4ff6dff4 != 0) break;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  do {
    FUN_ram_4ff36e40(s_P4_TIMEBASE_INVALID__see_retaine_ram_4ff4c5f0);
LAB_ram_4ff29bf6:
    FUN_ram_4ff2955a();
    fence();
    DAT_ram_4ff6dff4 = 1;
  } while( true );
}


