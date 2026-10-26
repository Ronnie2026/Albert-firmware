/* Firmware entry: 0x48077fd8 */

undefined4 FUN_ram_48077fd8(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_48129d0c();
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    piVar6 = *(int **)(param_1 + 8);
    if (piVar6 == (int *)0x0) {
      uVar4 = 1;
    }
    else {
      iVar3 = piVar6[8];
      uVar4 = 0;
      if ((iVar3 != 0) && (param_3 != 0)) {
        while( true ) {
          iVar1 = 0;
          puVar2 = param_2;
          while( true ) {
            iVar1 = iVar1 + 1;
            iVar5 = FUN_ram_4ff453ae(iVar3,*puVar2);
            if (iVar5 == 0) break;
            puVar2 = puVar2 + 1;
            if (param_3 == iVar1) {
              return 0;
            }
          }
          piVar6 = (int *)*piVar6;
          if (piVar6 == (int *)0x0) break;
          iVar3 = piVar6[8];
          if (iVar3 == 0) {
            return 0;
          }
        }
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


