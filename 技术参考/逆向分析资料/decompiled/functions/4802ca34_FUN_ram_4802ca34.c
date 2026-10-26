/* Firmware entry: 0x4802ca34 */

char FUN_ram_4802ca34(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x2c) == '\x04') {
    iVar3 = 0x88c;
    iVar2 = 0x18;
  }
  else if (*(char *)(param_1 + 0x35a4) == '\x04') {
    iVar2 = 0x3590;
    iVar3 = 0x3e04;
  }
  else {
    if (*(char *)(param_1 + 0x6b1c) != '\x04') {
      return '\0';
    }
    iVar2 = 0x6b08;
    iVar3 = 0x737c;
  }
  FUN_ram_4ff3ec14(iVar3 + param_1,0xffffffff);
  cVar1 = *(char *)(param_1 + iVar2 + 0x504);
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + iVar2 + 0x505);
  }
  FUN_ram_4ff3ee10(iVar3 + param_1);
  return cVar1;
}


