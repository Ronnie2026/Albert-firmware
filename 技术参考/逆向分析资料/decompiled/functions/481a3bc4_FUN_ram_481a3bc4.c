/* Firmware entry: 0x481a3bc4 */

undefined4 FUN_ram_481a3bc4(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar3 = (int *)*param_1;
  if (piVar3 == (int *)0x0) {
    return 0x105;
  }
  piVar5 = (int *)piVar3[1];
  piVar2 = (int *)*piVar3;
  piVar1 = piVar3;
  if (param_3 == 0) {
    while (param_2 != piVar2) {
      if (piVar5 == (int *)0x0) {
        return 0x105;
      }
      piVar2 = (int *)*piVar5;
      piVar1 = piVar5;
      piVar5 = (int *)piVar5[1];
    }
    if (piVar3 == piVar1) {
LAB_ram_481a3c48:
      *param_1 = (int)piVar5;
      goto LAB_ram_481a3bf6;
    }
    do {
      piVar4 = piVar3 + 1;
      piVar2 = piVar3;
      piVar3 = (int *)*piVar4;
    } while ((int *)*piVar4 != piVar1);
  }
  else {
    while (*piVar2 != *param_2) {
      if (piVar5 == (int *)0x0) {
        return 0x105;
      }
      piVar2 = (int *)*piVar5;
      piVar1 = piVar5;
      piVar5 = (int *)piVar5[1];
    }
    if (piVar3 == piVar1) goto LAB_ram_481a3c48;
    do {
      piVar4 = (int *)piVar3[1];
      piVar2 = piVar3;
      if (piVar4 == piVar1) break;
      piVar3 = (int *)piVar4[1];
      piVar2 = piVar4;
    } while (piVar3 != piVar1);
  }
  piVar2[1] = (int)piVar5;
LAB_ram_481a3bf6:
  thunk_FUN_ram_4ff209c6();
  thunk_FUN_ram_4ff209c6(piVar1);
  return 0;
}


