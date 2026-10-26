/* Firmware entry: 0x4807c156 */

undefined4 FUN_ram_4807c156(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 < 9) {
    iVar3 = FUN_ram_48129d0c();
    piVar2 = *(int **)(param_1 + 8);
    if (iVar3 == 0) {
      if (piVar2 == (int *)0x0) {
        return 1;
      }
    }
    else {
      piVar5 = piVar2;
      if (piVar2 == (int *)0x0) {
        return 1;
      }
      while( true ) {
        iVar3 = piVar5[8];
        if (iVar3 == 0) {
          return 0;
        }
        piVar5 = (int *)*piVar5;
        piVar1 = piVar5;
        if (piVar5 == (int *)0x0) break;
        do {
          if ((piVar1[8] != 0) && (iVar4 = FUN_ram_4ff453ae(iVar3), iVar4 == 0)) {
            return 0;
          }
          piVar1 = (int *)*piVar1;
        } while (piVar1 != (int *)0x0);
      }
    }
    while (((iVar3 = FUN_ram_48129d0c(piVar2), iVar3 == 0 &&
            (iVar3 = FUN_ram_48129cfa(piVar2), iVar3 == 0)) ||
           (iVar3 = FUN_ram_4807c156(piVar2,param_2 + 1), iVar3 != 0))) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)0x0) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}


