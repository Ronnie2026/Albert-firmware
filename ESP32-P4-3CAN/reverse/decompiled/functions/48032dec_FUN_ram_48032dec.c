/* Firmware entry: 0x48032dec */

bool FUN_ram_48032dec(void)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  byte *pbVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar2 = false;
  if ((DAT_ram_4ff6dca9 != '\0') && (bVar2 = false, DAT_ram_4ff6dca8 != '\0')) {
    pbVar4 = (byte *)&DAT_ram_4ff5bd30;
    bVar3 = 0;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      bVar3 = bVar3 | bVar1;
    } while (pbVar4 != (byte *)&DAT_ram_4ff5bd40);
    bVar2 = false;
    if (bVar3 != 0) {
      bVar2 = DAT_ram_4ff5bd40 != 0;
    }
  }
  return bVar2;
}


