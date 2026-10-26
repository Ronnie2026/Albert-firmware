/* Firmware entry: 0x480007da */

void FUN_ram_480007da(void)

{
  code **ppcVar1;
  code *pcVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  ppcVar1 = &DAT_ram_4ff58a34;
  pcVar2 = DAT_ram_4ff58a34;
  while( true ) {
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    if (ppcVar1 == (code **)&DAT_ram_4ff58a24) break;
    ppcVar1 = ppcVar1 + -1;
    pcVar2 = *ppcVar1;
  }
  FUN_ram_4ff3c5a0();
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff3805e();
}


