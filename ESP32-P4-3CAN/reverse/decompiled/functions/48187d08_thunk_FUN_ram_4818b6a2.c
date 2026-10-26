/* Firmware entry: 0x48187d08 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_ram_4818b6a2(uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 3) {
    iVar1 = (-(uint)(param_1 != 0) & 3) + 5;
  }
  else {
    iVar1 = (uint)(param_1 - 3 < 5) << 4;
  }
  do {
  } while (_DAT_ram_50091018 != 0);
  if (iVar1 != 0) {
    piVar2 = param_2 + iVar1;
    piVar3 = param_2;
    do {
      piVar4 = piVar3 + 1;
      *piVar3 = *(int *)((0x50091040 - (int)param_2) + (int)piVar3);
      piVar3 = piVar4;
    } while (piVar4 != piVar2);
    iVar1 = *param_2;
    while( true ) {
      if (iVar1 != 0) {
        return;
      }
      param_2 = param_2 + 1;
      if (param_2 == piVar2) break;
      iVar1 = *param_2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e06();
}


