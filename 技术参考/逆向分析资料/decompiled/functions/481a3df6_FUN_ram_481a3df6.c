/* Firmware entry: 0x481a3df6 */

undefined4 FUN_ram_481a3df6(int *param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)FUN_ram_4ff45080(1,0xc);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)FUN_ram_4ff45080(1,8);
    if (piVar2 != (int *)0x0) {
      piVar4 = (int *)*param_1;
      *piVar2 = param_2;
      piVar2[1] = param_3;
      *piVar1 = (int)piVar2;
      if (piVar4 == (int *)0x0) {
        piVar1[1] = 0;
        *param_1 = (int)piVar1;
      }
      else if (param_5 == 0) {
        do {
          piVar5 = piVar4;
          piVar4 = (int *)piVar5[1];
        } while (piVar4 != (int *)0x0);
        piVar1[1] = 0;
        piVar5[1] = (int)piVar1;
      }
      else {
        do {
          piVar5 = piVar4;
          if (*(int *)*piVar5 == param_2) {
            ((int *)*piVar5)[1] = param_3;
            uVar3 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"event","W (%lu) %s: handler already registered, overwriting\n",uVar3
                             ,"event");
            thunk_FUN_ram_4ff209c6(piVar1);
            thunk_FUN_ram_4ff209c6(piVar2);
            return 0;
          }
          piVar4 = (int *)piVar5[1];
        } while ((int *)piVar5[1] != (int *)0x0);
        piVar1[1] = 0;
        piVar5[1] = (int)piVar1;
      }
      if (param_4 != (int *)0x0) {
        *param_4 = (int)piVar2;
      }
      return 0;
    }
    thunk_FUN_ram_4ff209c6(piVar1);
  }
  return 0x101;
}


