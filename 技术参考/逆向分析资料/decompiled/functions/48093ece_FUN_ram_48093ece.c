/* Firmware entry: 0x48093ece */

undefined4 FUN_ram_48093ece(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x14) != '\x01') {
    return 0;
  }
  if ((*(char *)(param_1 + 0x846) == '\0') ||
     (((*(char *)(param_1 + 0x5b4) == '\0' || (2000 < (uint)(param_2 - *(int *)(param_1 + 0x5a8))))
      && (((*(char *)(param_1 + 0x5d6) == '\0' ||
           ((((*(char *)(param_1 + 0x5d7) != '\0' ||
              ((*(uint *)(param_1 + 0x5b8) & 0xffffff) >> 8 != 0)) ||
             (*(char *)(param_1 + 0x5da) == '\x04')) ||
            (*(int *)(param_1 + 0x2e7c) != *(int *)(param_1 + 0x5cc))))) ||
          ((((*(char *)(param_1 + 0x5d4) != '\0' && (0 < param_2 - *(int *)(param_1 + 0x5d0))) ||
            (*(int *)(param_1 + 0x5c0) != *(int *)(param_1 + 0x58c))) ||
           ((*(int *)(param_1 + 0x5c4) != *(int *)(param_1 + 0x840) ||
            (*(char *)(param_1 + 0x844) == '\0')))))))))) {
    pcVar4 = (char *)(param_1 + 0x5dd);
    piVar2 = (int *)(param_1 + 0x590);
    uVar3 = 1;
    while (((*(char *)(param_1 + uVar3 + 0x5b4) == '\0' || (2000 < (uint)(param_2 - piVar2[7]))) &&
           ((((pcVar4[0x1d] == '\0' ||
              (((pcVar4[0x1e] != '\0' || (*pcVar4 != '\0')) || ((byte)pcVar4[1] != uVar3)))) ||
             (*(int *)(pcVar4 + 0x13) != *(int *)(param_1 + 0x2e7c))) ||
            (((pcVar4[0x1b] != '\0' && (0 < param_2 - *(int *)(pcVar4 + 0x17))) ||
             ((*(int *)(pcVar4 + 7) != *piVar2 ||
              ((*(int *)(pcVar4 + 0xb) != *(int *)(param_1 + 0x840) ||
               (*(char *)(param_1 + 0x844) == '\0'))))))))))) {
      pcVar4 = pcVar4 + 0x24;
      piVar2 = piVar2 + 1;
      bVar1 = uVar3 == 2;
      uVar3 = 2;
      if (bVar1) {
        return 0;
      }
    }
  }
  return 1;
}


