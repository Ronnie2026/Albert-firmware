/* Firmware entry: 0x4802bf92 */

void FUN_ram_4802bf92(uint param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 - 2U < 0xf) {
    iVar6 = ((int)param_1 >> 0x1f ^ param_1) - ((int)param_1 >> 0x1f);
    pcVar2 = param_2;
    do {
      pcVar3 = pcVar2;
      iVar4 = iVar6 % param_3;
      pcVar2 = pcVar3 + 1;
      iVar6 = iVar6 / param_3;
      *pcVar3 = "0123456789abcdef"[iVar4];
    } while (iVar6 != 0);
    pcVar5 = pcVar2;
    if ((int)param_1 < 0) {
      pcVar5 = pcVar3 + 2;
      *pcVar2 = '-';
      pcVar3 = pcVar2;
    }
    if (param_2 < pcVar3) {
      do {
        cVar1 = *pcVar3;
        pcVar2 = param_2 + 1;
        *pcVar3 = *param_2;
        *param_2 = cVar1;
        pcVar3 = pcVar3 + -1;
        param_2 = pcVar2;
      } while (pcVar2 < pcVar3);
    }
    *pcVar5 = '\0';
    return;
  }
  *param_2 = '\0';
  return;
}


