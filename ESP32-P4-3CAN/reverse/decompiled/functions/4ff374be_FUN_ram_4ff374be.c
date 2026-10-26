/* Firmware entry: 0x4ff374be */

void FUN_ram_4ff374be(void)

{
  char cVar1;
  char *pcVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = *DAT_ram_4ff6d958;
  pcVar2 = DAT_ram_4ff6d958;
  while (cVar1 != '\0') {
    pcVar2 = pcVar2 + 1;
    FUN_ram_4ff3732e(cVar1);
    FUN_ram_4ff37386(cVar1);
    cVar1 = *pcVar2;
  }
  return;
}


