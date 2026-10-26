/* Firmware entry: 0x48128d9c */

void FUN_ram_48128d9c(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int *piVar8;
  int iStack_30;
  int iStack_2c;
  code *pcStack_28;
  int iStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = *(int **)(param_1 + 0x10);
  piVar8 = *(int **)(param_1 + 0x14);
  iVar6 = (int)piVar8 - (int)piVar1;
  if (0 < iVar6 >> 7) {
    piVar2 = piVar1 + (iVar6 >> 7) * 0x20;
    do {
      if (param_2 == *piVar1) goto LAB_ram_48128de4;
      if (param_2 == piVar1[8]) {
        piVar1 = piVar1 + 8;
        goto LAB_ram_48128de4;
      }
      if (param_2 == piVar1[0x10]) {
        piVar1 = piVar1 + 0x10;
        goto LAB_ram_48128de4;
      }
      if (param_2 == piVar1[0x18]) {
        piVar1 = piVar1 + 0x18;
        goto LAB_ram_48128de4;
      }
      piVar1 = piVar1 + 0x20;
    } while (piVar1 != piVar2);
    iVar6 = (int)piVar8 - (int)piVar1;
  }
  iVar6 = iVar6 >> 5;
  if (iVar6 == 2) {
LAB_ram_48128ed8:
    if (param_2 == *piVar1) goto LAB_ram_48128de4;
    piVar1 = piVar1 + 8;
  }
  else {
    if (iVar6 == 3) {
      if (param_2 == *piVar1) goto LAB_ram_48128de4;
      piVar1 = piVar1 + 8;
      goto LAB_ram_48128ed8;
    }
    if (iVar6 != 1) {
      return;
    }
  }
  if (param_2 != *piVar1) {
    return;
  }
LAB_ram_48128de4:
  if (piVar8 != piVar1) {
    piVar3 = piVar1 + 8;
    piVar2 = piVar1;
    if (piVar8 != piVar3) {
      do {
        iVar6 = *piVar3;
        piVar1 = piVar2;
        if (param_2 != iVar6) {
          iVar4 = piVar3[5];
          iVar5 = piVar3[4];
          piVar2[1] = piVar3[1];
          *piVar2 = iVar6;
          iStack_30 = 0;
          iStack_2c = 0;
          pcStack_28 = (code *)0x0;
          if (iVar5 != 0) {
            iStack_30 = piVar3[2];
            iStack_2c = piVar3[3];
            piVar3[4] = 0;
            piVar3[5] = 0;
            pcStack_28 = (code *)iVar5;
          }
          iVar6 = piVar2[2];
          iVar5 = piVar2[3];
          piVar2[3] = iStack_2c;
          piVar2[2] = iStack_30;
          iStack_24 = piVar2[5];
          pcVar7 = (code *)piVar2[4];
          piVar2[5] = iVar4;
          piVar2[4] = (int)pcStack_28;
          iStack_30 = iVar6;
          iStack_2c = iVar5;
          pcStack_28 = pcVar7;
          if (pcVar7 != (code *)0x0) {
            (*pcVar7)(&iStack_30,&iStack_30,3);
          }
          iVar6 = piVar3[7];
          piVar1 = piVar2 + 8;
          piVar2[6] = piVar3[6];
          piVar2[7] = iVar6;
        }
        piVar3 = piVar3 + 8;
        piVar2 = piVar1;
      } while (piVar8 != piVar3);
      piVar3 = *(int **)(param_1 + 0x14);
      if (piVar1 == piVar3) {
        return;
      }
    }
    do {
      if ((code *)piVar1[4] != (code *)0x0) {
        (*(code *)piVar1[4])(piVar1 + 2,piVar1 + 2,3);
      }
      piVar1 = piVar1 + 8;
    } while (piVar1 != piVar3);
    *(int **)(param_1 + 0x14) = piVar2;
  }
  return;
}


