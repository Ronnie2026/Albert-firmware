/* Firmware entry: 0x480017bc */

/* WARNING: Removing unreachable block (ram,0x480017dc) */
/* WARNING: Removing unreachable block (ram,0x480017e0) */

void FUN_ram_480017bc(void)

{
  byte bVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  FUN_ram_48001710(0);
  ppuVar2 = &PTR_FUN_ram_48195904_ram_4823c20c;
  do {
    pcVar3 = (code *)*ppuVar2;
    ppuVar2 = ppuVar2 + -1;
    (*pcVar3)();
  } while (&UNK_ram_4823c1d7 < ppuVar2);
  FUN_ram_48000d42();
  FUN_ram_48001710(1);
  do {
    bVar1 = DAT_ram_4ff6d961 & DAT_ram_4ff6d960 & 1;
    ets_delay_us(100);
  } while (bVar1 == 0);
  DAT_ram_4ff6d95d = 1;
  FUN_ram_481a78ca();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


