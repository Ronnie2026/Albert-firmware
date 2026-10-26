/* Firmware entry: 0x4813d188 */

void FUN_ram_4813d188(int *param_1,int *param_2)

{
  int *piVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (int *)0x0) {
    return;
  }
  do {
    if ((char)param_1[5] == (char)param_2[5]) {
      if ((char)param_1[5] == '\x06') {
        if ((((*param_1 != *param_2) || (param_2[1] != param_1[1])) || (param_2[2] != param_1[2]))
           || (param_2[3] != param_1[3])) goto LAB_ram_4813d1a6;
        if ((char)param_2[4] == (char)param_1[4]) goto LAB_ram_4813d1c2;
        param_2 = (int *)param_2[0xd];
      }
      else {
        if (*param_1 != *param_2) goto LAB_ram_4813d1a6;
LAB_ram_4813d1c2:
        piVar1 = (int *)param_2[0xd];
        FUN_ram_4813cf92(param_2,1);
        param_2 = piVar1;
      }
    }
    else {
LAB_ram_4813d1a6:
      param_2 = (int *)param_2[0xd];
    }
    if (param_2 == (int *)0x0) {
      return;
    }
  } while( true );
}


