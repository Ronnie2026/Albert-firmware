/* Firmware entry: 0x48053de0 */

bool FUN_ram_48053de0(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x27) == '\0') {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return false;
  }
  if (*(char *)(param_1 + 0x21) == '\0') {
    pcVar4 = (char *)(param_1 + 0xbc);
    pcVar3 = (char *)(param_1 + 0x1bc);
    if (*(int *)(param_2 + 0x38) == 0 && *(int *)(param_2 + 0x3c) == 0) {
      do {
        while (*pcVar4 != '\0') {
          pcVar4 = pcVar4 + 0x20;
          if (pcVar4 == pcVar3) {
            return false;
          }
        }
        pcVar1 = pcVar4 + 1;
        pcVar4 = pcVar4 + 0x20;
        if (*pcVar1 == '\0') goto LAB_ram_48053e28;
      } while (pcVar4 != pcVar3);
    }
    else {
      do {
        while (pcVar4[1] != '\0') {
          if ((*(int *)(pcVar4 + 4) == *(int *)(param_2 + 0x38)) &&
             (*(int *)(pcVar4 + 8) == *(int *)(param_2 + 0x3c))) {
LAB_ram_48053e28:
            cVar2 = '\0';
            if ((uint)(param_3 - *(int *)(param_2 + 0x34)) < 500) {
              if (*(int *)(param_2 + 0x2c) == 0) {
                if (*(char *)(param_1 + 0x3b) == '\0') {
                  if (*(int *)(param_2 + 0x30) == 0) {
                    if (*(char *)(param_2 + 0x24) == '\x01') {
                      if (*(char *)(param_1 + 0x25) == '\0') {
                        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
                        return false;
                      }
                      if ((*(int *)(param_2 + 0x28) == *(int *)(param_1 + 0x40)) &&
                         (cVar2 = *(char *)(param_1 + 0x25), *(char *)(param_1 + 0x30) != '\0')) {
                        return (uint)(param_3 - *(int *)(param_1 + 100)) <
                               (uint)*(byte *)(param_1 + 0x26) * 60000;
                      }
                    }
                  }
                  else if (((*(char *)(param_2 + 0x24) == '\x02') &&
                           (*(int *)(param_2 + 0x30) == *(int *)(param_1 + 0xc))) &&
                          ((*(int *)(param_2 + 0x28) == *(int *)(param_1 + 0x10) &&
                           (((*(char *)(param_1 + 0x18) == '\x01' && (*(byte *)(param_1 + 0x1a) < 3)
                             ) && (*(char *)(param_1 + 0x38) == '\0')))))) {
                    return (uint)(param_3 - *(int *)(param_1 + 0x14)) < 10000;
                  }
                }
              }
              else if ((((*(char *)(param_2 + 0x24) == '\x02') && (*(int *)(param_2 + 0x30) == 0))
                       && (*(int *)(param_2 + 0x28) == *(int *)(param_1 + 0x40))) &&
                      ((*(int *)(param_2 + 0x2c) == *(int *)(param_1 + 0x44) &&
                       ((*(uint *)(param_1 + 0x38) & 0xff0000ff) == 0x1000000)))) {
                return (uint)(param_3 - *(int *)(param_1 + 0x48)) < 0xc9;
              }
            }
            return (bool)cVar2;
          }
          pcVar4 = pcVar4 + 0x20;
          if (pcVar4 == pcVar3) {
            return false;
          }
        }
        pcVar4 = pcVar4 + 0x20;
      } while (pcVar3 != pcVar4);
    }
  }
  return false;
}


