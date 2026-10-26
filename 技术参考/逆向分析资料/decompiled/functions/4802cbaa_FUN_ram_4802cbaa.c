/* Firmware entry: 0x4802cbaa */

char FUN_ram_4802cbaa(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(byte *)(param_1 + 0x2c) == param_2) {
    iVar6 = 0x88c;
    iVar1 = 0;
  }
  else if (*(byte *)(param_1 + 0x35a4) == param_2) {
    iVar6 = 0x3e04;
    iVar1 = 1;
  }
  else {
    if (*(byte *)(param_1 + 0x6b1c) != param_2) {
      return '\0';
    }
    iVar6 = 0x737c;
    iVar1 = 2;
  }
  FUN_ram_4ff3ec14(iVar6 + param_1,0xffffffff);
  iVar1 = param_1 + iVar1 * 0x3578;
  uVar3 = (uint)*(byte *)(iVar1 + 0x594);
  if (uVar3 != 0) {
    pcVar5 = (char *)(*(int *)(iVar1 + 0x590) + 0xbf);
    pcVar4 = pcVar5 + uVar3 * 200;
    do {
      if (((pcVar5[2] != '\0') && (cVar2 = *pcVar5, cVar2 != '\0')) && (pcVar5[1] == '\0'))
      goto LAB_ram_4802cc3a;
      pcVar5 = pcVar5 + 200;
    } while (pcVar4 != pcVar5);
  }
  cVar2 = '\0';
LAB_ram_4802cc3a:
  FUN_ram_4ff3ee10(iVar6 + param_1);
  return cVar2;
}


