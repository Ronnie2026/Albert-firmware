/* Firmware entry: 0x480315f4 */

bool FUN_ram_480315f4(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = FUN_ram_48025ba6();
  FUN_ram_4ff3ec14(&DAT_ram_4ff69340,0xffffffff);
  cVar4 = DAT_ram_4ff69dc4;
  iVar3 = DAT_ram_4ff69dc0;
  cVar2 = DAT_ram_4ff69dbc;
  FUN_ram_4ff3ee10(&DAT_ram_4ff69340);
  bVar1 = false;
  if (cVar4 != '\0') {
    bVar1 = (uint)(iVar5 - iVar3) < 0x1f5 && cVar2 == '\x01';
  }
  return bVar1;
}


