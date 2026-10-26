/* Firmware entry: 0x481a3eee */

undefined4
FUN_ram_481a3eee(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar3 = param_1;
  if (param_2 != -1) {
    piVar2 = (int *)param_1[2];
    if (piVar2 != (int *)0x0) {
      piVar3 = (int *)0x0;
      piVar1 = piVar2;
      do {
        piVar2 = piVar1;
        if (param_2 == *piVar2) {
          piVar3 = piVar2;
        }
        piVar1 = (int *)piVar2[2];
      } while ((int *)piVar2[2] != (int *)0x0);
      if (piVar3 != (int *)0x0) goto LAB_ram_481a3f88;
    }
    piVar3 = (int *)FUN_ram_4ff45080(1,0xc);
    if (piVar3 == (int *)0x0) {
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"event","E (%lu) %s: alloc for new id node failed\n",uVar5,"event");
      uVar5 = 0x101;
    }
    else {
      *piVar3 = param_2;
      piVar3[1] = 0;
      iVar4 = FUN_ram_481a3df6(piVar3 + 1,param_3,param_4,param_5,param_6);
      if (iVar4 == 0) {
        uVar5 = 0;
        if (piVar2 == (int *)0x0) {
          iVar4 = param_1[2];
          param_1[2] = (int)piVar3;
          piVar3[2] = iVar4;
        }
        else {
          piVar3[2] = piVar2[2];
          piVar2[2] = (int)piVar3;
        }
      }
      else {
        thunk_FUN_ram_4ff209c6(piVar3);
        uVar5 = 0x101;
      }
    }
    return uVar5;
  }
LAB_ram_481a3f88:
  uVar5 = FUN_ram_481a3df6(piVar3 + 1,param_3,param_4,param_5,param_6);
  return uVar5;
}


