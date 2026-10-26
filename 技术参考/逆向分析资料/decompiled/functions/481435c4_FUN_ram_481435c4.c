/* Firmware entry: 0x481435c4 */

void FUN_ram_481435c4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (int *)0x0) {
    cVar4 = (char)param_1[5];
    if (cVar4 == '\x06') {
      if ((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) && (param_1[3] == 0)) {
        return;
      }
    }
    else if (*param_1 == 0) {
      return;
    }
    if (param_2 != (int *)0x0) {
      if ((char)param_2[5] == '\x06') {
        if (((*param_2 == 0) && (param_2[1] == 0)) && ((param_2[2] == 0 && (param_2[3] == 0)))) {
          return;
        }
      }
      else if (*param_2 == 0) {
        return;
      }
      piVar5 = DAT_ram_4ff6e208;
      if (DAT_ram_4ff6e208 != (int *)0x0) {
        do {
          if ((char)piVar5[5] == cVar4) {
            if (cVar4 == '\x06') {
              if (((*piVar5 == *param_1) && (piVar5[1] == param_1[1])) &&
                 ((piVar5[2] == param_1[2] &&
                  ((piVar5[3] == param_1[3] && ((char)piVar5[4] == (char)param_1[4]))))))
              goto LAB_ram_4814360e;
            }
            else if (*piVar5 == *param_1) {
LAB_ram_4814360e:
              iVar1 = param_2[5];
              *(char *)(piVar5 + 5) = (char)iVar1;
              if ((char)iVar1 == '\x06') {
                iVar2 = param_2[1];
                iVar6 = param_2[2];
                iVar3 = param_2[3];
                iVar1 = param_2[4];
                *piVar5 = *param_2;
                piVar5[1] = iVar2;
                piVar5[2] = iVar6;
                piVar5[3] = iVar3;
                *(char *)(piVar5 + 4) = (char)iVar1;
              }
              else {
                *piVar5 = *param_2;
                piVar5[3] = 0;
                piVar5[2] = 0;
                piVar5[1] = 0;
                *(undefined1 *)(piVar5 + 4) = 0;
              }
            }
          }
          if ((int *)piVar5[0xd] == (int *)0x0) {
            return;
          }
          cVar4 = (char)param_1[5];
          piVar5 = (int *)piVar5[0xd];
        } while( true );
      }
    }
  }
  return;
}


