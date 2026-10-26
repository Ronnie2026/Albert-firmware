/* Firmware entry: 0x4802c48c */

int FUN_ram_4802c48c(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar3 = (byte *)(DAT_ram_4ff6dc9c + 0x86e4c);
  iVar2 = 0;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 0x50;
    iVar2 = iVar2 + (uint)bVar1;
  } while (pbVar3 != (byte *)(DAT_ram_4ff6dc9c + 0x870cc));
  if ((((*(char *)(DAT_ram_4ff6dc9c + 0x87b63) == '\0') &&
       (*(char *)(DAT_ram_4ff6dc9c + 0x87b64) == '\0')) &&
      (*(char *)(DAT_ram_4ff6dc9c + 0x87b65) == '\0')) &&
     ((*(char *)(DAT_ram_4ff6dc9c + 0xc58) != '\x04' &&
      (*(char *)(DAT_ram_4ff6dc9c + 0xc59) != '\x04')))) {
    return iVar2;
  }
  return iVar2 + 1;
}


