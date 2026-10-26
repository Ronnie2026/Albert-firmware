/* Firmware entry: 0x4802c0f6 */

void FUN_ram_4802c0f6(uint param_1,char *param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar3 = param_2;
  if (0xe < param_3 - 2) {
    *param_2 = '\0';
    return;
  }
  do {
    pcVar5 = pcVar3;
    pcVar3 = pcVar5 + 1;
    *pcVar5 = "0123456789abcdef"[param_1 % param_3];
    bVar1 = param_3 <= param_1;
    param_1 = param_1 / param_3;
  } while (bVar1);
  if (param_2 < pcVar5) {
    do {
      cVar2 = *pcVar5;
      pcVar4 = param_2 + 1;
      *pcVar5 = *param_2;
      *param_2 = cVar2;
      pcVar5 = pcVar5 + -1;
      param_2 = pcVar4;
    } while (pcVar4 < pcVar5);
  }
  *pcVar3 = '\0';
  return;
}


