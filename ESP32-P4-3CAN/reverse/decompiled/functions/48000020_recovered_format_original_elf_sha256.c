/* Firmware entry: 0x48000020 */

/* Analyst-assigned name based on firmware call sites and string references. */

void recovered_format_original_elf_sha256(void)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  char *pcVar4;
  byte bVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar4 = (char *)&DAT_ram_4ff589e0;
  pbVar2 = &DAT_ram_481b00b0;
  do {
    bVar5 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    bVar1 = bVar5 >> 4;
    bVar5 = bVar5 & 0xf;
    cVar3 = '0';
    if (9 < bVar1) {
      cVar3 = 'W';
    }
    *pcVar4 = bVar1 + cVar3;
    cVar3 = bVar5 + 0x30;
    if (9 < bVar5) {
      cVar3 = bVar5 + 0x57;
    }
    pcVar4[1] = cVar3;
    pcVar4 = pcVar4 + 2;
  } while (pcVar4 != &DAT_ram_4ff58a20);
  DAT_ram_4ff58a20 = 0;
  return;
}


