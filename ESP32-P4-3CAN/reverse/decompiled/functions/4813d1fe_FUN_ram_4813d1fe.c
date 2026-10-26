/* Firmware entry: 0x4813d1fe */

void FUN_ram_4813d1fe(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar4 = *param_1;
  if ((char)param_1[5] == '\x06') {
    if (((iVar4 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) {
      iVar4 = param_1[3];
      goto joined_r0x4813d2a0;
    }
  }
  else {
joined_r0x4813d2a0:
    if (iVar4 == 0) {
      return;
    }
  }
  FUN_ram_4813d188(param_1,DAT_ram_4ff6e1c4);
  FUN_ram_4813d188(param_1,DAT_ram_4ff6e1cc);
  if (param_2 == (int *)0x0) {
    return;
  }
  iVar4 = *param_2;
  piVar1 = DAT_ram_4ff6e1c8;
  if ((char)param_2[5] == '\x06') {
    if (((iVar4 != 0) || (param_2[1] != 0)) || (param_2[2] != 0)) goto joined_r0x4813d24e;
    iVar4 = param_2[3];
  }
  if (iVar4 == 0) {
    return;
  }
joined_r0x4813d24e:
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    if ((char)param_1[5] == (char)piVar1[5]) {
      if ((char)param_1[5] == '\x06') {
        if (((*piVar1 == *param_1) && (piVar1[1] == param_1[1])) &&
           ((piVar1[2] == param_1[2] &&
            ((piVar1[3] == param_1[3] && ((char)piVar1[4] == (char)param_1[4]))))))
        goto LAB_ram_4813d270;
      }
      else if (*piVar1 == *param_1) {
LAB_ram_4813d270:
        iVar4 = param_2[5];
        *(char *)(piVar1 + 5) = (char)iVar4;
        if ((char)iVar4 == '\x06') {
          iVar5 = param_2[1];
          iVar2 = param_2[2];
          iVar3 = param_2[3];
          iVar4 = param_2[4];
          *piVar1 = *param_2;
          piVar1[1] = iVar5;
          piVar1[2] = iVar2;
          piVar1[3] = iVar3;
          *(char *)(piVar1 + 4) = (char)iVar4;
        }
        else {
          *piVar1 = *param_2;
          piVar1[3] = 0;
          piVar1[2] = 0;
          piVar1[1] = 0;
          *(undefined1 *)(piVar1 + 4) = 0;
        }
      }
    }
    piVar1 = (int *)piVar1[0xd];
  } while( true );
}


